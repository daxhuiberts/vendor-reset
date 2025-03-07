/*
 * Copyright 2019 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 */
#ifndef __SMU_V11_0_H__
#define __SMU_V11_0_H__

#define SMU11_DRIVER_IF_VERSION_INV 0xFFFFFFFF
#define SMU11_DRIVER_IF_VERSION_ARCT 0x17
#define SMU11_DRIVER_IF_VERSION_NV10 0x36
#define SMU11_DRIVER_IF_VERSION_NV12 0x33
#define SMU11_DRIVER_IF_VERSION_NV14 0x36
#define SMU11_DRIVER_IF_VERSION_Sienna_Cichlid 0x34
#define SMU11_DRIVER_IF_VERSION_Navy_Flounder 0x3

/* MP Apertures */
#define MP0_Public 0x03800000
#define MP0_SRAM 0x03900000
#define MP1_Public 0x03b00000
#define MP1_SRAM 0x03c00004

/* address block */
#define smnMP1_FIRMWARE_FLAGS 0x3010024
#define smnMP0_FW_INTF 0x30101c0
#define smnMP1_PUB_CTRL 0x3010b14

#define TEMP_RANGE_MIN (0)
#define TEMP_RANGE_MAX (80 * 1000)

#define SMU11_TOOL_SIZE 0x19000

#define MAX_DPM_LEVELS 16
#define MAX_PCIE_CONF 2

#define CTF_OFFSET_EDGE 5
#define CTF_OFFSET_HOTSPOT 5
#define CTF_OFFSET_MEM 5

#endif
