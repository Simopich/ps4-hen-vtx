#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

// data
#define	XFAST_SYSCALL_addr              0x000001C0 // Done
#define M_TEMP_addr                     0x0155E1E0 // Done
#define MINI_SYSCORE_SELF_BINARY_addr   0x01575df8 // Done - Not 100% sure
#define ALLPROC_addr                    0x01B906E0 // Done
#define SBL_DRIVER_MAPPED_PAGES_addr    0x02642ca8 // Done
#define SBL_PFS_SX_addr                 0x02649b40 // Done
#define SBL_KEYMGR_KEY_SLOTS_addr       0x02644238 // Done
#define SBL_KEYMGR_KEY_RBTREE_addr      0x02644248 // Done
#define SBL_KEYMGR_BUF_VA_addr          0x02648000 // Done
#define SBL_KEYMGR_BUF_GVA_addr         0x02648808 // Done
#define FPU_CTX_addr                    0x026735c0 // Done
#define DIPSW_addr                      0x02212850 // Done

// common
#define memcmp_addr                     0x00271aa0 // Done
#define _sx_xlock_addr                  0x0043c530 // Done
#define _sx_xunlock_addr                0x0043c6f0 // Done
#define malloc_addr                     0x003017B0 // Done
#define free_addr                       0x00301970 // Done
#define strstr_addr                     0x004859b0 // Done
#define fpu_kern_enter_addr             0x002193a0 // Done
#define fpu_kern_leave_addr             0x00219460 // Done
#define memcpy_addr                     0x00271130 // Done
#define memset_addr                     0x00149670 // Done
#define strlen_addr                     0x0030f0f0 // Done
#define printf_addr                     0x000b79e0 // Done
#define eventhandler_register_addr      0x000f8320 // Done

// Fself
#define sceSblACMgrGetPathId_addr       0x0008bcd0 // Done
#define sceSblServiceMailbox_addr       0x0062ec00 // Done
#define sceSblAuthMgrSmIsLoadable2_addr 0x00641960 // Done
#define _sceSblAuthMgrGetSelfInfo_addr  0x006421a0 // Done
#define _sceSblAuthMgrSmStart_addr      0x0063dea0 // Done
#define sceSblAuthMgrVerifyHeader_addr  0x0063fc20 // Done

// Fpkg
#define RsaesPkcs1v15Dec2048CRT_addr    0x004607b0 // Done
#define Sha256Hmac_addr                 0x00442f80 // Done
#define AesCbcCfb128Encrypt_addr        0x001ff000 // Done
#define AesCbcCfb128Decrypt_addr        0x001ff230 // Done
#define sceSblDriverSendMsg_0_addr      0x0061ae90 // Done
#define sceSblPfsSetKeys_addr           0x00623290 // Done
#define sceSblKeymgrSetKeyStorage_addr  0x00622930 // Done
#define sceSblKeymgrSetKeyForPfs_addr   0x0061d650 // Done
#define sceSblKeymgrCleartKey_addr      0x0061d990 // Done
#define sceSblKeymgrSmCallfunc_addr     0x0061d220 // Done

// Patch
#define vmspace_acquire_ref_addr        0x0007b9e0 // Done
#define vmspace_free_addr               0x0007b810 // Done
#define vm_map_lock_read_addr           0x0007BB80 // Done
#define vm_map_unlock_read_addr         0x0007BBD0 // Done
#define vm_map_lookup_entry_addr        0x0007C1C0 // Done
#define proc_rwmem_addr                 0x0041ca70 // Done

// Fself hooks
#define sceSblAuthMgrIsLoadable__sceSblACMgrGetPathId_hook          0x006426fc // Done
#define sceSblAuthMgrIsLoadable2_hook                               0x0064284e // Done
#define sceSblAuthMgrVerifyHeader_hook1                             0x00642fe6 // Done
#define sceSblAuthMgrVerifyHeader_hook2                             0x00643cc9 // Done
#define sceSblAuthMgrSmLoadSelfSegment__sceSblServiceMailbox_hook   0x006402ea // Done
#define sceSblAuthMgrSmLoadSelfBlock__sceSblServiceMailbox_hook     0x00640f28 // Done

// Fpkg hooks
#define sceSblKeymgrSetKeyStorage__sceSblDriverSendMsg_hook         0x006229d5 // Done
#define sceSblKeymgrInvalidateKey__sx_xlock_hook                    0x0061E80D // Done
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_isolated_rif_hook      0x0064c030 // Done
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_rif_new_hook           0x0064CDFE // Done
#define mountpfs__sceSblPfsSetKeys_hook1                            0x006C1EB9 // Done
#define mountpfs__sceSblPfsSetKeys_hook2                            0x006C20EA // Done

// SceShellUI patches - debug patches
#define sceSblRcMgrIsAllowDebugMenuForSettings_patch                0x0001D1C0 // Done - Based on name only
#define sceSblRcMgrIsStoreMode_patch                                0x0001D520 // Done - Based on name only

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
#define nidf_libSceDipsw_patch1         0x0016F042 // Done - Based on name only
#define nidf_libSceDipsw_patch2         0x0024A4EB // Done - Based on name only
#define nidf_libSceDipsw_patch3         0x00864772 // Done - Based on name only
#define nidf_libSceDipsw_patch4         0x00A2A282 // Done - Based on name only

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