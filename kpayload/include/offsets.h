#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

// data
#define	XFAST_SYSCALL_addr              0x00001c0 // done
#define M_TEMP_addr                     0x1532c00 // done
#define MINI_SYSCORE_SELF_BINARY_addr   0x0d5da48 // done - sus cit. iMrDJAi
#define ALLPROC_addr                    0x22d9b40 // done
#define SBL_DRIVER_MAPPED_PAGES_addr    0x2646258 // done - took the one with the most similar name - kdlsym_addr_gpu_va_page_list 0x2646258
#define SBL_PFS_SX_addr                 0x267c088 // done
#define SBL_KEYMGR_KEY_SLOTS_addr       0x26583b8 // done
#define SBL_KEYMGR_KEY_RBTREE_addr      0x26583c8 // done
#define SBL_KEYMGR_BUF_VA_addr          0x265c000 // done
#define SBL_KEYMGR_BUF_GVA_addr         0x265c808 // done
#define FPU_CTX_addr                    0x2660040 // done
#define DIPSW_addr                      0x1CD0650

// common
#define memcmp_addr                     0x109940 // done
#define _sx_xlock_addr                  0x0a9a80 // done
#define _sx_xunlock_addr                0x0a9c40 // done
#define malloc_addr                     0x109a60 // done
#define free_addr                       0x109c20 // done
#define strstr_addr                     0x3f7490 // done
#define fpu_kern_enter_addr             0x26c7d0 // done
#define fpu_kern_leave_addr             0x26c890 // done
#define memcpy_addr                     0x472d20 // done
#define memset_addr                     0x03e6f0 // done
#define strlen_addr                     0x2e0340 // done
#define printf_addr                     0x0c50f0 // done
#define eventhandler_register_addr      0x2269a0 // done

// Fself
#define sceSblACMgrGetPathId_addr       0x0a5d10 // done
#define sceSblServiceMailbox_addr       0x62dbe0 // done
#define sceSblAuthMgrSmIsLoadable2_addr 0x62dbe0 // done
#define _sceSblAuthMgrGetSelfInfo_addr  0x641e30 // done
#define _sceSblAuthMgrSmStart_addr      0x63d790 // done
#define sceSblAuthMgrVerifyHeader_addr  0x641650 // done - need to check - kdlsym_addr_sceSblAuthMgrSmVerifyHeader is 0x63f510 - kdlsym_addr_sceSblAuthMgrVerifyHeader is 0x641650

// Fpkg
#define RsaesPkcs1v15Dec2048CRT_addr    0x06ca20 // done
#define Sha256Hmac_addr                 0x13a3d0 // done
#define AesCbcCfb128Encrypt_addr        0x3b9e00 // done
#define AesCbcCfb128Decrypt_addr        0x3ba030 // done
#define sceSblDriverSendMsg_0_addr      0x6194a0 // done - need to check
#define sceSblPfsSetKeys_addr           0x62cb00 // done
#define sceSblKeymgrSetKeyStorage_addr  0x624ca0 // done
#define sceSblKeymgrSetKeyForPfs_addr   0x621220 // done
#define sceSblKeymgrCleartKey_addr      0x621560 // done
#define sceSblKeymgrSmCallfunc_addr     0x620df0 // done

// Patch
#define vmspace_acquire_ref_addr        0x38cee0 // done
#define vmspace_free_addr               0x38ca50 // done
#define vm_map_lock_read_addr           0x38d070 // done
#define vm_map_unlock_read_addr         0x38d0c0 // done
#define vm_map_lookup_entry_addr        0x38d6b0 // done
#define proc_rwmem_addr                 0x44dc40 // done

// Fself hooks
#define sceSblAuthMgrIsLoadable__sceSblACMgrGetPathId_hook          0x63a7fc // done
#define sceSblAuthMgrIsLoadable2_hook                               0x63a94e // done
#define sceSblAuthMgrVerifyHeader_hook1                             0x63b0e6 // done
#define sceSblAuthMgrVerifyHeader_hook2                             0x63bdc9 // done
#define sceSblAuthMgrSmLoadSelfSegment__sceSblServiceMailbox_hook   0x63fbdd // done
#define sceSblAuthMgrSmLoadSelfBlock__sceSblServiceMailbox_hook     0x640818 // done

// Fpkg hooks
#define sceSblKeymgrSetKeyStorage__sceSblDriverSendMsg_hook         0x624d45 // done
#define sceSblKeymgrInvalidateKey__sx_xlock_hook                    0x6223dd // done
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_isolated_rif_hook      0x64ad10 // done
#define sceSblKeymgrSmCallfunc_npdrm_decrypt_rif_new_hook           0x64bade // done
#define mountpfs__sceSblPfsSetKeys_hook1                            0x68e4c9 // done
#define mountpfs__sceSblPfsSetKeys_hook2                            0x68e6fa // done

// SceShellUI patches - debug patches
#define sceSblRcMgrIsAllowDebugMenuForSettings_patch                0x01ce50 // done
#define sceSblRcMgrIsStoreMode_patch                                0x01d1b0 // done

// SceShellUI patches - remote play patches
#define CreateUserForIDU_patch                                      0x1A8FA0 // not done by iMrDJAi
#define remote_play_menu_patch                                      0xEE638E // not done by iMrDJAi

// SceRemotePlay patches - remote play patches
#define SceRemotePlay_patch1                                        0x03C33F // not done by iMrDJAi
#define SceRemotePlay_patch2                                        0x03C35A // not done by iMrDJAi

// SceShellCore patches
// call sceKernelIsGenuineCEX
#define sceKernelIsGenuineCEX_patch1    0x16b6a4 // done
#define sceKernelIsGenuineCEX_patch2    0x8594c4 // done
#define sceKernelIsGenuineCEX_patch3    0x8a8602 // done
#define sceKernelIsGenuineCEX_patch4    0xa080b4 // done

// call nidf_libSceDipsw
#define nidf_libSceDipsw_patch1         0x16b6d2 // done
#define nidf_libSceDipsw_patch2         0x247e5c // done
#define nidf_libSceDipsw_patch3         0x8594f2 // done
#define nidf_libSceDipsw_patch4         0xa080e2 // done

// enable data mount
#define enable_data_mount_patch         0x31b320 // done

// enable fpkg
#define enable_fpkg_patch               0x3d26bf // done
 
// debug pkg free string
#define fake_free_patch                 0xfb08d9 // done

// make pkgs installer working with external hdd
#define pkg_installer_patch             0x9f1601 // done

// enable support with 6.xx external hdd
#define ext_hdd_patch                   0x60500d // done

// enable debug trophies on retail
#define debug_trophies_patch            0x6ABE39 // not done by iMrDJAi

// disable screenshot block
#define disable_screenshot_patch        0x0CB8C6 // not done by iMrDJAi

#endif