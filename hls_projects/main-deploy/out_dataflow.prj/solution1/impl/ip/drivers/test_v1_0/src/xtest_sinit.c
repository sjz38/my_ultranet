// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xtest.h"

extern XTest_Config XTest_ConfigTable[];

XTest_Config *XTest_LookupConfig(u16 DeviceId) {
	XTest_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XTEST_NUM_INSTANCES; Index++) {
		if (XTest_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XTest_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XTest_Initialize(XTest *InstancePtr, u16 DeviceId) {
	XTest_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XTest_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XTest_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

