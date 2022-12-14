// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XTEST_H
#define XTEST_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xtest_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Control_BaseAddress;
} XTest_Config;
#endif

typedef struct {
    u32 Control_BaseAddress;
    u32 IsReady;
} XTest;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XTest_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XTest_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XTest_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XTest_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XTest_Initialize(XTest *InstancePtr, u16 DeviceId);
XTest_Config* XTest_LookupConfig(u16 DeviceId);
int XTest_CfgInitialize(XTest *InstancePtr, XTest_Config *ConfigPtr);
#else
int XTest_Initialize(XTest *InstancePtr, const char* InstanceName);
int XTest_Release(XTest *InstancePtr);
#endif

void XTest_Start(XTest *InstancePtr);
u32 XTest_IsDone(XTest *InstancePtr);
u32 XTest_IsIdle(XTest *InstancePtr);
u32 XTest_IsReady(XTest *InstancePtr);
void XTest_EnableAutoRestart(XTest *InstancePtr);
void XTest_DisableAutoRestart(XTest *InstancePtr);

void XTest_Set_input_image(XTest *InstancePtr, u32 Data);
u32 XTest_Get_input_image(XTest *InstancePtr);
void XTest_Set_result(XTest *InstancePtr, u32 Data);
u32 XTest_Get_result(XTest *InstancePtr);

void XTest_InterruptGlobalEnable(XTest *InstancePtr);
void XTest_InterruptGlobalDisable(XTest *InstancePtr);
void XTest_InterruptEnable(XTest *InstancePtr, u32 Mask);
void XTest_InterruptDisable(XTest *InstancePtr, u32 Mask);
void XTest_InterruptClear(XTest *InstancePtr, u32 Mask);
u32 XTest_InterruptGetEnabled(XTest *InstancePtr);
u32 XTest_InterruptGetStatus(XTest *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
