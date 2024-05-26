#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

// data
#define	XFAST_SYSCALL_addr              0x000001C0 // Done
#define M_TEMP_addr                     0x0155E1E0 // Done
#define MINI_SYSCORE_SELF_BINARY_addr   0x14C9D48
#define ALLPROC_addr                    0x01B906E0 // Done
#define SBL_DRIVER_MAPPED_PAGES_addr    0x271E208
#define SBL_PFS_SX_addr                 0x271E5D8
#define SBL_KEYMGR_KEY_SLOTS_addr       0x2744548
#define SBL_KEYMGR_KEY_RBTREE_addr      0x2744558
#define SBL_KEYMGR_BUF_VA_addr          0x2748000
#define SBL_KEYMGR_BUF_GVA_addr         0x2748800
#define FPU_CTX_addr                    0x274C040
#define DIPSW_addr                      0x1CD0650

// common
#define memcmp_addr                     0x050AC0
#define _sx_xlock_addr                  0x0F5E10
#define _sx_xunlock_addr                0x0F5FD0
#define malloc_addr                     0x003017B0 // Done
#define free_addr                       0x00301970 // Done
#define strstr_addr                     0x17DFB0
#define fpu_kern_enter_addr             0x1BFF90
#define fpu_kern_leave_addr             0x1C0090
#define memcpy_addr                     0x1EA530
#define memset_addr                     0x3205C0
#define strlen_addr                     0x3B71A0
#define printf_addr                     0x436040
#define eventhandler_register_addr      0x1EC400

// Fself
#define sceSblACMgrGetPathId_addr       0x0117E0
#define sceSblServiceMailbox_addr       0x632540
#define sceSblAuthMgrSmIsLoadable2_addr 0x63C4F0
#define _sceSblAuthMgrGetSelfInfo_addr  0x63CD40
#define _sceSblAuthMgrSmStart_addr      0x6418E0
#define sceSblAuthMgrVerifyHeader_addr  0x642B40

// Fpkg
#define RsaesPkcs1v15Dec2048CRT_addr    0x1FD7D0
#define Sha256Hmac_addr                 0x2D55B0
#define AesCbcCfb128Encrypt_addr        0x3A2BD0
#define AesCbcCfb128Decrypt_addr        0x3A2E00
#define sceSblDriverSendMsg_0_addr      0x61D7F0
#define sceSblPfsSetKeys_addr           0x61EFA0
#define sceSblKeymgrSetKeyStorage_addr  0x623FC0
#define sceSblKeymgrSetKeyForPfs_addr   0x62D780
#define sceSblKeymgrCleartKey_addr      0x62DB10
#define sceSblKeymgrSmCallfunc_addr     0x62E2A0

// Patch
#define vmspace_acquire_ref_addr        0x19EF90
#define vmspace_free_addr               0x19EDC0
#define vm_map_lock_read_addr           0x0007BB80 // Done
#define vm_map_unlock_read_addr         0x0007BBD0 // Done
#define vm_map_lookup_entry_addr        0x0007C1C0 // Done
#define proc_rwmem_addr                 0x30D150

// Fself hooks
#define sceSblAuthMgrIsLoadable__sceSblACMgrGetPathId_hook          0x63E25D
#define sceSblAuthMgrIsLoadable2_hook                               0x63E3A1
#define sceSblAuthMgrVerifyHeader_hook1                             0x63EAFC
#define sceSblAuthMgrVerifyHeader_hook2                             0x63F718
#define sceSblAuthMgrSmLoadSelfSegment__sceSblServiceMailbox_hook   0x64318B
#define sceSblAuthMgrSmLoadSelfBlock__sceSblServiceMailbox_hook     0x643DA2

// Fpkg hooks
#define sceSblKeymgrSetKeyStorage__sceSblDriverSendMsg_hook         0x624065
#define sceSblKeymgrInvalidateKey__sx_xlock_hook                    0x62E96D
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_isolated_rif_hook      0x64C720
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_rif_new_hook           0x64D4FF
#define mountpfs__sceSblPfsSetKeys_hook1                            0x6AAAD5
#define mountpfs__sceSblPfsSetKeys_hook2                            0x6AAD04

// SceShellUI patches - debug patches
#define sceSblRcMgrIsAllowDebugMenuForSettings_patch                0x01BD90
#define sceSblRcMgrIsStoreMode_patch                                0x01C090

// SceShellUI patches - remote play patches
#define CreateUserForIDU_patch                                      0x1A8FA0
#define remote_play_menu_patch                                      0xEE638E

// SceRemotePlay patches - remote play patches
#define SceRemotePlay_patch1                                        0x03C33F
#define SceRemotePlay_patch2                                        0x03C35A

// SceShellCore patches
// call sceKernelIsGenuineCEX
#define sceKernelIsGenuineCEX_patch1    0x0016F014 // Done
#define sceKernelIsGenuineCEX_patch2    0x00864744 // Done
#define sceKernelIsGenuineCEX_patch3    0x008B2232 // Done
#define sceKernelIsGenuineCEX_patch4    0x00A2A254 // Done

// call nidf_libSceDipsw
#define nidf_libSceDipsw_patch1         0x0016F042 // Done - Maybe not???
#define nidf_libSceDipsw_patch2         0x0024A4EB // Done - Maybe not???
#define nidf_libSceDipsw_patch3         0x00864772 // Done - Maybe not???
#define nidf_libSceDipsw_patch4         0x00A2A282 // Done - Maybe not???

// enable data mount
#define enable_data_mount_patch         0x00321F2B // Done

// enable fpkg
#define enable_fpkg_patch               0x003DA06F // Done 
 
// debug pkg free string
#define fake_free_patch                 0x00FD5BD1 // Done

// make pkgs installer working with external hdd
#define pkg_installer_patch             0x00A13101 // Done

// enable support with 6.xx external hdd
#define ext_hdd_patch                   0x0061A66D // Done

// enable debug trophies on retail
#define debug_trophies_patch            0x00745809 // Done

// disable screenshot block
#define disable_screenshot_patch        0x0CB8C6

#endif