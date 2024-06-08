#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

#define	XFAST_SYSCALL_addr              0x000001C0 // Done - Checked

// Names - Data
#define PRISON0_addr                    0x0111b840 // Done - Checked
#define ROOTVNODE_addr                  0x021ebf20 // Done - Auto - Typo Checked
#define PMAP_STORE_addr                 0x01b8c4b0 // Done - Auto - Typo Checked
#define DT_HASH_SEGMENT_addr            0x00bdf080 // Done - Not 100% sure
#define M_TEMP_addr                     0x0155e1e0 // Done - Auto - Typo Checked

// Functions
#define pmap_protect_addr               0x00140fe0 // Done - Auto - Typo Checked
#define pmap_protect_p_addr             0x0012fa87 // Done - Checked
#define malloc_addr                     0x003017B0 // Done - Checked

// Patches
// debug menu error
#define debug_menu_error_patch1         0x004e6d48 // Done - Checked
#define debug_menu_error_patch2         0x004e802f // Done - Checked

// disable signature check
#define disable_signature_check_patch   0x00686580 // Done - Auto - Typo Checked

// enable debug RIFs
#define enable_debug_rifs_patch1        0x0064e3f0 // Done - Auto - Typo Checked
#define enable_debug_rifs_patch2        0x0064e420 // Done - Auto - Typo Checked

// allow sys_dynlib_dlsym in all processes
#define sys_dynlib_dlsym_patch          0x0023b34f // Done - Checked

// sdk version spoof - enable all VR fws
// #define sdk_version_patch               0x14A63F0

// enable debug log
#define enable_debug_log_patch          0x000b7ac7 // Done - Auto - Typo Checked

// enable uart output
#define enable_uart_patch               0x01527f60 // Done - Auto - Typo Checked

#endif