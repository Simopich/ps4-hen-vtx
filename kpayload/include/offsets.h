#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

// data
#define	XFAST_SYSCALL_addr              0x000001C0 // Done - Checked
#define M_TEMP_addr                     0x0155e1e0 // Done - Auto - Typo Checked
#define MINI_SYSCORE_SELF_BINARY_addr   0x01575df8 // Done - Not 100% sure (There are two of them, the other one is: 0x017a2df8, 5.05 also has two and the offset is the first one found in memory like the one I chose)
#define ALLPROC_addr                    0x01b906e0 // Done - Auto - Typo Checked
#define SBL_DRIVER_MAPPED_PAGES_addr    0x02642ca8 // Done - Auto - Typo Checked
#define SBL_PFS_SX_addr                 0x02649b40 // Done - Auto - Typo Checked
#define SBL_KEYMGR_KEY_SLOTS_addr       0x02644238 // Done - Auto - Typo Checked
#define SBL_KEYMGR_KEY_RBTREE_addr      0x02644248 // Done - Auto - Typo Checked
#define SBL_KEYMGR_BUF_VA_addr          0x02648000 // Done - Auto - Typo Checked
#define SBL_KEYMGR_BUF_GVA_addr         0x02648808 // Done - Auto - Typo Checked
#define FPU_CTX_addr                    0x026735c0 // Done - Auto - Typo Checked
#define DIPSW_addr                      0x02212850 // Done - Auto - Typo Checked

// common
#define memcmp_addr                     0x00271aa0 // Done - Auto - Typo Checked
#define _sx_xlock_addr                  0x0043c530 // Done - Auto - Typo Checked
#define _sx_xunlock_addr                0x0043c6f0 // Done - Auto - Typo Checked
#define malloc_addr                     0x003017b0 // Done - Auto - Typo Checked
#define free_addr                       0x00301970 // Done - Auto - Typo Checked
#define strstr_addr                     0x004859b0 // Done - Auto - Typo Checked
#define fpu_kern_enter_addr             0x002193a0 // Done - Auto - Typo Checked
#define fpu_kern_leave_addr             0x00219460 // Done - Auto - Typo Checked
#define memcpy_addr                     0x00271130 // Done - Auto - Typo Checked
#define memset_addr                     0x00149670 // Done - Auto - Typo Checked
#define strlen_addr                     0x0030f0f0 // Done - Auto - Typo Checked
#define printf_addr                     0x000b79e0 // Done - Auto - Typo Checked
#define eventhandler_register_addr      0x000f8320 // Done - Auto - Typo Checked

// Fself
#define sceSblACMgrGetPathId_addr       0x0008bcd0 // Done - Auto - Typo Checked
#define sceSblServiceMailbox_addr       0x0062ec00 // Done - Auto - Typo Checked
#define sceSblAuthMgrSmIsLoadable2_addr 0x00641960 // Done - Auto - Typo Checked
#define _sceSblAuthMgrGetSelfInfo_addr  0x006421a0 // Done - Auto - Typo Checked
#define _sceSblAuthMgrSmStart_addr      0x0063dea0 // Done - Auto - Typo Checked
#define sceSblAuthMgrVerifyHeader_addr  0x0063fc20 // Done - Auto - Typo Checked

// Fpkg
#define RsaesPkcs1v15Dec2048CRT_addr    0x004607b0 // Done - Checked
#define Sha256Hmac_addr                 0x00442f80 // Done - Auto - Typo Checked
#define AesCbcCfb128Encrypt_addr        0x001ff000 // Done - Auto - Typo Checked
#define AesCbcCfb128Decrypt_addr        0x001ff230 // Done - Auto - Typo Checked
#define sceSblDriverSendMsg_0_addr      0x0061ae90 // Done - Auto - Typo Checked
#define sceSblPfsSetKeys_addr           0x00623290 // Done - Auto - Typo Checked
#define sceSblKeymgrSetKeyStorage_addr  0x00622930 // Done - Auto - Typo Checked
#define sceSblKeymgrSetKeyForPfs_addr   0x0061d650 // Done - Auto - Typo Checked
#define sceSblKeymgrCleartKey_addr      0x0061d990 // Done - Auto - Typo Checked
#define sceSblKeymgrSmCallfunc_addr     0x0061d220 // Done - Auto - Typo Checked

// Patch
#define vmspace_acquire_ref_addr        0x0007b9e0 // Done - Auto - Typo Checked
#define vmspace_free_addr               0x0007b810 // Done - Auto - Typo Checked
#define vm_map_lock_read_addr           0x0007bb80 // Done - Auto - Typo Checked
#define vm_map_unlock_read_addr         0x0007bbd0 // Done - Auto - Typo Checked
#define vm_map_lookup_entry_addr        0x0007c1c0 // Done - Auto - Typo Checked
#define proc_rwmem_addr                 0x0041ca70 // Done - Auto - Typo Checked

// Fself hooks
#define sceSblAuthMgrIsLoadable__sceSblACMgrGetPathId_hook          0x006426fc // Done - Auto - Typo Checked
#define sceSblAuthMgrIsLoadable2_hook                               0x0064284e // Done - Checked
#define sceSblAuthMgrVerifyHeader_hook1                             0x00642fe6 // Done - Auto - Typo Checked
#define sceSblAuthMgrVerifyHeader_hook2                             0x00643cc9 // Done - Checked
#define sceSblAuthMgrSmLoadSelfSegment__sceSblServiceMailbox_hook   0x006402ea // Done - Auto - Typo Checked
#define sceSblAuthMgrSmLoadSelfBlock__sceSblServiceMailbox_hook     0x00640f28 // Done - Checked

// Fpkg hooks
#define sceSblKeymgrSetKeyStorage__sceSblDriverSendMsg_hook         0x006229d5 // Done - Auto - Typo Checked
#define sceSblKeymgrInvalidateKey__sx_xlock_hook                    0x0061E80D // Done - Checked
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_isolated_rif_hook      0x0064c030 // Done - Auto - Typo Checked
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_rif_new_hook           0x0064CDFE // Done - Checked
#define mountpfs__sceSblPfsSetKeys_hook1                            0x006C1EB9 // Done - Checked
#define mountpfs__sceSblPfsSetKeys_hook2                            0x006C20EA // Done - Checked

// SceShellUI patches - debug patches
#define sceSblRcMgrIsAllowDebugMenuForSettings_patch                0x0001D1C0 // Done - Based on name only
#define sceSblRcMgrIsStoreMode_patch                                0x0001D520 // Done - Based on name only

// SceShellUI patches - remote play patches
// #define CreateUserForIDU_patch                                      0x00188c10 // Done
// #define remote_play_menu_patch                                      0xEE638E

// SceRemotePlay patches - remote play patches
// #define SceRemotePlay_patch1                                        0x03C33F
// #define SceRemotePlay_patch2                                        0x03C35A

// SceShellCore patches
// call sceKernelIsGenuineCEX
#define sceKernelIsGenuineCEX_patch1    0x0016F014 // Done
#define sceKernelIsGenuineCEX_patch2    0x00864744 // Done
#define sceKernelIsGenuineCEX_patch3    0x008B2232 // Done
#define sceKernelIsGenuineCEX_patch4    0x00A2A254 // Done

// call nidf_libSceDipsw
#define nidf_libSceDipsw_patch1         0x0016F042 // Done
#define nidf_libSceDipsw_patch2         0x0024A4EB // Done
#define nidf_libSceDipsw_patch3         0x00864772 // Done
#define nidf_libSceDipsw_patch4         0x00A2A282 // Done

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
// #define debug_trophies_patch            0x00745809 // Done

// disable screenshot block
// #define disable_screenshot_patch        0x000d1956 // Done

#endif