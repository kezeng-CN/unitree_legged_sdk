/*****************************************************************
 Copyright (c) 2020, Unitree Robotics.Co.Ltd. All rights reserved.
******************************************************************/

package unitree_legged_sdk

/*
#cgo CFLAGS: -I.
#cgo LDFLAGS: -Llib -lunitree_legged_sdk_amd64 -lwrapper

#include "include/unitree_legged_sdk/wrapper.h"
*/
import "C"

func callHighCmd() {
	C.callHighCmd()
}
