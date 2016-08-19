/*****************************************************************************
 *
 * Copyright (C) 2008-2010 Atmel Corporation
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
 * 
 * Model        : AP7200
 * Revision     : $Revision$
 * Checkin Date : $Date$ 
 *
 ****************************************************************************/
#ifndef AVR32_OCD_O3_200_H_INCLUDED
#define AVR32_OCD_O3_200_H_INCLUDED

#define AVR32_OCD_O3_H_VERSION 200

#include "avr32/abi.h"

#define AVR32_OCD_ID                                   "O3"

#define AVR32_AXC                                      0x00000130
#define AVR32_AXC_AXE                                           8
#define AVR32_AXC_AXE_MASK                             0x00000100
#define AVR32_AXC_AXE_OFFSET                                    8
#define AVR32_AXC_AXE_SIZE                                      1
#define AVR32_AXC_AXO                                           9
#define AVR32_AXC_AXO_MASK                             0x00000200
#define AVR32_AXC_AXO_OFFSET                                    9
#define AVR32_AXC_AXO_SIZE                                      1
#define AVR32_AXC_AXS                                          14
#define AVR32_AXC_AXS_MASK                             0x0000c000
#define AVR32_AXC_AXS_OFFSET                                   14
#define AVR32_AXC_AXS_SIZE                                      2
#define AVR32_AXC_DDR                                          10
#define AVR32_AXC_DDR_MASK                             0x00000400
#define AVR32_AXC_DDR_OFFSET                                   10
#define AVR32_AXC_DDR_SIZE                                      1
#define AVR32_AXC_DIV                                           0
#define AVR32_AXC_DIV_MASK                             0x0000000f
#define AVR32_AXC_DIV_OFFSET                                    0
#define AVR32_AXC_DIV_SIZE                                      4
#define AVR32_AXC_LS                                           11
#define AVR32_AXC_LS_MASK                              0x00000800
#define AVR32_AXC_LS_OFFSET                                    11
#define AVR32_AXC_LS_SIZE                                       1
#define AVR32_BWA0A                                    0x00000078
#define AVR32_BWA0A_BWA                                         0
#define AVR32_BWA0A_BWA_MASK                           0xffffffff
#define AVR32_BWA0A_BWA_OFFSET                                  0
#define AVR32_BWA0A_BWA_SIZE                                   32
#define AVR32_BWA0B                                    0x0000007c
#define AVR32_BWA0B_BWA                                         0
#define AVR32_BWA0B_BWA_MASK                           0xffffffff
#define AVR32_BWA0B_BWA_OFFSET                                  0
#define AVR32_BWA0B_BWA_SIZE                                   32
#define AVR32_BWA1A                                    0x00000080
#define AVR32_BWA1A_BWA                                         0
#define AVR32_BWA1A_BWA_MASK                           0xffffffff
#define AVR32_BWA1A_BWA_OFFSET                                  0
#define AVR32_BWA1A_BWA_SIZE                                   32
#define AVR32_BWA1B                                    0x00000084
#define AVR32_BWA1B_BWA                                         0
#define AVR32_BWA1B_BWA_MASK                           0xffffffff
#define AVR32_BWA1B_BWA_OFFSET                                  0
#define AVR32_BWA1B_BWA_SIZE                                   32
#define AVR32_BWA2A                                    0x00000088
#define AVR32_BWA2A_BWA                                         0
#define AVR32_BWA2A_BWA_MASK                           0xffffffff
#define AVR32_BWA2A_BWA_OFFSET                                  0
#define AVR32_BWA2A_BWA_SIZE                                   32
#define AVR32_BWA2B                                    0x0000008c
#define AVR32_BWA2B_BWA                                         0
#define AVR32_BWA2B_BWA_MASK                           0xffffffff
#define AVR32_BWA2B_BWA_OFFSET                                  0
#define AVR32_BWA2B_BWA_SIZE                                   32
#define AVR32_BWA3A                                    0x00000090
#define AVR32_BWA3A_BWA                                         0
#define AVR32_BWA3A_BWA_MASK                           0xffffffff
#define AVR32_BWA3A_BWA_OFFSET                                  0
#define AVR32_BWA3A_BWA_SIZE                                   32
#define AVR32_BWA3B                                    0x00000094
#define AVR32_BWA3B_BWA                                         0
#define AVR32_BWA3B_BWA_MASK                           0xffffffff
#define AVR32_BWA3B_BWA_OFFSET                                  0
#define AVR32_BWA3B_BWA_SIZE                                   32
#define AVR32_BWC0A                                    0x00000058
#define AVR32_BWC0A_AME                                        25
#define AVR32_BWC0A_AME_MASK                           0x02000000
#define AVR32_BWC0A_AME_OFFSET                                 25
#define AVR32_BWC0A_AME_SIZE                                    1
#define AVR32_BWC0A_ASID                                        1
#define AVR32_BWC0A_ASIDEN                                      0
#define AVR32_BWC0A_ASIDEN_MASK                        0x00000001
#define AVR32_BWC0A_ASIDEN_OFFSET                               0
#define AVR32_BWC0A_ASIDEN_SIZE                                 1
#define AVR32_BWC0A_ASID_MASK                          0x000001fe
#define AVR32_BWC0A_ASID_OFFSET                                 1
#define AVR32_BWC0A_ASID_SIZE                                   8
#define AVR32_BWC0A_BWE                                        30
#define AVR32_BWC0A_BWE_BREAKPOINT_ENABLED             0x00000001
#define AVR32_BWC0A_BWE_DISABLED                       0x00000000
#define AVR32_BWC0A_BWE_MASK                           0xc0000000
#define AVR32_BWC0A_BWE_OFFSET                                 30
#define AVR32_BWC0A_BWE_SIZE                                    2
#define AVR32_BWC0A_BWE_WATCHPOINT_ENABLED             0x00000003
#define AVR32_BWC0A_EOC                                        14
#define AVR32_BWC0A_EOC_MASK                           0x00004000
#define AVR32_BWC0A_EOC_OFFSET                                 14
#define AVR32_BWC0A_EOC_SIZE                                    1
#define AVR32_BWC0B                                    0x0000005c
#define AVR32_BWC0B_ASID                                        1
#define AVR32_BWC0B_ASIDEN                                      0
#define AVR32_BWC0B_ASIDEN_MASK                        0x00000001
#define AVR32_BWC0B_ASIDEN_OFFSET                               0
#define AVR32_BWC0B_ASIDEN_SIZE                                 1
#define AVR32_BWC0B_ASID_MASK                          0x000001fe
#define AVR32_BWC0B_ASID_OFFSET                                 1
#define AVR32_BWC0B_ASID_SIZE                                   8
#define AVR32_BWC0B_BWE                                        30
#define AVR32_BWC0B_BWE_BREAKPOINT_ENABLED             0x00000001
#define AVR32_BWC0B_BWE_DISABLED                       0x00000000
#define AVR32_BWC0B_BWE_MASK                           0xc0000000
#define AVR32_BWC0B_BWE_OFFSET                                 30
#define AVR32_BWC0B_BWE_SIZE                                    2
#define AVR32_BWC0B_BWE_WATCHPOINT_ENABLED             0x00000003
#define AVR32_BWC0B_EOC                                        14
#define AVR32_BWC0B_EOC_MASK                           0x00004000
#define AVR32_BWC0B_EOC_OFFSET                                 14
#define AVR32_BWC0B_EOC_SIZE                                    1
#define AVR32_BWC1A                                    0x00000060
#define AVR32_BWC1A_AME                                        25
#define AVR32_BWC1A_AME_MASK                           0x02000000
#define AVR32_BWC1A_AME_OFFSET                                 25
#define AVR32_BWC1A_AME_SIZE                                    1
#define AVR32_BWC1A_ASID                                        1
#define AVR32_BWC1A_ASIDEN                                      0
#define AVR32_BWC1A_ASIDEN_MASK                        0x00000001
#define AVR32_BWC1A_ASIDEN_OFFSET                               0
#define AVR32_BWC1A_ASIDEN_SIZE                                 1
#define AVR32_BWC1A_ASID_MASK                          0x000001fe
#define AVR32_BWC1A_ASID_OFFSET                                 1
#define AVR32_BWC1A_ASID_SIZE                                   8
#define AVR32_BWC1A_BWE                                        30
#define AVR32_BWC1A_BWE_BREAKPOINT_ENABLED             0x00000001
#define AVR32_BWC1A_BWE_DISABLED                       0x00000000
#define AVR32_BWC1A_BWE_MASK                           0xc0000000
#define AVR32_BWC1A_BWE_OFFSET                                 30
#define AVR32_BWC1A_BWE_SIZE                                    2
#define AVR32_BWC1A_BWE_WATCHPOINT_ENABLED             0x00000003
#define AVR32_BWC1A_EOC                                        14
#define AVR32_BWC1A_EOC_MASK                           0x00004000
#define AVR32_BWC1A_EOC_OFFSET                                 14
#define AVR32_BWC1A_EOC_SIZE                                    1
#define AVR32_BWC1B                                    0x00000064
#define AVR32_BWC1B_ASID                                        1
#define AVR32_BWC1B_ASIDEN                                      0
#define AVR32_BWC1B_ASIDEN_MASK                        0x00000001
#define AVR32_BWC1B_ASIDEN_OFFSET                               0
#define AVR32_BWC1B_ASIDEN_SIZE                                 1
#define AVR32_BWC1B_ASID_MASK                          0x000001fe
#define AVR32_BWC1B_ASID_OFFSET                                 1
#define AVR32_BWC1B_ASID_SIZE                                   8
#define AVR32_BWC1B_BWE                                        30
#define AVR32_BWC1B_BWE_BREAKPOINT_ENABLED             0x00000001
#define AVR32_BWC1B_BWE_DISABLED                       0x00000000
#define AVR32_BWC1B_BWE_MASK                           0xc0000000
#define AVR32_BWC1B_BWE_OFFSET                                 30
#define AVR32_BWC1B_BWE_SIZE                                    2
#define AVR32_BWC1B_BWE_WATCHPOINT_ENABLED             0x00000003
#define AVR32_BWC1B_EOC                                        14
#define AVR32_BWC1B_EOC_MASK                           0x00004000
#define AVR32_BWC1B_EOC_OFFSET                                 14
#define AVR32_BWC1B_EOC_SIZE                                    1
#define AVR32_BWC2A                                    0x00000068
#define AVR32_BWC2A_AME                                        25
#define AVR32_BWC2A_AME_MASK                           0x02000000
#define AVR32_BWC2A_AME_OFFSET                                 25
#define AVR32_BWC2A_AME_SIZE                                    1
#define AVR32_BWC2A_ASID                                        1
#define AVR32_BWC2A_ASIDEN                                      0
#define AVR32_BWC2A_ASIDEN_MASK                        0x00000001
#define AVR32_BWC2A_ASIDEN_OFFSET                               0
#define AVR32_BWC2A_ASIDEN_SIZE                                 1
#define AVR32_BWC2A_ASID_MASK                          0x000001fe
#define AVR32_BWC2A_ASID_OFFSET                                 1
#define AVR32_BWC2A_ASID_SIZE                                   8
#define AVR32_BWC2A_BWE                                        30
#define AVR32_BWC2A_BWE_BREAKPOINT_ENABLED             0x00000001
#define AVR32_BWC2A_BWE_DISABLED                       0x00000000
#define AVR32_BWC2A_BWE_MASK                           0xc0000000
#define AVR32_BWC2A_BWE_OFFSET                                 30
#define AVR32_BWC2A_BWE_SIZE                                    2
#define AVR32_BWC2A_BWE_WATCHPOINT_ENABLED             0x00000003
#define AVR32_BWC2A_EOC                                        14
#define AVR32_BWC2A_EOC_MASK                           0x00004000
#define AVR32_BWC2A_EOC_OFFSET                                 14
#define AVR32_BWC2A_EOC_SIZE                                    1
#define AVR32_BWC2B                                    0x0000006c
#define AVR32_BWC2B_ASID                                        1
#define AVR32_BWC2B_ASIDEN                                      0
#define AVR32_BWC2B_ASIDEN_MASK                        0x00000001
#define AVR32_BWC2B_ASIDEN_OFFSET                               0
#define AVR32_BWC2B_ASIDEN_SIZE                                 1
#define AVR32_BWC2B_ASID_MASK                          0x000001fe
#define AVR32_BWC2B_ASID_OFFSET                                 1
#define AVR32_BWC2B_ASID_SIZE                                   8
#define AVR32_BWC2B_BWE                                        30
#define AVR32_BWC2B_BWE_BREAKPOINT_ENABLED             0x00000001
#define AVR32_BWC2B_BWE_DISABLED                       0x00000000
#define AVR32_BWC2B_BWE_MASK                           0xc0000000
#define AVR32_BWC2B_BWE_OFFSET                                 30
#define AVR32_BWC2B_BWE_SIZE                                    2
#define AVR32_BWC2B_BWE_WATCHPOINT_ENABLED             0x00000003
#define AVR32_BWC2B_EOC                                        14
#define AVR32_BWC2B_EOC_MASK                           0x00004000
#define AVR32_BWC2B_EOC_OFFSET                                 14
#define AVR32_BWC2B_EOC_SIZE                                    1
#define AVR32_BWC3A                                    0x00000070
#define AVR32_BWC3A_ASID                                        1
#define AVR32_BWC3A_ASIDEN                                      0
#define AVR32_BWC3A_ASIDEN_MASK                        0x00000001
#define AVR32_BWC3A_ASIDEN_OFFSET                               0
#define AVR32_BWC3A_ASIDEN_SIZE                                 1
#define AVR32_BWC3A_ASID_MASK                          0x000001fe
#define AVR32_BWC3A_ASID_OFFSET                                 1
#define AVR32_BWC3A_ASID_SIZE                                   8
#define AVR32_BWC3A_BME                                        20
#define AVR32_BWC3A_BME_MASK                           0x00f00000
#define AVR32_BWC3A_BME_OFFSET                                 20
#define AVR32_BWC3A_BME_SIZE                                    4
#define AVR32_BWC3A_BRW                                        28
#define AVR32_BWC3A_BRW_ANY_ACCESS_BREAK               0x00000002
#define AVR32_BWC3A_BRW_MASK                           0x30000000
#define AVR32_BWC3A_BRW_OFFSET                                 28
#define AVR32_BWC3A_BRW_READ_BREAK                     0x00000000
#define AVR32_BWC3A_BRW_SIZE                                    2
#define AVR32_BWC3A_BRW_WRITE_BREAK                    0x00000001
#define AVR32_BWC3A_BWE                                        30
#define AVR32_BWC3A_BWE_BREAKPOINT_ENABLED             0x00000001
#define AVR32_BWC3A_BWE_DISABLED                       0x00000000
#define AVR32_BWC3A_BWE_MASK                           0xc0000000
#define AVR32_BWC3A_BWE_OFFSET                                 30
#define AVR32_BWC3A_BWE_SIZE                                    2
#define AVR32_BWC3A_BWE_WATCHPOINT_ENABLED             0x00000003
#define AVR32_BWC3A_BWO                                        16
#define AVR32_BWC3A_BWO_BWA                            0x00000002
#define AVR32_BWC3A_BWO_BWD                            0x00000001
#define AVR32_BWC3A_BWO_MASK                           0x00030000
#define AVR32_BWC3A_BWO_OFFSET                                 16
#define AVR32_BWC3A_BWO_SIZE                                    2
#define AVR32_BWC3A_SIZE                                        9
#define AVR32_BWC3A_SIZE_BYTE_ACCESS                   0x00000004
#define AVR32_BWC3A_SIZE_DISREGARD                     0x00000000
#define AVR32_BWC3A_SIZE_DOUBLE_WORD_ACCESS            0x00000007
#define AVR32_BWC3A_SIZE_HALFWORD_ACCESS               0x00000005
#define AVR32_BWC3A_SIZE_MASK                          0x00000e00
#define AVR32_BWC3A_SIZE_OFFSET                                 9
#define AVR32_BWC3A_SIZE_SIZE                                   3
#define AVR32_BWC3A_SIZE_WORD_ACCESS                   0x00000006
#define AVR32_BWC3B                                    0x00000074
#define AVR32_BWC3B_ASID                                        1
#define AVR32_BWC3B_ASIDEN                                      0
#define AVR32_BWC3B_ASIDEN_MASK                        0x00000001
#define AVR32_BWC3B_ASIDEN_OFFSET                               0
#define AVR32_BWC3B_ASIDEN_SIZE                                 1
#define AVR32_BWC3B_ASID_MASK                          0x000001fe
#define AVR32_BWC3B_ASID_OFFSET                                 1
#define AVR32_BWC3B_ASID_SIZE                                   8
#define AVR32_BWC3B_BME                                        20
#define AVR32_BWC3B_BME_MASK                           0x00f00000
#define AVR32_BWC3B_BME_OFFSET                                 20
#define AVR32_BWC3B_BME_SIZE                                    4
#define AVR32_BWC3B_BRW                                        28
#define AVR32_BWC3B_BRW_ANY_ACCESS_BREAK               0x00000002
#define AVR32_BWC3B_BRW_MASK                           0x30000000
#define AVR32_BWC3B_BRW_OFFSET                                 28
#define AVR32_BWC3B_BRW_READ_BREAK                     0x00000000
#define AVR32_BWC3B_BRW_SIZE                                    2
#define AVR32_BWC3B_BRW_WRITE_BREAK                    0x00000001
#define AVR32_BWC3B_BWE                                        30
#define AVR32_BWC3B_BWE_BREAKPOINT_ENABLED             0x00000001
#define AVR32_BWC3B_BWE_DISABLED                       0x00000000
#define AVR32_BWC3B_BWE_MASK                           0xc0000000
#define AVR32_BWC3B_BWE_OFFSET                                 30
#define AVR32_BWC3B_BWE_SIZE                                    2
#define AVR32_BWC3B_BWE_WATCHPOINT_ENABLED             0x00000003
#define AVR32_BWC3B_BWO                                        16
#define AVR32_BWC3B_BWO_BWA                            0x00000002
#define AVR32_BWC3B_BWO_BWD                            0x00000001
#define AVR32_BWC3B_BWO_MASK                           0x00030000
#define AVR32_BWC3B_BWO_OFFSET                                 16
#define AVR32_BWC3B_BWO_SIZE                                    2
#define AVR32_BWC3B_SIZE                                        9
#define AVR32_BWC3B_SIZE_BYTE_ACCESS                   0x00000004
#define AVR32_BWC3B_SIZE_DISREGARD                     0x00000000
#define AVR32_BWC3B_SIZE_DOUBLE_WORD_ACCESS            0x00000007
#define AVR32_BWC3B_SIZE_HALFWORD_ACCESS               0x00000005
#define AVR32_BWC3B_SIZE_MASK                          0x00000e00
#define AVR32_BWC3B_SIZE_OFFSET                                 9
#define AVR32_BWC3B_SIZE_SIZE                                   3
#define AVR32_BWC3B_SIZE_WORD_ACCESS                   0x00000006
#define AVR32_BWD3A                                    0x00000098
#define AVR32_BWD3A_BWD                                         0
#define AVR32_BWD3A_BWD_MASK                           0xffffffff
#define AVR32_BWD3A_BWD_OFFSET                                  0
#define AVR32_BWD3A_BWD_SIZE                                   32
#define AVR32_BWD3B                                    0x0000009c
#define AVR32_BWD3B_BWD                                         0
#define AVR32_BWD3B_BWD_MASK                           0xffffffff
#define AVR32_BWD3B_BWD_OFFSET                                  0
#define AVR32_BWD3B_BWD_SIZE                                   32
#define AVR32_CPUCM                                    0x0000010c
#define AVR32_CPUCM_BEM                                         1
#define AVR32_CPUCM_BEM_MASK                           0x00000002
#define AVR32_CPUCM_BEM_OFFSET                                  1
#define AVR32_CPUCM_BEM_SIZE                                    1
#define AVR32_CPUCM_FEM                                         2
#define AVR32_CPUCM_FEM_MASK                           0x00000004
#define AVR32_CPUCM_FEM_OFFSET                                  2
#define AVR32_CPUCM_FEM_SIZE                                    1
#define AVR32_CPUCM_IBEM                                        4
#define AVR32_CPUCM_IBEM_MASK                          0x00000010
#define AVR32_CPUCM_IBEM_OFFSET                                 4
#define AVR32_CPUCM_IBEM_SIZE                                   1
#define AVR32_CPUCM_IEEM                                        5
#define AVR32_CPUCM_IEEM_MASK                          0x00000020
#define AVR32_CPUCM_IEEM_OFFSET                                 5
#define AVR32_CPUCM_IEEM_SIZE                                   1
#define AVR32_CPUCM_REM                                         3
#define AVR32_CPUCM_REM_MASK                           0x00000008
#define AVR32_CPUCM_REM_OFFSET                                  3
#define AVR32_CPUCM_REM_SIZE                                    1
#define AVR32_DC                                       0x00000008
#define AVR32_DCCPU                                    0x00000110
#define AVR32_DCCPU_DATA                                        0
#define AVR32_DCCPU_DATA_MASK                          0xffffffff
#define AVR32_DCCPU_DATA_OFFSET                                 0
#define AVR32_DCCPU_DATA_SIZE                                  32
#define AVR32_DCEMU                                    0x00000114
#define AVR32_DCEMU_DATA                                        0
#define AVR32_DCEMU_DATA_MASK                          0xffffffff
#define AVR32_DCEMU_DATA_OFFSET                                 0
#define AVR32_DCEMU_DATA_SIZE                                  32
#define AVR32_DCSR                                     0x00000118
#define AVR32_DCSR_CPUD                                         0
#define AVR32_DCSR_CPUD_MASK                           0x00000001
#define AVR32_DCSR_CPUD_OFFSET                                  0
#define AVR32_DCSR_CPUD_SIZE                                    1
#define AVR32_DCSR_EMUD                                         1
#define AVR32_DCSR_EMUD_MASK                           0x00000002
#define AVR32_DCSR_EMUD_OFFSET                                  1
#define AVR32_DCSR_EMUD_SIZE                                    1
#define AVR32_DC_ABORT                                         31
#define AVR32_DC_ABORT_MASK                            0x80000000
#define AVR32_DC_ABORT_OFFSET                                  31
#define AVR32_DC_ABORT_SIZE                                     1
#define AVR32_DC_DBE                                           13
#define AVR32_DC_DBE_MASK                              0x00002000
#define AVR32_DC_DBE_OFFSET                                    13
#define AVR32_DC_DBE_SIZE                                       1
#define AVR32_DC_DBR                                           12
#define AVR32_DC_DBR_MASK                              0x00001000
#define AVR32_DC_DBR_OFFSET                                    12
#define AVR32_DC_DBR_SIZE                                       1
#define AVR32_DC_EIC                                            3
#define AVR32_DC_EIC_BREAKPOINT                        0x00000001
#define AVR32_DC_EIC_MASK                              0x00000018
#define AVR32_DC_EIC_NOP                               0x00000002
#define AVR32_DC_EIC_OFFSET                                     3
#define AVR32_DC_EIC_PROGRAM_AND_DATA_TRACE            0x00000000
#define AVR32_DC_EIC_SIZE                                       2
#define AVR32_DC_EOS                                           20
#define AVR32_DC_EOS_BREAKPOINT_WATCHPOINT             0x00000002
#define AVR32_DC_EOS_DEBUG_MODE                        0x00000001
#define AVR32_DC_EOS_MASK                              0x00300000
#define AVR32_DC_EOS_NOP                               0x00000000
#define AVR32_DC_EOS_OFFSET                                    20
#define AVR32_DC_EOS_SIZE                                       2
#define AVR32_DC_EOS_TXQ                               0x00000003
#define AVR32_DC_IFM                                           24
#define AVR32_DC_IFM_MASK                              0x01000000
#define AVR32_DC_IFM_OFFSET                                    24
#define AVR32_DC_IFM_SIZE                                       1
#define AVR32_DC_IRP                                           23
#define AVR32_DC_IRP_MASK                              0x00800000
#define AVR32_DC_IRP_OFFSET                                    23
#define AVR32_DC_IRP_SIZE                                       1
#define AVR32_DC_MM                                            29
#define AVR32_DC_MM_MASK                               0x20000000
#define AVR32_DC_MM_OFFSET                                     29
#define AVR32_DC_MM_SIZE                                        1
#define AVR32_DC_ORP                                           28
#define AVR32_DC_ORP_MASK                              0x10000000
#define AVR32_DC_ORP_OFFSET                                    28
#define AVR32_DC_ORP_SIZE                                       1
#define AVR32_DC_OVC                                            5
#define AVR32_DC_OVC_DELAY_CPU_BTM                     0x00000001
#define AVR32_DC_OVC_DELAY_CPU_BTM_DTM                 0x00000003
#define AVR32_DC_OVC_DELAY_CPU_DTM                     0x00000002
#define AVR32_DC_OVC_MASK                              0x000000e0
#define AVR32_DC_OVC_OFFSET                                     5
#define AVR32_DC_OVC_OVERRUN                           0x00000000
#define AVR32_DC_OVC_SIZE                                       3
#define AVR32_DC_RES                                           30
#define AVR32_DC_RES_MASK                              0x40000000
#define AVR32_DC_RES_OFFSET                                    30
#define AVR32_DC_RES_SIZE                                       1
#define AVR32_DC_RID                                           27
#define AVR32_DC_RID_MASK                              0x08000000
#define AVR32_DC_RID_OFFSET                                    27
#define AVR32_DC_RID_SIZE                                       1
#define AVR32_DC_SQA                                           22
#define AVR32_DC_SQA_MASK                              0x00400000
#define AVR32_DC_SQA_OFFSET                                    22
#define AVR32_DC_SQA_SIZE                                       1
#define AVR32_DC_SS                                             8
#define AVR32_DC_SS_MASK                               0x00000100
#define AVR32_DC_SS_OFFSET                                      8
#define AVR32_DC_SS_SIZE                                        1
#define AVR32_DC_TM                                             0
#define AVR32_DC_TM_BTM                                0x00000004
#define AVR32_DC_TM_DTM                                0x00000002
#define AVR32_DC_TM_MASK                               0x00000007
#define AVR32_DC_TM_NO_TRACE                           0x00000000
#define AVR32_DC_TM_OFFSET                                      0
#define AVR32_DC_TM_OTM                                0x00000001
#define AVR32_DC_TM_SIZE                                        3
#define AVR32_DC_TOZ                                           25
#define AVR32_DC_TOZ_MASK                              0x02000000
#define AVR32_DC_TOZ_OFFSET                                    25
#define AVR32_DC_TOZ_SIZE                                       1
#define AVR32_DID                                      0x00000000
#define AVR32_DID_MID                                           1
#define AVR32_DID_MID_ATMEL                            0x0000001f
#define AVR32_DID_MID_MASK                             0x00000ffe
#define AVR32_DID_MID_OFFSET                                    1
#define AVR32_DID_MID_SIZE                                     11
#define AVR32_DID_PN                                           12
#define AVR32_DID_PN_MASK                              0x0ffff000
#define AVR32_DID_PN_OFFSET                                    12
#define AVR32_DID_PN_SIZE                                      16
#define AVR32_DID_RN                                           28
#define AVR32_DID_RN_MASK                              0xf0000000
#define AVR32_DID_RN_OFFSET                                    28
#define AVR32_DID_RN_SIZE                                       4
#define AVR32_DINST                                    0x00000104
#define AVR32_DINST_DINST                                       0
#define AVR32_DINST_DINST_MASK                         0xffffffff
#define AVR32_DINST_DINST_OFFSET                                0
#define AVR32_DINST_DINST_SIZE                                 32
#define AVR32_DPC                                      0x00000108
#define AVR32_DS                                       0x00000010
#define AVR32_DS_BOZ                                           25
#define AVR32_DS_BOZ_MASK                              0x02000000
#define AVR32_DS_BOZ_OFFSET                                    25
#define AVR32_DS_BOZ_SIZE                                       1
#define AVR32_DS_BP                                             8
#define AVR32_DS_BP_MASK                               0x0000ff00
#define AVR32_DS_BP_OFFSET                                      8
#define AVR32_DS_BP_SIZE                                        8
#define AVR32_DS_DBA                                           26
#define AVR32_DS_DBA_MASK                              0x04000000
#define AVR32_DS_DBA_OFFSET                                    26
#define AVR32_DS_DBA_SIZE                                       1
#define AVR32_DS_DBS                                            5
#define AVR32_DS_DBS_MASK                              0x00000020
#define AVR32_DS_DBS_OFFSET                                     5
#define AVR32_DS_DBS_SIZE                                       1
#define AVR32_DS_EXB                                           27
#define AVR32_DS_EXB_MASK                              0x08000000
#define AVR32_DS_EXB_OFFSET                                    27
#define AVR32_DS_EXB_SIZE                                       1
#define AVR32_DS_HWB                                            2
#define AVR32_DS_HWB_MASK                              0x00000004
#define AVR32_DS_HWB_OFFSET                                     2
#define AVR32_DS_HWB_SIZE                                       1
#define AVR32_DS_INC                                           24
#define AVR32_DS_INC_MASK                              0x01000000
#define AVR32_DS_INC_OFFSET                                    24
#define AVR32_DS_INC_SIZE                                       1
#define AVR32_DS_NTBF                                          28
#define AVR32_DS_NTBF_MASK                             0x10000000
#define AVR32_DS_NTBF_OFFSET                                   28
#define AVR32_DS_NTBF_SIZE                                      1
#define AVR32_DS_SSS                                            0
#define AVR32_DS_SSS_MASK                              0x00000001
#define AVR32_DS_SSS_OFFSET                                     0
#define AVR32_DS_SSS_SIZE                                       1
#define AVR32_DS_STP                                            4
#define AVR32_DS_STP_MASK                              0x00000010
#define AVR32_DS_STP_OFFSET                                     4
#define AVR32_DS_STP_SIZE                                       1
#define AVR32_DS_SWB                                            1
#define AVR32_DS_SWB_MASK                              0x00000002
#define AVR32_DS_SWB_OFFSET                                     1
#define AVR32_DS_SWB_SIZE                                       1
#define AVR32_DTC                                      0x00000034
#define AVR32_DTC_ASID0                                         3
#define AVR32_DTC_ASID0EN                                       2
#define AVR32_DTC_ASID0EN_MASK                         0x00000004
#define AVR32_DTC_ASID0EN_OFFSET                                2
#define AVR32_DTC_ASID0EN_SIZE                                  1
#define AVR32_DTC_ASID0_MASK                           0x000007f8
#define AVR32_DTC_ASID0_OFFSET                                  3
#define AVR32_DTC_ASID0_SIZE                                    8
#define AVR32_DTC_ASID1                                        12
#define AVR32_DTC_ASID1EN                                      11
#define AVR32_DTC_ASID1EN_MASK                         0x00000800
#define AVR32_DTC_ASID1EN_OFFSET                               11
#define AVR32_DTC_ASID1EN_SIZE                                  1
#define AVR32_DTC_ASID1_MASK                           0x000ff000
#define AVR32_DTC_ASID1_OFFSET                                 12
#define AVR32_DTC_ASID1_SIZE                                    8
#define AVR32_DTC_RWT0                                         30
#define AVR32_DTC_RWT0_DATA_READ                       0x00000001
#define AVR32_DTC_RWT0_DATA_READ_WRITE                 0x00000003
#define AVR32_DTC_RWT0_DATA_WRITE                      0x00000002
#define AVR32_DTC_RWT0_MASK                            0xc0000000
#define AVR32_DTC_RWT0_NO_TRACE                        0x00000000
#define AVR32_DTC_RWT0_OFFSET                                  30
#define AVR32_DTC_RWT0_SIZE                                     2
#define AVR32_DTC_RWT1                                         28
#define AVR32_DTC_RWT1_DATA_READ                       0x00000001
#define AVR32_DTC_RWT1_DATA_READ_WRITE                 0x00000003
#define AVR32_DTC_RWT1_DATA_WRITE                      0x00000002
#define AVR32_DTC_RWT1_MASK                            0x30000000
#define AVR32_DTC_RWT1_NO_TRACE                        0x00000000
#define AVR32_DTC_RWT1_OFFSET                                  28
#define AVR32_DTC_RWT1_SIZE                                     2
#define AVR32_DTC_T0WP                                          0
#define AVR32_DTC_T0WP_MASK                            0x00000001
#define AVR32_DTC_T0WP_OFFSET                                   0
#define AVR32_DTC_T0WP_SIZE                                     1
#define AVR32_DTC_T1WP                                          1
#define AVR32_DTC_T1WP_MASK                            0x00000002
#define AVR32_DTC_T1WP_OFFSET                                   1
#define AVR32_DTC_T1WP_SIZE                                     1
#define AVR32_DTEA0                                    0x00000048
#define AVR32_DTEA0_DTEA                                        0
#define AVR32_DTEA0_DTEA_MASK                          0xffffffff
#define AVR32_DTEA0_DTEA_OFFSET                                 0
#define AVR32_DTEA0_DTEA_SIZE                                  32
#define AVR32_DTEA1                                    0x0000004c
#define AVR32_DTEA1_DTEA                                        0
#define AVR32_DTEA1_DTEA_MASK                          0xffffffff
#define AVR32_DTEA1_DTEA_OFFSET                                 0
#define AVR32_DTEA1_DTEA_SIZE                                  32
#define AVR32_DTSA0                                    0x00000038
#define AVR32_DTSA0_DTSA                                        0
#define AVR32_DTSA0_DTSA_MASK                          0xffffffff
#define AVR32_DTSA0_DTSA_OFFSET                                 0
#define AVR32_DTSA0_DTSA_SIZE                                  32
#define AVR32_DTSA1                                    0x0000003c
#define AVR32_DTSA1_DTSA                                        0
#define AVR32_DTSA1_DTSA_MASK                          0xffffffff
#define AVR32_DTSA1_DTSA_OFFSET                                 0
#define AVR32_DTSA1_DTSA_SIZE                                  32
#define AVR32_EPC3                                     0x0000012c
#define AVR32_EPC3_DWE                                          2
#define AVR32_EPC3_DWE_MASK                            0x00000004
#define AVR32_EPC3_DWE_OFFSET                                   2
#define AVR32_EPC3_DWE_SIZE                                     1
#define AVR32_EPC3_RNG                                          0
#define AVR32_EPC3_RNG_DISABLED                        0x00000000
#define AVR32_EPC3_RNG_EXCLUSIVE                       0x00000001
#define AVR32_EPC3_RNG_INCLUSIVE                       0x00000002
#define AVR32_EPC3_RNG_MASK                            0x00000003
#define AVR32_EPC3_RNG_OFFSET                                   0
#define AVR32_EPC3_RNG_SIZE                                     2
#define AVR32_NXCFG                                    0x00000100
#define AVR32_NXCFG_NXARCH                                      0
#define AVR32_NXCFG_NXARCH_AVR32A                      0x00000001
#define AVR32_NXCFG_NXARCH_AVR32B                      0x00000000
#define AVR32_NXCFG_NXARCH_MASK                        0x0000000f
#define AVR32_NXCFG_NXARCH_OFFSET                               0
#define AVR32_NXCFG_NXARCH_SIZE                                 4
#define AVR32_NXCFG_NXDB                                       12
#define AVR32_NXCFG_NXDB_MASK                          0x0000f000
#define AVR32_NXCFG_NXDB_OFFSET                                12
#define AVR32_NXCFG_NXDB_SIZE                                   4
#define AVR32_NXCFG_NXDMA                                      28
#define AVR32_NXCFG_NXDMA_MASK                         0x10000000
#define AVR32_NXCFG_NXDMA_OFFSET                               28
#define AVR32_NXCFG_NXDMA_SIZE                                  1
#define AVR32_NXCFG_NXDRT                                      24
#define AVR32_NXCFG_NXDRT_MASK                         0x01000000
#define AVR32_NXCFG_NXDRT_OFFSET                               24
#define AVR32_NXCFG_NXDRT_SIZE                                  1
#define AVR32_NXCFG_NXDTC                                      25
#define AVR32_NXCFG_NXDTC_MASK                         0x0e000000
#define AVR32_NXCFG_NXDTC_OFFSET                               25
#define AVR32_NXCFG_NXDTC_SIZE                                  3
#define AVR32_NXCFG_NXDWT                                      23
#define AVR32_NXCFG_NXDWT_MASK                         0x00800000
#define AVR32_NXCFG_NXDWT_OFFSET                               23
#define AVR32_NXCFG_NXDWT_SIZE                                  1
#define AVR32_NXCFG_NXMDO                                      17
#define AVR32_NXCFG_NXMDO_MASK                         0x001e0000
#define AVR32_NXCFG_NXMDO_OFFSET                               17
#define AVR32_NXCFG_NXMDO_SIZE                                  4
#define AVR32_NXCFG_NXMSEO                                     16
#define AVR32_NXCFG_NXMSEO_MASK                        0x00010000
#define AVR32_NXCFG_NXMSEO_OFFSET                              16
#define AVR32_NXCFG_NXMSEO_SIZE                                 1
#define AVR32_NXCFG_NXOCD                                       4
#define AVR32_NXCFG_NXOCD_AVR32AP                      0x00000000
#define AVR32_NXCFG_NXOCD_AVR32UC                      0x00000001
#define AVR32_NXCFG_NXOCD_MASK                         0x000000f0
#define AVR32_NXCFG_NXOCD_OFFSET                                4
#define AVR32_NXCFG_NXOCD_SIZE                                  4
#define AVR32_NXCFG_NXOT                                       22
#define AVR32_NXCFG_NXOT_MASK                          0x00400000
#define AVR32_NXCFG_NXOT_OFFSET                                22
#define AVR32_NXCFG_NXOT_SIZE                                   1
#define AVR32_NXCFG_NXPCB                                       8
#define AVR32_NXCFG_NXPCB_MASK                         0x00000f00
#define AVR32_NXCFG_NXPCB_OFFSET                                8
#define AVR32_NXCFG_NXPCB_SIZE                                  4
#define AVR32_NXCFG_NXPT                                       21
#define AVR32_NXCFG_NXPT_MASK                          0x00200000
#define AVR32_NXCFG_NXPT_OFFSET                                21
#define AVR32_NXCFG_NXPT_SIZE                                   1
#define AVR32_PID                                      0x0000011c
#define AVR32_PID_PROCESS                                       0
#define AVR32_PID_PROCESS_MASK                         0xffffffff
#define AVR32_PID_PROCESS_OFFSET                                0
#define AVR32_PID_PROCESS_SIZE                                 32
#define AVR32_RWA                                      0x00000024
#define AVR32_RWA_RWA                                           0
#define AVR32_RWA_RWA_MASK                             0xffffffff
#define AVR32_RWA_RWA_OFFSET                                    0
#define AVR32_RWA_RWA_SIZE                                     32
#define AVR32_RWCS                                     0x0000001c
#define AVR32_RWCS_AC                                          31
#define AVR32_RWCS_AC_MASK                             0x80000000
#define AVR32_RWCS_AC_OFFSET                                   31
#define AVR32_RWCS_AC_SIZE                                      1
#define AVR32_RWCS_CCTRL                                       25
#define AVR32_RWCS_CCTRL_AUTO                          0x00000000
#define AVR32_RWCS_CCTRL_CACHED                        0x00000001
#define AVR32_RWCS_CCTRL_MASK                          0x06000000
#define AVR32_RWCS_CCTRL_OFFSET                                25
#define AVR32_RWCS_CCTRL_SIZE                                   2
#define AVR32_RWCS_CCTRL_UNCACHED                      0x00000002
#define AVR32_RWCS_CNT                                          2
#define AVR32_RWCS_CNT_MASK                            0x0000fffc
#define AVR32_RWCS_CNT_OFFSET                                   2
#define AVR32_RWCS_CNT_SIZE                                    14
#define AVR32_RWCS_CRC                                         19
#define AVR32_RWCS_CRC_MASK                            0x00080000
#define AVR32_RWCS_CRC_OFFSET                                  19
#define AVR32_RWCS_CRC_SIZE                                     1
#define AVR32_RWCS_DV                                           0
#define AVR32_RWCS_DV_MASK                             0x00000001
#define AVR32_RWCS_DV_OFFSET                                    0
#define AVR32_RWCS_DV_SIZE                                      1
#define AVR32_RWCS_ERR                                          1
#define AVR32_RWCS_ERR_MASK                            0x00000002
#define AVR32_RWCS_ERR_OFFSET                                   1
#define AVR32_RWCS_ERR_SIZE                                     1
#define AVR32_RWCS_NTBC                                        20
#define AVR32_RWCS_NTBC_BREAKPOINT                     0x00000002
#define AVR32_RWCS_NTBC_DISABLE                        0x00000001
#define AVR32_RWCS_NTBC_MASK                           0x00300000
#define AVR32_RWCS_NTBC_OFFSET                                 20
#define AVR32_RWCS_NTBC_OVERWRITE                      0x00000000
#define AVR32_RWCS_NTBC_SIZE                                    2
#define AVR32_RWCS_NTE                                         22
#define AVR32_RWCS_NTE_MASK                            0x00400000
#define AVR32_RWCS_NTE_OFFSET                                  22
#define AVR32_RWCS_NTE_SIZE                                     1
#define AVR32_RWCS_RW                                          30
#define AVR32_RWCS_RW_MASK                             0x40000000
#define AVR32_RWCS_RW_OFFSET                                   30
#define AVR32_RWCS_RW_READ                             0x00000000
#define AVR32_RWCS_RW_SIZE                                      1
#define AVR32_RWCS_RW_WRITE                            0x00000001
#define AVR32_RWCS_SZ                                          27
#define AVR32_RWCS_SZ_BYTE                             0x00000000
#define AVR32_RWCS_SZ_HALFWORD                         0x00000001
#define AVR32_RWCS_SZ_MASK                             0x38000000
#define AVR32_RWCS_SZ_OFFSET                                   27
#define AVR32_RWCS_SZ_SIZE                                      3
#define AVR32_RWCS_SZ_WORD                             0x00000002
#define AVR32_RWCS_WRAPPED                                     24
#define AVR32_RWCS_WRAPPED_MASK                        0x01000000
#define AVR32_RWCS_WRAPPED_OFFSET                              24
#define AVR32_RWCS_WRAPPED_SIZE                                 1
#define AVR32_RWD                                      0x00000028
#define AVR32_RWD_RWD                                           0
#define AVR32_RWD_RWD_MASK                             0xffffffff
#define AVR32_RWD_RWD_OFFSET                                    0
#define AVR32_RWD_RWD_SIZE                                     32
#define AVR32_WT                                       0x0000002c
#define AVR32_WT_DTE                                           20
#define AVR32_WT_DTE_DATA_3A                           0x00000006
#define AVR32_WT_DTE_DATA_3B                           0x00000007
#define AVR32_WT_DTE_DISABLED                          0x00000000
#define AVR32_WT_DTE_MASK                              0x00700000
#define AVR32_WT_DTE_OFFSET                                    20
#define AVR32_WT_DTE_PROGRAM_0B                        0x00000001
#define AVR32_WT_DTE_PROGRAM_1A                        0x00000002
#define AVR32_WT_DTE_PROGRAM_1B                        0x00000003
#define AVR32_WT_DTE_PROGRAM_2A                        0x00000004
#define AVR32_WT_DTE_PROGRAM_2B                        0x00000005
#define AVR32_WT_DTE_SIZE                                       3
#define AVR32_WT_DTS                                           23
#define AVR32_WT_DTS_DATA_3A                           0x00000006
#define AVR32_WT_DTS_DATA_3B                           0x00000007
#define AVR32_WT_DTS_DISABLED                          0x00000000
#define AVR32_WT_DTS_MASK                              0x03800000
#define AVR32_WT_DTS_OFFSET                                    23
#define AVR32_WT_DTS_PROGRAM_0B                        0x00000001
#define AVR32_WT_DTS_PROGRAM_1A                        0x00000002
#define AVR32_WT_DTS_PROGRAM_1B                        0x00000003
#define AVR32_WT_DTS_PROGRAM_2A                        0x00000004
#define AVR32_WT_DTS_PROGRAM_2B                        0x00000005
#define AVR32_WT_DTS_SIZE                                       3
#define AVR32_WT_PTE                                           26
#define AVR32_WT_PTE_DATA_3A                           0x00000006
#define AVR32_WT_PTE_DATA_3B                           0x00000007
#define AVR32_WT_PTE_DISABLED                          0x00000000
#define AVR32_WT_PTE_MASK                              0x1c000000
#define AVR32_WT_PTE_OFFSET                                    26
#define AVR32_WT_PTE_PROGRAM_0B                        0x00000001
#define AVR32_WT_PTE_PROGRAM_1A                        0x00000002
#define AVR32_WT_PTE_PROGRAM_1B                        0x00000003
#define AVR32_WT_PTE_PROGRAM_2A                        0x00000004
#define AVR32_WT_PTE_PROGRAM_2B                        0x00000005
#define AVR32_WT_PTE_SIZE                                       3
#define AVR32_WT_PTS                                           29
#define AVR32_WT_PTS_DATA_3A                           0x00000006
#define AVR32_WT_PTS_DATA_3B                           0x00000007
#define AVR32_WT_PTS_DISABLED                          0x00000000
#define AVR32_WT_PTS_MASK                              0xe0000000
#define AVR32_WT_PTS_OFFSET                                    29
#define AVR32_WT_PTS_PROGRAM_0B                        0x00000001
#define AVR32_WT_PTS_PROGRAM_1A                        0x00000002
#define AVR32_WT_PTS_PROGRAM_1B                        0x00000003
#define AVR32_WT_PTS_PROGRAM_2A                        0x00000004
#define AVR32_WT_PTS_PROGRAM_2B                        0x00000005
#define AVR32_WT_PTS_SIZE                                       3




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_did_t {
    unsigned int rn              : 4;
    unsigned int pn              :16;
    unsigned int mid             :11;
    unsigned int                 : 1;
} avr32_did_t;



typedef struct avr32_dc_t {
    unsigned int abort           : 1;
    unsigned int res             : 1;
    unsigned int mm              : 1;
    unsigned int orp             : 1;
    unsigned int rid             : 1;
    unsigned int                 : 1;
    unsigned int toz             : 1;
    unsigned int ifm             : 1;
    unsigned int irp             : 1;
    unsigned int sqa             : 1;
    unsigned int eos             : 2;
    unsigned int                 : 6;
    unsigned int dbe             : 1;
    unsigned int dbr             : 1;
    unsigned int                 : 3;
    unsigned int ss              : 1;
    unsigned int ovc             : 3;
    unsigned int eic             : 2;
    unsigned int tm              : 3;
} avr32_dc_t;



typedef struct avr32_ds_t {
    unsigned int                 : 3;
    unsigned int ntbf            : 1;
    unsigned int exb             : 1;
    unsigned int dba             : 1;
    unsigned int boz             : 1;
    unsigned int inc             : 1;
    unsigned int                 : 8;
    unsigned int bp              : 8;
    unsigned int                 : 2;
    unsigned int dbs             : 1;
    unsigned int stp             : 1;
    unsigned int                 : 1;
    unsigned int hwb             : 1;
    unsigned int swb             : 1;
    unsigned int sss             : 1;
} avr32_ds_t;



typedef struct avr32_rwcs_t {
    unsigned int ac              : 1;
    unsigned int rw              : 1;
    unsigned int sz              : 3;
    unsigned int cctrl           : 2;
    unsigned int wrapped         : 1;
    unsigned int                 : 1;
    unsigned int nte             : 1;
    unsigned int ntbc            : 2;
    unsigned int crc             : 1;
    unsigned int                 : 3;
    unsigned int cnt             :14;
    unsigned int err             : 1;
    unsigned int dv              : 1;
} avr32_rwcs_t;



typedef struct avr32_wt_t {
    unsigned int pts             : 3;
    unsigned int pte             : 3;
    unsigned int dts             : 3;
    unsigned int dte             : 3;
    unsigned int                 :20;
} avr32_wt_t;



typedef struct avr32_dtc_t {
    unsigned int rwt0            : 2;
    unsigned int rwt1            : 2;
    unsigned int                 : 8;
    unsigned int asid1           : 8;
    unsigned int asid1en         : 1;
    unsigned int asid0           : 8;
    unsigned int asid0en         : 1;
    unsigned int t1wp            : 1;
    unsigned int t0wp            : 1;
} avr32_dtc_t;



typedef struct avr32_bwc0a_t {
    unsigned int bwe             : 2;
    unsigned int                 : 4;
    unsigned int ame             : 1;
    unsigned int                 :10;
    unsigned int eoc             : 1;
    unsigned int                 : 5;
    unsigned int asid            : 8;
    unsigned int asiden          : 1;
} avr32_bwc0a_t;



typedef struct avr32_bwc0b_t {
    unsigned int bwe             : 2;
    unsigned int                 :15;
    unsigned int eoc             : 1;
    unsigned int                 : 5;
    unsigned int asid            : 8;
    unsigned int asiden          : 1;
} avr32_bwc0b_t;



typedef struct avr32_bwc1a_t {
    unsigned int bwe             : 2;
    unsigned int                 : 4;
    unsigned int ame             : 1;
    unsigned int                 :10;
    unsigned int eoc             : 1;
    unsigned int                 : 5;
    unsigned int asid            : 8;
    unsigned int asiden          : 1;
} avr32_bwc1a_t;



typedef struct avr32_bwc1b_t {
    unsigned int bwe             : 2;
    unsigned int                 :15;
    unsigned int eoc             : 1;
    unsigned int                 : 5;
    unsigned int asid            : 8;
    unsigned int asiden          : 1;
} avr32_bwc1b_t;



typedef struct avr32_bwc2a_t {
    unsigned int bwe             : 2;
    unsigned int                 : 4;
    unsigned int ame             : 1;
    unsigned int                 :10;
    unsigned int eoc             : 1;
    unsigned int                 : 5;
    unsigned int asid            : 8;
    unsigned int asiden          : 1;
} avr32_bwc2a_t;



typedef struct avr32_bwc2b_t {
    unsigned int bwe             : 2;
    unsigned int                 :15;
    unsigned int eoc             : 1;
    unsigned int                 : 5;
    unsigned int asid            : 8;
    unsigned int asiden          : 1;
} avr32_bwc2b_t;



typedef struct avr32_bwc3a_t {
    unsigned int bwe             : 2;
    unsigned int brw             : 2;
    unsigned int                 : 4;
    unsigned int bme             : 4;
    unsigned int                 : 2;
    unsigned int bwo             : 2;
    unsigned int                 : 4;
    unsigned int size            : 3;
    unsigned int asid            : 8;
    unsigned int asiden          : 1;
} avr32_bwc3a_t;



typedef struct avr32_bwc3b_t {
    unsigned int bwe             : 2;
    unsigned int brw             : 2;
    unsigned int                 : 4;
    unsigned int bme             : 4;
    unsigned int                 : 2;
    unsigned int bwo             : 2;
    unsigned int                 : 4;
    unsigned int size            : 3;
    unsigned int asid            : 8;
    unsigned int asiden          : 1;
} avr32_bwc3b_t;



typedef struct avr32_nxcfg_t {
    unsigned int                 : 3;
    unsigned int nxdma           : 1;
    unsigned int nxdtc           : 3;
    unsigned int nxdrt           : 1;
    unsigned int nxdwt           : 1;
    unsigned int nxot            : 1;
    unsigned int nxpt            : 1;
    unsigned int nxmdo           : 4;
    unsigned int nxmseo          : 1;
    unsigned int nxdb            : 4;
    unsigned int nxpcb           : 4;
    unsigned int nxocd           : 4;
    unsigned int nxarch          : 4;
} avr32_nxcfg_t;



typedef struct avr32_cpucm_t {
    unsigned int                 :26;
    unsigned int ieem            : 1;
    unsigned int ibem            : 1;
    unsigned int rem             : 1;
    unsigned int fem             : 1;
    unsigned int bem             : 1;
    unsigned int                 : 1;
} avr32_cpucm_t;



typedef struct avr32_dcsr_t {
    unsigned int                 :30;
    unsigned int emud            : 1;
    unsigned int cpud            : 1;
} avr32_dcsr_t;



typedef struct avr32_epc3_t {
    unsigned int                 :29;
    unsigned int dwe             : 1;
    unsigned int rng             : 2;
} avr32_epc3_t;



typedef struct avr32_axc_t {
    unsigned int                 :16;
    unsigned int axs             : 2;
    unsigned int                 : 2;
    unsigned int ls              : 1;
    unsigned int ddr             : 1;
    unsigned int axo             : 1;
    unsigned int axe             : 1;
    unsigned int                 : 4;
    unsigned int div             : 4;
} avr32_axc_t;




/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_OCD_O3_200_H_INCLUDED*/
#endif

