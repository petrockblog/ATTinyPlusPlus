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


#ifndef _AVR32_ABDACB_100_H_INCLUDED
#define _AVR32_ABDACB_100_H_INCLUDED

#define AVR32_ABDACB_H_VERSION               100

#include "avr32/abi.h"

/*
Note to user:

 The following defines are always generated:
 - Register offset: AVR32_ABDACB_<register>
 - Bitfield mask:   AVR32_ABDACB_<register>_<bitfield>
 - Bitfield offset: AVR32_ABDACB_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ABDACB_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_ABDACB_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_ABDACB_<bitfield>
 - Bitfield offset: AVR32_ABDACB_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ABDACB_<bitfield>_SIZE
 - Bitfield values: AVR32_ABDACB_<bitfield>_<value name>
 - Bitfield values: AVR32_ABDACB_<value name>

 All defines are sorted alphabetically.
*/
#define AVR32_ABDACB_ALTUPR                           3
#define AVR32_ABDACB_ALTUPR_MASK             0x00000008
#define AVR32_ABDACB_ALTUPR_OFFSET                    3
#define AVR32_ABDACB_ALTUPR_SIZE                      1
#define AVR32_ABDACB_BUSY                             0
#define AVR32_ABDACB_BUSY_MASK               0x00000001
#define AVR32_ABDACB_BUSY_OFFSET                      0
#define AVR32_ABDACB_BUSY_SIZE                        1
#define AVR32_ABDACB_CMOC                             4
#define AVR32_ABDACB_CMOC_MASK               0x00000010
#define AVR32_ABDACB_CMOC_OFFSET                      4
#define AVR32_ABDACB_CMOC_SIZE                        1
#define AVR32_ABDACB_CR                      0x00000000
#define AVR32_ABDACB_CR_ALTUPR                        3
#define AVR32_ABDACB_CR_ALTUPR_MASK          0x00000008
#define AVR32_ABDACB_CR_ALTUPR_OFFSET                 3
#define AVR32_ABDACB_CR_ALTUPR_SIZE                   1
#define AVR32_ABDACB_CR_CMOC                          4
#define AVR32_ABDACB_CR_CMOC_MASK            0x00000010
#define AVR32_ABDACB_CR_CMOC_OFFSET                   4
#define AVR32_ABDACB_CR_CMOC_SIZE                     1
#define AVR32_ABDACB_CR_DATAFORMAT                   16
#define AVR32_ABDACB_CR_DATAFORMAT_MASK      0x00070000
#define AVR32_ABDACB_CR_DATAFORMAT_OFFSET            16
#define AVR32_ABDACB_CR_DATAFORMAT_SIZE               3
#define AVR32_ABDACB_CR_EN                            0
#define AVR32_ABDACB_CR_EN_MASK              0x00000001
#define AVR32_ABDACB_CR_EN_OFFSET                     0
#define AVR32_ABDACB_CR_EN_SIZE                       1
#define AVR32_ABDACB_CR_FS                           24
#define AVR32_ABDACB_CR_FS_MASK              0x0f000000
#define AVR32_ABDACB_CR_FS_OFFSET                    24
#define AVR32_ABDACB_CR_FS_SIZE                       4
#define AVR32_ABDACB_CR_MASK                 0x0f0700bf
#define AVR32_ABDACB_CR_MONO                          5
#define AVR32_ABDACB_CR_MONO_MASK            0x00000020
#define AVR32_ABDACB_CR_MONO_OFFSET                   5
#define AVR32_ABDACB_CR_MONO_SIZE                     1
#define AVR32_ABDACB_CR_PREUPEN                       2
#define AVR32_ABDACB_CR_PREUPEN_MASK         0x00000004
#define AVR32_ABDACB_CR_PREUPEN_OFFSET                2
#define AVR32_ABDACB_CR_PREUPEN_SIZE                  1
#define AVR32_ABDACB_CR_RESETVALUE           0x00000000
#define AVR32_ABDACB_CR_SWAP                          1
#define AVR32_ABDACB_CR_SWAP_MASK            0x00000002
#define AVR32_ABDACB_CR_SWAP_OFFSET                   1
#define AVR32_ABDACB_CR_SWAP_SIZE                     1
#define AVR32_ABDACB_CR_SWRST                         7
#define AVR32_ABDACB_CR_SWRST_MASK           0x00000080
#define AVR32_ABDACB_CR_SWRST_OFFSET                  7
#define AVR32_ABDACB_CR_SWRST_SIZE                    1
#define AVR32_ABDACB_DATAFORMAT                      16
#define AVR32_ABDACB_DATAFORMAT_MASK         0x00070000
#define AVR32_ABDACB_DATAFORMAT_OFFSET               16
#define AVR32_ABDACB_DATAFORMAT_SIZE                  3
#define AVR32_ABDACB_EN                               0
#define AVR32_ABDACB_EN_MASK                 0x00000001
#define AVR32_ABDACB_EN_OFFSET                        0
#define AVR32_ABDACB_EN_SIZE                          1
#define AVR32_ABDACB_FS                              24
#define AVR32_ABDACB_FS_MASK                 0x0f000000
#define AVR32_ABDACB_FS_OFFSET                       24
#define AVR32_ABDACB_FS_SIZE                          4
#define AVR32_ABDACB_IDR                     0x00000018
#define AVR32_ABDACB_IDR_MASK                0x00000006
#define AVR32_ABDACB_IDR_RESETVALUE          0x00000000
#define AVR32_ABDACB_IDR_TXRDY                        1
#define AVR32_ABDACB_IDR_TXRDY_MASK          0x00000002
#define AVR32_ABDACB_IDR_TXRDY_OFFSET                 1
#define AVR32_ABDACB_IDR_TXRDY_SIZE                   1
#define AVR32_ABDACB_IDR_TXUR                         2
#define AVR32_ABDACB_IDR_TXUR_MASK           0x00000004
#define AVR32_ABDACB_IDR_TXUR_OFFSET                  2
#define AVR32_ABDACB_IDR_TXUR_SIZE                    1
#define AVR32_ABDACB_IER                     0x00000014
#define AVR32_ABDACB_IER_MASK                0x00000006
#define AVR32_ABDACB_IER_RESETVALUE          0x00000000
#define AVR32_ABDACB_IER_TXRDY                        1
#define AVR32_ABDACB_IER_TXRDY_MASK          0x00000002
#define AVR32_ABDACB_IER_TXRDY_OFFSET                 1
#define AVR32_ABDACB_IER_TXRDY_SIZE                   1
#define AVR32_ABDACB_IER_TXUR                         2
#define AVR32_ABDACB_IER_TXUR_MASK           0x00000004
#define AVR32_ABDACB_IER_TXUR_OFFSET                  2
#define AVR32_ABDACB_IER_TXUR_SIZE                    1
#define AVR32_ABDACB_IMR                     0x0000001c
#define AVR32_ABDACB_IMR_MASK                0x00000006
#define AVR32_ABDACB_IMR_RESETVALUE          0x00000000
#define AVR32_ABDACB_IMR_TXRDY                        1
#define AVR32_ABDACB_IMR_TXRDY_MASK          0x00000002
#define AVR32_ABDACB_IMR_TXRDY_OFFSET                 1
#define AVR32_ABDACB_IMR_TXRDY_SIZE                   1
#define AVR32_ABDACB_IMR_TXUR                         2
#define AVR32_ABDACB_IMR_TXUR_MASK           0x00000004
#define AVR32_ABDACB_IMR_TXUR_OFFSET                  2
#define AVR32_ABDACB_IMR_TXUR_SIZE                    1
#define AVR32_ABDACB_MONO                             5
#define AVR32_ABDACB_MONO_MASK               0x00000020
#define AVR32_ABDACB_MONO_OFFSET                      5
#define AVR32_ABDACB_MONO_SIZE                        1
#define AVR32_ABDACB_PARAMETER               0x00000028
#define AVR32_ABDACB_PARAMETER_MASK          0x00000000
#define AVR32_ABDACB_PARAMETER_RESETVALUE    0x00000000
#define AVR32_ABDACB_PREUPEN                          2
#define AVR32_ABDACB_PREUPEN_MASK            0x00000004
#define AVR32_ABDACB_PREUPEN_OFFSET                   2
#define AVR32_ABDACB_PREUPEN_SIZE                     1
#define AVR32_ABDACB_SCR                     0x00000024
#define AVR32_ABDACB_SCR_MASK                0x00000006
#define AVR32_ABDACB_SCR_RESETVALUE          0x00000000
#define AVR32_ABDACB_SCR_TXRDY                        1
#define AVR32_ABDACB_SCR_TXRDY_MASK          0x00000002
#define AVR32_ABDACB_SCR_TXRDY_OFFSET                 1
#define AVR32_ABDACB_SCR_TXRDY_SIZE                   1
#define AVR32_ABDACB_SCR_TXUR                         2
#define AVR32_ABDACB_SCR_TXUR_MASK           0x00000004
#define AVR32_ABDACB_SCR_TXUR_OFFSET                  2
#define AVR32_ABDACB_SCR_TXUR_SIZE                    1
#define AVR32_ABDACB_SDR0                    0x00000004
#define AVR32_ABDACB_SDR0_DATA                        0
#define AVR32_ABDACB_SDR0_DATA_MASK          0xffffffff
#define AVR32_ABDACB_SDR0_DATA_OFFSET                 0
#define AVR32_ABDACB_SDR0_DATA_SIZE                  32
#define AVR32_ABDACB_SDR0_MASK               0xffffffff
#define AVR32_ABDACB_SDR0_RESETVALUE         0x00000000
#define AVR32_ABDACB_SDR1                    0x00000008
#define AVR32_ABDACB_SDR1_DATA                        0
#define AVR32_ABDACB_SDR1_DATA_MASK          0xffffffff
#define AVR32_ABDACB_SDR1_DATA_OFFSET                 0
#define AVR32_ABDACB_SDR1_DATA_SIZE                  32
#define AVR32_ABDACB_SDR1_MASK               0xffffffff
#define AVR32_ABDACB_SDR1_RESETVALUE         0x00000000
#define AVR32_ABDACB_SR                      0x00000020
#define AVR32_ABDACB_SR_BUSY                          0
#define AVR32_ABDACB_SR_BUSY_MASK            0x00000001
#define AVR32_ABDACB_SR_BUSY_OFFSET                   0
#define AVR32_ABDACB_SR_BUSY_SIZE                     1
#define AVR32_ABDACB_SR_MASK                 0x00000007
#define AVR32_ABDACB_SR_RESETVALUE           0x00000000
#define AVR32_ABDACB_SR_TXRDY                         1
#define AVR32_ABDACB_SR_TXRDY_MASK           0x00000002
#define AVR32_ABDACB_SR_TXRDY_OFFSET                  1
#define AVR32_ABDACB_SR_TXRDY_SIZE                    1
#define AVR32_ABDACB_SR_TXUR                          2
#define AVR32_ABDACB_SR_TXUR_MASK            0x00000004
#define AVR32_ABDACB_SR_TXUR_OFFSET                   2
#define AVR32_ABDACB_SR_TXUR_SIZE                     1
#define AVR32_ABDACB_SWAP                             1
#define AVR32_ABDACB_SWAP_MASK               0x00000002
#define AVR32_ABDACB_SWAP_OFFSET                      1
#define AVR32_ABDACB_SWAP_SIZE                        1
#define AVR32_ABDACB_SWRST                            7
#define AVR32_ABDACB_SWRST_MASK              0x00000080
#define AVR32_ABDACB_SWRST_OFFSET                     7
#define AVR32_ABDACB_SWRST_SIZE                       1
#define AVR32_ABDACB_VARIANT                         16
#define AVR32_ABDACB_VARIANT_MASK            0x000f0000
#define AVR32_ABDACB_VARIANT_OFFSET                  16
#define AVR32_ABDACB_VARIANT_SIZE                     4
#define AVR32_ABDACB_VCR0                    0x0000000c
#define AVR32_ABDACB_VCR0_MASK               0x80007fff
#define AVR32_ABDACB_VCR0_MUTE                       31
#define AVR32_ABDACB_VCR0_MUTE_MASK          0x80000000
#define AVR32_ABDACB_VCR0_MUTE_OFFSET                31
#define AVR32_ABDACB_VCR0_MUTE_SIZE                   1
#define AVR32_ABDACB_VCR0_RESETVALUE         0x00000000
#define AVR32_ABDACB_VCR0_VOLUME                      0
#define AVR32_ABDACB_VCR0_VOLUME_MASK        0x00007fff
#define AVR32_ABDACB_VCR0_VOLUME_OFFSET               0
#define AVR32_ABDACB_VCR0_VOLUME_SIZE                15
#define AVR32_ABDACB_VCR1                    0x00000010
#define AVR32_ABDACB_VCR1_MASK               0x80007fff
#define AVR32_ABDACB_VCR1_MUTE                       31
#define AVR32_ABDACB_VCR1_MUTE_MASK          0x80000000
#define AVR32_ABDACB_VCR1_MUTE_OFFSET                31
#define AVR32_ABDACB_VCR1_MUTE_SIZE                   1
#define AVR32_ABDACB_VCR1_RESETVALUE         0x00000000
#define AVR32_ABDACB_VCR1_VOLUME                      0
#define AVR32_ABDACB_VCR1_VOLUME_MASK        0x00007fff
#define AVR32_ABDACB_VCR1_VOLUME_OFFSET               0
#define AVR32_ABDACB_VCR1_VOLUME_SIZE                15
#define AVR32_ABDACB_VERSION                 0x0000002c
#define AVR32_ABDACB_VERSION_MASK            0x000f0fff
#define AVR32_ABDACB_VERSION_RESETVALUE      0x00000100
#define AVR32_ABDACB_VERSION_VARIANT                 16
#define AVR32_ABDACB_VERSION_VARIANT_MASK    0x000f0000
#define AVR32_ABDACB_VERSION_VARIANT_OFFSET          16
#define AVR32_ABDACB_VERSION_VARIANT_SIZE             4
#define AVR32_ABDACB_VERSION_VERSION                  0
#define AVR32_ABDACB_VERSION_VERSION_MASK    0x00000fff
#define AVR32_ABDACB_VERSION_VERSION_OFFSET           0
#define AVR32_ABDACB_VERSION_VERSION_SIZE            12


#ifdef __AVR32_ABI_COMPILER__

/* Module Register Structures */
typedef struct avr32_abdacb_cr_t {
       unsigned int                : 4;
       unsigned int fs             : 4;
       unsigned int                : 5;
       unsigned int dataformat     : 3;
       unsigned int                : 8;
       unsigned int swrst          : 1;
       unsigned int                : 1;
       unsigned int mono           : 1;
       unsigned int cmoc           : 1;
       unsigned int altupr         : 1;
       unsigned int preupen        : 1;
       unsigned int swap           : 1;
       unsigned int en             : 1;
} avr32_abdacb_cr_t;

typedef struct avr32_abdacb_vcr0_t {
       unsigned int mute           : 1;
       unsigned int                :16;
       unsigned int volume         :15;
} avr32_abdacb_vcr0_t;

typedef struct avr32_abdacb_vcr1_t {
       unsigned int mute           : 1;
       unsigned int                :16;
       unsigned int volume         :15;
} avr32_abdacb_vcr1_t;

typedef struct avr32_abdacb_ier_t {
       unsigned int                :29;
       unsigned int txur           : 1;
       unsigned int txrdy          : 1;
   unsigned int                    : 1;
} avr32_abdacb_ier_t;

typedef struct avr32_abdacb_idr_t {
       unsigned int                :29;
       unsigned int txur           : 1;
       unsigned int txrdy          : 1;
   unsigned int                    : 1;
} avr32_abdacb_idr_t;

typedef struct avr32_abdacb_imr_t {
       unsigned int                :29;
       unsigned int txur           : 1;
       unsigned int txrdy          : 1;
   unsigned int                    : 1;
} avr32_abdacb_imr_t;

typedef struct avr32_abdacb_sr_t {
       unsigned int                :29;
       unsigned int txur           : 1;
       unsigned int txrdy          : 1;
       unsigned int busy           : 1;
} avr32_abdacb_sr_t;

typedef struct avr32_abdacb_scr_t {
       unsigned int                :29;
       unsigned int txur           : 1;
       unsigned int txrdy          : 1;
   unsigned int                    : 1;
} avr32_abdacb_scr_t;

typedef struct avr32_abdacb_version_t {
       unsigned int                :12;
       unsigned int variant        : 4;
       unsigned int                : 4;
       unsigned int version        :12;
} avr32_abdacb_version_t;

typedef struct avr32_abdacb_t {
   union {
          unsigned long                   cr         ; // 0x0000
          avr32_abdacb_cr_t               CR         ;
   };
          unsigned long                   sdr0       ; // 0x0004
          unsigned long                   sdr1       ; // 0x0008
   union {
          unsigned long                   vcr0       ; // 0x000c
          avr32_abdacb_vcr0_t             VCR0       ;
   };
   union {
          unsigned long                   vcr1       ; // 0x0010
          avr32_abdacb_vcr1_t             VCR1       ;
   };
   union {
          unsigned long                   ier        ; // 0x0014
          avr32_abdacb_ier_t              IER        ;
   };
   union {
          unsigned long                   idr        ; // 0x0018
          avr32_abdacb_idr_t              IDR        ;
   };
   union {
    const unsigned long                   imr        ; // 0x001c
    const avr32_abdacb_imr_t              IMR        ;
   };
   union {
    const unsigned long                   sr         ; // 0x0020
    const avr32_abdacb_sr_t               SR         ;
   };
   union {
          unsigned long                   scr        ; // 0x0024
          avr32_abdacb_scr_t              SCR        ;
   };
    const unsigned long                   parameter  ; // 0x0028
   union {
    const unsigned long                   version    ; // 0x002c
    const avr32_abdacb_version_t          VERSION    ;
   };
} avr32_abdacb_t;

#endif  /* #ifdef __AVR32_ABI_COMPILER__ */



#endif /* #ifdef _AVR32_ABDACB_100_H_INCLUDED */

