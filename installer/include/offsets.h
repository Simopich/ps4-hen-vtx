#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

#define	XFAST_SYSCALL_addr              0x000001C0 // Done

// Names - Data
#define PRISON0_addr                    0x0111b840 // Done
#define ROOTVNODE_addr                  0x021ebf20 // Done
#define PMAP_STORE_addr                 0x01b8c4b0 // Done
#define DT_HASH_SEGMENT_addr            0x00140fe0 // Done

// Functions
#define pmap_protect_addr               0x0012fa40 // Done
#define pmap_protect_p_addr             0x0012fa87 // Done
#define malloc_addr                     0x003017B0 // Done

// Patches
// debug menu error
#define debug_menu_error_patch1         0x004e6d48 // Done
#define debug_menu_error_patch2         0x004e802f // Done

// disable signature check
#define disable_signature_check_patch   0x00686580 // Done

// enable debug RIFs
#define enable_debug_rifs_patch1        0x0064e3f0 // Done
#define enable_debug_rifs_patch2        0x0064e420 // Done

// allow sys_dynlib_dlsym in all processes
#define sys_dynlib_dlsym_patch          0x0023b34f // Done

// sdk version spoof - enable all VR fws
// #define sdk_version_patch               0x14A63F0

// enable debug log
#define enable_debug_log_patch          0x000b7ac7 // Done

// enable uart output
#define enable_uart_patch               0x01527f60 // Done

#endif