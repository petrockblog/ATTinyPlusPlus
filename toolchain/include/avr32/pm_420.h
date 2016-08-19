/*****************************************************************************
 *
 * Copyright (C) 2015 Atmel Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * * Neither the name of the copyright holders nor the names of
 *   contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 ****************************************************************************/


#ifndef _AVR32_PM_420_H_INCLUDED
#define _AVR32_PM_420_H_INCLUDED

#define AVR32_PM_H_VERSION                   420

#include "avr32/abi.h"

/*
Note to user:

 The following defines are always generated:
 - Register offset: AVR32_PM_<register>
 - Bitfield mask:   AVR32_PM_<register>_<bitfield>
 - Bitfield offset: AVR32_PM_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PM_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_PM_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_PM_<bitfield>
 - Bitfield offset: AVR32_PM_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PM_<bitfield>_SIZE
 - Bitfield values: AVR32_PM_<bitfield>_<value name>
 - Bitfield values: AVR32_PM_<value name>

 All defines are sorted alphabetically.
*/
#define AVR32_PM_ACIFBCRCMASK                         4
#define AVR32_PM_ACIFBCRCMASK_MASK           0x00000010
#define AVR32_PM_ACIFBCRCMASK_OFFSET                  4
#define AVR32_PM_ACIFBCRCMASK_SIZE                    1
#define AVR32_PM_ADCIFBRCMASK                         5
#define AVR32_PM_ADCIFBRCMASK_MASK           0x00000020
#define AVR32_PM_ADCIFBRCMASK_OFFSET                  5
#define AVR32_PM_ADCIFBRCMASK_SIZE                    1
#define AVR32_PM_ADDR                                 0
#define AVR32_PM_ADDR_MASK                   0x000003ff
#define AVR32_PM_ADDR_OFFSET                          0
#define AVR32_PM_ADDR_SIZE                           10
#define AVR32_PM_AST                                 17
#define AVR32_PM_ASTRCMASK                            6
#define AVR32_PM_ASTRCMASK_MASK              0x00000040
#define AVR32_PM_ASTRCMASK_OFFSET                     6
#define AVR32_PM_ASTRCMASK_SIZE                       1
#define AVR32_PM_AST_MASK                    0x00020000
#define AVR32_PM_AST_OFFSET                          17
#define AVR32_PM_AST_SIZE                             1
#define AVR32_PM_AWEN                        0x00000188
#define AVR32_PM_AWEN_AWEN                            0
#define AVR32_PM_AWEN_AWEN_MASK              0xffffffff
#define AVR32_PM_AWEN_AWEN_OFFSET                     0
#define AVR32_PM_AWEN_AWEN_SIZE                      32
#define AVR32_PM_AWEN_MASK                   0xffffffff
#define AVR32_PM_AWEN_RESETVALUE             0x00000000
#define AVR32_PM_AWIRE                               12
#define AVR32_PM_AWIRE_MASK                  0x00001000
#define AVR32_PM_AWIRE_OFFSET                        12
#define AVR32_PM_AWIRE_SIZE                           1
#define AVR32_PM_BOD                                  1
#define AVR32_PM_BOD33                               13
#define AVR32_PM_BOD33_MASK                  0x00002000
#define AVR32_PM_BOD33_OFFSET                        13
#define AVR32_PM_BOD33_SIZE                           1
#define AVR32_PM_BOD_MASK                    0x00000002
#define AVR32_PM_BOD_OFFSET                           1
#define AVR32_PM_BOD_SIZE                             1
#define AVR32_PM_CATRCMASK                            3
#define AVR32_PM_CATRCMASK_MASK              0x00000008
#define AVR32_PM_CATRCMASK_OFFSET                     3
#define AVR32_PM_CATRCMASK_SIZE                       1
#define AVR32_PM_CFDCTRL                     0x00000054
#define AVR32_PM_CFDCTRL_CFDEN                        0
#define AVR32_PM_CFDCTRL_CFDEN_MASK          0x00000001
#define AVR32_PM_CFDCTRL_CFDEN_OFFSET                 0
#define AVR32_PM_CFDCTRL_CFDEN_SIZE                   1
#define AVR32_PM_CFDCTRL_MASK                0x80000003
#define AVR32_PM_CFDCTRL_OCPEN                        1
#define AVR32_PM_CFDCTRL_OCPEN_MASK          0x00000002
#define AVR32_PM_CFDCTRL_OCPEN_OFFSET                 1
#define AVR32_PM_CFDCTRL_OCPEN_SIZE                   1
#define AVR32_PM_CFDCTRL_RESETVALUE          0x00000000
#define AVR32_PM_CFDCTRL_SFV                         31
#define AVR32_PM_CFDCTRL_SFV_MASK            0x80000000
#define AVR32_PM_CFDCTRL_SFV_OFFSET                  31
#define AVR32_PM_CFDCTRL_SFV_SIZE                     1
#define AVR32_PM_CFDEN                                0
#define AVR32_PM_CFDEN_MASK                  0x00000001
#define AVR32_PM_CFDEN_OFFSET                         0
#define AVR32_PM_CFDEN_SIZE                           1
#define AVR32_PM_CFO                                  0
#define AVR32_PM_CFO_MASK                    0x00000001
#define AVR32_PM_CFO_OFFSET                           0
#define AVR32_PM_CFO_SIZE                             1
#define AVR32_PM_CONFIG                      0x000003f8
#define AVR32_PM_CONFIG_HSBPEVC                       7
#define AVR32_PM_CONFIG_HSBPEVC_MASK         0x00000080
#define AVR32_PM_CONFIG_HSBPEVC_OFFSET                7
#define AVR32_PM_CONFIG_HSBPEVC_SIZE                  1
#define AVR32_PM_CONFIG_MASK                 0x000000cf
#define AVR32_PM_CONFIG_OCP                           6
#define AVR32_PM_CONFIG_OCP_MASK             0x00000040
#define AVR32_PM_CONFIG_OCP_OFFSET                    6
#define AVR32_PM_CONFIG_OCP_SIZE                      1
#define AVR32_PM_CONFIG_PBA                           0
#define AVR32_PM_CONFIG_PBA_MASK             0x00000001
#define AVR32_PM_CONFIG_PBA_OFFSET                    0
#define AVR32_PM_CONFIG_PBA_SIZE                      1
#define AVR32_PM_CONFIG_PBB                           1
#define AVR32_PM_CONFIG_PBB_MASK             0x00000002
#define AVR32_PM_CONFIG_PBB_OFFSET                    1
#define AVR32_PM_CONFIG_PBB_SIZE                      1
#define AVR32_PM_CONFIG_PBC                           2
#define AVR32_PM_CONFIG_PBC_MASK             0x00000004
#define AVR32_PM_CONFIG_PBC_OFFSET                    2
#define AVR32_PM_CONFIG_PBC_SIZE                      1
#define AVR32_PM_CONFIG_PBD                           3
#define AVR32_PM_CONFIG_PBD_MASK             0x00000008
#define AVR32_PM_CONFIG_PBD_OFFSET                    3
#define AVR32_PM_CONFIG_PBD_SIZE                      1
#define AVR32_PM_CONFIG_RESETVALUE           0x00000000
#define AVR32_PM_CPUDIV                               7
#define AVR32_PM_CPUDIV_MASK                 0x00000080
#define AVR32_PM_CPUDIV_OFFSET                        7
#define AVR32_PM_CPUDIV_SIZE                          1
#define AVR32_PM_CPUERR                               7
#define AVR32_PM_CPUERR_MASK                 0x00000080
#define AVR32_PM_CPUERR_OFFSET                        7
#define AVR32_PM_CPUERR_SIZE                          1
#define AVR32_PM_CPUMASK                     0x00000020
#define AVR32_PM_CPUMASK_MASK                0x00000000
#define AVR32_PM_CPUMASK_RESETVALUE          0x00000000
#define AVR32_PM_CPUSEL                      0x00000004
#define AVR32_PM_CPUSEL_CPUDIV                        7
#define AVR32_PM_CPUSEL_CPUDIV_MASK          0x00000080
#define AVR32_PM_CPUSEL_CPUDIV_OFFSET                 7
#define AVR32_PM_CPUSEL_CPUDIV_SIZE                   1
#define AVR32_PM_CPUSEL_CPUSEL                        0
#define AVR32_PM_CPUSEL_CPUSEL_MASK          0x00000007
#define AVR32_PM_CPUSEL_CPUSEL_OFFSET                 0
#define AVR32_PM_CPUSEL_CPUSEL_SIZE                   3
#define AVR32_PM_CPUSEL_MASK                 0x00000087
#define AVR32_PM_CPUSEL_RESETVALUE           0x00000000
#define AVR32_PM_DFLL                        0x00000002
#define AVR32_PM_EIC                                 16
#define AVR32_PM_EIC_MASK                    0x00010000
#define AVR32_PM_EIC_OFFSET                          16
#define AVR32_PM_EIC_SIZE                             1
#define AVR32_PM_EXT                                  2
#define AVR32_PM_EXT_MASK                    0x00000004
#define AVR32_PM_EXT_OFFSET                           2
#define AVR32_PM_EXT_SIZE                             1
#define AVR32_PM_FRC32                                1
#define AVR32_PM_FRC32_MASK                  0x00000002
#define AVR32_PM_FRC32_OFFSET                         1
#define AVR32_PM_FRC32_SIZE                           1
#define AVR32_PM_HSBDIV                               7
#define AVR32_PM_HSBDIV_MASK                 0x00000080
#define AVR32_PM_HSBDIV_OFFSET                        7
#define AVR32_PM_HSBDIV_SIZE                          1
#define AVR32_PM_HSBMASK                     0x00000024
#define AVR32_PM_HSBMASK_MASK                0x00000000
#define AVR32_PM_HSBMASK_RESETVALUE          0x00000000
#define AVR32_PM_HSBPEVC                              7
#define AVR32_PM_HSBPEVC_MASK                0x00000080
#define AVR32_PM_HSBPEVC_OFFSET                       7
#define AVR32_PM_HSBPEVC_SIZE                         1
#define AVR32_PM_HSBSEL                      0x00000008
#define AVR32_PM_HSBSEL_HSBDIV                        7
#define AVR32_PM_HSBSEL_HSBDIV_MASK          0x00000080
#define AVR32_PM_HSBSEL_HSBDIV_OFFSET                 7
#define AVR32_PM_HSBSEL_HSBDIV_SIZE                   1
#define AVR32_PM_HSBSEL_HSBSEL                        0
#define AVR32_PM_HSBSEL_HSBSEL_MASK          0x00000007
#define AVR32_PM_HSBSEL_HSBSEL_OFFSET                 0
#define AVR32_PM_HSBSEL_HSBSEL_SIZE                   3
#define AVR32_PM_HSBSEL_MASK                 0x00000087
#define AVR32_PM_HSBSEL_RESETVALUE           0x00000000
#define AVR32_PM_ICR                         0x000000d0
#define AVR32_PM_ICR_AE                              31
#define AVR32_PM_ICR_AE_MASK                 0x80000000
#define AVR32_PM_ICR_AE_OFFSET                       31
#define AVR32_PM_ICR_AE_SIZE                          1
#define AVR32_PM_ICR_CFD                              0
#define AVR32_PM_ICR_CFD_MASK                0x00000001
#define AVR32_PM_ICR_CFD_OFFSET                       0
#define AVR32_PM_ICR_CFD_SIZE                         1
#define AVR32_PM_ICR_CKRDY                            5
#define AVR32_PM_ICR_CKRDY_MASK              0x00000020
#define AVR32_PM_ICR_CKRDY_OFFSET                     5
#define AVR32_PM_ICR_CKRDY_SIZE                       1
#define AVR32_PM_ICR_MASK                    0x90000123
#define AVR32_PM_ICR_OCP                              1
#define AVR32_PM_ICR_OCP_MASK                0x00000002
#define AVR32_PM_ICR_OCP_OFFSET                       1
#define AVR32_PM_ICR_OCP_SIZE                         1
#define AVR32_PM_ICR_PERRDY                          28
#define AVR32_PM_ICR_PERRDY_MASK             0x10000000
#define AVR32_PM_ICR_PERRDY_OFFSET                   28
#define AVR32_PM_ICR_PERRDY_SIZE                      1
#define AVR32_PM_ICR_RESETVALUE              0x00000000
#define AVR32_PM_ICR_WAKE                             8
#define AVR32_PM_ICR_WAKE_MASK               0x00000100
#define AVR32_PM_ICR_WAKE_OFFSET                      8
#define AVR32_PM_ICR_WAKE_SIZE                        1
#define AVR32_PM_IDR                         0x000000c4
#define AVR32_PM_IDR_AE                              31
#define AVR32_PM_IDR_AE_MASK                 0x80000000
#define AVR32_PM_IDR_AE_OFFSET                       31
#define AVR32_PM_IDR_AE_SIZE                          1
#define AVR32_PM_IDR_CFD                              0
#define AVR32_PM_IDR_CFD_MASK                0x00000001
#define AVR32_PM_IDR_CFD_OFFSET                       0
#define AVR32_PM_IDR_CFD_SIZE                         1
#define AVR32_PM_IDR_CKRDY                            5
#define AVR32_PM_IDR_CKRDY_MASK              0x00000020
#define AVR32_PM_IDR_CKRDY_OFFSET                     5
#define AVR32_PM_IDR_CKRDY_SIZE                       1
#define AVR32_PM_IDR_MASK                    0x90000123
#define AVR32_PM_IDR_OCP                              1
#define AVR32_PM_IDR_OCP_MASK                0x00000002
#define AVR32_PM_IDR_OCP_OFFSET                       1
#define AVR32_PM_IDR_OCP_SIZE                         1
#define AVR32_PM_IDR_PERRDY                          28
#define AVR32_PM_IDR_PERRDY_MASK             0x10000000
#define AVR32_PM_IDR_PERRDY_OFFSET                   28
#define AVR32_PM_IDR_PERRDY_SIZE                      1
#define AVR32_PM_IDR_RESETVALUE              0x00000000
#define AVR32_PM_IDR_WAKE                             8
#define AVR32_PM_IDR_WAKE_MASK               0x00000100
#define AVR32_PM_IDR_WAKE_OFFSET                      8
#define AVR32_PM_IDR_WAKE_SIZE                        1
#define AVR32_PM_IER                         0x000000c0
#define AVR32_PM_IER_AE                              31
#define AVR32_PM_IER_AE_MASK                 0x80000000
#define AVR32_PM_IER_AE_OFFSET                       31
#define AVR32_PM_IER_AE_SIZE                          1
#define AVR32_PM_IER_CFD                              0
#define AVR32_PM_IER_CFD_MASK                0x00000001
#define AVR32_PM_IER_CFD_OFFSET                       0
#define AVR32_PM_IER_CFD_SIZE                         1
#define AVR32_PM_IER_CKRDY                            5
#define AVR32_PM_IER_CKRDY_MASK              0x00000020
#define AVR32_PM_IER_CKRDY_OFFSET                     5
#define AVR32_PM_IER_CKRDY_SIZE                       1
#define AVR32_PM_IER_MASK                    0x90000123
#define AVR32_PM_IER_OCP                              1
#define AVR32_PM_IER_OCP_MASK                0x00000002
#define AVR32_PM_IER_OCP_OFFSET                       1
#define AVR32_PM_IER_OCP_SIZE                         1
#define AVR32_PM_IER_PERRDY                          28
#define AVR32_PM_IER_PERRDY_MASK             0x10000000
#define AVR32_PM_IER_PERRDY_OFFSET                   28
#define AVR32_PM_IER_PERRDY_SIZE                      1
#define AVR32_PM_IER_RESETVALUE              0x00000000
#define AVR32_PM_IER_WAKE                             8
#define AVR32_PM_IER_WAKE_MASK               0x00000100
#define AVR32_PM_IER_WAKE_OFFSET                      8
#define AVR32_PM_IER_WAKE_SIZE                        1
#define AVR32_PM_IMR                         0x000000c8
#define AVR32_PM_IMR_AE                              31
#define AVR32_PM_IMR_AE_MASK                 0x80000000
#define AVR32_PM_IMR_AE_OFFSET                       31
#define AVR32_PM_IMR_AE_SIZE                          1
#define AVR32_PM_IMR_CFD                              0
#define AVR32_PM_IMR_CFD_MASK                0x00000001
#define AVR32_PM_IMR_CFD_OFFSET                       0
#define AVR32_PM_IMR_CFD_SIZE                         1
#define AVR32_PM_IMR_CKRDY                            5
#define AVR32_PM_IMR_CKRDY_MASK              0x00000020
#define AVR32_PM_IMR_CKRDY_OFFSET                     5
#define AVR32_PM_IMR_CKRDY_SIZE                       1
#define AVR32_PM_IMR_MASK                    0x90000123
#define AVR32_PM_IMR_OCP                              1
#define AVR32_PM_IMR_OCP_MASK                0x00000002
#define AVR32_PM_IMR_OCP_OFFSET                       1
#define AVR32_PM_IMR_OCP_SIZE                         1
#define AVR32_PM_IMR_PERRDY                          28
#define AVR32_PM_IMR_PERRDY_MASK             0x10000000
#define AVR32_PM_IMR_PERRDY_OFFSET                   28
#define AVR32_PM_IMR_PERRDY_SIZE                      1
#define AVR32_PM_IMR_RESETVALUE              0x00000000
#define AVR32_PM_IMR_WAKE                             8
#define AVR32_PM_IMR_WAKE_MASK               0x00000100
#define AVR32_PM_IMR_WAKE_OFFSET                      8
#define AVR32_PM_IMR_WAKE_SIZE                        1
#define AVR32_PM_ISR                         0x000000cc
#define AVR32_PM_ISR_AE                              31
#define AVR32_PM_ISR_AE_MASK                 0x80000000
#define AVR32_PM_ISR_AE_OFFSET                       31
#define AVR32_PM_ISR_AE_SIZE                          1
#define AVR32_PM_ISR_CFD                              0
#define AVR32_PM_ISR_CFD_MASK                0x00000001
#define AVR32_PM_ISR_CFD_OFFSET                       0
#define AVR32_PM_ISR_CFD_SIZE                         1
#define AVR32_PM_ISR_CKRDY                            5
#define AVR32_PM_ISR_CKRDY_MASK              0x00000020
#define AVR32_PM_ISR_CKRDY_OFFSET                     5
#define AVR32_PM_ISR_CKRDY_SIZE                       1
#define AVR32_PM_ISR_MASK                    0x90000123
#define AVR32_PM_ISR_OCP                              1
#define AVR32_PM_ISR_OCP_MASK                0x00000002
#define AVR32_PM_ISR_OCP_OFFSET                       1
#define AVR32_PM_ISR_OCP_SIZE                         1
#define AVR32_PM_ISR_PERRDY                          28
#define AVR32_PM_ISR_PERRDY_MASK             0x10000000
#define AVR32_PM_ISR_PERRDY_OFFSET                   28
#define AVR32_PM_ISR_PERRDY_SIZE                      1
#define AVR32_PM_ISR_RESETVALUE              0x00000000
#define AVR32_PM_ISR_WAKE                             8
#define AVR32_PM_ISR_WAKE_MASK               0x00000100
#define AVR32_PM_ISR_WAKE_OFFSET                      8
#define AVR32_PM_ISR_WAKE_SIZE                        1
#define AVR32_PM_JTAG                                 9
#define AVR32_PM_JTAG_MASK                   0x00000200
#define AVR32_PM_JTAG_OFFSET                          9
#define AVR32_PM_JTAG_SIZE                            1
#define AVR32_PM_KEY                                 24
#define AVR32_PM_KEY_MASK                    0xff000000
#define AVR32_PM_KEY_OFFSET                          24
#define AVR32_PM_KEY_SIZE                             8
#define AVR32_PM_KEY_VALUE                   0x000000aa
#define AVR32_PM_LOCK                                 0
#define AVR32_PM_LOCK_MASK                   0x00000001
#define AVR32_PM_LOCK_OFFSET                          0
#define AVR32_PM_LOCK_SIZE                            1
#define AVR32_PM_MCCTRL                      0x00000000
#define AVR32_PM_MCCTRL_MASK                 0x00000007
#define AVR32_PM_MCCTRL_MCSEL                         0
#define AVR32_PM_MCCTRL_MCSEL_DFLL           0x00000002
#define AVR32_PM_MCCTRL_MCSEL_MASK           0x00000007
#define AVR32_PM_MCCTRL_MCSEL_OFFSET                  0
#define AVR32_PM_MCCTRL_MCSEL_OSC0           0x00000001
#define AVR32_PM_MCCTRL_MCSEL_RC120M         0x00000003
#define AVR32_PM_MCCTRL_MCSEL_RCSYS          0x00000000
#define AVR32_PM_MCCTRL_MCSEL_SIZE                    3
#define AVR32_PM_MCCTRL_RESETVALUE           0x00000000
#define AVR32_PM_MCSEL                                0
#define AVR32_PM_MCSEL_DFLL                  0x00000002
#define AVR32_PM_MCSEL_MASK                  0x00000007
#define AVR32_PM_MCSEL_OFFSET                         0
#define AVR32_PM_MCSEL_OSC0                  0x00000001
#define AVR32_PM_MCSEL_RC120M                0x00000003
#define AVR32_PM_MCSEL_RCSYS                 0x00000000
#define AVR32_PM_MCSEL_SIZE                           3
#define AVR32_PM_OCDRST                               8
#define AVR32_PM_OCDRST_MASK                 0x00000100
#define AVR32_PM_OCDRST_OFFSET                        8
#define AVR32_PM_OCDRST_SIZE                          1
#define AVR32_PM_OCPEN                                1
#define AVR32_PM_OCPEN_MASK                  0x00000002
#define AVR32_PM_OCPEN_OFFSET                         1
#define AVR32_PM_OCPEN_SIZE                           1
#define AVR32_PM_OSC0                        0x00000001
#define AVR32_PM_PBA                                  0
#define AVR32_PM_PBADIVMASK                  0x00000040
#define AVR32_PM_PBADIVMASK_MASK             0x00000000
#define AVR32_PM_PBADIVMASK_RESETVALUE       0x00000000
#define AVR32_PM_PBAMASK                     0x00000028
#define AVR32_PM_PBAMASK_MASK                0x00000000
#define AVR32_PM_PBAMASK_RESETVALUE          0x00000000
#define AVR32_PM_PBASEL                      0x0000000c
#define AVR32_PM_PBASEL_MASK                 0x00000087
#define AVR32_PM_PBASEL_PBDIV                         7
#define AVR32_PM_PBASEL_PBDIV_MASK           0x00000080
#define AVR32_PM_PBASEL_PBDIV_OFFSET                  7
#define AVR32_PM_PBASEL_PBDIV_SIZE                    1
#define AVR32_PM_PBASEL_PBSEL                         0
#define AVR32_PM_PBASEL_PBSEL_MASK           0x00000007
#define AVR32_PM_PBASEL_PBSEL_OFFSET                  0
#define AVR32_PM_PBASEL_PBSEL_SIZE                    3
#define AVR32_PM_PBASEL_RESETVALUE           0x00000000
#define AVR32_PM_PBA_MASK                    0x00000001
#define AVR32_PM_PBA_OFFSET                           0
#define AVR32_PM_PBA_SIZE                             1
#define AVR32_PM_PBB                                  1
#define AVR32_PM_PBBMASK                     0x0000002c
#define AVR32_PM_PBBMASK_MASK                0x00000000
#define AVR32_PM_PBBMASK_RESETVALUE          0x00000000
#define AVR32_PM_PBBSEL                      0x00000010
#define AVR32_PM_PBBSEL_MASK                 0x00000087
#define AVR32_PM_PBBSEL_PBDIV                         7
#define AVR32_PM_PBBSEL_PBDIV_MASK           0x00000080
#define AVR32_PM_PBBSEL_PBDIV_OFFSET                  7
#define AVR32_PM_PBBSEL_PBDIV_SIZE                    1
#define AVR32_PM_PBBSEL_PBSEL                         0
#define AVR32_PM_PBBSEL_PBSEL_MASK           0x00000007
#define AVR32_PM_PBBSEL_PBSEL_OFFSET                  0
#define AVR32_PM_PBBSEL_PBSEL_SIZE                    3
#define AVR32_PM_PBBSEL_RESETVALUE           0x00000000
#define AVR32_PM_PBB_MASK                    0x00000002
#define AVR32_PM_PBB_OFFSET                           1
#define AVR32_PM_PBB_SIZE                             1
#define AVR32_PM_PBC                                  2
#define AVR32_PM_PBC_MASK                    0x00000004
#define AVR32_PM_PBC_OFFSET                           2
#define AVR32_PM_PBC_SIZE                             1
#define AVR32_PM_PBD                                  3
#define AVR32_PM_PBD_MASK                    0x00000008
#define AVR32_PM_PBD_OFFSET                           3
#define AVR32_PM_PBD_SIZE                             1
#define AVR32_PM_POR                                  0
#define AVR32_PM_POR_MASK                    0x00000001
#define AVR32_PM_POR_OFFSET                           0
#define AVR32_PM_POR_SIZE                             1
#define AVR32_PM_PPCR                        0x00000160
#define AVR32_PM_PPCR_ACIFBCRCMASK                    4
#define AVR32_PM_PPCR_ACIFBCRCMASK_MASK      0x00000010
#define AVR32_PM_PPCR_ACIFBCRCMASK_OFFSET             4
#define AVR32_PM_PPCR_ACIFBCRCMASK_SIZE               1
#define AVR32_PM_PPCR_ADCIFBRCMASK                    5
#define AVR32_PM_PPCR_ADCIFBRCMASK_MASK      0x00000020
#define AVR32_PM_PPCR_ADCIFBRCMASK_OFFSET             5
#define AVR32_PM_PPCR_ADCIFBRCMASK_SIZE               1
#define AVR32_PM_PPCR_ASTRCMASK                       6
#define AVR32_PM_PPCR_ASTRCMASK_MASK         0x00000040
#define AVR32_PM_PPCR_ASTRCMASK_OFFSET                6
#define AVR32_PM_PPCR_ASTRCMASK_SIZE                  1
#define AVR32_PM_PPCR_CATRCMASK                       3
#define AVR32_PM_PPCR_CATRCMASK_MASK         0x00000008
#define AVR32_PM_PPCR_CATRCMASK_OFFSET                3
#define AVR32_PM_PPCR_CATRCMASK_SIZE                  1
#define AVR32_PM_PPCR_FRC32                           1
#define AVR32_PM_PPCR_FRC32_MASK             0x00000002
#define AVR32_PM_PPCR_FRC32_OFFSET                    1
#define AVR32_PM_PPCR_FRC32_SIZE                      1
#define AVR32_PM_PPCR_MASK                   0x000001ff
#define AVR32_PM_PPCR_RESETVALUE             0x00000000
#define AVR32_PM_PPCR_RSTPUN                          0
#define AVR32_PM_PPCR_RSTPUN_MASK            0x00000001
#define AVR32_PM_PPCR_RSTPUN_OFFSET                   0
#define AVR32_PM_PPCR_RSTPUN_SIZE                     1
#define AVR32_PM_PPCR_RSTTM                           2
#define AVR32_PM_PPCR_RSTTM_MASK             0x00000004
#define AVR32_PM_PPCR_RSTTM_OFFSET                    2
#define AVR32_PM_PPCR_RSTTM_SIZE                      1
#define AVR32_PM_PPCR_TWIS0RCMASK                     7
#define AVR32_PM_PPCR_TWIS0RCMASK_MASK       0x00000080
#define AVR32_PM_PPCR_TWIS0RCMASK_OFFSET              7
#define AVR32_PM_PPCR_TWIS0RCMASK_SIZE                1
#define AVR32_PM_PPCR_TWIS1RCMASK                     8
#define AVR32_PM_PPCR_TWIS1RCMASK_MASK       0x00000100
#define AVR32_PM_PPCR_TWIS1RCMASK_OFFSET              8
#define AVR32_PM_PPCR_TWIS1RCMASK_SIZE                1
#define AVR32_PM_PROTCTRL                    0x0000018c
#define AVR32_PM_PROTCTRL_LOCK                        0
#define AVR32_PM_PROTCTRL_LOCK_MASK          0x00000001
#define AVR32_PM_PROTCTRL_LOCK_OFFSET                 0
#define AVR32_PM_PROTCTRL_LOCK_SIZE                   1
#define AVR32_PM_PROTCTRL_MASK               0x00000001
#define AVR32_PM_PROTCTRL_RESETVALUE         0x00000000
#define AVR32_PM_RC120M                      0x00000003
#define AVR32_PM_RCAUSE                      0x00000180
#define AVR32_PM_RCAUSE_AWIRE                        12
#define AVR32_PM_RCAUSE_AWIRE_MASK           0x00001000
#define AVR32_PM_RCAUSE_AWIRE_OFFSET                 12
#define AVR32_PM_RCAUSE_AWIRE_SIZE                    1
#define AVR32_PM_RCAUSE_BOD                           1
#define AVR32_PM_RCAUSE_BOD33                        13
#define AVR32_PM_RCAUSE_BOD33_MASK           0x00002000
#define AVR32_PM_RCAUSE_BOD33_OFFSET                 13
#define AVR32_PM_RCAUSE_BOD33_SIZE                    1
#define AVR32_PM_RCAUSE_BOD_MASK             0x00000002
#define AVR32_PM_RCAUSE_BOD_OFFSET                    1
#define AVR32_PM_RCAUSE_BOD_SIZE                      1
#define AVR32_PM_RCAUSE_CPUERR                        7
#define AVR32_PM_RCAUSE_CPUERR_MASK          0x00000080
#define AVR32_PM_RCAUSE_CPUERR_OFFSET                 7
#define AVR32_PM_RCAUSE_CPUERR_SIZE                   1
#define AVR32_PM_RCAUSE_EXT                           2
#define AVR32_PM_RCAUSE_EXT_MASK             0x00000004
#define AVR32_PM_RCAUSE_EXT_OFFSET                    2
#define AVR32_PM_RCAUSE_EXT_SIZE                      1
#define AVR32_PM_RCAUSE_JTAG                          9
#define AVR32_PM_RCAUSE_JTAG_MASK            0x00000200
#define AVR32_PM_RCAUSE_JTAG_OFFSET                   9
#define AVR32_PM_RCAUSE_JTAG_SIZE                     1
#define AVR32_PM_RCAUSE_MASK                 0x000077cf
#define AVR32_PM_RCAUSE_OCDRST                        8
#define AVR32_PM_RCAUSE_OCDRST_MASK          0x00000100
#define AVR32_PM_RCAUSE_OCDRST_OFFSET                 8
#define AVR32_PM_RCAUSE_OCDRST_SIZE                   1
#define AVR32_PM_RCAUSE_POR                           0
#define AVR32_PM_RCAUSE_POR_MASK             0x00000001
#define AVR32_PM_RCAUSE_POR_OFFSET                    0
#define AVR32_PM_RCAUSE_POR_SIZE                      1
#define AVR32_PM_RCAUSE_RESETVALUE           0x00000000
#define AVR32_PM_RCAUSE_SHDN                         10
#define AVR32_PM_RCAUSE_SHDN_MASK            0x00000400
#define AVR32_PM_RCAUSE_SHDN_OFFSET                  10
#define AVR32_PM_RCAUSE_SHDN_SIZE                     1
#define AVR32_PM_RCAUSE_SLEEP                         6
#define AVR32_PM_RCAUSE_SLEEP_MASK           0x00000040
#define AVR32_PM_RCAUSE_SLEEP_OFFSET                  6
#define AVR32_PM_RCAUSE_SLEEP_SIZE                    1
#define AVR32_PM_RCAUSE_SPIKEDET                     14
#define AVR32_PM_RCAUSE_SPIKEDET_MASK        0x00004000
#define AVR32_PM_RCAUSE_SPIKEDET_OFFSET              14
#define AVR32_PM_RCAUSE_SPIKEDET_SIZE                 1
#define AVR32_PM_RCAUSE_WDT                           3
#define AVR32_PM_RCAUSE_WDT_MASK             0x00000008
#define AVR32_PM_RCAUSE_WDT_OFFSET                    3
#define AVR32_PM_RCAUSE_WDT_SIZE                      1
#define AVR32_PM_RCSYS                       0x00000000
#define AVR32_PM_RSTPUN                               0
#define AVR32_PM_RSTPUN_MASK                 0x00000001
#define AVR32_PM_RSTPUN_OFFSET                        0
#define AVR32_PM_RSTPUN_SIZE                          1
#define AVR32_PM_RSTTM                                2
#define AVR32_PM_RSTTM_MASK                  0x00000004
#define AVR32_PM_RSTTM_OFFSET                         2
#define AVR32_PM_RSTTM_SIZE                           1
#define AVR32_PM_SFV                                 31
#define AVR32_PM_SFV_MASK                    0x80000000
#define AVR32_PM_SFV_OFFSET                          31
#define AVR32_PM_SFV_SIZE                             1
#define AVR32_PM_SHDN                                10
#define AVR32_PM_SHDN_MASK                   0x00000400
#define AVR32_PM_SHDN_OFFSET                         10
#define AVR32_PM_SHDN_SIZE                            1
#define AVR32_PM_SLEEP                                6
#define AVR32_PM_SLEEP_MASK                  0x00000040
#define AVR32_PM_SLEEP_OFFSET                         6
#define AVR32_PM_SLEEP_SIZE                           1
#define AVR32_PM_SPIKEDET                            14
#define AVR32_PM_SPIKEDET_MASK               0x00004000
#define AVR32_PM_SPIKEDET_OFFSET                     14
#define AVR32_PM_SPIKEDET_SIZE                        1
#define AVR32_PM_SR                          0x000000d4
#define AVR32_PM_SR_AE                               31
#define AVR32_PM_SR_AE_MASK                  0x80000000
#define AVR32_PM_SR_AE_OFFSET                        31
#define AVR32_PM_SR_AE_SIZE                           1
#define AVR32_PM_SR_CFO                               0
#define AVR32_PM_SR_CFO_MASK                 0x00000001
#define AVR32_PM_SR_CFO_OFFSET                        0
#define AVR32_PM_SR_CFO_SIZE                          1
#define AVR32_PM_SR_CKRDY                             5
#define AVR32_PM_SR_CKRDY_MASK               0x00000020
#define AVR32_PM_SR_CKRDY_OFFSET                      5
#define AVR32_PM_SR_CKRDY_SIZE                        1
#define AVR32_PM_SR_MASK                     0x90000123
#define AVR32_PM_SR_OCP                               1
#define AVR32_PM_SR_OCP_MASK                 0x00000002
#define AVR32_PM_SR_OCP_OFFSET                        1
#define AVR32_PM_SR_OCP_SIZE                          1
#define AVR32_PM_SR_PERRDY                           28
#define AVR32_PM_SR_PERRDY_MASK              0x10000000
#define AVR32_PM_SR_PERRDY_OFFSET                    28
#define AVR32_PM_SR_PERRDY_SIZE                       1
#define AVR32_PM_SR_RESETVALUE               0x00000000
#define AVR32_PM_SR_WAKE                              8
#define AVR32_PM_SR_WAKE_MASK                0x00000100
#define AVR32_PM_SR_WAKE_OFFSET                       8
#define AVR32_PM_SR_WAKE_SIZE                         1
#define AVR32_PM_TWIS0RCMASK                          7
#define AVR32_PM_TWIS0RCMASK_MASK            0x00000080
#define AVR32_PM_TWIS0RCMASK_OFFSET                   7
#define AVR32_PM_TWIS0RCMASK_SIZE                     1
#define AVR32_PM_TWIS1RCMASK                          8
#define AVR32_PM_TWIS1RCMASK_MASK            0x00000100
#define AVR32_PM_TWIS1RCMASK_OFFSET                   8
#define AVR32_PM_TWIS1RCMASK_SIZE                     1
#define AVR32_PM_UNLOCK                      0x00000058
#define AVR32_PM_UNLOCK_ADDR                          0
#define AVR32_PM_UNLOCK_ADDR_MASK            0x000003ff
#define AVR32_PM_UNLOCK_ADDR_OFFSET                   0
#define AVR32_PM_UNLOCK_ADDR_SIZE                    10
#define AVR32_PM_UNLOCK_KEY                          24
#define AVR32_PM_UNLOCK_KEY_MASK             0xff000000
#define AVR32_PM_UNLOCK_KEY_OFFSET                   24
#define AVR32_PM_UNLOCK_KEY_SIZE                      8
#define AVR32_PM_UNLOCK_KEY_VALUE            0x000000aa
#define AVR32_PM_UNLOCK_MASK                 0xff0003ff
#define AVR32_PM_UNLOCK_RESETVALUE           0x00000000
#define AVR32_PM_VALUE                       0x000000aa
#define AVR32_PM_VARIANT                             16
#define AVR32_PM_VARIANT_MASK                0x000f0000
#define AVR32_PM_VARIANT_OFFSET                      16
#define AVR32_PM_VARIANT_SIZE                         4
#define AVR32_PM_VERSION                     0x000003fc
#define AVR32_PM_VERSION_MASK                0x000f0fff
#define AVR32_PM_VERSION_RESETVALUE          0x00000420
#define AVR32_PM_VERSION_VARIANT                     16
#define AVR32_PM_VERSION_VARIANT_MASK        0x000f0000
#define AVR32_PM_VERSION_VARIANT_OFFSET              16
#define AVR32_PM_VERSION_VARIANT_SIZE                 4
#define AVR32_PM_VERSION_VERSION                      0
#define AVR32_PM_VERSION_VERSION_MASK        0x00000fff
#define AVR32_PM_VERSION_VERSION_OFFSET               0
#define AVR32_PM_VERSION_VERSION_SIZE                12
#define AVR32_PM_WCAUSE                      0x00000184
#define AVR32_PM_WCAUSE_AST                          17
#define AVR32_PM_WCAUSE_AST_MASK             0x00020000
#define AVR32_PM_WCAUSE_AST_OFFSET                   17
#define AVR32_PM_WCAUSE_AST_SIZE                      1
#define AVR32_PM_WCAUSE_EIC                          16
#define AVR32_PM_WCAUSE_EIC_MASK             0x00010000
#define AVR32_PM_WCAUSE_EIC_OFFSET                   16
#define AVR32_PM_WCAUSE_EIC_SIZE                      1
#define AVR32_PM_WCAUSE_MASK                 0x0003ffff
#define AVR32_PM_WCAUSE_RESETVALUE           0x00000000
#define AVR32_PM_WCAUSE_WCAUSE                        0
#define AVR32_PM_WCAUSE_WCAUSE_MASK          0x0000ffff
#define AVR32_PM_WCAUSE_WCAUSE_OFFSET                 0
#define AVR32_PM_WCAUSE_WCAUSE_SIZE                  16
#define AVR32_PM_WDT                                  3
#define AVR32_PM_WDT_MASK                    0x00000008
#define AVR32_PM_WDT_OFFSET                           3
#define AVR32_PM_WDT_SIZE                             1
#define AVR32_PM_SMODE_IDLE                  0x00000000
#define AVR32_PM_SMODE_FROZEN                0x00000001
#define AVR32_PM_SMODE_STANDBY               0x00000002
#define AVR32_PM_SMODE_STOP                  0x00000003
#define AVR32_PM_SMODE_DEEPSTOP              0x00000004
#define AVR32_PM_SMODE_STATIC                0x00000005
#define AVR32_PM_SMODE_SHUTDOWN              0x00000006


#ifdef __AVR32_ABI_COMPILER__

/* Module Register Structures */
typedef struct avr32_pm_mcctrl_t {
       unsigned int                :29;
       unsigned int mcsel          : 3;
} avr32_pm_mcctrl_t;

typedef struct avr32_pm_cpusel_t {
       unsigned int                :24;
       unsigned int cpudiv         : 1;
       unsigned int                : 4;
       unsigned int cpusel         : 3;
} avr32_pm_cpusel_t;

typedef struct avr32_pm_hsbsel_t {
       unsigned int                :24;
       unsigned int hsbdiv         : 1;
       unsigned int                : 4;
       unsigned int hsbsel         : 3;
} avr32_pm_hsbsel_t;

typedef struct avr32_pm_pbasel_t {
       unsigned int                :24;
       unsigned int pbdiv          : 1;
       unsigned int                : 4;
       unsigned int pbsel          : 3;
} avr32_pm_pbasel_t;

typedef struct avr32_pm_pbbsel_t {
       unsigned int                :24;
       unsigned int pbdiv          : 1;
       unsigned int                : 4;
       unsigned int pbsel          : 3;
} avr32_pm_pbbsel_t;

typedef struct avr32_pm_cfdctrl_t {
       unsigned int sfv            : 1;
       unsigned int                :29;
       unsigned int ocpen          : 1;
       unsigned int cfden          : 1;
} avr32_pm_cfdctrl_t;

typedef struct avr32_pm_unlock_t {
       unsigned int key            : 8;
       unsigned int                :14;
       unsigned int addr           :10;
} avr32_pm_unlock_t;

typedef struct avr32_pm_ier_t {
       unsigned int ae             : 1;
       unsigned int                : 2;
       unsigned int perrdy         : 1;
       unsigned int                :19;
       unsigned int wake           : 1;
       unsigned int                : 2;
       unsigned int ckrdy          : 1;
       unsigned int                : 3;
       unsigned int ocp            : 1;
       unsigned int cfd            : 1;
} avr32_pm_ier_t;

typedef struct avr32_pm_idr_t {
       unsigned int ae             : 1;
       unsigned int                : 2;
       unsigned int perrdy         : 1;
       unsigned int                :19;
       unsigned int wake           : 1;
       unsigned int                : 2;
       unsigned int ckrdy          : 1;
       unsigned int                : 3;
       unsigned int ocp            : 1;
       unsigned int cfd            : 1;
} avr32_pm_idr_t;

typedef struct avr32_pm_imr_t {
       unsigned int ae             : 1;
       unsigned int                : 2;
       unsigned int perrdy         : 1;
       unsigned int                :19;
       unsigned int wake           : 1;
       unsigned int                : 2;
       unsigned int ckrdy          : 1;
       unsigned int                : 3;
       unsigned int ocp            : 1;
       unsigned int cfd            : 1;
} avr32_pm_imr_t;

typedef struct avr32_pm_isr_t {
       unsigned int ae             : 1;
       unsigned int                : 2;
       unsigned int perrdy         : 1;
       unsigned int                :19;
       unsigned int wake           : 1;
       unsigned int                : 2;
       unsigned int ckrdy          : 1;
       unsigned int                : 3;
       unsigned int ocp            : 1;
       unsigned int cfd            : 1;
} avr32_pm_isr_t;

typedef struct avr32_pm_icr_t {
       unsigned int ae             : 1;
       unsigned int                : 2;
       unsigned int perrdy         : 1;
       unsigned int                :19;
       unsigned int wake           : 1;
       unsigned int                : 2;
       unsigned int ckrdy          : 1;
       unsigned int                : 3;
       unsigned int ocp            : 1;
       unsigned int cfd            : 1;
} avr32_pm_icr_t;

typedef struct avr32_pm_sr_t {
       unsigned int ae             : 1;
       unsigned int                : 2;
       unsigned int perrdy         : 1;
       unsigned int                :19;
       unsigned int wake           : 1;
       unsigned int                : 2;
       unsigned int ckrdy          : 1;
       unsigned int                : 3;
       unsigned int ocp            : 1;
       unsigned int cfo            : 1;
} avr32_pm_sr_t;

typedef struct avr32_pm_ppcr_t {
       unsigned int                :23;
       unsigned int twis1rcmask    : 1;
       unsigned int twis0rcmask    : 1;
       unsigned int astrcmask      : 1;
       unsigned int adcifbrcmask   : 1;
       unsigned int acifbcrcmask   : 1;
       unsigned int catrcmask      : 1;
       unsigned int rsttm          : 1;
       unsigned int frc32          : 1;
       unsigned int rstpun         : 1;
} avr32_pm_ppcr_t;

typedef struct avr32_pm_rcause_t {
       unsigned int                :17;
       unsigned int spikedet       : 1;
       unsigned int bod33          : 1;
       unsigned int awire          : 1;
       unsigned int                : 1;
       unsigned int shdn           : 1;
       unsigned int jtag           : 1;
       unsigned int ocdrst         : 1;
       unsigned int cpuerr         : 1;
       unsigned int sleep          : 1;
       unsigned int                : 2;
       unsigned int wdt            : 1;
       unsigned int ext            : 1;
       unsigned int bod            : 1;
       unsigned int por            : 1;
} avr32_pm_rcause_t;

typedef struct avr32_pm_wcause_t {
       unsigned int                :14;
       unsigned int ast            : 1;
       unsigned int eic            : 1;
       unsigned int wcause         :16;
} avr32_pm_wcause_t;

typedef struct avr32_pm_protctrl_t {
       unsigned int                :31;
       unsigned int lock           : 1;
} avr32_pm_protctrl_t;

typedef struct avr32_pm_config_t {
       unsigned int                :24;
       unsigned int hsbpevc        : 1;
       unsigned int ocp            : 1;
       unsigned int                : 2;
       unsigned int pbd            : 1;
       unsigned int pbc            : 1;
       unsigned int pbb            : 1;
       unsigned int pba            : 1;
} avr32_pm_config_t;

typedef struct avr32_pm_version_t {
       unsigned int                :12;
       unsigned int variant        : 4;
       unsigned int                : 4;
       unsigned int version        :12;
} avr32_pm_version_t;

typedef struct avr32_pm_t {
   union {
          unsigned long                   mcctrl     ; // 0x0000
          avr32_pm_mcctrl_t               MCCTRL     ;
   };
   union {
          unsigned long                   cpusel     ; // 0x0004
          avr32_pm_cpusel_t               CPUSEL     ;
   };
   union {
          unsigned long                   hsbsel     ; // 0x0008
          avr32_pm_hsbsel_t               HSBSEL     ;
   };
   union {
          unsigned long                   pbasel     ; // 0x000c
          avr32_pm_pbasel_t               PBASEL     ;
   };
   union {
          unsigned long                   pbbsel     ; // 0x0010
          avr32_pm_pbbsel_t               PBBSEL     ;
   };
          unsigned char                   reserved1[0xc]; // 0x14
          unsigned long                   cpumask    ; // 0x0020
          unsigned long                   hsbmask    ; // 0x0024
          unsigned long                   pbamask    ; // 0x0028
          unsigned long                   pbbmask    ; // 0x002c
          unsigned char                   reserved2[0x10]; // 0x30
          unsigned long                   pbadivmask ; // 0x0040
          unsigned char                   reserved3[0x10]; // 0x44
   union {
          unsigned long                   cfdctrl    ; // 0x0054
          avr32_pm_cfdctrl_t              CFDCTRL    ;
   };
   union {
          unsigned long                   unlock     ; // 0x0058
          avr32_pm_unlock_t               UNLOCK     ;
   };
          unsigned char                   reserved4[0x64]; // 0x5c
   union {
          unsigned long                   ier        ; // 0x00c0
          avr32_pm_ier_t                  IER        ;
   };
   union {
          unsigned long                   idr        ; // 0x00c4
          avr32_pm_idr_t                  IDR        ;
   };
   union {
    const unsigned long                   imr        ; // 0x00c8
    const avr32_pm_imr_t                  IMR        ;
   };
   union {
    const unsigned long                   isr        ; // 0x00cc
    const avr32_pm_isr_t                  ISR        ;
   };
   union {
          unsigned long                   icr        ; // 0x00d0
          avr32_pm_icr_t                  ICR        ;
   };
   union {
    const unsigned long                   sr         ; // 0x00d4
    const avr32_pm_sr_t                   SR         ;
   };
          unsigned char                   reserved5[0x88]; // 0xd8
   union {
          unsigned long                   ppcr       ; // 0x0160
          avr32_pm_ppcr_t                 PPCR       ;
   };
          unsigned char                   reserved6[0x1c]; // 0x164
   union {
    const unsigned long                   rcause     ; // 0x0180
    const avr32_pm_rcause_t               RCAUSE     ;
   };
   union {
    const unsigned long                   wcause     ; // 0x0184
    const avr32_pm_wcause_t               WCAUSE     ;
   };
          unsigned long                   awen       ; // 0x0188
   union {
          unsigned long                   protctrl   ; // 0x018c
          avr32_pm_protctrl_t             PROTCTRL   ;
   };
          unsigned char                   reserved7[0x268]; // 0x190
   union {
    const unsigned long                   config     ; // 0x03f8
    const avr32_pm_config_t               CONFIG     ;
   };
   union {
    const unsigned long                   version    ; // 0x03fc
    const avr32_pm_version_t              VERSION    ;
   };
} avr32_pm_t;

#endif  /* #ifdef __AVR32_ABI_COMPILER__ */



#endif /* #ifdef _AVR32_PM_420_H_INCLUDED */

