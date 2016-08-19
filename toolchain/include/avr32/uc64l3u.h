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

/*****************************************************************************
 * avr32/atuc64l3u.h  - definitions for  ATUC64L3U
 * Generated from  ATUC64L3U.xml 
 ****************************************************************************/


#ifndef _AVR32_UC64L3U_H_INCLUDED
#define _AVR32_UC64L3U_H_INCLUDED

/* Module Instance Count */
#define AVR32_CORE_NUM                       1
#define AVR32_OCD_NUM                        1
#define AVR32_INTC_NUM                       1
#define AVR32_ABDACB_NUM                     1
#define AVR32_ACIFB_NUM                      1
#define AVR32_ADCIFB_NUM                     1
#define AVR32_AST_NUM                        1
#define AVR32_AW_NUM                         1
#define AVR32_CAT_NUM                        1
#define AVR32_EIC_NUM                        1
#define AVR32_FLASHCDW_NUM                   1
#define AVR32_FREQM_NUM                      1
#define AVR32_GLOC_NUM                       1
#define AVR32_GPIO_NUM                       1
#define AVR32_HMATRIXB_NUM                   1
#define AVR32_IISC_NUM                       1
#define AVR32_JTAG_NUM                       1
#define AVR32_PDCA_NUM                       1
#define AVR32_PM_NUM                         1
#define AVR32_PULLUP_NUM                     1
#define AVR32_PWMA_NUM                       1
#define AVR32_SAU_NUM                        1
#define AVR32_SCAN_NUM                       1
#define AVR32_SCIF_NUM                       1
#define AVR32_SPI_NUM                        1
#define AVR32_TC_NUM                         2
#define AVR32_TWIM_NUM                       2
#define AVR32_TWIMS_NUM                      2
#define AVR32_TWIS_NUM                       2
#define AVR32_USART_NUM                      4
#define AVR32_USBC_NUM                       1
#define AVR32_WDT_NUM                        1
#define AVR32_GPIO_LOCAL_NUM                 1
#define AVR32_FUSES_NUM                      1

/* Maskable module clocks */
#define AVR32_PM_CLK_GRP_CPU                 0
#define AVR32_PM_CLK_GRP_HSB                 1
#define AVR32_PM_CLK_GRP_PBA                 2
#define AVR32_PM_CLK_GRP_PBB                 3
#define AVR32_PM_NUM_CLK_GRPS                4
#define AVR32_PM_NUM_CLKS_PER_GRP0           2
#define AVR32_PM_NUM_CLKS_PER_GRP1           7
#define AVR32_PM_NUM_CLKS_PER_GRP2           28
#define AVR32_PM_NUM_CLKS_PER_GRP3           4

/* CPU clocks */
#define AVR32_OCD_CLK_CPU                    0
#define AVR32_SYSTIMER_CLK_CPU               16

/* HSB clocks */
#define AVR32_PDCA_CLK_HSB                   32
#define AVR32_FLASHCDW_CLK_HSB               33
#define AVR32_SAU_CLK_HSB                    34
#define AVR32_PBB_CLK_HSB                    35
#define AVR32_PBA_CLK_HSB                    36
#define AVR32_PES_CLK_HSB                    37
#define AVR32_USBC_CLK_HSB                   38

/* PBA clocks */
#define AVR32_PDCA_CLK_PBA                   64
#define AVR32_INTC_CLK_PBA                   65
#define AVR32_PM_CLK_PBA                     66
#define AVR32_SCIF_CLK_PBA                   67
#define AVR32_AST_CLK_PBA                    68
#define AVR32_WDT_CLK_PBA                    69
#define AVR32_EIC_CLK_PBA                    70
#define AVR32_FREQM_CLK_PBA                  71
#define AVR32_GPIO_CLK_PBA                   72
#define AVR32_USART0_CLK_PBA                 73
#define AVR32_USART1_CLK_PBA                 74
#define AVR32_USART2_CLK_PBA                 75
#define AVR32_USART3_CLK_PBA                 76
#define AVR32_SPI_CLK_PBA                    77
#define AVR32_TWIM0_CLK_PBA                  78
#define AVR32_TWIM1_CLK_PBA                  79
#define AVR32_TWIS0_CLK_PBA                  80
#define AVR32_TWIS1_CLK_PBA                  81
#define AVR32_PWMA_CLK_PBA                   82
#define AVR32_TC0_CLK_PBA                    83
#define AVR32_TC1_CLK_PBA                    84
#define AVR32_ADCIFB_CLK_PBA                 85
#define AVR32_ACIFB_CLK_PBA                  86
#define AVR32_CAT_CLK_PBA                    87
#define AVR32_GLOC_CLK_PBA                   88
#define AVR32_AW_CLK_PBA                     89
#define AVR32_ABDACB_CLK_PBA                 90
#define AVR32_IISC_CLK_PBA                   91

/* PBB clocks */
#define AVR32_FLASHCDW_CLK_PBB               96
#define AVR32_HMATRIX_CLK_PBB                97
#define AVR32_SAU_CLK_PBB                    98
#define AVR32_USBC_CLK_PBB                   99

/* Generic clocks */
#define AVR32_SCIF_GCLK_GCLK0                0
#define AVR32_SCIF_GCLK_GCLK1                1
#define AVR32_SCIF_GCLK_GCLK2                2
#define AVR32_SCIF_GCLK_GCLK3                3
#define AVR32_SCIF_GCLK_GCLK4                4
#define AVR32_SCIF_GCLK_GCLK5                5
#define AVR32_SCIF_GCLK_GCLK6                6
#define AVR32_SCIF_GCLK_GCLK7                7
#define AVR32_SCIF_GCLK_GCLK8                8
#define AVR32_SCIF_GCLK_GCLK9                9

/* Device Parameters */

/* Memories */
#define AVR32_FLASH_ADDRESS                  0x80000000
#define AVR32_FLASH_SIZE                     0x00010000
#define AVR32_FLASH                          ((unsigned char *) AVR32_FLASH_ADDRESS)
#define AVR32_USER_PAGE_ADDRESS              0x80800000
#define AVR32_USER_PAGE_SIZE                 0x00000200
#define AVR32_USER_PAGE                      ((unsigned char *) AVR32_USER_PAGE_ADDRESS)
#define AVR32_SAU_SLAVE_ADDRESS              0x90000000
#define AVR32_SAU_SLAVE_SIZE                 0x00010000
#define AVR32_SAU_SLAVE                      ((unsigned char *) AVR32_SAU_SLAVE_ADDRESS)
#define AVR32_SRAM_ADDRESS                   0x00000000
#define AVR32_SRAM_SIZE                      0x00008000
#define AVR32_SRAM                           ((unsigned char *) AVR32_SRAM_ADDRESS)

/* Module: CORE */


/* Module instance interrupt groups: CORE */
#define AVR32_CORE_IRQ_GROUP0                0
#define AVR32_CORE_IRQ_GROUP1                1

/* Module instance interrupts: CORE */
#define AVR32_CORE_COMPARE_IRQ               0
#define AVR32_CORE_OCD_DCCPU_READ_IRQ        33
#define AVR32_CORE_OCD_DCEMU_DIRTY_IRQ       32

/* Module instance parameters: CORE */
#define AVR32_CORE_CONFIG0_RESETVALUE        0x3000D8B
#define AVR32_CORE_CONFIG1_RESETVALUE        0x800000
#define AVR32_CORE_SCAN_CHAIN_MSB            9
#define AVR32_CORE_SCAN_CLOCK_MSB            1

/* Module instance signals: CORE */

#include "avr32/core_sc0_212.h"

/* Module: OCD */


/* Module instance interrupt groups: OCD */

/* Module instance interrupts: OCD */

/* Module instance parameters: OCD */

/* Module instance signals: OCD */

#include "avr32/ocd_s0_212.h"

/* Module: INTC */

#define AVR32_INTC_ADDRESS                   0xFFFF1000
#define AVR32_INTC                           (*((volatile avr32_intc_t*) AVR32_INTC_ADDRESS))

/* Module instance interrupt groups: INTC */

/* Module instance interrupts: INTC */

/* Module instance parameters: INTC */
#define AVR32_INTC_NUM_INT_GRPS              34
#define AVR32_INTC_NUM_IRQS_PER_GRP0         1
#define AVR32_INTC_NUM_IRQS_PER_GRP1         2
#define AVR32_INTC_NUM_IRQS_PER_GRP10        4
#define AVR32_INTC_NUM_IRQS_PER_GRP11        4
#define AVR32_INTC_NUM_IRQS_PER_GRP12        1
#define AVR32_INTC_NUM_IRQS_PER_GRP13        1
#define AVR32_INTC_NUM_IRQS_PER_GRP14        8
#define AVR32_INTC_NUM_IRQS_PER_GRP15        1
#define AVR32_INTC_NUM_IRQS_PER_GRP16        1
#define AVR32_INTC_NUM_IRQS_PER_GRP17        1
#define AVR32_INTC_NUM_IRQS_PER_GRP18        1
#define AVR32_INTC_NUM_IRQS_PER_GRP19        1
#define AVR32_INTC_NUM_IRQS_PER_GRP2         1
#define AVR32_INTC_NUM_IRQS_PER_GRP20        1
#define AVR32_INTC_NUM_IRQS_PER_GRP21        1
#define AVR32_INTC_NUM_IRQS_PER_GRP22        1
#define AVR32_INTC_NUM_IRQS_PER_GRP23        1
#define AVR32_INTC_NUM_IRQS_PER_GRP24        1
#define AVR32_INTC_NUM_IRQS_PER_GRP25        3
#define AVR32_INTC_NUM_IRQS_PER_GRP26        3
#define AVR32_INTC_NUM_IRQS_PER_GRP27        1
#define AVR32_INTC_NUM_IRQS_PER_GRP28        1
#define AVR32_INTC_NUM_IRQS_PER_GRP29        1
#define AVR32_INTC_NUM_IRQS_PER_GRP3         1
#define AVR32_INTC_NUM_IRQS_PER_GRP30        1
#define AVR32_INTC_NUM_IRQS_PER_GRP31        1
#define AVR32_INTC_NUM_IRQS_PER_GRP32        1
#define AVR32_INTC_NUM_IRQS_PER_GRP33        1
#define AVR32_INTC_NUM_IRQS_PER_GRP4         4
#define AVR32_INTC_NUM_IRQS_PER_GRP5         4
#define AVR32_INTC_NUM_IRQS_PER_GRP6         4
#define AVR32_INTC_NUM_IRQS_PER_GRP7         1
#define AVR32_INTC_NUM_IRQS_PER_GRP8         1
#define AVR32_INTC_NUM_IRQS_PER_GRP9         1

/* Module instance signals: INTC */

#include "avr32/intc_300.h"

/* Module: ABDACB */

#define AVR32_ABDACB_ADDRESS                 0xFFFF7400
#define AVR32_ABDACB                         (*((volatile avr32_abdacb_t*) AVR32_ABDACB_ADDRESS))

/* Module instance interrupt groups: ABDACB */
#define AVR32_ABDACB_IRQ_GROUP               31

/* Module instance interrupts: ABDACB */
#define AVR32_ABDACB_IRQ                     992

/* Module instance parameters: ABDACB */

/* Module instance signals: ABDACB */
#define AVR32_ABDACB_CLK_0_PIN               AVR32_PIN_PB15
#define AVR32_ABDACB_CLK_0_FUNCTION          0
#define AVR32_ABDACB_DAC_0_PIN               AVR32_PIN_PB16
#define AVR32_ABDACB_DAC_0_FUNCTION          0
#define AVR32_ABDACB_DAC_1_PIN               AVR32_PIN_PB17
#define AVR32_ABDACB_DAC_1_FUNCTION          0
#define AVR32_ABDACB_DACN_0_PIN              AVR32_PIN_PB18
#define AVR32_ABDACB_DACN_0_FUNCTION         0
#define AVR32_ABDACB_DACN_1_PIN              AVR32_PIN_PB19
#define AVR32_ABDACB_DACN_1_FUNCTION         0

#include "avr32/abdacb_100.h"

/* Module: ACIFB */

#define AVR32_ACIFB_ADDRESS                  0xFFFF6400
#define AVR32_ACIFB                          (*((volatile avr32_acifb_t*) AVR32_ACIFB_ADDRESS))

/* Module instance interrupt groups: ACIFB */
#define AVR32_ACIFB_IRQ_GROUP                28

/* Module instance interrupts: ACIFB */
#define AVR32_ACIFB_IRQ                      896

/* Module instance parameters: ACIFB */
#define AVR32_ACIFB_AC_A_MSB                 3
#define AVR32_ACIFB_AC_B_MSB                 3
#define AVR32_ACIFB_AC_MSB                   7

/* Module instance signals: ACIFB */
#define AVR32_ACIFB_ACAN_0_PIN               AVR32_PIN_PA07
#define AVR32_ACIFB_ACAN_0_FUNCTION          5
#define AVR32_ACIFB_ACAN_1_PIN               AVR32_PIN_PA12
#define AVR32_ACIFB_ACAN_1_FUNCTION          5
#define AVR32_ACIFB_ACAN_2_PIN               AVR32_PIN_PB02
#define AVR32_ACIFB_ACAN_2_FUNCTION          5
#define AVR32_ACIFB_ACAN_3_PIN               AVR32_PIN_PB06
#define AVR32_ACIFB_ACAN_3_FUNCTION          5
#define AVR32_ACIFB_ACAP_0_PIN               AVR32_PIN_PA01
#define AVR32_ACIFB_ACAP_0_FUNCTION          5
#define AVR32_ACIFB_ACAP_1_PIN               AVR32_PIN_PA10
#define AVR32_ACIFB_ACAP_1_FUNCTION          5
#define AVR32_ACIFB_ACAP_2_PIN               AVR32_PIN_PB00
#define AVR32_ACIFB_ACAP_2_FUNCTION          5
#define AVR32_ACIFB_ACAP_3_PIN               AVR32_PIN_PB07
#define AVR32_ACIFB_ACAP_3_FUNCTION          5
#define AVR32_ACIFB_ACBN_3_PIN               AVR32_PIN_PA03
#define AVR32_ACIFB_ACBN_3_FUNCTION          5
#define AVR32_ACIFB_ACBN_0_PIN               AVR32_PIN_PA05
#define AVR32_ACIFB_ACBN_0_FUNCTION          5
#define AVR32_ACIFB_ACBN_2_PIN               AVR32_PIN_PA22
#define AVR32_ACIFB_ACBN_2_FUNCTION          5
#define AVR32_ACIFB_ACBN_1_PIN               AVR32_PIN_PB09
#define AVR32_ACIFB_ACBN_1_FUNCTION          5
#define AVR32_ACIFB_ACBP_0_PIN               AVR32_PIN_PA02
#define AVR32_ACIFB_ACBP_0_FUNCTION          5
#define AVR32_ACIFB_ACBP_1_PIN               AVR32_PIN_PA04
#define AVR32_ACIFB_ACBP_1_FUNCTION          5
#define AVR32_ACIFB_ACBP_2_PIN               AVR32_PIN_PB03
#define AVR32_ACIFB_ACBP_2_FUNCTION          5
#define AVR32_ACIFB_ACBP_3_PIN               AVR32_PIN_PB12
#define AVR32_ACIFB_ACBP_3_FUNCTION          5
#define AVR32_ACIFB_ACREFN_0_PIN             AVR32_PIN_PA16
#define AVR32_ACIFB_ACREFN_0_FUNCTION        5

#include "avr32/acifb_202.h"

/* Module: ADCIFB */

#define AVR32_ADCIFB_ADDRESS                 0xFFFF6000
#define AVR32_ADCIFB                         (*((volatile avr32_adcifb_t*) AVR32_ADCIFB_ADDRESS))

/* Module instance interrupt groups: ADCIFB */
#define AVR32_ADCIFB_IRQ_GROUP               27

/* Module instance interrupts: ADCIFB */
#define AVR32_ADCIFB_IRQ                     864

/* Module instance parameters: ADCIFB */
#define AVR32_ADCIFB_ADC_DATA_MSB            9
#define AVR32_ADCIFB_NCH_LOG2_MSB            3
#define AVR32_ADCIFB_NCH_MSB                 9
#define AVR32_ADCIFB_PADDR_MSB               10
#define AVR32_ADCIFB_PDATA_MSB               32

/* Module instance signals: ADCIFB */
#define AVR32_ADCIFB_AD_0_PIN                AVR32_PIN_PA14
#define AVR32_ADCIFB_AD_0_FUNCTION           0
#define AVR32_ADCIFB_AD_1_PIN                AVR32_PIN_PA15
#define AVR32_ADCIFB_AD_1_FUNCTION           0
#define AVR32_ADCIFB_AD_2_PIN                AVR32_PIN_PA16
#define AVR32_ADCIFB_AD_2_FUNCTION           0
#define AVR32_ADCIFB_AD_3_PIN                AVR32_PIN_PA17
#define AVR32_ADCIFB_AD_3_FUNCTION           0
#define AVR32_ADCIFB_AD_4_PIN                AVR32_PIN_PA18
#define AVR32_ADCIFB_AD_4_FUNCTION           0
#define AVR32_ADCIFB_AD_5_PIN                AVR32_PIN_PA19
#define AVR32_ADCIFB_AD_5_FUNCTION           0
#define AVR32_ADCIFB_AD_6_PIN                AVR32_PIN_PB06
#define AVR32_ADCIFB_AD_6_FUNCTION           2
#define AVR32_ADCIFB_AD_7_PIN                AVR32_PIN_PB07
#define AVR32_ADCIFB_AD_7_FUNCTION           2
#define AVR32_ADCIFB_AD_8_PIN                AVR32_PIN_PB08
#define AVR32_ADCIFB_AD_8_FUNCTION           2
#define AVR32_ADCIFB_ADP_0_0_PIN             AVR32_PIN_PB00
#define AVR32_ADCIFB_ADP_0_0_FUNCTION        1
#define AVR32_ADCIFB_ADP_0_1_PIN             AVR32_PIN_PA08
#define AVR32_ADCIFB_ADP_0_1_FUNCTION        3
#define AVR32_ADCIFB_ADP_0_2_PIN             AVR32_PIN_PB26
#define AVR32_ADCIFB_ADP_0_2_FUNCTION        5
#define AVR32_ADCIFB_ADP_1_0_PIN             AVR32_PIN_PB01
#define AVR32_ADCIFB_ADP_1_0_FUNCTION        1
#define AVR32_ADCIFB_ADP_1_1_PIN             AVR32_PIN_PA09
#define AVR32_ADCIFB_ADP_1_1_FUNCTION        3
#define AVR32_ADCIFB_ADP_1_2_PIN             AVR32_PIN_PB13
#define AVR32_ADCIFB_ADP_1_2_FUNCTION        5
#define AVR32_ADCIFB_ADP_1_3_PIN             AVR32_PIN_PB24
#define AVR32_ADCIFB_ADP_1_3_FUNCTION        5
#define AVR32_ADCIFB_ADP_1_4_PIN             AVR32_PIN_PB27
#define AVR32_ADCIFB_ADP_1_4_FUNCTION        5
#define AVR32_ADCIFB_ADP_0_0_PIN             AVR32_PIN_PB00
#define AVR32_ADCIFB_ADP_0_0_FUNCTION        1
#define AVR32_ADCIFB_ADP_0_1_PIN             AVR32_PIN_PA08
#define AVR32_ADCIFB_ADP_0_1_FUNCTION        3
#define AVR32_ADCIFB_ADP_0_2_PIN             AVR32_PIN_PB26
#define AVR32_ADCIFB_ADP_0_2_FUNCTION        5
#define AVR32_ADCIFB_ADP_1_0_PIN             AVR32_PIN_PB01
#define AVR32_ADCIFB_ADP_1_0_FUNCTION        1
#define AVR32_ADCIFB_ADP_1_1_PIN             AVR32_PIN_PA09
#define AVR32_ADCIFB_ADP_1_1_FUNCTION        3
#define AVR32_ADCIFB_ADP_1_2_PIN             AVR32_PIN_PB13
#define AVR32_ADCIFB_ADP_1_2_FUNCTION        5
#define AVR32_ADCIFB_ADP_1_3_PIN             AVR32_PIN_PB24
#define AVR32_ADCIFB_ADP_1_3_FUNCTION        5
#define AVR32_ADCIFB_ADP_1_4_PIN             AVR32_PIN_PB27
#define AVR32_ADCIFB_ADP_1_4_FUNCTION        5
#define AVR32_ADCIFB_ADP_0_0_PIN             AVR32_PIN_PB00
#define AVR32_ADCIFB_ADP_0_0_FUNCTION        1
#define AVR32_ADCIFB_ADP_0_1_PIN             AVR32_PIN_PA08
#define AVR32_ADCIFB_ADP_0_1_FUNCTION        3
#define AVR32_ADCIFB_ADP_0_2_PIN             AVR32_PIN_PB26
#define AVR32_ADCIFB_ADP_0_2_FUNCTION        5
#define AVR32_ADCIFB_ADP_1_0_PIN             AVR32_PIN_PB01
#define AVR32_ADCIFB_ADP_1_0_FUNCTION        1
#define AVR32_ADCIFB_ADP_1_1_PIN             AVR32_PIN_PA09
#define AVR32_ADCIFB_ADP_1_1_FUNCTION        3
#define AVR32_ADCIFB_ADP_1_2_PIN             AVR32_PIN_PB13
#define AVR32_ADCIFB_ADP_1_2_FUNCTION        5
#define AVR32_ADCIFB_ADP_1_3_PIN             AVR32_PIN_PB24
#define AVR32_ADCIFB_ADP_1_3_FUNCTION        5
#define AVR32_ADCIFB_ADP_1_4_PIN             AVR32_PIN_PB27
#define AVR32_ADCIFB_ADP_1_4_FUNCTION        5
#define AVR32_ADCIFB_PRND_0_PIN              AVR32_PIN_PA12
#define AVR32_ADCIFB_PRND_0_FUNCTION         0
#define AVR32_ADCIFB_TRIGGER_0_0_PIN         AVR32_PIN_PA02
#define AVR32_ADCIFB_TRIGGER_0_0_FUNCTION    1
#define AVR32_ADCIFB_TRIGGER_0_1_PIN         AVR32_PIN_PA21
#define AVR32_ADCIFB_TRIGGER_0_1_FUNCTION    3
#define AVR32_ADCIFB_TRIGGER_0_2_PIN         AVR32_PIN_PB11
#define AVR32_ADCIFB_TRIGGER_0_2_FUNCTION    3
#define AVR32_ADCIFB_TRIGGER_0_3_PIN         AVR32_PIN_PB22
#define AVR32_ADCIFB_TRIGGER_0_3_FUNCTION    5

#include "avr32/adcifb_110.h"

/* Module: AST */

#define AVR32_AST_ADDRESS                    0xFFFF1C00
#define AVR32_AST                            (*((volatile avr32_ast_t*) AVR32_AST_ADDRESS))

/* Module instance interrupt groups: AST */
#define AVR32_AST_IRQ_GROUP0                 9
#define AVR32_AST_IRQ_GROUP1                 10

/* Module instance interrupts: AST */
#define AVR32_AST_ALARM_IRQ                  288
#define AVR32_AST_CLKREADY_IRQ               323
#define AVR32_AST_OVF_IRQ                    321
#define AVR32_AST_PER_IRQ                    320
#define AVR32_AST_READY_IRQ                  322

/* Module instance parameters: AST */
#define AVR32_AST_CLK1K                      4
#define AVR32_AST_CLK32                      1
#define AVR32_AST_GCLK_NUM                   2
#define AVR32_AST_GENCLK                     3
#define AVR32_AST_PB                         2
#define AVR32_AST_RCOSC                      0

/* Module instance signals: AST */

#include "avr32/ast_310.h"

/* Module: AW */

#define AVR32_AW_ADDRESS                     0xFFFF7000
#define AVR32_AW                             (*((volatile avr32_aw_t*) AVR32_AW_ADDRESS))

/* Module instance interrupt groups: AW */
#define AVR32_AW_IRQ_GROUP                   30

/* Module instance interrupts: AW */
#define AVR32_AW_IRQ                         960

/* Module instance parameters: AW */
#define AVR32_AW_PDCA_ID_RX                  10
#define AVR32_AW_PDCA_ID_TX                  21

/* Module instance signals: AW */

#include "avr32/aw_230.h"

/* Module: CAT */

#define AVR32_CAT_ADDRESS                    0xFFFF6800
#define AVR32_CAT                            (*((volatile avr32_cat_t*) AVR32_CAT_ADDRESS))

/* Module instance interrupt groups: CAT */
#define AVR32_CAT_IRQ_GROUP                  29

/* Module instance interrupts: CAT */
#define AVR32_CAT_IRQ                        928

/* Module instance parameters: CAT */
#define AVR32_CAT_SENSORS_MSB                16
#define AVR32_CAT_GCLK_NUM                   4
#define AVR32_CAT_PDCA_ID_RX_ACOUNT          11
#define AVR32_CAT_PDCA_ID_RX_DMATSR          29
#define AVR32_CAT_PDCA_ID_TX                 22
#define AVR32_CAT_REG_RX_ACOUNT              ACOUNT
#define AVR32_CAT_REG_RX_DMATSR              DMATSR
#define AVR32_CAT_REG_TX                     DMATSW

/* Module instance signals: CAT */
#define AVR32_CAT_CSA_2_0_PIN                AVR32_PIN_PA00
#define AVR32_CAT_CSA_2_0_FUNCTION           7
#define AVR32_CAT_CSA_2_1_PIN                AVR32_PIN_PB24
#define AVR32_CAT_CSA_2_1_FUNCTION           7
#define AVR32_CAT_CSA_1_PIN                  AVR32_PIN_PA01
#define AVR32_CAT_CSA_1_FUNCTION             7
#define AVR32_CAT_CSA_3_0_PIN                AVR32_PIN_PA02
#define AVR32_CAT_CSA_3_0_FUNCTION           7
#define AVR32_CAT_CSA_3_1_PIN                AVR32_PIN_PB25
#define AVR32_CAT_CSA_3_1_FUNCTION           7
#define AVR32_CAT_CSA_7_PIN                  AVR32_PIN_PA04
#define AVR32_CAT_CSA_7_FUNCTION             7
#define AVR32_CAT_CSA_4_0_PIN                AVR32_PIN_PA08
#define AVR32_CAT_CSA_4_0_FUNCTION           7
#define AVR32_CAT_CSA_4_1_PIN                AVR32_PIN_PB23
#define AVR32_CAT_CSA_4_1_FUNCTION           7
#define AVR32_CAT_CSA_5_0_PIN                AVR32_PIN_PA10
#define AVR32_CAT_CSA_5_0_FUNCTION           7
#define AVR32_CAT_CSA_5_1_PIN                AVR32_PIN_PB16
#define AVR32_CAT_CSA_5_1_FUNCTION           7
#define AVR32_CAT_CSA_0_0_PIN                AVR32_PIN_PA13
#define AVR32_CAT_CSA_0_0_FUNCTION           7
#define AVR32_CAT_CSA_0_1_PIN                AVR32_PIN_PB18
#define AVR32_CAT_CSA_0_1_FUNCTION           7
#define AVR32_CAT_CSA_6_PIN                  AVR32_PIN_PA14
#define AVR32_CAT_CSA_6_FUNCTION             7
#define AVR32_CAT_CSA_8_0_PIN                AVR32_PIN_PA16
#define AVR32_CAT_CSA_8_0_FUNCTION           7
#define AVR32_CAT_CSA_8_1_PIN                AVR32_PIN_PB22
#define AVR32_CAT_CSA_8_1_FUNCTION           7
#define AVR32_CAT_CSA_10_PIN                 AVR32_PIN_PA19
#define AVR32_CAT_CSA_10_FUNCTION            7
#define AVR32_CAT_CSA_12_0_PIN               AVR32_PIN_PA20
#define AVR32_CAT_CSA_12_0_FUNCTION          7
#define AVR32_CAT_CSA_12_1_PIN               AVR32_PIN_PB19
#define AVR32_CAT_CSA_12_1_FUNCTION          7
#define AVR32_CAT_CSA_9_0_PIN                AVR32_PIN_PB00
#define AVR32_CAT_CSA_9_0_FUNCTION           7
#define AVR32_CAT_CSA_9_1_PIN                AVR32_PIN_PB27
#define AVR32_CAT_CSA_9_1_FUNCTION           7
#define AVR32_CAT_CSA_11_PIN                 AVR32_PIN_PB03
#define AVR32_CAT_CSA_11_FUNCTION            7
#define AVR32_CAT_CSA_14_0_PIN               AVR32_PIN_PB04
#define AVR32_CAT_CSA_14_0_FUNCTION          7
#define AVR32_CAT_CSA_14_1_PIN               AVR32_PIN_PB20
#define AVR32_CAT_CSA_14_1_FUNCTION          7
#define AVR32_CAT_CSA_13_PIN                 AVR32_PIN_PB07
#define AVR32_CAT_CSA_13_FUNCTION            7
#define AVR32_CAT_CSA_16_PIN                 AVR32_PIN_PB11
#define AVR32_CAT_CSA_16_FUNCTION            7
#define AVR32_CAT_CSA_15_PIN                 AVR32_PIN_PB12
#define AVR32_CAT_CSA_15_FUNCTION            7
#define AVR32_CAT_CSA_5_0_PIN                AVR32_PIN_PA10
#define AVR32_CAT_CSA_5_0_FUNCTION           7
#define AVR32_CAT_CSA_5_1_PIN                AVR32_PIN_PB16
#define AVR32_CAT_CSA_5_1_FUNCTION           7
#define AVR32_CAT_CSA_0_0_PIN                AVR32_PIN_PA13
#define AVR32_CAT_CSA_0_0_FUNCTION           7
#define AVR32_CAT_CSA_0_1_PIN                AVR32_PIN_PB18
#define AVR32_CAT_CSA_0_1_FUNCTION           7
#define AVR32_CAT_CSA_12_0_PIN               AVR32_PIN_PA20
#define AVR32_CAT_CSA_12_0_FUNCTION          7
#define AVR32_CAT_CSA_12_1_PIN               AVR32_PIN_PB19
#define AVR32_CAT_CSA_12_1_FUNCTION          7
#define AVR32_CAT_CSA_14_0_PIN               AVR32_PIN_PB04
#define AVR32_CAT_CSA_14_0_FUNCTION          7
#define AVR32_CAT_CSA_14_1_PIN               AVR32_PIN_PB20
#define AVR32_CAT_CSA_14_1_FUNCTION          7
#define AVR32_CAT_CSA_8_0_PIN                AVR32_PIN_PA16
#define AVR32_CAT_CSA_8_0_FUNCTION           7
#define AVR32_CAT_CSA_8_1_PIN                AVR32_PIN_PB22
#define AVR32_CAT_CSA_8_1_FUNCTION           7
#define AVR32_CAT_CSA_4_0_PIN                AVR32_PIN_PA08
#define AVR32_CAT_CSA_4_0_FUNCTION           7
#define AVR32_CAT_CSA_4_1_PIN                AVR32_PIN_PB23
#define AVR32_CAT_CSA_4_1_FUNCTION           7
#define AVR32_CAT_CSA_2_0_PIN                AVR32_PIN_PA00
#define AVR32_CAT_CSA_2_0_FUNCTION           7
#define AVR32_CAT_CSA_2_1_PIN                AVR32_PIN_PB24
#define AVR32_CAT_CSA_2_1_FUNCTION           7
#define AVR32_CAT_CSA_3_0_PIN                AVR32_PIN_PA02
#define AVR32_CAT_CSA_3_0_FUNCTION           7
#define AVR32_CAT_CSA_3_1_PIN                AVR32_PIN_PB25
#define AVR32_CAT_CSA_3_1_FUNCTION           7
#define AVR32_CAT_CSA_9_0_PIN                AVR32_PIN_PB00
#define AVR32_CAT_CSA_9_0_FUNCTION           7
#define AVR32_CAT_CSA_9_1_PIN                AVR32_PIN_PB27
#define AVR32_CAT_CSA_9_1_FUNCTION           7
#define AVR32_CAT_CSB_3_0_PIN                AVR32_PIN_PA03
#define AVR32_CAT_CSB_3_0_FUNCTION           7
#define AVR32_CAT_CSB_3_1_PIN                AVR32_PIN_PB26
#define AVR32_CAT_CSB_3_1_FUNCTION           7
#define AVR32_CAT_CSB_7_PIN                  AVR32_PIN_PA05
#define AVR32_CAT_CSB_7_FUNCTION             7
#define AVR32_CAT_CSB_1_PIN                  AVR32_PIN_PA06
#define AVR32_CAT_CSB_1_FUNCTION             7
#define AVR32_CAT_CSB_2_0_PIN                AVR32_PIN_PA07
#define AVR32_CAT_CSB_2_0_FUNCTION           7
#define AVR32_CAT_CSB_2_1_PIN                AVR32_PIN_PB13
#define AVR32_CAT_CSB_2_1_FUNCTION           7
#define AVR32_CAT_CSB_4_0_PIN                AVR32_PIN_PA09
#define AVR32_CAT_CSB_4_0_FUNCTION           7
#define AVR32_CAT_CSB_4_1_PIN                AVR32_PIN_PB15
#define AVR32_CAT_CSB_4_1_FUNCTION           7
#define AVR32_CAT_CSB_5_0_PIN                AVR32_PIN_PA12
#define AVR32_CAT_CSB_5_0_FUNCTION           7
#define AVR32_CAT_CSB_5_1_PIN                AVR32_PIN_PB17
#define AVR32_CAT_CSB_5_1_FUNCTION           7
#define AVR32_CAT_CSB_6_PIN                  AVR32_PIN_PA15
#define AVR32_CAT_CSB_6_FUNCTION             7
#define AVR32_CAT_CSB_8_PIN                  AVR32_PIN_PA17
#define AVR32_CAT_CSB_8_FUNCTION             7
#define AVR32_CAT_CSB_0_PIN                  AVR32_PIN_PA18
#define AVR32_CAT_CSB_0_FUNCTION             7
#define AVR32_CAT_CSB_10_PIN                 AVR32_PIN_PA22
#define AVR32_CAT_CSB_10_FUNCTION            7
#define AVR32_CAT_CSB_9_0_PIN                AVR32_PIN_PB01
#define AVR32_CAT_CSB_9_0_FUNCTION           7
#define AVR32_CAT_CSB_9_1_PIN                AVR32_PIN_PB14
#define AVR32_CAT_CSB_9_1_FUNCTION           7
#define AVR32_CAT_CSB_11_PIN                 AVR32_PIN_PB02
#define AVR32_CAT_CSB_11_FUNCTION            7
#define AVR32_CAT_CSB_14_0_PIN               AVR32_PIN_PB05
#define AVR32_CAT_CSB_14_0_FUNCTION          7
#define AVR32_CAT_CSB_14_1_PIN               AVR32_PIN_PB21
#define AVR32_CAT_CSB_14_1_FUNCTION          7
#define AVR32_CAT_CSB_13_PIN                 AVR32_PIN_PB06
#define AVR32_CAT_CSB_13_FUNCTION            7
#define AVR32_CAT_CSB_12_PIN                 AVR32_PIN_PB08
#define AVR32_CAT_CSB_12_FUNCTION            7
#define AVR32_CAT_CSB_15_PIN                 AVR32_PIN_PB09
#define AVR32_CAT_CSB_15_FUNCTION            7
#define AVR32_CAT_CSB_16_PIN                 AVR32_PIN_PB10
#define AVR32_CAT_CSB_16_FUNCTION            7
#define AVR32_CAT_CSB_2_0_PIN                AVR32_PIN_PA07
#define AVR32_CAT_CSB_2_0_FUNCTION           7
#define AVR32_CAT_CSB_2_1_PIN                AVR32_PIN_PB13
#define AVR32_CAT_CSB_2_1_FUNCTION           7
#define AVR32_CAT_CSB_9_0_PIN                AVR32_PIN_PB01
#define AVR32_CAT_CSB_9_0_FUNCTION           7
#define AVR32_CAT_CSB_9_1_PIN                AVR32_PIN_PB14
#define AVR32_CAT_CSB_9_1_FUNCTION           7
#define AVR32_CAT_CSB_4_0_PIN                AVR32_PIN_PA09
#define AVR32_CAT_CSB_4_0_FUNCTION           7
#define AVR32_CAT_CSB_4_1_PIN                AVR32_PIN_PB15
#define AVR32_CAT_CSB_4_1_FUNCTION           7
#define AVR32_CAT_CSB_5_0_PIN                AVR32_PIN_PA12
#define AVR32_CAT_CSB_5_0_FUNCTION           7
#define AVR32_CAT_CSB_5_1_PIN                AVR32_PIN_PB17
#define AVR32_CAT_CSB_5_1_FUNCTION           7
#define AVR32_CAT_CSB_14_0_PIN               AVR32_PIN_PB05
#define AVR32_CAT_CSB_14_0_FUNCTION          7
#define AVR32_CAT_CSB_14_1_PIN               AVR32_PIN_PB21
#define AVR32_CAT_CSB_14_1_FUNCTION          7
#define AVR32_CAT_CSB_3_0_PIN                AVR32_PIN_PA03
#define AVR32_CAT_CSB_3_0_FUNCTION           7
#define AVR32_CAT_CSB_3_1_PIN                AVR32_PIN_PB26
#define AVR32_CAT_CSB_3_1_FUNCTION           7
#define AVR32_CAT_DIS_0_PIN                  AVR32_PIN_PA17
#define AVR32_CAT_DIS_0_FUNCTION             6
#define AVR32_CAT_SMP_0_0_PIN                AVR32_PIN_PA12
#define AVR32_CAT_SMP_0_0_FUNCTION           3
#define AVR32_CAT_SMP_0_1_PIN                AVR32_PIN_PA14
#define AVR32_CAT_SMP_0_1_FUNCTION           3
#define AVR32_CAT_SMP_0_2_PIN                AVR32_PIN_PA22
#define AVR32_CAT_SMP_0_2_FUNCTION           3
#define AVR32_CAT_SMP_0_3_PIN                AVR32_PIN_PA13
#define AVR32_CAT_SMP_0_3_FUNCTION           5
#define AVR32_CAT_SMP_0_4_PIN                AVR32_PIN_PA17
#define AVR32_CAT_SMP_0_4_FUNCTION           5
#define AVR32_CAT_SMP_0_5_PIN                AVR32_PIN_PB23
#define AVR32_CAT_SMP_0_5_FUNCTION           5
#define AVR32_CAT_SMP_0_6_PIN                AVR32_PIN_PA21
#define AVR32_CAT_SMP_0_6_FUNCTION           7
#define AVR32_CAT_SYNC_0_0_PIN               AVR32_PIN_PB12
#define AVR32_CAT_SYNC_0_0_FUNCTION          3
#define AVR32_CAT_SYNC_0_1_PIN               AVR32_PIN_PA15
#define AVR32_CAT_SYNC_0_1_FUNCTION          5
#define AVR32_CAT_SYNC_0_2_PIN               AVR32_PIN_PA18
#define AVR32_CAT_SYNC_0_2_FUNCTION          5
#define AVR32_CAT_SYNC_0_3_PIN               AVR32_PIN_PB08
#define AVR32_CAT_SYNC_0_3_FUNCTION          5
#define AVR32_CAT_SYNC_0_4_PIN               AVR32_PIN_PA19
#define AVR32_CAT_SYNC_0_4_FUNCTION          6
#define AVR32_CAT_VDIVEN_0_PIN               AVR32_PIN_PB11
#define AVR32_CAT_VDIVEN_0_FUNCTION          5

#include "avr32/cat_400.h"

/* Module: EIC */

#define AVR32_EIC_ADDRESS                    0xFFFF2400
#define AVR32_EIC                            (*((volatile avr32_eic_t*) AVR32_EIC_ADDRESS))

/* Module instance interrupt groups: EIC */
#define AVR32_EIC_IRQ_GROUP0                 11
#define AVR32_EIC_IRQ_GROUP1                 12

/* Module instance interrupts: EIC */
#define AVR32_EIC_IRQ_1                      352
#define AVR32_EIC_IRQ_2                      353
#define AVR32_EIC_IRQ_3                      354
#define AVR32_EIC_IRQ_4                      355
#define AVR32_EIC_IRQ_5                      384

/* Module instance parameters: EIC */
#define AVR32_EIC_INT_MSB                    5
#define AVR32_EIC_SCAN_MSB                   0
#define AVR32_EIC_STD_NUM                    5

/* Module instance signals: EIC */
#define AVR32_EIC_EXTINT_2_0_PIN             AVR32_PIN_PA06
#define AVR32_EIC_EXTINT_2_0_FUNCTION        5
#define AVR32_EIC_EXTINT_2_1_PIN             AVR32_PIN_PA13
#define AVR32_EIC_EXTINT_2_1_FUNCTION        6
#define AVR32_EIC_EXTINT_2_2_PIN             AVR32_PIN_PB08
#define AVR32_EIC_EXTINT_2_2_FUNCTION        6
#define AVR32_EIC_EXTINT_0_0_PIN             AVR32_PIN_PA07
#define AVR32_EIC_EXTINT_0_0_FUNCTION        6
#define AVR32_EIC_EXTINT_0_1_PIN             AVR32_PIN_PB06
#define AVR32_EIC_EXTINT_0_1_FUNCTION        6
#define AVR32_EIC_EXTINT_0_2_PIN             AVR32_PIN_PB27
#define AVR32_EIC_EXTINT_0_2_FUNCTION        6
#define AVR32_EIC_EXTINT_1_0_PIN             AVR32_PIN_PA09
#define AVR32_EIC_EXTINT_1_0_FUNCTION        6
#define AVR32_EIC_EXTINT_1_1_PIN             AVR32_PIN_PB07
#define AVR32_EIC_EXTINT_1_1_FUNCTION        6
#define AVR32_EIC_EXTINT_1_2_PIN             AVR32_PIN_PB19
#define AVR32_EIC_EXTINT_1_2_FUNCTION        6
#define AVR32_EIC_EXTINT_2_0_PIN             AVR32_PIN_PA06
#define AVR32_EIC_EXTINT_2_0_FUNCTION        5
#define AVR32_EIC_EXTINT_2_1_PIN             AVR32_PIN_PA13
#define AVR32_EIC_EXTINT_2_1_FUNCTION        6
#define AVR32_EIC_EXTINT_2_2_PIN             AVR32_PIN_PB08
#define AVR32_EIC_EXTINT_2_2_FUNCTION        6
#define AVR32_EIC_EXTINT_3_0_PIN             AVR32_PIN_PA15
#define AVR32_EIC_EXTINT_3_0_FUNCTION        6
#define AVR32_EIC_EXTINT_3_1_PIN             AVR32_PIN_PB09
#define AVR32_EIC_EXTINT_3_1_FUNCTION        6
#define AVR32_EIC_EXTINT_4_0_PIN             AVR32_PIN_PA16
#define AVR32_EIC_EXTINT_4_0_FUNCTION        6
#define AVR32_EIC_EXTINT_4_1_PIN             AVR32_PIN_PB10
#define AVR32_EIC_EXTINT_4_1_FUNCTION        6
#define AVR32_EIC_EXTINT_5_0_PIN             AVR32_PIN_PA18
#define AVR32_EIC_EXTINT_5_0_FUNCTION        6
#define AVR32_EIC_EXTINT_5_1_PIN             AVR32_PIN_PB11
#define AVR32_EIC_EXTINT_5_1_FUNCTION        6
#define AVR32_EIC_EXTINT_0_0_PIN             AVR32_PIN_PA07
#define AVR32_EIC_EXTINT_0_0_FUNCTION        6
#define AVR32_EIC_EXTINT_0_1_PIN             AVR32_PIN_PB06
#define AVR32_EIC_EXTINT_0_1_FUNCTION        6
#define AVR32_EIC_EXTINT_0_2_PIN             AVR32_PIN_PB27
#define AVR32_EIC_EXTINT_0_2_FUNCTION        6
#define AVR32_EIC_EXTINT_1_0_PIN             AVR32_PIN_PA09
#define AVR32_EIC_EXTINT_1_0_FUNCTION        6
#define AVR32_EIC_EXTINT_1_1_PIN             AVR32_PIN_PB07
#define AVR32_EIC_EXTINT_1_1_FUNCTION        6
#define AVR32_EIC_EXTINT_1_2_PIN             AVR32_PIN_PB19
#define AVR32_EIC_EXTINT_1_2_FUNCTION        6
#define AVR32_EIC_EXTINT_2_0_PIN             AVR32_PIN_PA06
#define AVR32_EIC_EXTINT_2_0_FUNCTION        5
#define AVR32_EIC_EXTINT_2_1_PIN             AVR32_PIN_PA13
#define AVR32_EIC_EXTINT_2_1_FUNCTION        6
#define AVR32_EIC_EXTINT_2_2_PIN             AVR32_PIN_PB08
#define AVR32_EIC_EXTINT_2_2_FUNCTION        6
#define AVR32_EIC_EXTINT_3_0_PIN             AVR32_PIN_PA15
#define AVR32_EIC_EXTINT_3_0_FUNCTION        6
#define AVR32_EIC_EXTINT_3_1_PIN             AVR32_PIN_PB09
#define AVR32_EIC_EXTINT_3_1_FUNCTION        6
#define AVR32_EIC_EXTINT_4_0_PIN             AVR32_PIN_PA16
#define AVR32_EIC_EXTINT_4_0_FUNCTION        6
#define AVR32_EIC_EXTINT_4_1_PIN             AVR32_PIN_PB10
#define AVR32_EIC_EXTINT_4_1_FUNCTION        6
#define AVR32_EIC_EXTINT_5_0_PIN             AVR32_PIN_PA18
#define AVR32_EIC_EXTINT_5_0_FUNCTION        6
#define AVR32_EIC_EXTINT_5_1_PIN             AVR32_PIN_PB11
#define AVR32_EIC_EXTINT_5_1_FUNCTION        6
#define AVR32_EIC_EXTINT_1_0_PIN             AVR32_PIN_PA09
#define AVR32_EIC_EXTINT_1_0_FUNCTION        6
#define AVR32_EIC_EXTINT_1_1_PIN             AVR32_PIN_PB07
#define AVR32_EIC_EXTINT_1_1_FUNCTION        6
#define AVR32_EIC_EXTINT_1_2_PIN             AVR32_PIN_PB19
#define AVR32_EIC_EXTINT_1_2_FUNCTION        6
#define AVR32_EIC_EXTINT_0_0_PIN             AVR32_PIN_PA07
#define AVR32_EIC_EXTINT_0_0_FUNCTION        6
#define AVR32_EIC_EXTINT_0_1_PIN             AVR32_PIN_PB06
#define AVR32_EIC_EXTINT_0_1_FUNCTION        6
#define AVR32_EIC_EXTINT_0_2_PIN             AVR32_PIN_PB27
#define AVR32_EIC_EXTINT_0_2_FUNCTION        6

#include "avr32/eic_302.h"

/* Module: FLASHCDW */

#define AVR32_FLASHCDW_ADDRESS               0xFFFE0000
#define AVR32_FLASHCDW                       (*((volatile avr32_flashcdw_t*) AVR32_FLASHCDW_ADDRESS))

/* Module instance interrupt groups: FLASHCDW */
#define AVR32_FLASHCDW_IRQ_GROUP             2

/* Module instance interrupts: FLASHCDW */
#define AVR32_FLASHCDW_IRQ                   64

/* Module instance parameters: FLASHCDW */
#define AVR32_FLASHCDW_CALFUSE_NB            64
#define AVR32_FLASHCDW_FACTORY_WORD_IMPLEMENTED_MASK 0xC000000000001FFF
#define AVR32_FLASHCDW_FLASH_SIZE            65536
#define AVR32_FLASHCDW_FWS_0_MAX_FREQ        15000000
#define AVR32_FLASHCDW_FWS_1_MAX_FREQ        30000000
#define AVR32_FLASHCDW_LOCKFUSE_NB           48
#define AVR32_FLASHCDW_PAGES_PR_REGION       8
#define AVR32_FLASHCDW_PAGE_SIZE             512
#define AVR32_FLASHCDW_USER_PAGE             ((volatile unsigned char*) AVR32_FLASHCDW_USER_PAGE_ADDRESS)
#define AVR32_FLASHCDW_USER_PAGE_ADDRESS     0x80800000
#define AVR32_FLASHCDW_USER_PAGE_SIZE        512
#define AVR32_FLASHCDW_USER_WORD_IMPLEMENTED_MASK 0xC0000001FFFFFFFF

/* Module instance signals: FLASHCDW */

#include "avr32/flashcdw_120.h"

/* Module: FREQM */

#define AVR32_FREQM_ADDRESS                  0xFFFF2800
#define AVR32_FREQM                          (*((volatile avr32_freqm_t*) AVR32_FREQM_ADDRESS))

/* Module instance interrupt groups: FREQM */
#define AVR32_FREQM_IRQ_GROUP                13

/* Module instance interrupts: FREQM */
#define AVR32_FREQM_IRQ                      416

/* Module instance parameters: FREQM */
#define AVR32_FREQM_CPU                      0
#define AVR32_FREQM_CRIPEL                   0
#define AVR32_FREQM_DFLL0                    7
#define AVR32_FREQM_FLO                      8
#define AVR32_FREQM_GENCLK0                  9
#define AVR32_FREQM_GENCLK1                  10
#define AVR32_FREQM_GENCLK10                 0
#define AVR32_FREQM_GENCLK2                  11
#define AVR32_FREQM_GENCLK3                  12
#define AVR32_FREQM_GENCLK4                  13
#define AVR32_FREQM_GENCLK5                  14
#define AVR32_FREQM_GENCLK6                  15
#define AVR32_FREQM_GENCLK7                  16
#define AVR32_FREQM_GENCLK8                  17
#define AVR32_FREQM_GENCLK9                  18
#define AVR32_FREQM_GENCLKDIV0               0
#define AVR32_FREQM_GENCLKDIV1               0
#define AVR32_FREQM_GENCLKDIV10              0
#define AVR32_FREQM_GENCLKDIV2               0
#define AVR32_FREQM_GENCLKDIV3               0
#define AVR32_FREQM_GENCLKDIV4               0
#define AVR32_FREQM_GENCLKDIV5               0
#define AVR32_FREQM_GENCLKDIV6               0
#define AVR32_FREQM_GENCLKDIV7               0
#define AVR32_FREQM_GENCLKDIV8               0
#define AVR32_FREQM_GENCLKDIV9               0
#define AVR32_FREQM_HSB                      1
#define AVR32_FREQM_NUM_CLK                  24
#define AVR32_FREQM_NUM_REF_CLK              3
#define AVR32_FREQM_OSC0                     4
#define AVR32_FREQM_OSC1                     0
#define AVR32_FREQM_OSC2                     0
#define AVR32_FREQM_OSC3                     0
#define AVR32_FREQM_OSC32                    5
#define AVR32_FREQM_OSC4                     0
#define AVR32_FREQM_PBA                      2
#define AVR32_FREQM_PBB                      3
#define AVR32_FREQM_PBC                      0
#define AVR32_FREQM_PLL0                     22
#define AVR32_FREQM_PLL1                     0
#define AVR32_FREQM_PLL2                     0
#define AVR32_FREQM_PLL3                     0
#define AVR32_FREQM_RC120M                   20
#define AVR32_FREQM_RC120M_AW                19
#define AVR32_FREQM_RC32K                    21
#define AVR32_FREQM_RCOSC                    6
#define AVR32_FREQM_RCOSC8                   0
#define AVR32_FREQM_REFSEL_BITS              2
#define AVR32_FREQM_REF_GENCLK0              0
#define AVR32_FREQM_REF_GENCLK1              0
#define AVR32_FREQM_REF_GENCLK2              0
#define AVR32_FREQM_REF_GENCLK3              0
#define AVR32_FREQM_REF_GENCLK4              0
#define AVR32_FREQM_REF_GENCLK5              0
#define AVR32_FREQM_REF_GENCLK6              0
#define AVR32_FREQM_REF_GENCLK9              2
#define AVR32_FREQM_REF_OSC0                 0
#define AVR32_FREQM_REF_OSC1                 0
#define AVR32_FREQM_REF_OSC2                 0
#define AVR32_FREQM_REF_OSC32                1
#define AVR32_FREQM_REF_RCOSC                0
#define AVR32_FREQM_REF_RCOSC8               0

/* Module instance signals: FREQM */

#include "avr32/freqm_310.h"

/* Module: GLOC */

#define AVR32_GLOC_ADDRESS                   0xFFFF6C00
#define AVR32_GLOC                           (*((volatile avr32_gloc_t*) AVR32_GLOC_ADDRESS))

/* Module instance interrupt groups: GLOC */

/* Module instance interrupts: GLOC */

/* Module instance parameters: GLOC */
#define AVR32_GLOC_GCLK_NUM                  5
#define AVR32_GLOC_INPUT_PINS_MSB            7
#define AVR32_GLOC_LUTS                      2
#define AVR32_GLOC_OUTPUT_PINS_MSB           1

/* Module instance signals: GLOC */
#define AVR32_GLOC_IN_7_PIN                  AVR32_PIN_PA13
#define AVR32_GLOC_IN_7_FUNCTION             1
#define AVR32_GLOC_IN_6_PIN                  AVR32_PIN_PA15
#define AVR32_GLOC_IN_6_FUNCTION             3
#define AVR32_GLOC_IN_5_PIN                  AVR32_PIN_PA16
#define AVR32_GLOC_IN_5_FUNCTION             3
#define AVR32_GLOC_IN_4_PIN                  AVR32_PIN_PA18
#define AVR32_GLOC_IN_4_FUNCTION             3
#define AVR32_GLOC_IN_3_PIN                  AVR32_PIN_PA20
#define AVR32_GLOC_IN_3_FUNCTION             3
#define AVR32_GLOC_IN_2_PIN                  AVR32_PIN_PB06
#define AVR32_GLOC_IN_2_FUNCTION             3
#define AVR32_GLOC_IN_1_PIN                  AVR32_PIN_PB07
#define AVR32_GLOC_IN_1_FUNCTION             3
#define AVR32_GLOC_IN_0_PIN                  AVR32_PIN_PB08
#define AVR32_GLOC_IN_0_FUNCTION             3
#define AVR32_GLOC_OUT_0_PIN                 AVR32_PIN_PA13
#define AVR32_GLOC_OUT_0_FUNCTION            0
#define AVR32_GLOC_OUT_1_PIN                 AVR32_PIN_PB10
#define AVR32_GLOC_OUT_1_FUNCTION            3

#include "avr32/gloc_100.h"

/* Module: GPIO */

#define AVR32_GPIO_ADDRESS                   0xFFFF2C00
#define AVR32_GPIO                           (*((volatile avr32_gpio_t*) AVR32_GPIO_ADDRESS))

/* Module instance interrupt groups: GPIO */
#define AVR32_GPIO_IRQ_GROUP                 14

/* Module instance interrupts: GPIO */
#define AVR32_GPIO_IRQ_0                     448
#define AVR32_GPIO_IRQ_1                     449
#define AVR32_GPIO_IRQ_2                     450
#define AVR32_GPIO_IRQ_3                     451
#define AVR32_GPIO_IRQ_4                     452
#define AVR32_GPIO_IRQ_5                     453
#define AVR32_GPIO_IRQ_6                     454
#define AVR32_GPIO_IRQ_7                     455

/* Module instance parameters: GPIO */
#define AVR32_GPIO_IRQ_MSB                   7
#define AVR32_GPIO_MAX_IRQ_MSB               7
#define AVR32_GPIO_PADDR_BITS                10
#define AVR32_GPIO_PINS_MSB                  59
#define AVR32_GPIO_IRQS_PER_GROUP            8
#define AVR32_GPIO_NUMBER_OF_PINS            60
#define AVR32_GPIO_PADDR_MSB                 9
#define AVR32_GPIO_PDATA_MSB                 31
#define AVR32_GPIO_PORT_LENGTH               64

#include "avr32/gpio_213.h"

/* Module: HMATRIXB */

#define AVR32_HMATRIXB_ADDRESS               0xFFFE0400
#define AVR32_HMATRIXB                       (*((volatile avr32_hmatrixb_t*) AVR32_HMATRIXB_ADDRESS))

/* Module instance interrupt groups: HMATRIXB */

/* Module instance interrupts: HMATRIXB */

/* Module instance parameters: HMATRIXB */
#define AVR32_HMATRIXB_MASTER_CPU_DATA       0
#define AVR32_HMATRIXB_MASTER_CPU_INSN       1
#define AVR32_HMATRIXB_MASTER_CPU_SAB        2
#define AVR32_HMATRIXB_MASTER_NUM            6
#define AVR32_HMATRIXB_MASTER_PDCA           4
#define AVR32_HMATRIXB_MASTER_SAU            3
#define AVR32_HMATRIXB_MASTER_USBC           5
#define AVR32_HMATRIXB_SLAVE_FLASH           0
#define AVR32_HMATRIXB_SLAVE_NUM             5
#define AVR32_HMATRIXB_SLAVE_PBA             1
#define AVR32_HMATRIXB_SLAVE_PBB             2
#define AVR32_HMATRIXB_SLAVE_SAU             4
#define AVR32_HMATRIXB_SLAVE_SRAM            3

/* Module instance signals: HMATRIXB */

#include "avr32/hmatrixb_130.h"

/* Module: IISC */

#define AVR32_IISC_ADDRESS                   0xFFFF7800
#define AVR32_IISC                           (*((volatile avr32_iisc_t*) AVR32_IISC_ADDRESS))

/* Module instance interrupt groups: IISC */
#define AVR32_IISC_IRQ_GROUP                 33

/* Module instance interrupts: IISC */
#define AVR32_IISC_IRQ                       1056

/* Module instance parameters: IISC */
#define AVR32_IISC_GCLK_NUM                  6
#define AVR32_IISC_PDCA_ID_RX                25
#define AVR32_IISC_PDCA_ID_RX_1              26
#define AVR32_IISC_PDCA_ID_TX                27
#define AVR32_IISC_PDCA_ID_TX_1              28
#define AVR32_IISC_REG_RX_1                  RHR
#define AVR32_IISC_REG_TX_1                  THR

/* Module instance signals: IISC */
#define AVR32_IISC_IMCK_0_PIN                AVR32_PIN_PB15
#define AVR32_IISC_IMCK_0_FUNCTION           1
#define AVR32_IISC_ISCK_0_PIN                AVR32_PIN_PB16
#define AVR32_IISC_ISCK_0_FUNCTION           1
#define AVR32_IISC_ISDI_0_PIN                AVR32_PIN_PB18
#define AVR32_IISC_ISDI_0_FUNCTION           1
#define AVR32_IISC_ISDO_0_PIN                AVR32_PIN_PB19
#define AVR32_IISC_ISDO_0_FUNCTION           1
#define AVR32_IISC_IWS_0_PIN                 AVR32_PIN_PB17
#define AVR32_IISC_IWS_0_FUNCTION            1

#include "avr32/iisc_100.h"

/* Module: JTAG */

/* Module instance interrupt groups: JTAG */

/* Module instance interrupts: JTAG */

/* Module instance parameters: JTAG */

/* Module instance signals: JTAG */

/* Module: PDCA */

#define AVR32_PDCA_ADDRESS                   0xFFFF0000
#define AVR32_PDCA                           (*((volatile avr32_pdca_t*) AVR32_PDCA_ADDRESS))

/* Module instance interrupt groups: PDCA */
#define AVR32_PDCA_IRQ_GROUP0                4
#define AVR32_PDCA_IRQ_GROUP1                5
#define AVR32_PDCA_IRQ_GROUP2                6

/* Module instance interrupts: PDCA */
#define AVR32_PDCA_IRQ_0                     128
#define AVR32_PDCA_IRQ_1                     129
#define AVR32_PDCA_IRQ_10                    194
#define AVR32_PDCA_IRQ_11                    195
#define AVR32_PDCA_IRQ_2                     130
#define AVR32_PDCA_IRQ_3                     131
#define AVR32_PDCA_IRQ_4                     160
#define AVR32_PDCA_IRQ_5                     161
#define AVR32_PDCA_IRQ_6                     162
#define AVR32_PDCA_IRQ_7                     163
#define AVR32_PDCA_IRQ_8                     192
#define AVR32_PDCA_IRQ_9                     193

/* Module instance parameters: PDCA */
#define AVR32_PDCA_CHANNEL_LENGTH            16
#define AVR32_PDCA_CLK_AHB_ID                -1
#define AVR32_PDCA_HADDR_MSB                 31
#define AVR32_PDCA_HDATA_MSB                 31
#define AVR32_PDCA_MON_CH0_IMPL              0
#define AVR32_PDCA_MON_CH1_IMPL              0
#define AVR32_PDCA_PADDR_MSB                 31
#define AVR32_PDCA_PDATA_MSB                 31
#define AVR32_PDCA_CHANNELS_MSB              15
#define AVR32_PDCA_PID_ABDACBCH0_TX          23
#define AVR32_PDCA_PID_ABDACBCH1_TX          24
#define AVR32_PDCA_PID_AC97C_RXA             -1
#define AVR32_PDCA_PID_AC97C_RXB             -1
#define AVR32_PDCA_PID_AC97C_TXA             -1
#define AVR32_PDCA_PID_AC97C_TXB             -1
#define AVR32_PDCA_PID_ADC_RX                9
#define AVR32_PDCA_PID_AW_RX                 10
#define AVR32_PDCA_PID_AW_TX                 21
#define AVR32_PDCA_PID_CAT_ACOUNT            11
#define AVR32_PDCA_PID_CAT_MBLEN             22
#define AVR32_PDCA_PID_IISCCH0_RX            25
#define AVR32_PDCA_PID_IISCCH0_TX            27
#define AVR32_PDCA_PID_IISCCH1_RX            26
#define AVR32_PDCA_PID_IISCCH1_TX            28
#define AVR32_PDCA_PID_MCI_RX                -1
#define AVR32_PDCA_PID_SPI0_RX               4
#define AVR32_PDCA_PID_SPI0_TX               16
#define AVR32_PDCA_PID_SPI1_RX               -1
#define AVR32_PDCA_PID_SPI1_TX               -1
#define AVR32_PDCA_PID_SPI2_RX               -1
#define AVR32_PDCA_PID_SPI2_TX               -1
#define AVR32_PDCA_PID_SPI3_RX               -1
#define AVR32_PDCA_PID_SPI3_TX               -1
#define AVR32_PDCA_PID_SSC0_RX               -1
#define AVR32_PDCA_PID_SSC0_TX               -1
#define AVR32_PDCA_PID_SSC1_RX               -1
#define AVR32_PDCA_PID_SSC1_TX               -1
#define AVR32_PDCA_PID_SSC2_RX               -1
#define AVR32_PDCA_PID_SSC2_TX               -1
#define AVR32_PDCA_PID_SSC_RX                1
#define AVR32_PDCA_PID_SSC_TX                -1
#define AVR32_PDCA_PID_TSADCC_RX             -1
#define AVR32_PDCA_PID_TWI0_RX               -1
#define AVR32_PDCA_PID_TWI0_TX               -1
#define AVR32_PDCA_PID_TWI1_RX               -1
#define AVR32_PDCA_PID_TWI1_TX               -1
#define AVR32_PDCA_PID_TWIM0_RX              5
#define AVR32_PDCA_PID_TWIM0_TX              17
#define AVR32_PDCA_PID_TWIM1_RX              6
#define AVR32_PDCA_PID_TWIM1_TX              18
#define AVR32_PDCA_PID_TWIS0_RX              7
#define AVR32_PDCA_PID_TWIS0_TX              19
#define AVR32_PDCA_PID_TWIS1_RX              8
#define AVR32_PDCA_PID_TWIS1_TX              20
#define AVR32_PDCA_PID_TWI_RX                -1
#define AVR32_PDCA_PID_TWI_TX                -1
#define AVR32_PDCA_PID_USART0_RX             0
#define AVR32_PDCA_PID_USART0_TX             12
#define AVR32_PDCA_PID_USART1_RX             1
#define AVR32_PDCA_PID_USART1_TX             13
#define AVR32_PDCA_PID_USART2_RX             2
#define AVR32_PDCA_PID_USART2_TX             14
#define AVR32_PDCA_PID_USART3_RX             3
#define AVR32_PDCA_PID_USART3_TX             15
#define AVR32_PDCA_PID_USART4_RX             -1
#define AVR32_PDCA_PID_USART4_TX             -1
#define AVR32_PDCA_PID_USART5_RX             -1
#define AVR32_PDCA_PID_USART5_TX             -1

/* Module instance signals: PDCA */

#include "avr32/pdca_123.h"

/* Module: PM */

#define AVR32_PM_ADDRESS                     0xFFFF1400
#define AVR32_PM                             (*((volatile avr32_pm_t*) AVR32_PM_ADDRESS))

/* Module instance interrupt groups: PM */
#define AVR32_PM_IRQ_GROUP                   7

/* Module instance interrupts: PM */
#define AVR32_PM_IRQ                         224

/* Module instance parameters: PM */
#define AVR32_PM_AWEN_TWIS0                  3
#define AVR32_PM_AWEN_TWIS1                  4
#define AVR32_PM_AWEN_USBC                   7
#define AVR32_PM_CLK_AHB_PEVC                0
#define AVR32_PM_CLK_APB_NUM                 2
#define AVR32_PM_WAKEUP_EN_KEYPAD            0
#define AVR32_PM_WAKEUP_EN_USB_DEVICE        0

/* Module instance signals: PM */

#include "avr32/pm_420.h"

/* Module: PULLUP */

/* Module instance interrupt groups: PULLUP */

/* Module instance interrupts: PULLUP */

/* Module instance parameters: PULLUP */

/* Module instance signals: PULLUP */

/* Module: PWMA */

#define AVR32_PWMA_ADDRESS                   0xFFFF5400
#define AVR32_PWMA                           (*((volatile avr32_pwma_t*) AVR32_PWMA_ADDRESS))

/* Module instance interrupt groups: PWMA */
#define AVR32_PWMA_IRQ_GROUP                 24

/* Module instance interrupts: PWMA */
#define AVR32_PWMA_IRQ                       768

/* Module instance parameters: PWMA */
#define AVR32_PWMA_CHANNELS_MSB              35
#define AVR32_PWMA_CH_SYNC_EVT               0
#define AVR32_PWMA_NUM_CHANNELS              36
#define AVR32_PWMA_NUM_IRQS                  0

/* Module instance signals: PWMA */
#define AVR32_PWMA_0_0_PIN                   AVR32_PIN_PA00
#define AVR32_PWMA_0_0_FUNCTION              4
#define AVR32_PWMA_0_1_PIN                   AVR32_PIN_PB23
#define AVR32_PWMA_0_1_FUNCTION              4
#define AVR32_PWMA_1_0_PIN                   AVR32_PIN_PA01
#define AVR32_PWMA_1_0_FUNCTION              4
#define AVR32_PWMA_1_1_PIN                   AVR32_PIN_PB24
#define AVR32_PWMA_1_1_FUNCTION              4
#define AVR32_PWMA_2_0_PIN                   AVR32_PIN_PA02
#define AVR32_PWMA_2_0_FUNCTION              4
#define AVR32_PWMA_2_1_PIN                   AVR32_PIN_PB25
#define AVR32_PWMA_2_1_FUNCTION              4
#define AVR32_PWMA_3_0_PIN                   AVR32_PIN_PA03
#define AVR32_PWMA_3_0_FUNCTION              4
#define AVR32_PWMA_3_1_PIN                   AVR32_PIN_PB26
#define AVR32_PWMA_3_1_FUNCTION              4
#define AVR32_PWMA_4_0_PIN                   AVR32_PIN_PA04
#define AVR32_PWMA_4_0_FUNCTION              4
#define AVR32_PWMA_4_1_PIN                   AVR32_PIN_PB27
#define AVR32_PWMA_4_1_FUNCTION              4
#define AVR32_PWMA_5_PIN                     AVR32_PIN_PA05
#define AVR32_PWMA_5_FUNCTION                4
#define AVR32_PWMA_6_PIN                     AVR32_PIN_PA06
#define AVR32_PWMA_6_FUNCTION                4
#define AVR32_PWMA_7_0_PIN                   AVR32_PIN_PA07
#define AVR32_PWMA_7_0_FUNCTION              4
#define AVR32_PWMA_7_1_PIN                   AVR32_PIN_PB13
#define AVR32_PWMA_7_1_FUNCTION              4
#define AVR32_PWMA_8_0_PIN                   AVR32_PIN_PA08
#define AVR32_PWMA_8_0_FUNCTION              4
#define AVR32_PWMA_8_1_PIN                   AVR32_PIN_PB15
#define AVR32_PWMA_8_1_FUNCTION              4
#define AVR32_PWMA_9_0_PIN                   AVR32_PIN_PA09
#define AVR32_PWMA_9_0_FUNCTION              4
#define AVR32_PWMA_9_1_PIN                   AVR32_PIN_PB16
#define AVR32_PWMA_9_1_FUNCTION              4
#define AVR32_PWMA_10_0_PIN                  AVR32_PIN_PA10
#define AVR32_PWMA_10_0_FUNCTION             4
#define AVR32_PWMA_10_1_PIN                  AVR32_PIN_PB17
#define AVR32_PWMA_10_1_FUNCTION             4
#define AVR32_PWMA_11_PIN                    AVR32_PIN_PA11
#define AVR32_PWMA_11_FUNCTION               4
#define AVR32_PWMA_12_0_PIN                  AVR32_PIN_PA12
#define AVR32_PWMA_12_0_FUNCTION             4
#define AVR32_PWMA_12_1_PIN                  AVR32_PIN_PB18
#define AVR32_PWMA_12_1_FUNCTION             4
#define AVR32_PWMA_13_PIN                    AVR32_PIN_PA13
#define AVR32_PWMA_13_FUNCTION               4
#define AVR32_PWMA_14_PIN                    AVR32_PIN_PA14
#define AVR32_PWMA_14_FUNCTION               4
#define AVR32_PWMA_15_PIN                    AVR32_PIN_PA15
#define AVR32_PWMA_15_FUNCTION               4
#define AVR32_PWMA_16_PIN                    AVR32_PIN_PA16
#define AVR32_PWMA_16_FUNCTION               4
#define AVR32_PWMA_17_PIN                    AVR32_PIN_PA17
#define AVR32_PWMA_17_FUNCTION               4
#define AVR32_PWMA_18_PIN                    AVR32_PIN_PA18
#define AVR32_PWMA_18_FUNCTION               4
#define AVR32_PWMA_19_PIN                    AVR32_PIN_PA19
#define AVR32_PWMA_19_FUNCTION               4
#define AVR32_PWMA_20_0_PIN                  AVR32_PIN_PA20
#define AVR32_PWMA_20_0_FUNCTION             4
#define AVR32_PWMA_20_1_PIN                  AVR32_PIN_PB19
#define AVR32_PWMA_20_1_FUNCTION             4
#define AVR32_PWMA_21_0_PIN                  AVR32_PIN_PA21
#define AVR32_PWMA_21_0_FUNCTION             4
#define AVR32_PWMA_21_1_PIN                  AVR32_PIN_PB20
#define AVR32_PWMA_21_1_FUNCTION             4
#define AVR32_PWMA_22_PIN                    AVR32_PIN_PA22
#define AVR32_PWMA_22_FUNCTION               4
#define AVR32_PWMA_23_PIN                    AVR32_PIN_PB00
#define AVR32_PWMA_23_FUNCTION               4
#define AVR32_PWMA_24_0_PIN                  AVR32_PIN_PB01
#define AVR32_PWMA_24_0_FUNCTION             4
#define AVR32_PWMA_24_1_PIN                  AVR32_PIN_PB14
#define AVR32_PWMA_24_1_FUNCTION             4
#define AVR32_PWMA_25_PIN                    AVR32_PIN_PB02
#define AVR32_PWMA_25_FUNCTION               4
#define AVR32_PWMA_26_PIN                    AVR32_PIN_PB03
#define AVR32_PWMA_26_FUNCTION               4
#define AVR32_PWMA_27_0_PIN                  AVR32_PIN_PB04
#define AVR32_PWMA_27_0_FUNCTION             4
#define AVR32_PWMA_27_1_PIN                  AVR32_PIN_PB22
#define AVR32_PWMA_27_1_FUNCTION             4
#define AVR32_PWMA_28_0_PIN                  AVR32_PIN_PB05
#define AVR32_PWMA_28_0_FUNCTION             4
#define AVR32_PWMA_28_1_PIN                  AVR32_PIN_PB21
#define AVR32_PWMA_28_1_FUNCTION             4
#define AVR32_PWMA_29_PIN                    AVR32_PIN_PB06
#define AVR32_PWMA_29_FUNCTION               4
#define AVR32_PWMA_30_PIN                    AVR32_PIN_PB07
#define AVR32_PWMA_30_FUNCTION               4
#define AVR32_PWMA_31_PIN                    AVR32_PIN_PB08
#define AVR32_PWMA_31_FUNCTION               4
#define AVR32_PWMA_32_PIN                    AVR32_PIN_PB09
#define AVR32_PWMA_32_FUNCTION               4
#define AVR32_PWMA_33_PIN                    AVR32_PIN_PB10
#define AVR32_PWMA_33_FUNCTION               4
#define AVR32_PWMA_34_PIN                    AVR32_PIN_PB11
#define AVR32_PWMA_34_FUNCTION               4
#define AVR32_PWMA_35_PIN                    AVR32_PIN_PB12
#define AVR32_PWMA_35_FUNCTION               4
#define AVR32_PWMA_7_0_PIN                   AVR32_PIN_PA07
#define AVR32_PWMA_7_0_FUNCTION              4
#define AVR32_PWMA_7_1_PIN                   AVR32_PIN_PB13
#define AVR32_PWMA_7_1_FUNCTION              4
#define AVR32_PWMA_24_0_PIN                  AVR32_PIN_PB01
#define AVR32_PWMA_24_0_FUNCTION             4
#define AVR32_PWMA_24_1_PIN                  AVR32_PIN_PB14
#define AVR32_PWMA_24_1_FUNCTION             4
#define AVR32_PWMA_8_0_PIN                   AVR32_PIN_PA08
#define AVR32_PWMA_8_0_FUNCTION              4
#define AVR32_PWMA_8_1_PIN                   AVR32_PIN_PB15
#define AVR32_PWMA_8_1_FUNCTION              4
#define AVR32_PWMA_9_0_PIN                   AVR32_PIN_PA09
#define AVR32_PWMA_9_0_FUNCTION              4
#define AVR32_PWMA_9_1_PIN                   AVR32_PIN_PB16
#define AVR32_PWMA_9_1_FUNCTION              4
#define AVR32_PWMA_10_0_PIN                  AVR32_PIN_PA10
#define AVR32_PWMA_10_0_FUNCTION             4
#define AVR32_PWMA_10_1_PIN                  AVR32_PIN_PB17
#define AVR32_PWMA_10_1_FUNCTION             4
#define AVR32_PWMA_12_0_PIN                  AVR32_PIN_PA12
#define AVR32_PWMA_12_0_FUNCTION             4
#define AVR32_PWMA_12_1_PIN                  AVR32_PIN_PB18
#define AVR32_PWMA_12_1_FUNCTION             4
#define AVR32_PWMA_20_0_PIN                  AVR32_PIN_PA20
#define AVR32_PWMA_20_0_FUNCTION             4
#define AVR32_PWMA_20_1_PIN                  AVR32_PIN_PB19
#define AVR32_PWMA_20_1_FUNCTION             4
#define AVR32_PWMA_21_0_PIN                  AVR32_PIN_PA21
#define AVR32_PWMA_21_0_FUNCTION             4
#define AVR32_PWMA_21_1_PIN                  AVR32_PIN_PB20
#define AVR32_PWMA_21_1_FUNCTION             4
#define AVR32_PWMA_28_0_PIN                  AVR32_PIN_PB05
#define AVR32_PWMA_28_0_FUNCTION             4
#define AVR32_PWMA_28_1_PIN                  AVR32_PIN_PB21
#define AVR32_PWMA_28_1_FUNCTION             4
#define AVR32_PWMA_27_0_PIN                  AVR32_PIN_PB04
#define AVR32_PWMA_27_0_FUNCTION             4
#define AVR32_PWMA_27_1_PIN                  AVR32_PIN_PB22
#define AVR32_PWMA_27_1_FUNCTION             4
#define AVR32_PWMA_0_0_PIN                   AVR32_PIN_PA00
#define AVR32_PWMA_0_0_FUNCTION              4
#define AVR32_PWMA_0_1_PIN                   AVR32_PIN_PB23
#define AVR32_PWMA_0_1_FUNCTION              4
#define AVR32_PWMA_1_0_PIN                   AVR32_PIN_PA01
#define AVR32_PWMA_1_0_FUNCTION              4
#define AVR32_PWMA_1_1_PIN                   AVR32_PIN_PB24
#define AVR32_PWMA_1_1_FUNCTION              4
#define AVR32_PWMA_2_0_PIN                   AVR32_PIN_PA02
#define AVR32_PWMA_2_0_FUNCTION              4
#define AVR32_PWMA_2_1_PIN                   AVR32_PIN_PB25
#define AVR32_PWMA_2_1_FUNCTION              4
#define AVR32_PWMA_3_0_PIN                   AVR32_PIN_PA03
#define AVR32_PWMA_3_0_FUNCTION              4
#define AVR32_PWMA_3_1_PIN                   AVR32_PIN_PB26
#define AVR32_PWMA_3_1_FUNCTION              4
#define AVR32_PWMA_4_0_PIN                   AVR32_PIN_PA04
#define AVR32_PWMA_4_0_FUNCTION              4
#define AVR32_PWMA_4_1_PIN                   AVR32_PIN_PB27
#define AVR32_PWMA_4_1_FUNCTION              4
#define AVR32_PWMA_PWMAOD_21_PIN             AVR32_PIN_PA21
#define AVR32_PWMA_PWMAOD_21_FUNCTION        5
#define AVR32_PWMA_PWMAOD_27_PIN             AVR32_PIN_PB04
#define AVR32_PWMA_PWMAOD_27_FUNCTION        5
#define AVR32_PWMA_PWMAOD_28_PIN             AVR32_PIN_PB05
#define AVR32_PWMA_PWMAOD_28_FUNCTION        5

#include "avr32/pwma_201.h"

/* Module: SAU */

#define AVR32_SAU_ADDRESS                    0xFFFE0800
#define AVR32_SAU                            (*((volatile avr32_sau_t*) AVR32_SAU_ADDRESS))
#define AVR32_SAU_HSB_ADDRESS                0x90000000
#define AVR32_SAU_HSB_SIZE                   0x00000000
#define AVR32_SAU_HSB                        (*((volatile avr32_sau_t*) AVR32_SAU_HSB_ADDRESS))

/* Module instance interrupt groups: SAU */
#define AVR32_SAU_IRQ_GROUP                  3

/* Module instance interrupts: SAU */
#define AVR32_SAU_IRQ                        96

/* Module instance parameters: SAU */
#define AVR32_SAU_CHANNELS                   16
#define AVR32_SAU_CLK_AHB_ID                 -1

/* Module instance signals: SAU */

#include "avr32/sau_111.h"

/* Module: SCAN */

/* Module instance interrupt groups: SCAN */

/* Module instance interrupts: SCAN */

/* Module instance parameters: SCAN */
#define AVR32_SCAN_BURN_IN_IMPLEMENTED       0
#define AVR32_SCAN_CHAIN_MSB                 14
#define AVR32_SCAN_CLK_MSB                   1
#define AVR32_SCAN_COMPRESSION_IMPLEMENTED   1
#define AVR32_SCAN_OCC_IMPLEMENTED           0

/* Module instance signals: SCAN */

/* Module: SCIF */

#define AVR32_SCIF_ADDRESS                   0xFFFF1800
#define AVR32_SCIF                           (*((volatile avr32_scif_t*) AVR32_SCIF_ADDRESS))

/* Module instance interrupt groups: SCIF */
#define AVR32_SCIF_IRQ_GROUP                 8

/* Module instance interrupts: SCIF */
#define AVR32_SCIF_IRQ                       256

/* Module instance parameters: SCIF */
#define AVR32_SCIF_BR_NUM                    4
#define AVR32_SCIF_GCCTRL_OSCSEL_CLK_1K      11
#define AVR32_SCIF_GCCTRL_OSCSEL_CLK_CPU     5
#define AVR32_SCIF_GCCTRL_OSCSEL_CLK_HSB     6
#define AVR32_SCIF_GCCTRL_OSCSEL_CLK_PBA     7
#define AVR32_SCIF_GCCTRL_OSCSEL_CLK_PBB     8
#define AVR32_SCIF_GCCTRL_OSCSEL_DFLL0       2
#define AVR32_SCIF_GCCTRL_OSCSEL_GCLK9       18
#define AVR32_SCIF_GCCTRL_OSCSEL_GCLK_IN0    15
#define AVR32_SCIF_GCCTRL_OSCSEL_GCLK_IN1    16
#define AVR32_SCIF_GCCTRL_OSCSEL_GCLK_IN2    17
#define AVR32_SCIF_GCCTRL_OSCSEL_OSC0        3
#define AVR32_SCIF_GCCTRL_OSCSEL_OSC32K      1
#define AVR32_SCIF_GCCTRL_OSCSEL_PLL0        12
#define AVR32_SCIF_GCCTRL_OSCSEL_RC120M      4
#define AVR32_SCIF_GCCTRL_OSCSEL_RC32K       9
#define AVR32_SCIF_GCCTRL_OSCSEL_RCSYS       0
#define AVR32_SCIF_GCLK_ABDACB               6
#define AVR32_SCIF_GCLK_ACIFB                4
#define AVR32_SCIF_GCLK_AST                  2
#define AVR32_SCIF_GCLK_CAT                  4
#define AVR32_SCIF_GCLK_DFLLIF_DITHER        1
#define AVR32_SCIF_GCLK_DFLLIF_REF           0
#define AVR32_SCIF_GCLK_GLOC                 5
#define AVR32_SCIF_GCLK_IISC                 6
#define AVR32_SCIF_GCLK_MASTER               9
#define AVR32_SCIF_GCLK_NUM                  10
#define AVR32_SCIF_GCLK_PLL0                 8
#define AVR32_SCIF_GCLK_PWMA                 3
#define AVR32_SCIF_GCLK_USBC                 7
#define AVR32_SCIF_OSC_NUM                   1
#define AVR32_SCIF_PLL_NUM                   1
#define AVR32_SCIF_RCOSC_FREQUENCY           115200

/* Module instance signals: SCIF */
#define AVR32_SCIF_GCLK_2_0_PIN              AVR32_PIN_PA13
#define AVR32_SCIF_GCLK_2_0_FUNCTION         3
#define AVR32_SCIF_GCLK_2_1_PIN              AVR32_PIN_PA09
#define AVR32_SCIF_GCLK_2_1_FUNCTION         5
#define AVR32_SCIF_GCLK_2_2_PIN              AVR32_PIN_PA10
#define AVR32_SCIF_GCLK_2_2_FUNCTION         6
#define AVR32_SCIF_GCLK_2_3_PIN              AVR32_PIN_PB16
#define AVR32_SCIF_GCLK_2_3_FUNCTION         6
#define AVR32_SCIF_GCLK_0_0_PIN              AVR32_PIN_PA00
#define AVR32_SCIF_GCLK_0_0_FUNCTION         6
#define AVR32_SCIF_GCLK_0_1_PIN              AVR32_PIN_PA21
#define AVR32_SCIF_GCLK_0_1_FUNCTION         6
#define AVR32_SCIF_GCLK_0_2_PIN              AVR32_PIN_PB22
#define AVR32_SCIF_GCLK_0_2_FUNCTION         6
#define AVR32_SCIF_GCLK_1_0_PIN              AVR32_PIN_PA06
#define AVR32_SCIF_GCLK_1_0_FUNCTION         6
#define AVR32_SCIF_GCLK_1_1_PIN              AVR32_PIN_PB02
#define AVR32_SCIF_GCLK_1_1_FUNCTION         6
#define AVR32_SCIF_GCLK_2_0_PIN              AVR32_PIN_PA13
#define AVR32_SCIF_GCLK_2_0_FUNCTION         3
#define AVR32_SCIF_GCLK_2_1_PIN              AVR32_PIN_PA09
#define AVR32_SCIF_GCLK_2_1_FUNCTION         5
#define AVR32_SCIF_GCLK_2_2_PIN              AVR32_PIN_PA10
#define AVR32_SCIF_GCLK_2_2_FUNCTION         6
#define AVR32_SCIF_GCLK_2_3_PIN              AVR32_PIN_PB16
#define AVR32_SCIF_GCLK_2_3_FUNCTION         6
#define AVR32_SCIF_GCLK_3_0_PIN              AVR32_PIN_PA12
#define AVR32_SCIF_GCLK_3_0_FUNCTION         6
#define AVR32_SCIF_GCLK_3_1_PIN              AVR32_PIN_PB05
#define AVR32_SCIF_GCLK_3_1_FUNCTION         6
#define AVR32_SCIF_GCLK_3_2_PIN              AVR32_PIN_PB15
#define AVR32_SCIF_GCLK_3_2_FUNCTION         6
#define AVR32_SCIF_GCLK_4_0_PIN              AVR32_PIN_PA14
#define AVR32_SCIF_GCLK_4_0_FUNCTION         6
#define AVR32_SCIF_GCLK_4_1_PIN              AVR32_PIN_PB12
#define AVR32_SCIF_GCLK_4_1_FUNCTION         6
#define AVR32_SCIF_GCLK_0_0_PIN              AVR32_PIN_PA00
#define AVR32_SCIF_GCLK_0_0_FUNCTION         6
#define AVR32_SCIF_GCLK_0_1_PIN              AVR32_PIN_PA21
#define AVR32_SCIF_GCLK_0_1_FUNCTION         6
#define AVR32_SCIF_GCLK_0_2_PIN              AVR32_PIN_PB22
#define AVR32_SCIF_GCLK_0_2_FUNCTION         6
#define AVR32_SCIF_GCLK_1_0_PIN              AVR32_PIN_PA06
#define AVR32_SCIF_GCLK_1_0_FUNCTION         6
#define AVR32_SCIF_GCLK_1_1_PIN              AVR32_PIN_PB02
#define AVR32_SCIF_GCLK_1_1_FUNCTION         6
#define AVR32_SCIF_GCLK_3_0_PIN              AVR32_PIN_PA12
#define AVR32_SCIF_GCLK_3_0_FUNCTION         6
#define AVR32_SCIF_GCLK_3_1_PIN              AVR32_PIN_PB05
#define AVR32_SCIF_GCLK_3_1_FUNCTION         6
#define AVR32_SCIF_GCLK_3_2_PIN              AVR32_PIN_PB15
#define AVR32_SCIF_GCLK_3_2_FUNCTION         6
#define AVR32_SCIF_GCLK_4_0_PIN              AVR32_PIN_PA14
#define AVR32_SCIF_GCLK_4_0_FUNCTION         6
#define AVR32_SCIF_GCLK_4_1_PIN              AVR32_PIN_PB12
#define AVR32_SCIF_GCLK_4_1_FUNCTION         6
#define AVR32_SCIF_GCLK_5_0_PIN              AVR32_PIN_PB13
#define AVR32_SCIF_GCLK_5_0_FUNCTION         6
#define AVR32_SCIF_GCLK_5_1_PIN              AVR32_PIN_PB14
#define AVR32_SCIF_GCLK_5_1_FUNCTION         6
#define AVR32_SCIF_GCLK_3_0_PIN              AVR32_PIN_PA12
#define AVR32_SCIF_GCLK_3_0_FUNCTION         6
#define AVR32_SCIF_GCLK_3_1_PIN              AVR32_PIN_PB05
#define AVR32_SCIF_GCLK_3_1_FUNCTION         6
#define AVR32_SCIF_GCLK_3_2_PIN              AVR32_PIN_PB15
#define AVR32_SCIF_GCLK_3_2_FUNCTION         6
#define AVR32_SCIF_GCLK_2_0_PIN              AVR32_PIN_PA13
#define AVR32_SCIF_GCLK_2_0_FUNCTION         3
#define AVR32_SCIF_GCLK_2_1_PIN              AVR32_PIN_PA09
#define AVR32_SCIF_GCLK_2_1_FUNCTION         5
#define AVR32_SCIF_GCLK_2_2_PIN              AVR32_PIN_PA10
#define AVR32_SCIF_GCLK_2_2_FUNCTION         6
#define AVR32_SCIF_GCLK_2_3_PIN              AVR32_PIN_PB16
#define AVR32_SCIF_GCLK_2_3_FUNCTION         6
#define AVR32_SCIF_GCLK_0_0_PIN              AVR32_PIN_PA00
#define AVR32_SCIF_GCLK_0_0_FUNCTION         6
#define AVR32_SCIF_GCLK_0_1_PIN              AVR32_PIN_PA21
#define AVR32_SCIF_GCLK_0_1_FUNCTION         6
#define AVR32_SCIF_GCLK_0_2_PIN              AVR32_PIN_PB22
#define AVR32_SCIF_GCLK_0_2_FUNCTION         6
#define AVR32_SCIF_GCLK_6_PIN                AVR32_PIN_PB23
#define AVR32_SCIF_GCLK_6_FUNCTION           6
#define AVR32_SCIF_GCLK_7_PIN                AVR32_PIN_PB24
#define AVR32_SCIF_GCLK_7_FUNCTION           6
#define AVR32_SCIF_GCLK_8_PIN                AVR32_PIN_PB25
#define AVR32_SCIF_GCLK_8_FUNCTION           6
#define AVR32_SCIF_GCLK_9_PIN                AVR32_PIN_PB26
#define AVR32_SCIF_GCLK_9_FUNCTION           6
#define AVR32_SCIF_GCLK_IN_0_PIN             AVR32_PIN_PA19
#define AVR32_SCIF_GCLK_IN_0_FUNCTION        5
#define AVR32_SCIF_GCLK_IN_1_PIN             AVR32_PIN_PB10
#define AVR32_SCIF_GCLK_IN_1_FUNCTION        5
#define AVR32_SCIF_GCLK_IN_2_PIN             AVR32_PIN_PB25
#define AVR32_SCIF_GCLK_IN_2_FUNCTION        5
#define AVR32_SCIF_LVTM_CLOCK_IN_0_PIN       AVR32_PIN_PB18
#define AVR32_SCIF_LVTM_CLOCK_IN_0_FUNCTION  6
#define AVR32_SCIF_LVTM_D_IN_0_PIN           AVR32_PIN_PB17
#define AVR32_SCIF_LVTM_D_IN_0_FUNCTION      6
#define AVR32_SCIF_RC32OUT_0_PIN             AVR32_PIN_PA20
#define AVR32_SCIF_RC32OUT_0_FUNCTION        5

#include "avr32/scif_110.h"

/* Module: SPI */

#define AVR32_SPI_ADDRESS                    0xFFFF4000
#define AVR32_SPI                            (*((volatile avr32_spi_t*) AVR32_SPI_ADDRESS))

/* Module instance interrupt groups: SPI */
#define AVR32_SPI_IRQ_GROUP                  19

/* Module instance interrupts: SPI */
#define AVR32_SPI_IRQ                        608

/* Module instance parameters: SPI */
#define AVR32_SPI_CS_MSB                     3
#define AVR32_SPI_PDCA_ID_RX                 4
#define AVR32_SPI_PDCA_ID_TX                 16

/* Module instance signals: SPI */
#define AVR32_SPI_MISO_0_0_PIN               AVR32_PIN_PA04
#define AVR32_SPI_MISO_0_0_FUNCTION          0
#define AVR32_SPI_MISO_0_1_PIN               AVR32_PIN_PB23
#define AVR32_SPI_MISO_0_1_FUNCTION          0
#define AVR32_SPI_MISO_0_2_PIN               AVR32_PIN_PB02
#define AVR32_SPI_MISO_0_2_FUNCTION          2
#define AVR32_SPI_MOSI_0_0_PIN               AVR32_PIN_PA05
#define AVR32_SPI_MOSI_0_0_FUNCTION          0
#define AVR32_SPI_MOSI_0_1_PIN               AVR32_PIN_PB24
#define AVR32_SPI_MOSI_0_1_FUNCTION          0
#define AVR32_SPI_MOSI_0_2_PIN               AVR32_PIN_PB03
#define AVR32_SPI_MOSI_0_2_FUNCTION          2
#define AVR32_SPI_NPCS_0_0_PIN               AVR32_PIN_PA07
#define AVR32_SPI_NPCS_0_0_FUNCTION          0
#define AVR32_SPI_NPCS_0_1_PIN               AVR32_PIN_PB25
#define AVR32_SPI_NPCS_0_1_FUNCTION          0
#define AVR32_SPI_NPCS_0_2_PIN               AVR32_PIN_PB00
#define AVR32_SPI_NPCS_0_2_FUNCTION          2
#define AVR32_SPI_NPCS_1_0_PIN               AVR32_PIN_PA03
#define AVR32_SPI_NPCS_1_0_FUNCTION          1
#define AVR32_SPI_NPCS_1_1_PIN               AVR32_PIN_PB20
#define AVR32_SPI_NPCS_1_1_FUNCTION          2
#define AVR32_SPI_NPCS_2_0_PIN               AVR32_PIN_PA08
#define AVR32_SPI_NPCS_2_0_FUNCTION          1
#define AVR32_SPI_NPCS_2_1_PIN               AVR32_PIN_PA00
#define AVR32_SPI_NPCS_2_1_FUNCTION          2
#define AVR32_SPI_NPCS_2_2_PIN               AVR32_PIN_PB21
#define AVR32_SPI_NPCS_2_2_FUNCTION          2
#define AVR32_SPI_NPCS_3_0_PIN               AVR32_PIN_PA09
#define AVR32_SPI_NPCS_3_0_FUNCTION          1
#define AVR32_SPI_NPCS_3_1_PIN               AVR32_PIN_PA01
#define AVR32_SPI_NPCS_3_1_FUNCTION          2
#define AVR32_SPI_NPCS_3_2_PIN               AVR32_PIN_PB22
#define AVR32_SPI_NPCS_3_2_FUNCTION          2
#define AVR32_SPI_NPCS_2_0_PIN               AVR32_PIN_PA08
#define AVR32_SPI_NPCS_2_0_FUNCTION          1
#define AVR32_SPI_NPCS_2_1_PIN               AVR32_PIN_PA00
#define AVR32_SPI_NPCS_2_1_FUNCTION          2
#define AVR32_SPI_NPCS_2_2_PIN               AVR32_PIN_PB21
#define AVR32_SPI_NPCS_2_2_FUNCTION          2
#define AVR32_SPI_NPCS_3_0_PIN               AVR32_PIN_PA09
#define AVR32_SPI_NPCS_3_0_FUNCTION          1
#define AVR32_SPI_NPCS_3_1_PIN               AVR32_PIN_PA01
#define AVR32_SPI_NPCS_3_1_FUNCTION          2
#define AVR32_SPI_NPCS_3_2_PIN               AVR32_PIN_PB22
#define AVR32_SPI_NPCS_3_2_FUNCTION          2
#define AVR32_SPI_NPCS_0_0_PIN               AVR32_PIN_PA07
#define AVR32_SPI_NPCS_0_0_FUNCTION          0
#define AVR32_SPI_NPCS_0_1_PIN               AVR32_PIN_PB25
#define AVR32_SPI_NPCS_0_1_FUNCTION          0
#define AVR32_SPI_NPCS_0_2_PIN               AVR32_PIN_PB00
#define AVR32_SPI_NPCS_0_2_FUNCTION          2
#define AVR32_SPI_NPCS_1_0_PIN               AVR32_PIN_PA03
#define AVR32_SPI_NPCS_1_0_FUNCTION          1
#define AVR32_SPI_NPCS_1_1_PIN               AVR32_PIN_PB20
#define AVR32_SPI_NPCS_1_1_FUNCTION          2
#define AVR32_SPI_NPCS_2_0_PIN               AVR32_PIN_PA08
#define AVR32_SPI_NPCS_2_0_FUNCTION          1
#define AVR32_SPI_NPCS_2_1_PIN               AVR32_PIN_PA00
#define AVR32_SPI_NPCS_2_1_FUNCTION          2
#define AVR32_SPI_NPCS_2_2_PIN               AVR32_PIN_PB21
#define AVR32_SPI_NPCS_2_2_FUNCTION          2
#define AVR32_SPI_NPCS_3_0_PIN               AVR32_PIN_PA09
#define AVR32_SPI_NPCS_3_0_FUNCTION          1
#define AVR32_SPI_NPCS_3_1_PIN               AVR32_PIN_PA01
#define AVR32_SPI_NPCS_3_1_FUNCTION          2
#define AVR32_SPI_NPCS_3_2_PIN               AVR32_PIN_PB22
#define AVR32_SPI_NPCS_3_2_FUNCTION          2
#define AVR32_SPI_SCK_0_0_PIN                AVR32_PIN_PA06
#define AVR32_SPI_SCK_0_0_FUNCTION           0
#define AVR32_SPI_SCK_0_1_PIN                AVR32_PIN_PB26
#define AVR32_SPI_SCK_0_1_FUNCTION           0
#define AVR32_SPI_SCK_0_2_PIN                AVR32_PIN_PB01
#define AVR32_SPI_SCK_0_2_FUNCTION           2
#define AVR32_SPI_SCK_0_3_PIN                AVR32_PIN_PB15
#define AVR32_SPI_SCK_0_3_FUNCTION           2

#include "avr32/spi_211.h"

/* Module: TC */

/* Module instance: TC0 */
#define AVR32_TC0_ADDRESS                    0xFFFF5800
#define AVR32_TC0                            (*((volatile avr32_tc_t*) AVR32_TC0_ADDRESS))

/* Module instance interrupt groups: TC0 */
#define AVR32_TC0_IRQ_GROUP                  25

/* Module instance interrupts: TC0 */
#define AVR32_TC0_IRQ0                       800
#define AVR32_TC0_IRQ1                       801
#define AVR32_TC0_IRQ2                       802

/* Module instance parameters: TC0 */
#define AVR32_TC0_CLK_DIV1                   clk_32
#define AVR32_TC0_CLK_DIV2                   2
#define AVR32_TC0_CLK_DIV3                   8
#define AVR32_TC0_CLK_DIV4                   32
#define AVR32_TC0_CLK_DIV5                   128
#define AVR32_TC0_PEVC                       0

/* Module instance signals: TC0 */
#define AVR32_TC0_A0_0_0_PIN                 AVR32_PIN_PA10
#define AVR32_TC0_A0_0_0_FUNCTION            2
#define AVR32_TC0_A0_0_1_PIN                 AVR32_PIN_PA13
#define AVR32_TC0_A0_0_1_FUNCTION            2
#define AVR32_TC0_A0_0_2_PIN                 AVR32_PIN_PA02
#define AVR32_TC0_A0_0_2_FUNCTION            3
#define AVR32_TC0_A0_0_3_PIN                 AVR32_PIN_PB20
#define AVR32_TC0_A0_0_3_FUNCTION            3
#define AVR32_TC0_A1_0_0_PIN                 AVR32_PIN_PA17
#define AVR32_TC0_A1_0_0_FUNCTION            1
#define AVR32_TC0_A1_0_1_PIN                 AVR32_PIN_PA20
#define AVR32_TC0_A1_0_1_FUNCTION            2
#define AVR32_TC0_A1_0_2_PIN                 AVR32_PIN_PA05
#define AVR32_TC0_A1_0_2_FUNCTION            3
#define AVR32_TC0_A1_0_3_PIN                 AVR32_PIN_PB00
#define AVR32_TC0_A1_0_3_FUNCTION            3
#define AVR32_TC0_A1_0_4_PIN                 AVR32_PIN_PB25
#define AVR32_TC0_A1_0_4_FUNCTION            3
#define AVR32_TC0_A2_0_0_PIN                 AVR32_PIN_PA08
#define AVR32_TC0_A2_0_0_FUNCTION            2
#define AVR32_TC0_A2_0_1_PIN                 AVR32_PIN_PA19
#define AVR32_TC0_A2_0_1_FUNCTION            2
#define AVR32_TC0_A2_0_2_PIN                 AVR32_PIN_PB02
#define AVR32_TC0_A2_0_2_FUNCTION            3
#define AVR32_TC0_A2_0_3_PIN                 AVR32_PIN_PB23
#define AVR32_TC0_A2_0_3_FUNCTION            3
#define AVR32_TC0_B0_0_0_PIN                 AVR32_PIN_PA03
#define AVR32_TC0_B0_0_0_FUNCTION            3
#define AVR32_TC0_B0_0_1_PIN                 AVR32_PIN_PA06
#define AVR32_TC0_B0_0_1_FUNCTION            3
#define AVR32_TC0_B0_0_2_PIN                 AVR32_PIN_PB21
#define AVR32_TC0_B0_0_2_FUNCTION            3
#define AVR32_TC0_B1_0_0_PIN                 AVR32_PIN_PA18
#define AVR32_TC0_B1_0_0_FUNCTION            1
#define AVR32_TC0_B1_0_1_PIN                 AVR32_PIN_PA21
#define AVR32_TC0_B1_0_1_FUNCTION            2
#define AVR32_TC0_B1_0_2_PIN                 AVR32_PIN_PA04
#define AVR32_TC0_B1_0_2_FUNCTION            3
#define AVR32_TC0_B1_0_3_PIN                 AVR32_PIN_PB01
#define AVR32_TC0_B1_0_3_FUNCTION            3
#define AVR32_TC0_B1_0_4_PIN                 AVR32_PIN_PB26
#define AVR32_TC0_B1_0_4_FUNCTION            3
#define AVR32_TC0_B2_0_0_PIN                 AVR32_PIN_PA09
#define AVR32_TC0_B2_0_0_FUNCTION            2
#define AVR32_TC0_B2_0_1_PIN                 AVR32_PIN_PA22
#define AVR32_TC0_B2_0_1_FUNCTION            2
#define AVR32_TC0_B2_0_2_PIN                 AVR32_PIN_PB03
#define AVR32_TC0_B2_0_2_FUNCTION            3
#define AVR32_TC0_B2_0_3_PIN                 AVR32_PIN_PB24
#define AVR32_TC0_B2_0_3_FUNCTION            3
#define AVR32_TC0_CLK0_0_0_PIN               AVR32_PIN_PA16
#define AVR32_TC0_CLK0_0_0_FUNCTION          1
#define AVR32_TC0_CLK0_0_1_PIN               AVR32_PIN_PB22
#define AVR32_TC0_CLK0_0_1_FUNCTION          3
#define AVR32_TC0_CLK1_0_0_PIN               AVR32_PIN_PA15
#define AVR32_TC0_CLK1_0_0_FUNCTION          1
#define AVR32_TC0_CLK1_0_1_PIN               AVR32_PIN_PA12
#define AVR32_TC0_CLK1_0_1_FUNCTION          2
#define AVR32_TC0_CLK1_0_2_PIN               AVR32_PIN_PB27
#define AVR32_TC0_CLK1_0_2_FUNCTION          3
#define AVR32_TC0_CLK2_0_0_PIN               AVR32_PIN_PA14
#define AVR32_TC0_CLK2_0_0_FUNCTION          1
#define AVR32_TC0_CLK2_0_1_PIN               AVR32_PIN_PB15
#define AVR32_TC0_CLK2_0_1_FUNCTION          3

/* Module instance: TC1 */
#define AVR32_TC1_ADDRESS                    0xFFFF5C00
#define AVR32_TC1                            (*((volatile avr32_tc_t*) AVR32_TC1_ADDRESS))

/* Module instance interrupt groups: TC1 */
#define AVR32_TC1_IRQ_GROUP                  26

/* Module instance interrupts: TC1 */
#define AVR32_TC1_IRQ0                       832
#define AVR32_TC1_IRQ1                       833
#define AVR32_TC1_IRQ2                       834

/* Module instance parameters: TC1 */
#define AVR32_TC1_CLK_DIV1                   clk_32
#define AVR32_TC1_CLK_DIV2                   2
#define AVR32_TC1_CLK_DIV3                   8
#define AVR32_TC1_CLK_DIV4                   32
#define AVR32_TC1_CLK_DIV5                   128
#define AVR32_TC1_PEVC                       0

/* Module instance signals: TC1 */
#define AVR32_TC1_A0_0_0_PIN                 AVR32_PIN_PB04
#define AVR32_TC1_A0_0_0_FUNCTION            0
#define AVR32_TC1_A0_0_1_PIN                 AVR32_PIN_PB00
#define AVR32_TC1_A0_0_1_FUNCTION            6
#define AVR32_TC1_A1_0_0_PIN                 AVR32_PIN_PB06
#define AVR32_TC1_A1_0_0_FUNCTION            0
#define AVR32_TC1_A1_0_1_PIN                 AVR32_PIN_PB13
#define AVR32_TC1_A1_0_1_FUNCTION            3
#define AVR32_TC1_A1_0_2_PIN                 AVR32_PIN_PB01
#define AVR32_TC1_A1_0_2_FUNCTION            6
#define AVR32_TC1_A2_0_0_PIN                 AVR32_PIN_PB08
#define AVR32_TC1_A2_0_0_FUNCTION            0
#define AVR32_TC1_A2_0_1_PIN                 AVR32_PIN_PB03
#define AVR32_TC1_A2_0_1_FUNCTION            6
#define AVR32_TC1_B0_0_PIN                   AVR32_PIN_PB05
#define AVR32_TC1_B0_0_FUNCTION              0
#define AVR32_TC1_B1_0_0_PIN                 AVR32_PIN_PB07
#define AVR32_TC1_B1_0_0_FUNCTION            0
#define AVR32_TC1_B1_0_1_PIN                 AVR32_PIN_PB14
#define AVR32_TC1_B1_0_1_FUNCTION            3
#define AVR32_TC1_B2_0_PIN                   AVR32_PIN_PB09
#define AVR32_TC1_B2_0_FUNCTION              0
#define AVR32_TC1_CLK0_0_PIN                 AVR32_PIN_PB10
#define AVR32_TC1_CLK0_0_FUNCTION            0
#define AVR32_TC1_CLK1_0_PIN                 AVR32_PIN_PB11
#define AVR32_TC1_CLK1_0_FUNCTION            0
#define AVR32_TC1_CLK2_0_PIN                 AVR32_PIN_PB12
#define AVR32_TC1_CLK2_0_FUNCTION            0

#include "avr32/tc_2231.h"

/* Module: TWIM */

/* Module instance: TWIM0 */
#define AVR32_TWIM0_ADDRESS                  0xFFFF4400
#define AVR32_TWIM0                          (*((volatile avr32_twim_t*) AVR32_TWIM0_ADDRESS))

/* Module instance interrupt groups: TWIM0 */
#define AVR32_TWIM0_IRQ_GROUP                20

/* Module instance interrupts: TWIM0 */
#define AVR32_TWIM0_IRQ                      640

/* Module instance parameters: TWIM0 */
#define AVR32_TWIM0_PDCA_ID_RX               5
#define AVR32_TWIM0_PDCA_ID_TX               17

/* Module instance signals: TWIM0 */

/* Module instance: TWIM1 */
#define AVR32_TWIM1_ADDRESS                  0xFFFF4800
#define AVR32_TWIM1                          (*((volatile avr32_twim_t*) AVR32_TWIM1_ADDRESS))

/* Module instance interrupt groups: TWIM1 */
#define AVR32_TWIM1_IRQ_GROUP                21

/* Module instance interrupts: TWIM1 */
#define AVR32_TWIM1_IRQ                      672

/* Module instance parameters: TWIM1 */
#define AVR32_TWIM1_PDCA_ID_RX               6
#define AVR32_TWIM1_PDCA_ID_TX               18

/* Module instance signals: TWIM1 */

#include "avr32/twim_110.h"

/* Module: TWIMS */

/* Module instance: TWIMS0 */
/* Module instance interrupt groups: TWIMS0 */

/* Module instance interrupts: TWIMS0 */

/* Module instance parameters: TWIMS0 */

/* Module instance signals: TWIMS0 */
#define AVR32_TWIMS0_TWALM_0_0_PIN           AVR32_PIN_PB04
#define AVR32_TWIMS0_TWALM_0_0_FUNCTION      3
#define AVR32_TWIMS0_TWALM_0_1_PIN           AVR32_PIN_PA01
#define AVR32_TWIMS0_TWALM_0_1_FUNCTION      6
#define AVR32_TWIMS0_TWCK_0_0_PIN            AVR32_PIN_PA04
#define AVR32_TWIMS0_TWCK_0_0_FUNCTION       1
#define AVR32_TWIMS0_TWCK_0_1_PIN            AVR32_PIN_PA20
#define AVR32_TWIMS0_TWCK_0_1_FUNCTION       1
#define AVR32_TWIMS0_TWCK_0_2_PIN            AVR32_PIN_PA07
#define AVR32_TWIMS0_TWCK_0_2_FUNCTION       3
#define AVR32_TWIMS0_TWCK_0_3_PIN            AVR32_PIN_PB05
#define AVR32_TWIMS0_TWCK_0_3_FUNCTION       3
#define AVR32_TWIMS0_TWD_0_0_PIN             AVR32_PIN_PA10
#define AVR32_TWIMS0_TWD_0_0_FUNCTION        0
#define AVR32_TWIMS0_TWD_0_1_PIN             AVR32_PIN_PA21
#define AVR32_TWIMS0_TWD_0_1_FUNCTION        1
#define AVR32_TWIMS0_TWD_0_2_PIN             AVR32_PIN_PA05
#define AVR32_TWIMS0_TWD_0_2_FUNCTION        6

/* Module instance: TWIMS1 */
/* Module instance interrupt groups: TWIMS1 */

/* Module instance interrupts: TWIMS1 */

/* Module instance parameters: TWIMS1 */

/* Module instance signals: TWIMS1 */
#define AVR32_TWIMS1_TWALM_0_0_PIN           AVR32_PIN_PB22
#define AVR32_TWIMS1_TWALM_0_0_FUNCTION      0
#define AVR32_TWIMS1_TWALM_0_1_PIN           AVR32_PIN_PA07
#define AVR32_TWIMS1_TWALM_0_1_FUNCTION      2
#define AVR32_TWIMS1_TWALM_0_2_PIN           AVR32_PIN_PB12
#define AVR32_TWIMS1_TWALM_0_2_FUNCTION      2
#define AVR32_TWIMS1_TWALM_0_3_PIN           AVR32_PIN_PA19
#define AVR32_TWIMS1_TWALM_0_3_FUNCTION      3
#define AVR32_TWIMS1_TWCK_0_0_PIN            AVR32_PIN_PB21
#define AVR32_TWIMS1_TWCK_0_0_FUNCTION       0
#define AVR32_TWIMS1_TWCK_0_1_PIN            AVR32_PIN_PA05
#define AVR32_TWIMS1_TWCK_0_1_FUNCTION       1
#define AVR32_TWIMS1_TWCK_0_2_PIN            AVR32_PIN_PB04
#define AVR32_TWIMS1_TWCK_0_2_FUNCTION       6
#define AVR32_TWIMS1_TWD_0_0_PIN             AVR32_PIN_PB20
#define AVR32_TWIMS1_TWD_0_0_FUNCTION        0
#define AVR32_TWIMS1_TWD_0_1_PIN             AVR32_PIN_PA17
#define AVR32_TWIMS1_TWD_0_1_FUNCTION        3

/* Module: TWIS */

/* Module instance: TWIS0 */
#define AVR32_TWIS0_ADDRESS                  0xFFFF4C00
#define AVR32_TWIS0                          (*((volatile avr32_twis_t*) AVR32_TWIS0_ADDRESS))

/* Module instance interrupt groups: TWIS0 */
#define AVR32_TWIS0_IRQ_GROUP                22

/* Module instance interrupts: TWIS0 */
#define AVR32_TWIS0_IRQ                      704

/* Module instance parameters: TWIS0 */
#define AVR32_TWIS0_PDCA_ID_RX               7
#define AVR32_TWIS0_PDCA_ID_TX               19

/* Module instance signals: TWIS0 */

/* Module instance: TWIS1 */
#define AVR32_TWIS1_ADDRESS                  0xFFFF5000
#define AVR32_TWIS1                          (*((volatile avr32_twis_t*) AVR32_TWIS1_ADDRESS))

/* Module instance interrupt groups: TWIS1 */
#define AVR32_TWIS1_IRQ_GROUP                23

/* Module instance interrupts: TWIS1 */
#define AVR32_TWIS1_IRQ                      736

/* Module instance parameters: TWIS1 */
#define AVR32_TWIS1_PDCA_ID_RX               8
#define AVR32_TWIS1_PDCA_ID_TX               20

/* Module instance signals: TWIS1 */

#include "avr32/twis_120.h"

/* Module: USART */

/* Module instance: USART0 */
#define AVR32_USART0_ADDRESS                 0xFFFF3000
#define AVR32_USART0                         (*((volatile avr32_usart_t*) AVR32_USART0_ADDRESS))

/* Module instance interrupt groups: USART0 */
#define AVR32_USART0_IRQ_GROUP               15

/* Module instance interrupts: USART0 */
#define AVR32_USART0_IRQ                     480

/* Module instance parameters: USART0 */
#define AVR32_USART0_CLK_DIV                 8
#define AVR32_USART0_PADDR_MSB               12
#define AVR32_USART0_PDATA_MSB               31
#define AVR32_USART0_PDCA_ID_RX              0
#define AVR32_USART0_PDCA_ID_TX              12

/* Module instance signals: USART0 */
#define AVR32_USART0_CLK_0_0_PIN             AVR32_PIN_PA02
#define AVR32_USART0_CLK_0_0_FUNCTION        6
#define AVR32_USART0_CLK_0_1_PIN             AVR32_PIN_PA03
#define AVR32_USART0_CLK_0_1_FUNCTION        6
#define AVR32_USART0_CTS_0_0_PIN             AVR32_PIN_PA03
#define AVR32_USART0_CTS_0_0_FUNCTION        0
#define AVR32_USART0_CTS_0_1_PIN             AVR32_PIN_PA22
#define AVR32_USART0_CTS_0_1_FUNCTION        0
#define AVR32_USART0_CTS_0_2_PIN             AVR32_PIN_PB19
#define AVR32_USART0_CTS_0_2_FUNCTION        2
#define AVR32_USART0_RTS_0_0_PIN             AVR32_PIN_PA02
#define AVR32_USART0_RTS_0_0_FUNCTION        0
#define AVR32_USART0_RTS_0_1_PIN             AVR32_PIN_PB18
#define AVR32_USART0_RTS_0_1_FUNCTION        2
#define AVR32_USART0_RXD_0_0_PIN             AVR32_PIN_PA01
#define AVR32_USART0_RXD_0_0_FUNCTION        0
#define AVR32_USART0_RXD_0_1_PIN             AVR32_PIN_PB17
#define AVR32_USART0_RXD_0_1_FUNCTION        2
#define AVR32_USART0_TXD_0_0_PIN             AVR32_PIN_PA00
#define AVR32_USART0_TXD_0_0_FUNCTION        0
#define AVR32_USART0_TXD_0_1_PIN             AVR32_PIN_PB16
#define AVR32_USART0_TXD_0_1_FUNCTION        2

/* Module instance: USART1 */
#define AVR32_USART1_ADDRESS                 0xFFFF3400
#define AVR32_USART1                         (*((volatile avr32_usart_t*) AVR32_USART1_ADDRESS))

/* Module instance interrupt groups: USART1 */
#define AVR32_USART1_IRQ_GROUP               16

/* Module instance interrupts: USART1 */
#define AVR32_USART1_IRQ                     512

/* Module instance parameters: USART1 */
#define AVR32_USART1_CLK_DIV                 8
#define AVR32_USART1_PADDR_MSB               12
#define AVR32_USART1_PDATA_MSB               31
#define AVR32_USART1_PDCA_ID_RX              1
#define AVR32_USART1_PDCA_ID_TX              13

/* Module instance signals: USART1 */
#define AVR32_USART1_CLK_0_0_PIN             AVR32_PIN_PA06
#define AVR32_USART1_CLK_0_0_FUNCTION        2
#define AVR32_USART1_CLK_0_1_PIN             AVR32_PIN_PB04
#define AVR32_USART1_CLK_0_1_FUNCTION        2
#define AVR32_USART1_CLK_0_2_PIN             AVR32_PIN_PB05
#define AVR32_USART1_CLK_0_2_FUNCTION        2
#define AVR32_USART1_CLK_0_3_PIN             AVR32_PIN_PA01
#define AVR32_USART1_CLK_0_3_FUNCTION        3
#define AVR32_USART1_CLK_0_4_PIN             AVR32_PIN_PB20
#define AVR32_USART1_CLK_0_4_FUNCTION        6
#define AVR32_USART1_CLK_0_5_PIN             AVR32_PIN_PB21
#define AVR32_USART1_CLK_0_5_FUNCTION        6
#define AVR32_USART1_CTS_0_0_PIN             AVR32_PIN_PA01
#define AVR32_USART1_CTS_0_0_FUNCTION        1
#define AVR32_USART1_CTS_0_1_PIN             AVR32_PIN_PB05
#define AVR32_USART1_CTS_0_1_FUNCTION        1
#define AVR32_USART1_CTS_0_2_PIN             AVR32_PIN_PB21
#define AVR32_USART1_CTS_0_2_FUNCTION        5
#define AVR32_USART1_RTS_0_0_PIN             AVR32_PIN_PA00
#define AVR32_USART1_RTS_0_0_FUNCTION        1
#define AVR32_USART1_RTS_0_1_PIN             AVR32_PIN_PB04
#define AVR32_USART1_RTS_0_1_FUNCTION        1
#define AVR32_USART1_RTS_0_2_PIN             AVR32_PIN_PB20
#define AVR32_USART1_RTS_0_2_FUNCTION        5
#define AVR32_USART1_RXD_0_0_PIN             AVR32_PIN_PA09
#define AVR32_USART1_RXD_0_0_FUNCTION        0
#define AVR32_USART1_RXD_0_1_PIN             AVR32_PIN_PB11
#define AVR32_USART1_RXD_0_1_FUNCTION        1
#define AVR32_USART1_RXD_0_2_PIN             AVR32_PIN_PB25
#define AVR32_USART1_RXD_0_2_FUNCTION        1
#define AVR32_USART1_RXD_0_3_PIN             AVR32_PIN_PB27
#define AVR32_USART1_RXD_0_3_FUNCTION        1
#define AVR32_USART1_RXD_0_4_PIN             AVR32_PIN_PA04
#define AVR32_USART1_RXD_0_4_FUNCTION        2
#define AVR32_USART1_TXD_0_0_PIN             AVR32_PIN_PA08
#define AVR32_USART1_TXD_0_0_FUNCTION        0
#define AVR32_USART1_TXD_0_1_PIN             AVR32_PIN_PB10
#define AVR32_USART1_TXD_0_1_FUNCTION        1
#define AVR32_USART1_TXD_0_2_PIN             AVR32_PIN_PB26
#define AVR32_USART1_TXD_0_2_FUNCTION        1
#define AVR32_USART1_TXD_0_3_PIN             AVR32_PIN_PA05
#define AVR32_USART1_TXD_0_3_FUNCTION        2

/* Module instance: USART2 */
#define AVR32_USART2_ADDRESS                 0xFFFF3800
#define AVR32_USART2                         (*((volatile avr32_usart_t*) AVR32_USART2_ADDRESS))

/* Module instance interrupt groups: USART2 */
#define AVR32_USART2_IRQ_GROUP               17

/* Module instance interrupts: USART2 */
#define AVR32_USART2_IRQ                     544

/* Module instance parameters: USART2 */
#define AVR32_USART2_CLK_DIV                 8
#define AVR32_USART2_PADDR_MSB               12
#define AVR32_USART2_PDATA_MSB               31
#define AVR32_USART2_PDCA_ID_RX              2
#define AVR32_USART2_PDCA_ID_TX              14

/* Module instance signals: USART2 */
#define AVR32_USART2_CLK_0_0_PIN             AVR32_PIN_PA12
#define AVR32_USART2_CLK_0_0_FUNCTION        1
#define AVR32_USART2_CLK_0_1_PIN             AVR32_PIN_PA22
#define AVR32_USART2_CLK_0_1_FUNCTION        1
#define AVR32_USART2_CLK_0_2_PIN             AVR32_PIN_PB23
#define AVR32_USART2_CLK_0_2_FUNCTION        2
#define AVR32_USART2_CLK_0_3_PIN             AVR32_PIN_PB24
#define AVR32_USART2_CLK_0_3_FUNCTION        2
#define AVR32_USART2_CTS_0_0_PIN             AVR32_PIN_PB24
#define AVR32_USART2_CTS_0_0_FUNCTION        1
#define AVR32_USART2_CTS_0_1_PIN             AVR32_PIN_PA17
#define AVR32_USART2_CTS_0_1_FUNCTION        2
#define AVR32_USART2_RTS_0_0_PIN             AVR32_PIN_PB23
#define AVR32_USART2_RTS_0_0_FUNCTION        1
#define AVR32_USART2_RTS_0_1_PIN             AVR32_PIN_PA14
#define AVR32_USART2_RTS_0_1_FUNCTION        2
#define AVR32_USART2_RXD_0_0_PIN             AVR32_PIN_PA21
#define AVR32_USART2_RXD_0_0_FUNCTION        0
#define AVR32_USART2_RXD_0_1_PIN             AVR32_PIN_PA07
#define AVR32_USART2_RXD_0_1_FUNCTION        1
#define AVR32_USART2_RXD_0_2_PIN             AVR32_PIN_PB20
#define AVR32_USART2_RXD_0_2_FUNCTION        1
#define AVR32_USART2_TXD_0_0_PIN             AVR32_PIN_PA20
#define AVR32_USART2_TXD_0_0_FUNCTION        0
#define AVR32_USART2_TXD_0_1_PIN             AVR32_PIN_PA06
#define AVR32_USART2_TXD_0_1_FUNCTION        1
#define AVR32_USART2_TXD_0_2_PIN             AVR32_PIN_PB21
#define AVR32_USART2_TXD_0_2_FUNCTION        1
#define AVR32_USART2_TXD_0_3_PIN             AVR32_PIN_PA02
#define AVR32_USART2_TXD_0_3_FUNCTION        2
#define AVR32_USART2_TXD_0_4_PIN             AVR32_PIN_PA03
#define AVR32_USART2_TXD_0_4_FUNCTION        2

/* Module instance: USART3 */
#define AVR32_USART3_ADDRESS                 0xFFFF3C00
#define AVR32_USART3                         (*((volatile avr32_usart_t*) AVR32_USART3_ADDRESS))

/* Module instance interrupt groups: USART3 */
#define AVR32_USART3_IRQ_GROUP               18

/* Module instance interrupts: USART3 */
#define AVR32_USART3_IRQ                     576

/* Module instance parameters: USART3 */
#define AVR32_USART3_CLK_DIV                 8
#define AVR32_USART3_PADDR_MSB               12
#define AVR32_USART3_PDATA_MSB               31
#define AVR32_USART3_PDCA_ID_RX              3
#define AVR32_USART3_PDCA_ID_TX              15

/* Module instance signals: USART3 */
#define AVR32_USART3_CLK_0_0_PIN             AVR32_PIN_PB02
#define AVR32_USART3_CLK_0_0_FUNCTION        1
#define AVR32_USART3_CLK_0_1_PIN             AVR32_PIN_PB03
#define AVR32_USART3_CLK_0_1_FUNCTION        1
#define AVR32_USART3_CLK_0_2_PIN             AVR32_PIN_PB09
#define AVR32_USART3_CLK_0_2_FUNCTION        2
#define AVR32_USART3_CLK_0_3_PIN             AVR32_PIN_PB10
#define AVR32_USART3_CLK_0_3_FUNCTION        2
#define AVR32_USART3_CTS_0_0_PIN             AVR32_PIN_PB03
#define AVR32_USART3_CTS_0_0_FUNCTION        0
#define AVR32_USART3_CTS_0_1_PIN             AVR32_PIN_PB09
#define AVR32_USART3_CTS_0_1_FUNCTION        1
#define AVR32_USART3_RTS_0_0_PIN             AVR32_PIN_PB02
#define AVR32_USART3_RTS_0_0_FUNCTION        0
#define AVR32_USART3_RTS_0_1_PIN             AVR32_PIN_PB08
#define AVR32_USART3_RTS_0_1_FUNCTION        1
#define AVR32_USART3_RXD_0_0_PIN             AVR32_PIN_PB01
#define AVR32_USART3_RXD_0_0_FUNCTION        0
#define AVR32_USART3_RXD_0_1_PIN             AVR32_PIN_PB07
#define AVR32_USART3_RXD_0_1_FUNCTION        1
#define AVR32_USART3_RXD_0_2_PIN             AVR32_PIN_PB14
#define AVR32_USART3_RXD_0_2_FUNCTION        1
#define AVR32_USART3_TXD_0_0_PIN             AVR32_PIN_PB00
#define AVR32_USART3_TXD_0_0_FUNCTION        0
#define AVR32_USART3_TXD_0_1_PIN             AVR32_PIN_PB06
#define AVR32_USART3_TXD_0_1_FUNCTION        1
#define AVR32_USART3_TXD_0_2_PIN             AVR32_PIN_PB13
#define AVR32_USART3_TXD_0_2_FUNCTION        1

#include "avr32/usart_440.h"

/* Module: USBC */

#define AVR32_USBC_ADDRESS                   0xFFFE1000
#define AVR32_USBC                           (*((volatile avr32_usbc_t*) AVR32_USBC_ADDRESS))

/* Module instance interrupt groups: USBC */
#define AVR32_USBC_IRQ_GROUP                 32

/* Module instance interrupts: USBC */
#define AVR32_USBC_IRQ                       1024

/* Module instance parameters: USBC */
#define AVR32_USBC_EPT_NBR                   7
#define AVR32_USBC_GCLK_NUM                  7

/* Module instance signals: USBC */
#define AVR32_USBC_DM_0_PIN                  AVR32_PIN_PB13
#define AVR32_USBC_DM_0_FUNCTION             0
#define AVR32_USBC_DP_0_PIN                  AVR32_PIN_PB14
#define AVR32_USBC_DP_0_FUNCTION             0

#include "avr32/usbc_200.h"

/* Module: WDT */

#define AVR32_WDT_ADDRESS                    0xFFFF2000
#define AVR32_WDT                            (*((volatile avr32_wdt_t*) AVR32_WDT_ADDRESS))

/* Module instance interrupt groups: WDT */

/* Module instance interrupts: WDT */

/* Module instance parameters: WDT */

/* Module instance signals: WDT */

#include "avr32/wdt_410.h"

/* Module: GPIO_LOCAL */

#define AVR32_GPIO_LOCAL_ADDRESS             0x40000000
#define AVR32_GPIO_LOCAL                     (*((volatile avr32_gpio_local_t*) AVR32_GPIO_LOCAL_ADDRESS))

/* Module instance interrupt groups: GPIO_LOCAL */

/* Module instance interrupts: GPIO_LOCAL */

/* Module instance parameters: GPIO_LOCAL */

/* Module instance signals: GPIO_LOCAL */

#include "avr32/gpio_local_100.h"

/* Device PAD->GPIO bits mapping */
#define AVR32_PIN_PA00                        0
#define AVR32_PIN_PA01                        1
#define AVR32_PIN_PA02                        2
#define AVR32_PIN_PA03                        3
#define AVR32_PIN_PA04                        4
#define AVR32_PIN_PA05                        5
#define AVR32_PIN_PA06                        6
#define AVR32_PIN_PA07                        7
#define AVR32_PIN_PA08                        8
#define AVR32_PIN_PA09                        9
#define AVR32_PIN_PA10                       10
#define AVR32_PIN_PA11                       11
#define AVR32_PIN_PA12                       12
#define AVR32_PIN_PA13                       13
#define AVR32_PIN_PA14                       14
#define AVR32_PIN_PA15                       15
#define AVR32_PIN_PA16                       16
#define AVR32_PIN_PA17                       17
#define AVR32_PIN_PA18                       18
#define AVR32_PIN_PA19                       19
#define AVR32_PIN_PA20                       20
#define AVR32_PIN_PA21                       21
#define AVR32_PIN_PA22                       22
#define AVR32_PIN_PB00                       32
#define AVR32_PIN_PB01                       33
#define AVR32_PIN_PB02                       34
#define AVR32_PIN_PB03                       35
#define AVR32_PIN_PB04                       36
#define AVR32_PIN_PB05                       37
#define AVR32_PIN_PB06                       38
#define AVR32_PIN_PB07                       39
#define AVR32_PIN_PB08                       40
#define AVR32_PIN_PB09                       41
#define AVR32_PIN_PB10                       42
#define AVR32_PIN_PB11                       43
#define AVR32_PIN_PB12                       44
#define AVR32_PIN_PB13                       45
#define AVR32_PIN_PB14                       46
#define AVR32_PIN_PB15                       47
#define AVR32_PIN_PB16                       48
#define AVR32_PIN_PB17                       49
#define AVR32_PIN_PB18                       50
#define AVR32_PIN_PB19                       51
#define AVR32_PIN_PB20                       52
#define AVR32_PIN_PB21                       53
#define AVR32_PIN_PB22                       54
#define AVR32_PIN_PB23                       55
#define AVR32_PIN_PB24                       56
#define AVR32_PIN_PB25                       57
#define AVR32_PIN_PB26                       58
#define AVR32_PIN_PB27                       59


#endif /* #ifdef _AVR32_UC64L3U_H_INCLUDED */

