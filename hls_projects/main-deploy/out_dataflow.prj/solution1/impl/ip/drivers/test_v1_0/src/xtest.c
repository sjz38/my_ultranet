// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xtest.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XTest_CfgInitialize(XTest *InstancePtr, XTest_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XTest_Start(XTest *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XTest_ReadReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_AP_CTRL) & 0x80;
    XTest_WriteReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XTest_IsDone(XTest *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XTest_ReadReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XTest_IsIdle(XTest *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XTest_ReadReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XTest_IsReady(XTest *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XTest_ReadReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XTest_EnableAutoRestart(XTest *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XTest_WriteReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XTest_DisableAutoRestart(XTest *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XTest_WriteReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_AP_CTRL, 0);
}

void XTest_Set_input_image(XTest *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XTest_WriteReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_INPUT_IMAGE_DATA, Data);
}

u32 XTest_Get_input_image(XTest *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XTest_ReadReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_INPUT_IMAGE_DATA);
    return Data;
}

void XTest_Set_result(XTest *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XTest_WriteReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_RESULT_DATA, Data);
}

u32 XTest_Get_result(XTest *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XTest_ReadReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_RESULT_DATA);
    return Data;
}

void XTest_InterruptGlobalEnable(XTest *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XTest_WriteReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_GIE, 1);
}

void XTest_InterruptGlobalDisable(XTest *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XTest_WriteReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_GIE, 0);
}

void XTest_InterruptEnable(XTest *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XTest_ReadReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_IER);
    XTest_WriteReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_IER, Register | Mask);
}

void XTest_InterruptDisable(XTest *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XTest_ReadReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_IER);
    XTest_WriteReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_IER, Register & (~Mask));
}

void XTest_InterruptClear(XTest *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XTest_WriteReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_ISR, Mask);
}

u32 XTest_InterruptGetEnabled(XTest *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XTest_ReadReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_IER);
}

u32 XTest_InterruptGetStatus(XTest *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XTest_ReadReg(InstancePtr->Control_BaseAddress, XTEST_CONTROL_ADDR_ISR);
}

