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


#ifndef _AVR32_AES_123_H_INCLUDED
#define _AVR32_AES_123_H_INCLUDED

#define AVR32_AES_H_VERSION                  123

#include "avr32/abi.h"

/*
Note to user:

 The following defines are always generated:
 - Register offset: AVR32_AES_<register>
 - Bitfield mask:   AVR32_AES_<register>_<bitfield>
 - Bitfield offset: AVR32_AES_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_AES_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_AES_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_AES_<bitfield>
 - Bitfield offset: AVR32_AES_<bitfield>_OFFSET
 - Bitfield size:   AVR32_AES_<bitfield>_SIZE
 - Bitfield values: AVR32_AES_<bitfield>_<value name>
 - Bitfield values: AVR32_AES_<value name>

 All defines are sorted alphabetically.
*/
#define AVR32_AES_CFBS                               16
#define AVR32_AES_CFBS_MASK                  0x00070000
#define AVR32_AES_CFBS_OFFSET                        16
#define AVR32_AES_CFBS_SIZE                           3
#define AVR32_AES_CIPHER                              0
#define AVR32_AES_CIPHER_MASK                0x00000001
#define AVR32_AES_CIPHER_OFFSET                       0
#define AVR32_AES_CIPHER_SIZE                         1
#define AVR32_AES_CKEY                               20
#define AVR32_AES_CKEY_MASK                  0x00f00000
#define AVR32_AES_CKEY_OFFSET                        20
#define AVR32_AES_CKEY_SIZE                           4
#define AVR32_AES_CR                         0x00000000
#define AVR32_AES_CR_LOADSEED                        16
#define AVR32_AES_CR_LOADSEED_MASK           0x00010000
#define AVR32_AES_CR_LOADSEED_OFFSET                 16
#define AVR32_AES_CR_LOADSEED_SIZE                    1
#define AVR32_AES_CR_MASK                    0x00010101
#define AVR32_AES_CR_RESETVALUE              0x00000000
#define AVR32_AES_CR_START                            0
#define AVR32_AES_CR_START_MASK              0x00000001
#define AVR32_AES_CR_START_OFFSET                     0
#define AVR32_AES_CR_START_SIZE                       1
#define AVR32_AES_CR_SWRST                            8
#define AVR32_AES_CR_SWRST_MASK              0x00000100
#define AVR32_AES_CR_SWRST_OFFSET                     8
#define AVR32_AES_CR_SWRST_SIZE                       1
#define AVR32_AES_CTYPE                              24
#define AVR32_AES_CTYPE_MASK                 0x1f000000
#define AVR32_AES_CTYPE_OFFSET                       24
#define AVR32_AES_CTYPE_SIZE                          5
#define AVR32_AES_IDATA1R                    0x00000040
#define AVR32_AES_IDATA1R_IDATAX                      0
#define AVR32_AES_IDATA1R_IDATAX_MASK        0xffffffff
#define AVR32_AES_IDATA1R_IDATAX_OFFSET               0
#define AVR32_AES_IDATA1R_IDATAX_SIZE                32
#define AVR32_AES_IDATA1R_MASK               0xffffffff
#define AVR32_AES_IDATA1R_RESETVALUE         0x00000000
#define AVR32_AES_IDATA2R                    0x00000044
#define AVR32_AES_IDATA2R_IDATAX                      0
#define AVR32_AES_IDATA2R_IDATAX_MASK        0xffffffff
#define AVR32_AES_IDATA2R_IDATAX_OFFSET               0
#define AVR32_AES_IDATA2R_IDATAX_SIZE                32
#define AVR32_AES_IDATA2R_MASK               0xffffffff
#define AVR32_AES_IDATA2R_RESETVALUE         0x00000000
#define AVR32_AES_IDATA3R                    0x00000048
#define AVR32_AES_IDATA3R_IDATAX                      0
#define AVR32_AES_IDATA3R_IDATAX_MASK        0xffffffff
#define AVR32_AES_IDATA3R_IDATAX_OFFSET               0
#define AVR32_AES_IDATA3R_IDATAX_SIZE                32
#define AVR32_AES_IDATA3R_MASK               0xffffffff
#define AVR32_AES_IDATA3R_RESETVALUE         0x00000000
#define AVR32_AES_IDATA4R                    0x0000004c
#define AVR32_AES_IDATA4R_IDATAX                      0
#define AVR32_AES_IDATA4R_IDATAX_MASK        0xffffffff
#define AVR32_AES_IDATA4R_IDATAX_OFFSET               0
#define AVR32_AES_IDATA4R_IDATAX_SIZE                32
#define AVR32_AES_IDATA4R_MASK               0xffffffff
#define AVR32_AES_IDATA4R_RESETVALUE         0x00000000
#define AVR32_AES_IDR                        0x00000014
#define AVR32_AES_IDR_DATRDY                          0
#define AVR32_AES_IDR_DATRDY_MASK            0x00000001
#define AVR32_AES_IDR_DATRDY_OFFSET                   0
#define AVR32_AES_IDR_DATRDY_SIZE                     1
#define AVR32_AES_IDR_ENDRX                           1
#define AVR32_AES_IDR_ENDRX_MASK             0x00000002
#define AVR32_AES_IDR_ENDRX_OFFSET                    1
#define AVR32_AES_IDR_ENDRX_SIZE                      1
#define AVR32_AES_IDR_ENDTX                           2
#define AVR32_AES_IDR_ENDTX_MASK             0x00000004
#define AVR32_AES_IDR_ENDTX_OFFSET                    2
#define AVR32_AES_IDR_ENDTX_SIZE                      1
#define AVR32_AES_IDR_MASK                   0x0000011f
#define AVR32_AES_IDR_RESETVALUE             0x00000000
#define AVR32_AES_IDR_RXBUFF                          3
#define AVR32_AES_IDR_RXBUFF_MASK            0x00000008
#define AVR32_AES_IDR_RXBUFF_OFFSET                   3
#define AVR32_AES_IDR_RXBUFF_SIZE                     1
#define AVR32_AES_IDR_TXBUFE                          4
#define AVR32_AES_IDR_TXBUFE_MASK            0x00000010
#define AVR32_AES_IDR_TXBUFE_OFFSET                   4
#define AVR32_AES_IDR_TXBUFE_SIZE                     1
#define AVR32_AES_IDR_URAD                            8
#define AVR32_AES_IDR_URAD_MASK              0x00000100
#define AVR32_AES_IDR_URAD_OFFSET                     8
#define AVR32_AES_IDR_URAD_SIZE                       1
#define AVR32_AES_IER                        0x00000010
#define AVR32_AES_IER_DATRDY                          0
#define AVR32_AES_IER_DATRDY_MASK            0x00000001
#define AVR32_AES_IER_DATRDY_OFFSET                   0
#define AVR32_AES_IER_DATRDY_SIZE                     1
#define AVR32_AES_IER_ENDRX                           1
#define AVR32_AES_IER_ENDRX_MASK             0x00000002
#define AVR32_AES_IER_ENDRX_OFFSET                    1
#define AVR32_AES_IER_ENDRX_SIZE                      1
#define AVR32_AES_IER_ENDTX                           2
#define AVR32_AES_IER_ENDTX_MASK             0x00000004
#define AVR32_AES_IER_ENDTX_OFFSET                    2
#define AVR32_AES_IER_ENDTX_SIZE                      1
#define AVR32_AES_IER_MASK                   0x0000011f
#define AVR32_AES_IER_RESETVALUE             0x00000000
#define AVR32_AES_IER_RXBUFF                          3
#define AVR32_AES_IER_RXBUFF_MASK            0x00000008
#define AVR32_AES_IER_RXBUFF_OFFSET                   3
#define AVR32_AES_IER_RXBUFF_SIZE                     1
#define AVR32_AES_IER_TXBUFE                          4
#define AVR32_AES_IER_TXBUFE_MASK            0x00000010
#define AVR32_AES_IER_TXBUFE_OFFSET                   4
#define AVR32_AES_IER_TXBUFE_SIZE                     1
#define AVR32_AES_IER_URAD                            8
#define AVR32_AES_IER_URAD_MASK              0x00000100
#define AVR32_AES_IER_URAD_OFFSET                     8
#define AVR32_AES_IER_URAD_SIZE                       1
#define AVR32_AES_IMR                        0x00000018
#define AVR32_AES_IMR_DATRDY                          0
#define AVR32_AES_IMR_DATRDY_MASK            0x00000001
#define AVR32_AES_IMR_DATRDY_OFFSET                   0
#define AVR32_AES_IMR_DATRDY_SIZE                     1
#define AVR32_AES_IMR_ENDRX                           1
#define AVR32_AES_IMR_ENDRX_MASK             0x00000002
#define AVR32_AES_IMR_ENDRX_OFFSET                    1
#define AVR32_AES_IMR_ENDRX_SIZE                      1
#define AVR32_AES_IMR_ENDTX                           2
#define AVR32_AES_IMR_ENDTX_MASK             0x00000004
#define AVR32_AES_IMR_ENDTX_OFFSET                    2
#define AVR32_AES_IMR_ENDTX_SIZE                      1
#define AVR32_AES_IMR_MASK                   0x0000011f
#define AVR32_AES_IMR_RESETVALUE             0x00000000
#define AVR32_AES_IMR_RXBUFF                          3
#define AVR32_AES_IMR_RXBUFF_MASK            0x00000008
#define AVR32_AES_IMR_RXBUFF_OFFSET                   3
#define AVR32_AES_IMR_RXBUFF_SIZE                     1
#define AVR32_AES_IMR_TXBUFE                          4
#define AVR32_AES_IMR_TXBUFE_MASK            0x00000010
#define AVR32_AES_IMR_TXBUFE_OFFSET                   4
#define AVR32_AES_IMR_TXBUFE_SIZE                     1
#define AVR32_AES_IMR_URAD                            8
#define AVR32_AES_IMR_URAD_MASK              0x00000100
#define AVR32_AES_IMR_URAD_OFFSET                     8
#define AVR32_AES_IMR_URAD_SIZE                       1
#define AVR32_AES_ISR                        0x0000001c
#define AVR32_AES_ISR_DATRDY                          0
#define AVR32_AES_ISR_DATRDY_MASK            0x00000001
#define AVR32_AES_ISR_DATRDY_OFFSET                   0
#define AVR32_AES_ISR_DATRDY_SIZE                     1
#define AVR32_AES_ISR_ENDRX                           1
#define AVR32_AES_ISR_ENDRX_MASK             0x00000002
#define AVR32_AES_ISR_ENDRX_OFFSET                    1
#define AVR32_AES_ISR_ENDRX_SIZE                      1
#define AVR32_AES_ISR_ENDTX                           2
#define AVR32_AES_ISR_ENDTX_MASK             0x00000004
#define AVR32_AES_ISR_ENDTX_OFFSET                    2
#define AVR32_AES_ISR_ENDTX_SIZE                      1
#define AVR32_AES_ISR_MASK                   0x0000f11f
#define AVR32_AES_ISR_RESETVALUE             0x0000001e
#define AVR32_AES_ISR_RXBUFF                          3
#define AVR32_AES_ISR_RXBUFF_MASK            0x00000008
#define AVR32_AES_ISR_RXBUFF_OFFSET                   3
#define AVR32_AES_ISR_RXBUFF_SIZE                     1
#define AVR32_AES_ISR_TXBUFE                          4
#define AVR32_AES_ISR_TXBUFE_MASK            0x00000010
#define AVR32_AES_ISR_TXBUFE_OFFSET                   4
#define AVR32_AES_ISR_TXBUFE_SIZE                     1
#define AVR32_AES_ISR_URAD                            8
#define AVR32_AES_ISR_URAD_MASK              0x00000100
#define AVR32_AES_ISR_URAD_OFFSET                     8
#define AVR32_AES_ISR_URAD_SIZE                       1
#define AVR32_AES_ISR_URAT                           12
#define AVR32_AES_ISR_URAT_MASK              0x0000f000
#define AVR32_AES_ISR_URAT_OFFSET                    12
#define AVR32_AES_ISR_URAT_SIZE                       4
#define AVR32_AES_IV1R                       0x00000060
#define AVR32_AES_IV1R_IVXR                           0
#define AVR32_AES_IV1R_IVXR_MASK             0xffffffff
#define AVR32_AES_IV1R_IVXR_OFFSET                    0
#define AVR32_AES_IV1R_IVXR_SIZE                     32
#define AVR32_AES_IV1R_MASK                  0xffffffff
#define AVR32_AES_IV1R_RESETVALUE            0x00000000
#define AVR32_AES_IV2R                       0x00000064
#define AVR32_AES_IV2R_IVXR                           0
#define AVR32_AES_IV2R_IVXR_MASK             0xffffffff
#define AVR32_AES_IV2R_IVXR_OFFSET                    0
#define AVR32_AES_IV2R_IVXR_SIZE                     32
#define AVR32_AES_IV2R_MASK                  0xffffffff
#define AVR32_AES_IV2R_RESETVALUE            0x00000000
#define AVR32_AES_IV3R                       0x00000068
#define AVR32_AES_IV3R_IVXR                           0
#define AVR32_AES_IV3R_IVXR_MASK             0xffffffff
#define AVR32_AES_IV3R_IVXR_OFFSET                    0
#define AVR32_AES_IV3R_IVXR_SIZE                     32
#define AVR32_AES_IV3R_MASK                  0xffffffff
#define AVR32_AES_IV3R_RESETVALUE            0x00000000
#define AVR32_AES_IV4E                       0x0000006c
#define AVR32_AES_IV4E_IVXR                           0
#define AVR32_AES_IV4E_IVXR_MASK             0xffffffff
#define AVR32_AES_IV4E_IVXR_OFFSET                    0
#define AVR32_AES_IV4E_IVXR_SIZE                     32
#define AVR32_AES_IV4E_MASK                  0xffffffff
#define AVR32_AES_IV4E_RESETVALUE            0x00000000
#define AVR32_AES_KEYSIZE                            10
#define AVR32_AES_KEYSIZE_MASK               0x00000c00
#define AVR32_AES_KEYSIZE_OFFSET                     10
#define AVR32_AES_KEYSIZE_SIZE                        2
#define AVR32_AES_KEYW1R                     0x00000020
#define AVR32_AES_KEYW1R_KEYWXR                       0
#define AVR32_AES_KEYW1R_KEYWXR_MASK         0xffffffff
#define AVR32_AES_KEYW1R_KEYWXR_OFFSET                0
#define AVR32_AES_KEYW1R_KEYWXR_SIZE                 32
#define AVR32_AES_KEYW1R_MASK                0xffffffff
#define AVR32_AES_KEYW1R_RESETVALUE          0x00000000
#define AVR32_AES_KEYW2R                     0x00000024
#define AVR32_AES_KEYW2R_KEYWXR                       0
#define AVR32_AES_KEYW2R_KEYWXR_MASK         0xffffffff
#define AVR32_AES_KEYW2R_KEYWXR_OFFSET                0
#define AVR32_AES_KEYW2R_KEYWXR_SIZE                 32
#define AVR32_AES_KEYW2R_MASK                0xffffffff
#define AVR32_AES_KEYW2R_RESETVALUE          0x00000000
#define AVR32_AES_KEYW3R                     0x00000028
#define AVR32_AES_KEYW3R_KEYWXR                       0
#define AVR32_AES_KEYW3R_KEYWXR_MASK         0xffffffff
#define AVR32_AES_KEYW3R_KEYWXR_OFFSET                0
#define AVR32_AES_KEYW3R_KEYWXR_SIZE                 32
#define AVR32_AES_KEYW3R_MASK                0xffffffff
#define AVR32_AES_KEYW3R_RESETVALUE          0x00000000
#define AVR32_AES_KEYW4R                     0x0000002c
#define AVR32_AES_KEYW4R_KEYWXR                       0
#define AVR32_AES_KEYW4R_KEYWXR_MASK         0xffffffff
#define AVR32_AES_KEYW4R_KEYWXR_OFFSET                0
#define AVR32_AES_KEYW4R_KEYWXR_SIZE                 32
#define AVR32_AES_KEYW4R_MASK                0xffffffff
#define AVR32_AES_KEYW4R_RESETVALUE          0x00000000
#define AVR32_AES_KEYW5R                     0x00000030
#define AVR32_AES_KEYW5R_KEYWXR                       0
#define AVR32_AES_KEYW5R_KEYWXR_MASK         0xffffffff
#define AVR32_AES_KEYW5R_KEYWXR_OFFSET                0
#define AVR32_AES_KEYW5R_KEYWXR_SIZE                 32
#define AVR32_AES_KEYW5R_MASK                0xffffffff
#define AVR32_AES_KEYW5R_RESETVALUE          0x00000000
#define AVR32_AES_KEYW6R                     0x00000034
#define AVR32_AES_KEYW6R_KEYWXR                       0
#define AVR32_AES_KEYW6R_KEYWXR_MASK         0xffffffff
#define AVR32_AES_KEYW6R_KEYWXR_OFFSET                0
#define AVR32_AES_KEYW6R_KEYWXR_SIZE                 32
#define AVR32_AES_KEYW6R_MASK                0xffffffff
#define AVR32_AES_KEYW6R_RESETVALUE          0x00000000
#define AVR32_AES_KEYW7R                     0x00000038
#define AVR32_AES_KEYW7R_KEYWXR                       0
#define AVR32_AES_KEYW7R_KEYWXR_MASK         0xffffffff
#define AVR32_AES_KEYW7R_KEYWXR_OFFSET                0
#define AVR32_AES_KEYW7R_KEYWXR_SIZE                 32
#define AVR32_AES_KEYW7R_MASK                0xffffffff
#define AVR32_AES_KEYW7R_RESETVALUE          0x00000000
#define AVR32_AES_KEYW8R                     0x0000003c
#define AVR32_AES_KEYW8R_KEYWXR                       0
#define AVR32_AES_KEYW8R_KEYWXR_MASK         0xffffffff
#define AVR32_AES_KEYW8R_KEYWXR_OFFSET                0
#define AVR32_AES_KEYW8R_KEYWXR_SIZE                 32
#define AVR32_AES_KEYW8R_MASK                0xffffffff
#define AVR32_AES_KEYW8R_RESETVALUE          0x00000000
#define AVR32_AES_LOADSEED                           16
#define AVR32_AES_LOADSEED_MASK              0x00010000
#define AVR32_AES_LOADSEED_OFFSET                    16
#define AVR32_AES_LOADSEED_SIZE                       1
#define AVR32_AES_LOD                                15
#define AVR32_AES_LOD_MASK                   0x00008000
#define AVR32_AES_LOD_OFFSET                         15
#define AVR32_AES_LOD_SIZE                            1
#define AVR32_AES_MFN                                16
#define AVR32_AES_MFN_MASK                   0x00070000
#define AVR32_AES_MFN_OFFSET                         16
#define AVR32_AES_MFN_SIZE                            3
#define AVR32_AES_MR                         0x00000004
#define AVR32_AES_MR_CFBS                            16
#define AVR32_AES_MR_CFBS_MASK               0x00070000
#define AVR32_AES_MR_CFBS_OFFSET                     16
#define AVR32_AES_MR_CFBS_SIZE                        3
#define AVR32_AES_MR_CIPHER                           0
#define AVR32_AES_MR_CIPHER_MASK             0x00000001
#define AVR32_AES_MR_CIPHER_OFFSET                    0
#define AVR32_AES_MR_CIPHER_SIZE                      1
#define AVR32_AES_MR_CKEY                            20
#define AVR32_AES_MR_CKEY_MASK               0x00f00000
#define AVR32_AES_MR_CKEY_OFFSET                     20
#define AVR32_AES_MR_CKEY_SIZE                        4
#define AVR32_AES_MR_CTYPE                           24
#define AVR32_AES_MR_CTYPE_MASK              0x1f000000
#define AVR32_AES_MR_CTYPE_OFFSET                    24
#define AVR32_AES_MR_CTYPE_SIZE                       5
#define AVR32_AES_MR_KEYSIZE                         10
#define AVR32_AES_MR_KEYSIZE_MASK            0x00000c00
#define AVR32_AES_MR_KEYSIZE_OFFSET                  10
#define AVR32_AES_MR_KEYSIZE_SIZE                     2
#define AVR32_AES_MR_LOD                             15
#define AVR32_AES_MR_LOD_MASK                0x00008000
#define AVR32_AES_MR_LOD_OFFSET                      15
#define AVR32_AES_MR_LOD_SIZE                         1
#define AVR32_AES_MR_MASK                    0x1ff7fff1
#define AVR32_AES_MR_OPMOD                           12
#define AVR32_AES_MR_OPMOD_MASK              0x00007000
#define AVR32_AES_MR_OPMOD_OFFSET                    12
#define AVR32_AES_MR_OPMOD_SIZE                       3
#define AVR32_AES_MR_PROCDLY                          4
#define AVR32_AES_MR_PROCDLY_MASK            0x000000f0
#define AVR32_AES_MR_PROCDLY_OFFSET                   4
#define AVR32_AES_MR_PROCDLY_SIZE                     4
#define AVR32_AES_MR_RESETVALUE              0x00000000
#define AVR32_AES_MR_SMOD                             8
#define AVR32_AES_MR_SMOD_MASK               0x00000300
#define AVR32_AES_MR_SMOD_OFFSET                      8
#define AVR32_AES_MR_SMOD_SIZE                        2
#define AVR32_AES_ODATA1R                    0x00000050
#define AVR32_AES_ODATA1R_MASK               0xffffffff
#define AVR32_AES_ODATA1R_ODATAXR                     0
#define AVR32_AES_ODATA1R_ODATAXR_MASK       0xffffffff
#define AVR32_AES_ODATA1R_ODATAXR_OFFSET              0
#define AVR32_AES_ODATA1R_ODATAXR_SIZE               32
#define AVR32_AES_ODATA1R_RESETVALUE         0x00000000
#define AVR32_AES_ODATA2R                    0x00000054
#define AVR32_AES_ODATA2R_MASK               0xffffffff
#define AVR32_AES_ODATA2R_ODATAXR                     0
#define AVR32_AES_ODATA2R_ODATAXR_MASK       0xffffffff
#define AVR32_AES_ODATA2R_ODATAXR_OFFSET              0
#define AVR32_AES_ODATA2R_ODATAXR_SIZE               32
#define AVR32_AES_ODATA2R_RESETVALUE         0xc01f0000
#define AVR32_AES_ODATA3R                    0x00000058
#define AVR32_AES_ODATA3R_MASK               0xffffffff
#define AVR32_AES_ODATA3R_ODATAXR                     0
#define AVR32_AES_ODATA3R_ODATAXR_MASK       0xffffffff
#define AVR32_AES_ODATA3R_ODATAXR_OFFSET              0
#define AVR32_AES_ODATA3R_ODATAXR_SIZE               32
#define AVR32_AES_ODATA3R_RESETVALUE         0x00000000
#define AVR32_AES_ODATA4R                    0x0000005c
#define AVR32_AES_ODATA4R_MASK               0xffffffff
#define AVR32_AES_ODATA4R_ODATAXR                     0
#define AVR32_AES_ODATA4R_ODATAXR_MASK       0xffffffff
#define AVR32_AES_ODATA4R_ODATAXR_OFFSET              0
#define AVR32_AES_ODATA4R_ODATAXR_SIZE               32
#define AVR32_AES_ODATA4R_RESETVALUE         0x00000000
#define AVR32_AES_OPMOD                              12
#define AVR32_AES_OPMOD_MASK                 0x00007000
#define AVR32_AES_OPMOD_OFFSET                       12
#define AVR32_AES_OPMOD_SIZE                          3
#define AVR32_AES_PROCDLY                             4
#define AVR32_AES_PROCDLY_MASK               0x000000f0
#define AVR32_AES_PROCDLY_OFFSET                      4
#define AVR32_AES_PROCDLY_SIZE                        4
#define AVR32_AES_SMOD                                8
#define AVR32_AES_SMOD_MASK                  0x00000300
#define AVR32_AES_SMOD_OFFSET                         8
#define AVR32_AES_SMOD_SIZE                           2
#define AVR32_AES_START                               0
#define AVR32_AES_START_MASK                 0x00000001
#define AVR32_AES_START_OFFSET                        0
#define AVR32_AES_START_SIZE                          1
#define AVR32_AES_SWRST                               8
#define AVR32_AES_SWRST_MASK                 0x00000100
#define AVR32_AES_SWRST_OFFSET                        8
#define AVR32_AES_SWRST_SIZE                          1
#define AVR32_AES_URAT                               12
#define AVR32_AES_URAT_MASK                  0x0000f000
#define AVR32_AES_URAT_OFFSET                        12
#define AVR32_AES_URAT_SIZE                           4
#define AVR32_AES_VERSION                             0
#define AVR32_AES_VERSION_MASK               0x00000fff
#define AVR32_AES_VERSION_OFFSET                      0
#define AVR32_AES_VERSION_SIZE                       12
#define AVR32_AES_VR                         0x000000fc
#define AVR32_AES_VR_MASK                    0x00070fff
#define AVR32_AES_VR_MFN                             16
#define AVR32_AES_VR_MFN_MASK                0x00070000
#define AVR32_AES_VR_MFN_OFFSET                      16
#define AVR32_AES_VR_MFN_SIZE                         3
#define AVR32_AES_VR_RESETVALUE              0x00000123
#define AVR32_AES_VR_VERSION                          0
#define AVR32_AES_VR_VERSION_MASK            0x00000fff
#define AVR32_AES_VR_VERSION_OFFSET                   0
#define AVR32_AES_VR_VERSION_SIZE                    12


#ifdef __AVR32_ABI_COMPILER__

/* Module Register Structures */
typedef struct avr32_aes_cr_t {
       unsigned int                :15;
       unsigned int loadseed       : 1;
       unsigned int                : 7;
       unsigned int swrst          : 1;
       unsigned int                : 7;
       unsigned int start          : 1;
} avr32_aes_cr_t;

typedef struct avr32_aes_mr_t {
       unsigned int                : 3;
       unsigned int ctype          : 5;
       unsigned int ckey           : 4;
       unsigned int                : 1;
       unsigned int cfbs           : 3;
       unsigned int lod            : 1;
       unsigned int opmod          : 3;
       unsigned int keysize        : 2;
       unsigned int smod           : 2;
       unsigned int procdly        : 4;
       unsigned int                : 3;
       unsigned int cipher         : 1;
} avr32_aes_mr_t;

typedef struct avr32_aes_ier_t {
       unsigned int                :23;
       unsigned int urad           : 1;
       unsigned int                : 3;
       unsigned int txbufe         : 1;
       unsigned int rxbuff         : 1;
       unsigned int endtx          : 1;
       unsigned int endrx          : 1;
       unsigned int datrdy         : 1;
} avr32_aes_ier_t;

typedef struct avr32_aes_idr_t {
       unsigned int                :23;
       unsigned int urad           : 1;
       unsigned int                : 3;
       unsigned int txbufe         : 1;
       unsigned int rxbuff         : 1;
       unsigned int endtx          : 1;
       unsigned int endrx          : 1;
       unsigned int datrdy         : 1;
} avr32_aes_idr_t;

typedef struct avr32_aes_imr_t {
       unsigned int                :23;
       unsigned int urad           : 1;
       unsigned int                : 3;
       unsigned int txbufe         : 1;
       unsigned int rxbuff         : 1;
       unsigned int endtx          : 1;
       unsigned int endrx          : 1;
       unsigned int datrdy         : 1;
} avr32_aes_imr_t;

typedef struct avr32_aes_isr_t {
       unsigned int                :16;
       unsigned int urat           : 4;
       unsigned int                : 3;
       unsigned int urad           : 1;
       unsigned int                : 3;
       unsigned int txbufe         : 1;
       unsigned int rxbuff         : 1;
       unsigned int endtx          : 1;
       unsigned int endrx          : 1;
       unsigned int datrdy         : 1;
} avr32_aes_isr_t;

typedef struct avr32_aes_vr_t {
       unsigned int                :13;
       unsigned int mfn            : 3;
       unsigned int                : 4;
       unsigned int version        :12;
} avr32_aes_vr_t;

typedef struct avr32_aes_t {
   union {
          unsigned long                   cr         ; // 0x0000
          avr32_aes_cr_t                  CR         ;
   };
   union {
          unsigned long                   mr         ; // 0x0004
          avr32_aes_mr_t                  MR         ;
   };
          unsigned char                   reserved1[0x8]; // 0x8
   union {
          unsigned long                   ier        ; // 0x0010
          avr32_aes_ier_t                 IER        ;
   };
   union {
          unsigned long                   idr        ; // 0x0014
          avr32_aes_idr_t                 IDR        ;
   };
   union {
    const unsigned long                   imr        ; // 0x0018
    const avr32_aes_imr_t                 IMR        ;
   };
   union {
    const unsigned long                   isr        ; // 0x001c
    const avr32_aes_isr_t                 ISR        ;
   };
          unsigned long                   keyw1r     ; // 0x0020
          unsigned long                   keyw2r     ; // 0x0024
          unsigned long                   keyw3r     ; // 0x0028
          unsigned long                   keyw4r     ; // 0x002c
          unsigned long                   keyw5r     ; // 0x0030
          unsigned long                   keyw6r     ; // 0x0034
          unsigned long                   keyw7r     ; // 0x0038
          unsigned long                   keyw8r     ; // 0x003c
          unsigned long                   idata1r    ; // 0x0040
          unsigned long                   idata2r    ; // 0x0044
          unsigned long                   idata3r    ; // 0x0048
          unsigned long                   idata4r    ; // 0x004c
    const unsigned long                   odata1r    ; // 0x0050
    const unsigned long                   odata2r    ; // 0x0054
    const unsigned long                   odata3r    ; // 0x0058
    const unsigned long                   odata4r    ; // 0x005c
          unsigned long                   iv1r       ; // 0x0060
          unsigned long                   iv2r       ; // 0x0064
          unsigned long                   iv3r       ; // 0x0068
          unsigned long                   iv4e       ; // 0x006c
          unsigned char                   reserved2[0x8c]; // 0x70
   union {
    const unsigned long                   vr         ; // 0x00fc
    const avr32_aes_vr_t                  VR         ;
   };
} avr32_aes_t;

#endif  /* #ifdef __AVR32_ABI_COMPILER__ */



#endif /* #ifdef _AVR32_AES_123_H_INCLUDED */

