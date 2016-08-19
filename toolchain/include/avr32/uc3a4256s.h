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
 * avr32/at32uc3a4256s.h  - definitions for  AT32UC3A4256S
 * Generated from  AT32UC3A4256S.xml 
 ****************************************************************************/


#ifndef _AVR32_UC3A4256S_H_INCLUDED
#define _AVR32_UC3A4256S_H_INCLUDED

/* Module Instance Count */
#define AVR32_CORE_NUM                       1
#define AVR32_INTC_NUM                       1
#define AVR32_ADC_NUM                        1
#define AVR32_AES_NUM                        1
#define AVR32_BUSMON_NUM                     1
#define AVR32_ABDAC_NUM                      1
#define AVR32_DMACA_NUM                      1
#define AVR32_EBI_NUM                        1
#define AVR32_ECCHRS_NUM                     1
#define AVR32_EIC_NUM                        1
#define AVR32_FLASHC_NUM                     1
#define AVR32_FREQM_NUM                      1
#define AVR32_GPIO_NUM                       1
#define AVR32_HMATRIX_NUM                    1
#define AVR32_SDRAMC_NUM                     1
#define AVR32_SMC_NUM                        1
#define AVR32_JTAG_NUM                       1
#define AVR32_MCI_NUM                        1
#define AVR32_MSI_NUM                        1
#define AVR32_PDCA_NUM                       1
#define AVR32_PLL_NUM                        2
#define AVR32_PM_NUM                         1
#define AVR32_RTC_NUM                        1
#define AVR32_SPI_NUM                        2
#define AVR32_SSC_NUM                        1
#define AVR32_TC_NUM                         2
#define AVR32_TWIM_NUM                       2
#define AVR32_TWIMS_NUM                      2
#define AVR32_TWIS_NUM                       2
#define AVR32_USART_NUM                      4
#define AVR32_USBB_NUM                       1
#define AVR32_UTMI_NUM                       1
#define AVR32_WDT_NUM                        1
#define AVR32_FUSES_NUM                      1

/* Maskable module clocks */
#define AVR32_PM_CLK_GRP_CPU                 0
#define AVR32_PM_CLK_GRP_HSB                 1
#define AVR32_PM_CLK_GRP_PBA                 2
#define AVR32_PM_CLK_GRP_PBB                 3
#define AVR32_PM_NUM_CLK_GRPS                4
#define AVR32_PM_NUM_CLKS_PER_GRP0           2
#define AVR32_PM_NUM_CLKS_PER_GRP1           11
#define AVR32_PM_NUM_CLKS_PER_GRP2           21
#define AVR32_PM_NUM_CLKS_PER_GRP3           10

/* CPU clocks */
#define AVR32_OCD_CLK_CPU                    0
#define AVR32_SYSTIMER_CLK_CPU               16

/* HSB clocks */
#define AVR32_FLASHC_CLK_HSB                 32
#define AVR32_PBA_CLK_HSB                    33
#define AVR32_PBB_CLK_HSB                    34
#define AVR32_USBB_CLK_HSB                   35
#define AVR32_PDCA_CLK_HSB                   36
#define AVR32_EBI_CLK_HSB                    37
#define AVR32_PBC_CLK_HSB                    38
#define AVR32_DMACA_CLK_HSB                  39
#define AVR32_BUSMON_CLK_HSB                 40
#define AVR32_HRAMC0_CLK_HSB                 41
#define AVR32_HRAMC1_CLK_HSB                 42

/* PBA clocks */
#define AVR32_INTC_CLK_PBA                   64
#define AVR32_IO_CLK_PBA                     65
#define AVR32_PDCA_CLK_PBA                   66
#define AVR32_PM_CLK_PBA                     67
#define AVR32_RTC_CLK_PBA                    67
#define AVR32_EIC_CLK_PBA                    67
#define AVR32_ADC_CLK_PBA                    68
#define AVR32_SPI0_CLK_PBA                   69
#define AVR32_SPI1_CLK_PBA                   70
#define AVR32_TWIM0_CLK_PBA                  71
#define AVR32_TWIM1_CLK_PBA                  72
#define AVR32_TWIS0_CLK_PBA                  73
#define AVR32_TWIS1_CLK_PBA                  74
#define AVR32_USART0_CLK_PBA                 75
#define AVR32_USART1_CLK_PBA                 76
#define AVR32_USART2_CLK_PBA                 77
#define AVR32_USART3_CLK_PBA                 78
#define AVR32_SSC_CLK_PBA                    79
#define AVR32_TC0_CLK_PBA                    80
#define AVR32_TC1_CLK_PBA                    81
#define AVR32_ABDAC_CLK_PBA                  82

/* PBB clocks */
#define AVR32_HMATRIX_CLK_PBB                96
#define AVR32_USBB_CLK_PBB                   97
#define AVR32_FLASHC_CLK_PBB                 98
#define AVR32_SMC_CLK_PBB                    99
#define AVR32_SDRAMC_CLK_PBB                 100
#define AVR32_ECCHRS_CLK_PBB                 101
#define AVR32_MCI_CLK_PBB                    102
#define AVR32_BUSMON_CLK_PBB                 103
#define AVR32_MSI_CLK_PBB                    104
#define AVR32_AES_CLK_PBB                    105

/* Generic clocks */
#define AVR32_PM_GCLK_GCLK0                  0
#define AVR32_PM_GCLK_GCLK1                  1
#define AVR32_PM_GCLK_GCLK2                  2
#define AVR32_PM_GCLK_GCLK3                  3
#define AVR32_PM_GCLK_GCLK4                  4
#define AVR32_PM_GCLK_GCLK5                  5
#define AVR32_PM_GCLK_GCLK6                  6
#define AVR32_PM_GCLK_GCLK7                  7
#define AVR32_PM_GCLK_GCLK8                  8

/* Device Parameters */

/* Memories */
#define AVR32_EBI_CS0_ADDRESS                0xC0000000
#define AVR32_EBI_CS0_SIZE                   0x01000000
#define AVR32_EBI_CS0                        ((unsigned char *) AVR32_EBI_CS0_ADDRESS)
#define AVR32_EBI_CS1_ADDRESS                0xD0000000
#define AVR32_EBI_CS1_SIZE                   0x08000000
#define AVR32_EBI_CS1                        ((unsigned char *) AVR32_EBI_CS1_ADDRESS)
#define AVR32_EBI_CS2_ADDRESS                0xC8000000
#define AVR32_EBI_CS2_SIZE                   0x01000000
#define AVR32_EBI_CS2                        ((unsigned char *) AVR32_EBI_CS2_ADDRESS)
#define AVR32_EBI_CS3_ADDRESS                0xCC000000
#define AVR32_EBI_CS3_SIZE                   0x01000000
#define AVR32_EBI_CS3                        ((unsigned char *) AVR32_EBI_CS3_ADDRESS)
#define AVR32_EBI_CS4_ADDRESS                0xD8000000
#define AVR32_EBI_CS4_SIZE                   0x01000000
#define AVR32_EBI_CS4                        ((unsigned char *) AVR32_EBI_CS4_ADDRESS)
#define AVR32_EBI_CS5_ADDRESS                0xDC000000
#define AVR32_EBI_CS5_SIZE                   0x01000000
#define AVR32_EBI_CS5                        ((unsigned char *) AVR32_EBI_CS5_ADDRESS)
#define AVR32_FLASH_ADDRESS                  0x80000000
#define AVR32_FLASH_SIZE                     0x00040000
#define AVR32_FLASH                          ((unsigned char *) AVR32_FLASH_ADDRESS)
#define AVR32_USER_PAGE_ADDRESS              0x80800000
#define AVR32_USER_PAGE_SIZE                 0x00000200
#define AVR32_USER_PAGE                      ((unsigned char *) AVR32_USER_PAGE_ADDRESS)
#define AVR32_INTRAM0_ADDRESS                0xFF000000
#define AVR32_INTRAM0_SIZE                   0x00008000
#define AVR32_INTRAM0                        ((unsigned char *) AVR32_INTRAM0_ADDRESS)
#define AVR32_INTRAM1_ADDRESS                0xFF008000
#define AVR32_INTRAM1_SIZE                   0x00008000
#define AVR32_INTRAM1                        ((unsigned char *) AVR32_INTRAM1_ADDRESS)
#define AVR32_SRAM_ADDRESS                   0x00000000
#define AVR32_SRAM_SIZE                      0x00010000
#define AVR32_SRAM                           ((unsigned char *) AVR32_SRAM_ADDRESS)
#define AVR32_USBB_SLAVE_ADDRESS             0xE0000000
#define AVR32_USBB_SLAVE_SIZE                0x00800000
#define AVR32_USBB_SLAVE                     ((unsigned char *) AVR32_USBB_SLAVE_ADDRESS)
#define AVR32_FUSES_ADDRESS                  0xfffe1400
#define AVR32_FUSES_SIZE                     0x00000001
#define AVR32_FUSES                          ((unsigned char *) AVR32_FUSES_ADDRESS)

/* Module: CORE */


/* Module instance interrupt groups: CORE */
#define AVR32_CORE_IRQ_GROUP                 0

/* Module instance interrupts: CORE */
#define AVR32_CORE_COMPARE_IRQ               0

/* Module instance parameters: CORE */

/* Module instance signals: CORE */

#include "avr32/core_sc0_142.h"

/* Module: INTC */

#define AVR32_INTC_ADDRESS                   0xFFFF0800
#define AVR32_INTC                           (*((volatile avr32_intc_t*) AVR32_INTC_ADDRESS))

/* Module instance interrupt groups: INTC */

/* Module instance interrupts: INTC */

/* Module instance parameters: INTC */
#define AVR32_INTC_NUM_INT_GRPS              30
#define AVR32_INTC_NUM_IRQS_PER_GRP0         1
#define AVR32_INTC_NUM_IRQS_PER_GRP1         11
#define AVR32_INTC_NUM_IRQS_PER_GRP10        1
#define AVR32_INTC_NUM_IRQS_PER_GRP11        1
#define AVR32_INTC_NUM_IRQS_PER_GRP12        1
#define AVR32_INTC_NUM_IRQS_PER_GRP13        1
#define AVR32_INTC_NUM_IRQS_PER_GRP14        3
#define AVR32_INTC_NUM_IRQS_PER_GRP15        1
#define AVR32_INTC_NUM_IRQS_PER_GRP16        3
#define AVR32_INTC_NUM_IRQS_PER_GRP17        1
#define AVR32_INTC_NUM_IRQS_PER_GRP18        1
#define AVR32_INTC_NUM_IRQS_PER_GRP19        1
#define AVR32_INTC_NUM_IRQS_PER_GRP2         14
#define AVR32_INTC_NUM_IRQS_PER_GRP20        1
#define AVR32_INTC_NUM_IRQS_PER_GRP21        1
#define AVR32_INTC_NUM_IRQS_PER_GRP22        5
#define AVR32_INTC_NUM_IRQS_PER_GRP23        1
#define AVR32_INTC_NUM_IRQS_PER_GRP24        1
#define AVR32_INTC_NUM_IRQS_PER_GRP25        1
#define AVR32_INTC_NUM_IRQS_PER_GRP26        1
#define AVR32_INTC_NUM_IRQS_PER_GRP27        1
#define AVR32_INTC_NUM_IRQS_PER_GRP28        1
#define AVR32_INTC_NUM_IRQS_PER_GRP29        1
#define AVR32_INTC_NUM_IRQS_PER_GRP3         8
#define AVR32_INTC_NUM_IRQS_PER_GRP4         1
#define AVR32_INTC_NUM_IRQS_PER_GRP5         1
#define AVR32_INTC_NUM_IRQS_PER_GRP6         1
#define AVR32_INTC_NUM_IRQS_PER_GRP7         1
#define AVR32_INTC_NUM_IRQS_PER_GRP8         1
#define AVR32_INTC_NUM_IRQS_PER_GRP9         1

/* Module instance signals: INTC */

#include "avr32/intc_142.h"

/* Module: ADC */

#define AVR32_ADC_ADDRESS                    0xFFFF3C00
#define AVR32_ADC                            (*((volatile avr32_adc_t*) AVR32_ADC_ADDRESS))

/* Module instance interrupt groups: ADC */
#define AVR32_ADC_IRQ_GROUP                  15

/* Module instance interrupts: ADC */
#define AVR32_ADC_IRQ                        480

/* Module instance parameters: ADC */
#define AVR32_ADC_CHANNELS_MSB               7
#define AVR32_ADC_DATA_MSB                   9
#define AVR32_ADC_PADDR_MSB                  10
#define AVR32_ADC_PDATA_MSB                  32

/* Module instance signals: ADC */
#define AVR32_ADC_AD_0_PIN                   AVR32_PIN_PA21
#define AVR32_ADC_AD_0_FUNCTION              0
#define AVR32_ADC_AD_1_PIN                   AVR32_PIN_PA22
#define AVR32_ADC_AD_1_FUNCTION              0
#define AVR32_ADC_AD_2_PIN                   AVR32_PIN_PA23
#define AVR32_ADC_AD_2_FUNCTION              0
#define AVR32_ADC_AD_3_PIN                   AVR32_PIN_PA24
#define AVR32_ADC_AD_3_FUNCTION              0
#define AVR32_ADC_AD_7_PIN                   AVR32_PIN_PA17
#define AVR32_ADC_AD_7_FUNCTION              2
#define AVR32_ADC_AD_6_PIN                   AVR32_PIN_PA18
#define AVR32_ADC_AD_6_FUNCTION              2
#define AVR32_ADC_AD_5_PIN                   AVR32_PIN_PA19
#define AVR32_ADC_AD_5_FUNCTION              2
#define AVR32_ADC_AD_4_PIN                   AVR32_PIN_PA20
#define AVR32_ADC_AD_4_FUNCTION              2
#define AVR32_ADC_ADVREFP_0_PIN              AVR32_PIN_PB12
#define AVR32_ADC_ADVREFP_0_FUNCTION         1
#define AVR32_ADC_TRIGGER_0_0_PIN            AVR32_PIN_PX47
#define AVR32_ADC_TRIGGER_0_0_FUNCTION       1
#define AVR32_ADC_TRIGGER_0_1_PIN            AVR32_PIN_PB00
#define AVR32_ADC_TRIGGER_0_1_FUNCTION       2

#include "avr32/adc_200.h"

/* Module: AES */

#define AVR32_AES_ADDRESS                    0xFFFD0000
#define AVR32_AES                            (*((volatile avr32_aes_t*) AVR32_AES_ADDRESS))

/* Module instance interrupt groups: AES */
#define AVR32_AES_IRQ_GROUP                  21

/* Module instance interrupts: AES */
#define AVR32_AES_IRQ                        672

/* Module instance parameters: AES */

/* Module instance signals: AES */

#include "avr32/aes_123.h"

/* Module: BUSMON */

#define AVR32_BUSMON_ADDRESS                 0xFFFE2800
#define AVR32_BUSMON                         (*((volatile avr32_busmon_t*) AVR32_BUSMON_ADDRESS))

/* Module instance interrupt groups: BUSMON */

/* Module instance interrupts: BUSMON */

/* Module instance parameters: BUSMON */
#define AVR32_BUSMON_CH0_IMPL                1
#define AVR32_BUSMON_CH1_IMPL                1
#define AVR32_BUSMON_CH2_IMPL                1
#define AVR32_BUSMON_CH3_IMPL                1

/* Module instance signals: BUSMON */

#include "avr32/busmon_100.h"

/* Module: ABDAC */

#define AVR32_ABDAC_ADDRESS                  0xFFFF4000
#define AVR32_ABDAC                          (*((volatile avr32_abdac_t*) AVR32_ABDAC_ADDRESS))

/* Module instance interrupt groups: ABDAC */
#define AVR32_ABDAC_IRQ_GROUP                19

/* Module instance interrupts: ABDAC */
#define AVR32_DAC_IRQ                        608

/* Module instance parameters: ABDAC */

/* Module instance signals: ABDAC */
#define AVR32_ABDAC_DATA_0_0_PIN             AVR32_PIN_PA08
#define AVR32_ABDAC_DATA_0_0_FUNCTION        1
#define AVR32_ABDAC_DATA_0_1_PIN             AVR32_PIN_PA03
#define AVR32_ABDAC_DATA_0_1_FUNCTION        2
#define AVR32_ABDAC_DATA_1_0_PIN             AVR32_PIN_PB01
#define AVR32_ABDAC_DATA_1_0_FUNCTION        1
#define AVR32_ABDAC_DATA_1_1_PIN             AVR32_PIN_PA23
#define AVR32_ABDAC_DATA_1_1_FUNCTION        2
#define AVR32_ABDAC_DATA_0_0_PIN             AVR32_PIN_PA08
#define AVR32_ABDAC_DATA_0_0_FUNCTION        1
#define AVR32_ABDAC_DATA_0_1_PIN             AVR32_PIN_PA03
#define AVR32_ABDAC_DATA_0_1_FUNCTION        2
#define AVR32_ABDAC_DATA_1_0_PIN             AVR32_PIN_PB01
#define AVR32_ABDAC_DATA_1_0_FUNCTION        1
#define AVR32_ABDAC_DATA_1_1_PIN             AVR32_PIN_PA23
#define AVR32_ABDAC_DATA_1_1_FUNCTION        2
#define AVR32_ABDAC_DATAN_0_0_PIN            AVR32_PIN_PA07
#define AVR32_ABDAC_DATAN_0_0_FUNCTION       1
#define AVR32_ABDAC_DATAN_0_1_PIN            AVR32_PIN_PA04
#define AVR32_ABDAC_DATAN_0_1_FUNCTION       2
#define AVR32_ABDAC_DATAN_1_0_PIN            AVR32_PIN_PB02
#define AVR32_ABDAC_DATAN_1_0_FUNCTION       1
#define AVR32_ABDAC_DATAN_1_1_PIN            AVR32_PIN_PA24
#define AVR32_ABDAC_DATAN_1_1_FUNCTION       2
#define AVR32_ABDAC_DATAN_0_0_PIN            AVR32_PIN_PA07
#define AVR32_ABDAC_DATAN_0_0_FUNCTION       1
#define AVR32_ABDAC_DATAN_0_1_PIN            AVR32_PIN_PA04
#define AVR32_ABDAC_DATAN_0_1_FUNCTION       2
#define AVR32_ABDAC_DATAN_1_0_PIN            AVR32_PIN_PB02
#define AVR32_ABDAC_DATAN_1_0_FUNCTION       1
#define AVR32_ABDAC_DATAN_1_1_PIN            AVR32_PIN_PA24
#define AVR32_ABDAC_DATAN_1_1_FUNCTION       2

#include "avr32/abdac_101.h"

/* Module: DMACA */

#define AVR32_DMACA_ADDRESS                  0xFF100000
#define AVR32_DMACA                          (*((volatile avr32_dmaca_t*) AVR32_DMACA_ADDRESS))

/* Module instance interrupt groups: DMACA */
#define AVR32_DMACA_IRQ_GROUP                22

/* Module instance interrupts: DMACA */
#define AVR32_DMACA_BLOCK_IRQ                704
#define AVR32_DMACA_DSTT_IRQ                 705
#define AVR32_DMACA_ERR_IRQ                  706
#define AVR32_DMACA_SRCT_IRQ                 707
#define AVR32_DMACA_TFR_IRQ                  708

/* Module instance parameters: DMACA */
#define AVR32_DMACA_CH_AES_RX                0
#define AVR32_DMACA_CH_AES_TX                1
#define AVR32_DMACA_CH_AUDIOC_RXA            -1
#define AVR32_DMACA_CH_AUDIOC_RXB            -1
#define AVR32_DMACA_CH_AUDIOC_TXA            -1
#define AVR32_DMACA_CH_AUDIOC_TXB            -1
#define AVR32_DMACA_CH_DAC_TX                -1
#define AVR32_DMACA_CH_EXTRQ0                6
#define AVR32_DMACA_CH_EXTRQ1                7
#define AVR32_DMACA_CH_EXTRQ2                -1
#define AVR32_DMACA_CH_EXTRQ3                -1
#define AVR32_DMACA_CH_MMCI_RX               2
#define AVR32_DMACA_CH_MMCI_TX               3
#define AVR32_DMACA_CH_MSI_RX                4
#define AVR32_DMACA_CH_MSI_TX                5
#define AVR32_DMACA_DMAC_HS_INT_MSB          8
#define AVR32_DMACA_EXT_DMARQ_MSB            1
#define AVR32_DMACA_MAX_BLK_SIZE             16
#define AVR32_DMACA_NUM_CHANNELS             4

/* Module instance signals: DMACA */
#define AVR32_DMACA_DMAACK_1_PIN             AVR32_PIN_PX18
#define AVR32_DMACA_DMAACK_1_FUNCTION        1
#define AVR32_DMACA_DMAACK_0_0_PIN           AVR32_PIN_PX51
#define AVR32_DMACA_DMAACK_0_0_FUNCTION      1
#define AVR32_DMACA_DMAACK_0_1_PIN           AVR32_PIN_PA30
#define AVR32_DMACA_DMAACK_0_1_FUNCTION      2
#define AVR32_DMACA_DMARQ_1_PIN              AVR32_PIN_PX17
#define AVR32_DMACA_DMARQ_1_FUNCTION         1
#define AVR32_DMACA_DMARQ_0_0_PIN            AVR32_PIN_PX52
#define AVR32_DMACA_DMARQ_0_0_FUNCTION       1
#define AVR32_DMACA_DMARQ_0_1_PIN            AVR32_PIN_PA31
#define AVR32_DMACA_DMARQ_0_1_FUNCTION       2

#include "avr32/dmaca_206a.h"

/* Module: EBI */

/* Module instance interrupt groups: EBI */

/* Module instance interrupts: EBI */

/* Module instance parameters: EBI */
#define AVR32_EBI_CF0_CS                     4
#define AVR32_EBI_CF1_CS                     5
#define AVR32_EBI_HADDR_MSB                  0
#define AVR32_EBI_HBURST_MSB                 0
#define AVR32_EBI_HDATA_MSB                  0
#define AVR32_EBI_HCS_MSB                    5
#define AVR32_EBI_HMATRIX_NR                 6
#define AVR32_EBI_HPROT_MSB                  0
#define AVR32_EBI_HRESP_MSB                  0
#define AVR32_EBI_HSIZE_MSB                  0
#define AVR32_EBI_HTRANS_MSB                 0
#define AVR32_EBI_NAND_CS                    3
#define AVR32_EBI_PADDR_MSB                  0
#define AVR32_EBI_PDATA_MSB                  0
#define AVR32_EBI_SDRAM_CS                   1
#define AVR32_EBI_SMC0_CS                    0
#define AVR32_EBI_SMC1_CS                    1
#define AVR32_EBI_SMC2_CS                    2
#define AVR32_EBI_SMC3_CS                    3
#define AVR32_EBI_SMC4_CS                    4
#define AVR32_EBI_SMC5_CS                    5

/* Module instance signals: EBI */
#define AVR32_EBI_ADDR_19_PIN                AVR32_PIN_PX15
#define AVR32_EBI_ADDR_19_FUNCTION           0
#define AVR32_EBI_ADDR_18_PIN                AVR32_PIN_PX16
#define AVR32_EBI_ADDR_18_FUNCTION           0
#define AVR32_EBI_ADDR_17_PIN                AVR32_PIN_PX17
#define AVR32_EBI_ADDR_17_FUNCTION           0
#define AVR32_EBI_ADDR_16_PIN                AVR32_PIN_PX18
#define AVR32_EBI_ADDR_16_FUNCTION           0
#define AVR32_EBI_ADDR_15_PIN                AVR32_PIN_PX19
#define AVR32_EBI_ADDR_15_FUNCTION           0
#define AVR32_EBI_ADDR_14_PIN                AVR32_PIN_PX20
#define AVR32_EBI_ADDR_14_FUNCTION           0
#define AVR32_EBI_ADDR_13_PIN                AVR32_PIN_PX21
#define AVR32_EBI_ADDR_13_FUNCTION           0
#define AVR32_EBI_ADDR_12_PIN                AVR32_PIN_PX22
#define AVR32_EBI_ADDR_12_FUNCTION           0
#define AVR32_EBI_ADDR_11_PIN                AVR32_PIN_PX23
#define AVR32_EBI_ADDR_11_FUNCTION           0
#define AVR32_EBI_ADDR_10_PIN                AVR32_PIN_PX24
#define AVR32_EBI_ADDR_10_FUNCTION           0
#define AVR32_EBI_ADDR_9_PIN                 AVR32_PIN_PX25
#define AVR32_EBI_ADDR_9_FUNCTION            0
#define AVR32_EBI_ADDR_8_PIN                 AVR32_PIN_PX26
#define AVR32_EBI_ADDR_8_FUNCTION            0
#define AVR32_EBI_ADDR_7_PIN                 AVR32_PIN_PX27
#define AVR32_EBI_ADDR_7_FUNCTION            0
#define AVR32_EBI_ADDR_6_PIN                 AVR32_PIN_PX28
#define AVR32_EBI_ADDR_6_FUNCTION            0
#define AVR32_EBI_ADDR_5_PIN                 AVR32_PIN_PX29
#define AVR32_EBI_ADDR_5_FUNCTION            0
#define AVR32_EBI_ADDR_4_PIN                 AVR32_PIN_PX30
#define AVR32_EBI_ADDR_4_FUNCTION            0
#define AVR32_EBI_ADDR_3_PIN                 AVR32_PIN_PX31
#define AVR32_EBI_ADDR_3_FUNCTION            0
#define AVR32_EBI_ADDR_2_PIN                 AVR32_PIN_PX32
#define AVR32_EBI_ADDR_2_FUNCTION            0
#define AVR32_EBI_ADDR_1_PIN                 AVR32_PIN_PX33
#define AVR32_EBI_ADDR_1_FUNCTION            0
#define AVR32_EBI_ADDR_0_PIN                 AVR32_PIN_PX34
#define AVR32_EBI_ADDR_0_FUNCTION            0
#define AVR32_EBI_ADDR_23_PIN                AVR32_PIN_PX48
#define AVR32_EBI_ADDR_23_FUNCTION           0
#define AVR32_EBI_ADDR_22_PIN                AVR32_PIN_PX55
#define AVR32_EBI_ADDR_22_FUNCTION           0
#define AVR32_EBI_ADDR_21_PIN                AVR32_PIN_PX56
#define AVR32_EBI_ADDR_21_FUNCTION           0
#define AVR32_EBI_ADDR_20_PIN                AVR32_PIN_PX57
#define AVR32_EBI_ADDR_20_FUNCTION           0
#define AVR32_EBI_CAS_0_PIN                  AVR32_PIN_PX41
#define AVR32_EBI_CAS_0_FUNCTION             0
#define AVR32_EBI_CFCE1_0_PIN                AVR32_PIN_PX51
#define AVR32_EBI_CFCE1_0_FUNCTION           0
#define AVR32_EBI_CFCE2_0_PIN                AVR32_PIN_PX50
#define AVR32_EBI_CFCE2_0_FUNCTION           0
#define AVR32_EBI_CFRNW_0_PIN                AVR32_PIN_PX49
#define AVR32_EBI_CFRNW_0_FUNCTION           0
#define AVR32_EBI_DATA_10_PIN                AVR32_PIN_PX00
#define AVR32_EBI_DATA_10_FUNCTION           0
#define AVR32_EBI_DATA_9_PIN                 AVR32_PIN_PX01
#define AVR32_EBI_DATA_9_FUNCTION            0
#define AVR32_EBI_DATA_8_PIN                 AVR32_PIN_PX02
#define AVR32_EBI_DATA_8_FUNCTION            0
#define AVR32_EBI_DATA_7_PIN                 AVR32_PIN_PX03
#define AVR32_EBI_DATA_7_FUNCTION            0
#define AVR32_EBI_DATA_6_PIN                 AVR32_PIN_PX04
#define AVR32_EBI_DATA_6_FUNCTION            0
#define AVR32_EBI_DATA_5_PIN                 AVR32_PIN_PX05
#define AVR32_EBI_DATA_5_FUNCTION            0
#define AVR32_EBI_DATA_4_PIN                 AVR32_PIN_PX06
#define AVR32_EBI_DATA_4_FUNCTION            0
#define AVR32_EBI_DATA_3_PIN                 AVR32_PIN_PX07
#define AVR32_EBI_DATA_3_FUNCTION            0
#define AVR32_EBI_DATA_2_PIN                 AVR32_PIN_PX08
#define AVR32_EBI_DATA_2_FUNCTION            0
#define AVR32_EBI_DATA_1_PIN                 AVR32_PIN_PX09
#define AVR32_EBI_DATA_1_FUNCTION            0
#define AVR32_EBI_DATA_0_PIN                 AVR32_PIN_PX10
#define AVR32_EBI_DATA_0_FUNCTION            0
#define AVR32_EBI_DATA_15_PIN                AVR32_PIN_PX35
#define AVR32_EBI_DATA_15_FUNCTION           0
#define AVR32_EBI_DATA_14_PIN                AVR32_PIN_PX36
#define AVR32_EBI_DATA_14_FUNCTION           0
#define AVR32_EBI_DATA_13_PIN                AVR32_PIN_PX37
#define AVR32_EBI_DATA_13_FUNCTION           0
#define AVR32_EBI_DATA_12_PIN                AVR32_PIN_PX38
#define AVR32_EBI_DATA_12_FUNCTION           0
#define AVR32_EBI_DATA_11_PIN                AVR32_PIN_PX39
#define AVR32_EBI_DATA_11_FUNCTION           0
#define AVR32_EBI_NANDOE_0_PIN               AVR32_PIN_PX47
#define AVR32_EBI_NANDOE_0_FUNCTION          0
#define AVR32_EBI_NANDWE_0_PIN               AVR32_PIN_PX59
#define AVR32_EBI_NANDWE_0_FUNCTION          0
#define AVR32_EBI_NCS_1_PIN                  AVR32_PIN_PX14
#define AVR32_EBI_NCS_1_FUNCTION             0
#define AVR32_EBI_NCS_3_PIN                  AVR32_PIN_PX52
#define AVR32_EBI_NCS_3_FUNCTION             0
#define AVR32_EBI_NCS_2_PIN                  AVR32_PIN_PX53
#define AVR32_EBI_NCS_2_FUNCTION             0
#define AVR32_EBI_NCS_0_PIN                  AVR32_PIN_PX58
#define AVR32_EBI_NCS_0_FUNCTION             0
#define AVR32_EBI_NCS_4_PIN                  AVR32_PIN_PB09
#define AVR32_EBI_NCS_4_FUNCTION             2
#define AVR32_EBI_NCS_5_PIN                  AVR32_PIN_PB10
#define AVR32_EBI_NCS_5_FUNCTION             2
#define AVR32_EBI_NRD_0_PIN                  AVR32_PIN_PX13
#define AVR32_EBI_NRD_0_FUNCTION             0
#define AVR32_EBI_NWAIT_0_PIN                AVR32_PIN_PX54
#define AVR32_EBI_NWAIT_0_FUNCTION           0
#define AVR32_EBI_NWE0_0_PIN                 AVR32_PIN_PX12
#define AVR32_EBI_NWE0_0_FUNCTION            0
#define AVR32_EBI_NWE1_0_PIN                 AVR32_PIN_PX11
#define AVR32_EBI_NWE1_0_FUNCTION            0
#define AVR32_EBI_RAS_0_PIN                  AVR32_PIN_PX42
#define AVR32_EBI_RAS_0_FUNCTION             0
#define AVR32_EBI_SCAN_CLOCK_0_PIN           AVR32_PIN_PX45
#define AVR32_EBI_SDA10_0_PIN                AVR32_PIN_PX43
#define AVR32_EBI_SDA10_0_FUNCTION           0
#define AVR32_EBI_SDCK_0_PIN                 AVR32_PIN_PX45
#define AVR32_EBI_SDCK_0_FUNCTION            0
#define AVR32_EBI_SDCKE_0_PIN                AVR32_PIN_PX46
#define AVR32_EBI_SDCKE_0_FUNCTION           0
#define AVR32_EBI_SDCS_0_PIN                 AVR32_PIN_PX40
#define AVR32_EBI_SDCS_0_FUNCTION            0
#define AVR32_EBI_SDWE_0_PIN                 AVR32_PIN_PX44
#define AVR32_EBI_SDWE_0_FUNCTION            0

/* Module: ECCHRS */

#define AVR32_ECCHRS_ADDRESS                 0xFFFE2400
#define AVR32_ECCHRS                         (*((volatile avr32_ecchrs_t*) AVR32_ECCHRS_ADDRESS))

/* Module instance interrupt groups: ECCHRS */
#define AVR32_ECCHRS_IRQ_GROUP               29

/* Module instance interrupts: ECCHRS */
#define AVR32_RS4_IRQ                        928

/* Module instance parameters: ECCHRS */
#define AVR32_ECCHRS_PADDR_MSB               31
#define AVR32_ECCHRS_PDATA_MSB               31

/* Module instance signals: ECCHRS */

#include "avr32/ecchrs_100.h"

/* Module: EIC */

#define AVR32_EIC_ADDRESS                    0xFFFF0D80
#define AVR32_EIC                            (*((volatile avr32_eic_t*) AVR32_EIC_ADDRESS))

/* Module instance interrupt groups: EIC */
#define AVR32_EIC_IRQ_GROUP                  1

/* Module instance interrupts: EIC */
#define AVR32_EIM_IRQ_0                      32
#define AVR32_EIM_IRQ_1                      33
#define AVR32_EIM_IRQ_2                      34
#define AVR32_EIM_IRQ_3                      35
#define AVR32_EIM_IRQ_4                      36
#define AVR32_EIM_IRQ_5                      37
#define AVR32_EIM_IRQ_6                      38
#define AVR32_EIM_IRQ_7                      39

/* Module instance parameters: EIC */
#define AVR32_EIC_INT_MSB                    8
#define AVR32_EIC_SCAN_MSB                   7
#define AVR32_EIC_STD_NUM                    8

/* Module instance signals: EIC */
#define AVR32_EIC_EXTINT_8_PIN               AVR32_PIN_PA20
#define AVR32_EIC_EXTINT_8_FUNCTION          0
#define AVR32_EIC_EXTINT_4_PIN               AVR32_PIN_PA03
#define AVR32_EIC_EXTINT_4_FUNCTION          1
#define AVR32_EIC_EXTINT_5_PIN               AVR32_PIN_PA04
#define AVR32_EIC_EXTINT_5_FUNCTION          1
#define AVR32_EIC_EXTINT_6_PIN               AVR32_PIN_PA09
#define AVR32_EIC_EXTINT_6_FUNCTION          1
#define AVR32_EIC_EXTINT_0_PIN               AVR32_PIN_PA21
#define AVR32_EIC_EXTINT_0_FUNCTION          1
#define AVR32_EIC_EXTINT_1_PIN               AVR32_PIN_PA22
#define AVR32_EIC_EXTINT_1_FUNCTION          1
#define AVR32_EIC_EXTINT_2_PIN               AVR32_PIN_PA23
#define AVR32_EIC_EXTINT_2_FUNCTION          1
#define AVR32_EIC_EXTINT_3_PIN               AVR32_PIN_PA24
#define AVR32_EIC_EXTINT_3_FUNCTION          1
#define AVR32_EIC_EXTINT_7_PIN               AVR32_PIN_PA13
#define AVR32_EIC_EXTINT_7_FUNCTION          2
#define AVR32_EIC_SCAN_0_0_PIN               AVR32_PIN_PX19
#define AVR32_EIC_SCAN_0_0_FUNCTION          1
#define AVR32_EIC_SCAN_0_1_PIN               AVR32_PIN_PX58
#define AVR32_EIC_SCAN_0_1_FUNCTION          1
#define AVR32_EIC_SCAN_0_2_PIN               AVR32_PIN_PB01
#define AVR32_EIC_SCAN_0_2_FUNCTION          2
#define AVR32_EIC_SCAN_1_0_PIN               AVR32_PIN_PX20
#define AVR32_EIC_SCAN_1_0_FUNCTION          1
#define AVR32_EIC_SCAN_1_1_PIN               AVR32_PIN_PX57
#define AVR32_EIC_SCAN_1_1_FUNCTION          1
#define AVR32_EIC_SCAN_1_2_PIN               AVR32_PIN_PB02
#define AVR32_EIC_SCAN_1_2_FUNCTION          2
#define AVR32_EIC_SCAN_2_0_PIN               AVR32_PIN_PX21
#define AVR32_EIC_SCAN_2_0_FUNCTION          1
#define AVR32_EIC_SCAN_2_1_PIN               AVR32_PIN_PX56
#define AVR32_EIC_SCAN_2_1_FUNCTION          1
#define AVR32_EIC_SCAN_2_2_PIN               AVR32_PIN_PB03
#define AVR32_EIC_SCAN_2_2_FUNCTION          2
#define AVR32_EIC_SCAN_3_0_PIN               AVR32_PIN_PX22
#define AVR32_EIC_SCAN_3_0_FUNCTION          1
#define AVR32_EIC_SCAN_3_1_PIN               AVR32_PIN_PX55
#define AVR32_EIC_SCAN_3_1_FUNCTION          1
#define AVR32_EIC_SCAN_3_2_PIN               AVR32_PIN_PB04
#define AVR32_EIC_SCAN_3_2_FUNCTION          2
#define AVR32_EIC_SCAN_4_0_PIN               AVR32_PIN_PX23
#define AVR32_EIC_SCAN_4_0_FUNCTION          1
#define AVR32_EIC_SCAN_4_1_PIN               AVR32_PIN_PB05
#define AVR32_EIC_SCAN_4_1_FUNCTION          2
#define AVR32_EIC_SCAN_5_0_PIN               AVR32_PIN_PX24
#define AVR32_EIC_SCAN_5_0_FUNCTION          1
#define AVR32_EIC_SCAN_5_1_PIN               AVR32_PIN_PB06
#define AVR32_EIC_SCAN_5_1_FUNCTION          2
#define AVR32_EIC_SCAN_6_0_PIN               AVR32_PIN_PX25
#define AVR32_EIC_SCAN_6_0_FUNCTION          1
#define AVR32_EIC_SCAN_6_1_PIN               AVR32_PIN_PB07
#define AVR32_EIC_SCAN_6_1_FUNCTION          2
#define AVR32_EIC_SCAN_7_0_PIN               AVR32_PIN_PX26
#define AVR32_EIC_SCAN_7_0_FUNCTION          1
#define AVR32_EIC_SCAN_7_1_PIN               AVR32_PIN_PB08
#define AVR32_EIC_SCAN_7_1_FUNCTION          2
#define AVR32_EIC_SCAN_3_0_PIN               AVR32_PIN_PX22
#define AVR32_EIC_SCAN_3_0_FUNCTION          1
#define AVR32_EIC_SCAN_3_1_PIN               AVR32_PIN_PX55
#define AVR32_EIC_SCAN_3_1_FUNCTION          1
#define AVR32_EIC_SCAN_3_2_PIN               AVR32_PIN_PB04
#define AVR32_EIC_SCAN_3_2_FUNCTION          2
#define AVR32_EIC_SCAN_2_0_PIN               AVR32_PIN_PX21
#define AVR32_EIC_SCAN_2_0_FUNCTION          1
#define AVR32_EIC_SCAN_2_1_PIN               AVR32_PIN_PX56
#define AVR32_EIC_SCAN_2_1_FUNCTION          1
#define AVR32_EIC_SCAN_2_2_PIN               AVR32_PIN_PB03
#define AVR32_EIC_SCAN_2_2_FUNCTION          2
#define AVR32_EIC_SCAN_1_0_PIN               AVR32_PIN_PX20
#define AVR32_EIC_SCAN_1_0_FUNCTION          1
#define AVR32_EIC_SCAN_1_1_PIN               AVR32_PIN_PX57
#define AVR32_EIC_SCAN_1_1_FUNCTION          1
#define AVR32_EIC_SCAN_1_2_PIN               AVR32_PIN_PB02
#define AVR32_EIC_SCAN_1_2_FUNCTION          2
#define AVR32_EIC_SCAN_0_0_PIN               AVR32_PIN_PX19
#define AVR32_EIC_SCAN_0_0_FUNCTION          1
#define AVR32_EIC_SCAN_0_1_PIN               AVR32_PIN_PX58
#define AVR32_EIC_SCAN_0_1_FUNCTION          1
#define AVR32_EIC_SCAN_0_2_PIN               AVR32_PIN_PB01
#define AVR32_EIC_SCAN_0_2_FUNCTION          2
#define AVR32_EIC_SCAN_1_0_PIN               AVR32_PIN_PX20
#define AVR32_EIC_SCAN_1_0_FUNCTION          1
#define AVR32_EIC_SCAN_1_1_PIN               AVR32_PIN_PX57
#define AVR32_EIC_SCAN_1_1_FUNCTION          1
#define AVR32_EIC_SCAN_1_2_PIN               AVR32_PIN_PB02
#define AVR32_EIC_SCAN_1_2_FUNCTION          2
#define AVR32_EIC_SCAN_2_0_PIN               AVR32_PIN_PX21
#define AVR32_EIC_SCAN_2_0_FUNCTION          1
#define AVR32_EIC_SCAN_2_1_PIN               AVR32_PIN_PX56
#define AVR32_EIC_SCAN_2_1_FUNCTION          1
#define AVR32_EIC_SCAN_2_2_PIN               AVR32_PIN_PB03
#define AVR32_EIC_SCAN_2_2_FUNCTION          2
#define AVR32_EIC_SCAN_3_0_PIN               AVR32_PIN_PX22
#define AVR32_EIC_SCAN_3_0_FUNCTION          1
#define AVR32_EIC_SCAN_3_1_PIN               AVR32_PIN_PX55
#define AVR32_EIC_SCAN_3_1_FUNCTION          1
#define AVR32_EIC_SCAN_3_2_PIN               AVR32_PIN_PB04
#define AVR32_EIC_SCAN_3_2_FUNCTION          2
#define AVR32_EIC_SCAN_4_0_PIN               AVR32_PIN_PX23
#define AVR32_EIC_SCAN_4_0_FUNCTION          1
#define AVR32_EIC_SCAN_4_1_PIN               AVR32_PIN_PB05
#define AVR32_EIC_SCAN_4_1_FUNCTION          2
#define AVR32_EIC_SCAN_5_0_PIN               AVR32_PIN_PX24
#define AVR32_EIC_SCAN_5_0_FUNCTION          1
#define AVR32_EIC_SCAN_5_1_PIN               AVR32_PIN_PB06
#define AVR32_EIC_SCAN_5_1_FUNCTION          2
#define AVR32_EIC_SCAN_6_0_PIN               AVR32_PIN_PX25
#define AVR32_EIC_SCAN_6_0_FUNCTION          1
#define AVR32_EIC_SCAN_6_1_PIN               AVR32_PIN_PB07
#define AVR32_EIC_SCAN_6_1_FUNCTION          2
#define AVR32_EIC_SCAN_7_0_PIN               AVR32_PIN_PX26
#define AVR32_EIC_SCAN_7_0_FUNCTION          1
#define AVR32_EIC_SCAN_7_1_PIN               AVR32_PIN_PB08
#define AVR32_EIC_SCAN_7_1_FUNCTION          2

#include "avr32/eic_231.h"

/* Module: FLASHC */

#define AVR32_FLASHC_ADDRESS                 0xFFFE1400
#define AVR32_FLASHC                         (*((volatile avr32_flashc_t*) AVR32_FLASHC_ADDRESS))

/* Module instance interrupt groups: FLASHC */
#define AVR32_FLASHC_IRQ_GROUP               4

/* Module instance interrupts: FLASHC */
#define AVR32_HFLASHC_IRQ                    128

/* Module instance parameters: FLASHC */
#define AVR32_FLASHC_CF_NUM                  64
#define AVR32_FLASHC_FLASH_SIZE              262144
#define AVR32_FLASHC_FWS_0_MAX_FREQ          36000000
#define AVR32_FLASHC_FWS_1_MAX_FREQ          72000000
#define AVR32_FLASHC_GPF_NUM                 64
#define AVR32_FLASHC_PAGES_PR_REGION         32
#define AVR32_FLASHC_PAGE_SIZE               512
#define AVR32_FLASHC_USER_PAGE               (*(volatile unsigned char*)) AVR32_FLASHC_USER_PAGE_ADDRESS))
#define AVR32_FLASHC_USER_PAGE_ADDRESS       0x80800000
#define AVR32_FLASHC_USER_PAGE_SIZE          512

/* Module instance signals: FLASHC */
#define AVR32_FLASHC_EXTCLK_0_PIN            AVR32_PIN_PB04
#define AVR32_FLASHC_FLASH_OBS_0_PIN         AVR32_PIN_PA00
#define AVR32_FLASHC_FLASH_OBS_1_PIN         AVR32_PIN_PA01
#define AVR32_FLASHC_FLASH_OBS_2_PIN         AVR32_PIN_PA02
#define AVR32_FLASHC_FLASH_OBS_3_PIN         AVR32_PIN_PA03
#define AVR32_FLASHC_FLASH_OBS_4_PIN         AVR32_PIN_PA04
#define AVR32_FLASHC_FLASH_OBS_5_PIN         AVR32_PIN_PA05
#define AVR32_FLASHC_FLASH_OBS_6_PIN         AVR32_PIN_PA06
#define AVR32_FLASHC_FLASH_OBS_7_PIN         AVR32_PIN_PA07
#define AVR32_FLASHC_FLASH_OBS_8_PIN         AVR32_PIN_PA08
#define AVR32_FLASHC_FLASH_OBS_9_PIN         AVR32_PIN_PA09
#define AVR32_FLASHC_FLASH_OBS_10_PIN        AVR32_PIN_PA10
#define AVR32_FLASHC_FLASH_OBS_11_PIN        AVR32_PIN_PA11
#define AVR32_FLASHC_FLASH_OBS_12_PIN        AVR32_PIN_PA12
#define AVR32_FLASHC_FLASH_OBS_13_PIN        AVR32_PIN_PA13
#define AVR32_FLASHC_FLASH_OBS_14_PIN        AVR32_PIN_PA14
#define AVR32_FLASHC_FLASH_OBS_15_PIN        AVR32_PIN_PA15
#define AVR32_FLASHC_FLASH_OBS_16_PIN        AVR32_PIN_PA16
#define AVR32_FLASHC_FLASH_OBS_17_PIN        AVR32_PIN_PA17
#define AVR32_FLASHC_FLASH_OBS_18_PIN        AVR32_PIN_PB09
#define AVR32_FLASHC_FLASH_OBS_19_PIN        AVR32_PIN_PB10
#define AVR32_FLASHC_FLASH_OBS_20_PIN        AVR32_PIN_PB11
#define AVR32_FLASHC_LATDEL_0_PIN            AVR32_PIN_PB05
#define AVR32_FLASHC_LATDELCLK_0_PIN         AVR32_PIN_PB06

#include "avr32/flashc_210.h"

/* Module: FREQM */

#define AVR32_FREQM_ADDRESS                  0xFFFF0D50
#define AVR32_FREQM                          (*((volatile avr32_freqm_t*) AVR32_FREQM_ADDRESS))

/* Module instance interrupt groups: FREQM */
#define AVR32_FREQM_IRQ_GROUP                1

/* Module instance interrupts: FREQM */
#define AVR32_FREQM_IRQ                      42

/* Module instance parameters: FREQM */
#define AVR32_FREQM_REFSEL_BITS              1

/* Module instance signals: FREQM */

#include "avr32/freqm_231.h"

/* Module: GPIO */

#define AVR32_GPIO_ADDRESS                   0xFFFF1000
#define AVR32_GPIO                           (*((volatile avr32_gpio_t*) AVR32_GPIO_ADDRESS))

/* Module instance interrupt groups: GPIO */
#define AVR32_GPIO_IRQ_GROUP                 2

/* Module instance interrupts: GPIO */
#define AVR32_GPIO_IRQ_0                     64
#define AVR32_GPIO_IRQ_1                     65
#define AVR32_GPIO_IRQ_10                    74
#define AVR32_GPIO_IRQ_11                    75
#define AVR32_GPIO_IRQ_12                    76
#define AVR32_GPIO_IRQ_13                    77
#define AVR32_GPIO_IRQ_2                     66
#define AVR32_GPIO_IRQ_3                     67
#define AVR32_GPIO_IRQ_4                     68
#define AVR32_GPIO_IRQ_5                     69
#define AVR32_GPIO_IRQ_6                     70
#define AVR32_GPIO_IRQ_7                     71
#define AVR32_GPIO_IRQ_8                     72
#define AVR32_GPIO_IRQ_9                     73

/* Module instance parameters: GPIO */
#define AVR32_GPIO_IRQ_MSB                   13
#define AVR32_GPIO_MAX_IRQ_MSB               13
#define AVR32_GPIO_PADDR_BITS                10
#define AVR32_GPIO_PINS_MSB                  111
#define AVR32_GPIO_IRQS_PER_GROUP            8
#define AVR32_GPIO_NUMBER_OF_PINS            112
#define AVR32_GPIO_PADDR_MSB                 9
#define AVR32_GPIO_PDATA_MSB                 31
#define AVR32_GPIO_PORT_LENGTH               4

#include "avr32/gpio_110.h"

/* Module: HMATRIX */

#define AVR32_HMATRIX_ADDRESS                0xFFFE1000
#define AVR32_HMATRIX                        (*((volatile avr32_hmatrix_t*) AVR32_HMATRIX_ADDRESS))

/* Module instance interrupt groups: HMATRIX */

/* Module instance interrupts: HMATRIX */

/* Module instance parameters: HMATRIX */
#define AVR32_HMATRIX_MASTER_CPU_DATA        0
#define AVR32_HMATRIX_MASTER_CPU_INSTRUCTION 1
#define AVR32_HMATRIX_MASTER_CPU_SAB         2
#define AVR32_HMATRIX_MASTER_MACB_DMA        4
#define AVR32_HMATRIX_MASTER_NUM             6
#define AVR32_HMATRIX_MASTER_PDCA            3
#define AVR32_HMATRIX_MASTER_USBB_DMA        5
#define AVR32_HMATRIX_SLAVE_EBI              5
#define AVR32_HMATRIX_SLAVE_FLASH            0
#define AVR32_HMATRIX_SLAVE_NUM              6
#define AVR32_HMATRIX_SLAVE_PBA              1
#define AVR32_HMATRIX_SLAVE_PBB              2
#define AVR32_HMATRIX_SLAVE_SRAM             3
#define AVR32_HMATRIX_SLAVE_USBB_DPRAM       4

/* Module instance signals: HMATRIX */

#include "avr32/hmatrix_230.h"

/* Module: SDRAMC */

#define AVR32_SDRAMC_ADDRESS                 0xFFFE2000
#define AVR32_SDRAMC                         (*((volatile avr32_sdramc_t*) AVR32_SDRAMC_ADDRESS))

/* Module instance interrupt groups: SDRAMC */
#define AVR32_SDRAMC_IRQ_GROUP               18

/* Module instance interrupts: SDRAMC */
#define AVR32_HSDRAMC_IRQ                    576

/* Module instance parameters: SDRAMC */

/* Module instance signals: SDRAMC */

#include "avr32/sdramc_220.h"

/* Module: SMC */

#define AVR32_SMC_ADDRESS                    0xFFFE1C00
#define AVR32_SMC                            (*((volatile avr32_smc_t*) AVR32_SMC_ADDRESS))

/* Module instance interrupt groups: SMC */

/* Module instance interrupts: SMC */

/* Module instance parameters: SMC */

/* Module instance signals: SMC */

#include "avr32/smc_106.h"

/* Module: JTAG */

/* Module instance interrupt groups: JTAG */

/* Module instance interrupts: JTAG */

/* Module instance parameters: JTAG */

/* Module instance signals: JTAG */

/* Module: MCI */

#define AVR32_MCI_ADDRESS                    0xFFFE4000
#define AVR32_MCI                            (*((volatile avr32_mci_t*) AVR32_MCI_ADDRESS))

/* Module instance interrupt groups: MCI */
#define AVR32_MCI_IRQ_GROUP                  20

/* Module instance interrupts: MCI */
#define AVR32_MCI_IRQ                        640

/* Module instance parameters: MCI */
#define AVR32_MCI_MSDCARD                    2

/* Module instance signals: MCI */
#define AVR32_MCI_CLK_0_PIN                  AVR32_PIN_PA27
#define AVR32_MCI_CLK_0_FUNCTION             0
#define AVR32_MCI_CMD_1_0_PIN                AVR32_PIN_PA15
#define AVR32_MCI_CMD_1_0_FUNCTION           0
#define AVR32_MCI_CMD_1_1_PIN                AVR32_PIN_PX59
#define AVR32_MCI_CMD_1_1_FUNCTION           2
#define AVR32_MCI_CMD_0_PIN                  AVR32_PIN_PA28
#define AVR32_MCI_CMD_0_FUNCTION             0
#define AVR32_MCI_CMD_1_0_PIN                AVR32_PIN_PA15
#define AVR32_MCI_CMD_1_0_FUNCTION           0
#define AVR32_MCI_CMD_1_1_PIN                AVR32_PIN_PX59
#define AVR32_MCI_CMD_1_1_FUNCTION           2
#define AVR32_MCI_DATA_11_0_PIN              AVR32_PIN_PA16
#define AVR32_MCI_DATA_11_0_FUNCTION         0
#define AVR32_MCI_DATA_11_1_PIN              AVR32_PIN_PX47
#define AVR32_MCI_DATA_11_1_FUNCTION         2
#define AVR32_MCI_DATA_10_0_PIN              AVR32_PIN_PA17
#define AVR32_MCI_DATA_10_0_FUNCTION         0
#define AVR32_MCI_DATA_10_1_PIN              AVR32_PIN_PX48
#define AVR32_MCI_DATA_10_1_FUNCTION         2
#define AVR32_MCI_DATA_9_0_PIN               AVR32_PIN_PA18
#define AVR32_MCI_DATA_9_0_FUNCTION          0
#define AVR32_MCI_DATA_9_1_PIN               AVR32_PIN_PX49
#define AVR32_MCI_DATA_9_1_FUNCTION          2
#define AVR32_MCI_DATA_8_0_PIN               AVR32_PIN_PA19
#define AVR32_MCI_DATA_8_0_FUNCTION          0
#define AVR32_MCI_DATA_8_1_PIN               AVR32_PIN_PX50
#define AVR32_MCI_DATA_8_1_FUNCTION          2
#define AVR32_MCI_DATA_0_PIN                 AVR32_PIN_PA29
#define AVR32_MCI_DATA_0_FUNCTION            0
#define AVR32_MCI_DATA_1_PIN                 AVR32_PIN_PA30
#define AVR32_MCI_DATA_1_FUNCTION            0
#define AVR32_MCI_DATA_2_PIN                 AVR32_PIN_PA31
#define AVR32_MCI_DATA_2_FUNCTION            0
#define AVR32_MCI_DATA_3_PIN                 AVR32_PIN_PB00
#define AVR32_MCI_DATA_3_FUNCTION            0
#define AVR32_MCI_DATA_4_PIN                 AVR32_PIN_PB01
#define AVR32_MCI_DATA_4_FUNCTION            0
#define AVR32_MCI_DATA_5_PIN                 AVR32_PIN_PB02
#define AVR32_MCI_DATA_5_FUNCTION            0
#define AVR32_MCI_DATA_6_PIN                 AVR32_PIN_PB03
#define AVR32_MCI_DATA_6_FUNCTION            0
#define AVR32_MCI_DATA_7_PIN                 AVR32_PIN_PB04
#define AVR32_MCI_DATA_7_FUNCTION            0
#define AVR32_MCI_DATA_11_0_PIN              AVR32_PIN_PA16
#define AVR32_MCI_DATA_11_0_FUNCTION         0
#define AVR32_MCI_DATA_11_1_PIN              AVR32_PIN_PX47
#define AVR32_MCI_DATA_11_1_FUNCTION         2
#define AVR32_MCI_DATA_10_0_PIN              AVR32_PIN_PA17
#define AVR32_MCI_DATA_10_0_FUNCTION         0
#define AVR32_MCI_DATA_10_1_PIN              AVR32_PIN_PX48
#define AVR32_MCI_DATA_10_1_FUNCTION         2
#define AVR32_MCI_DATA_9_0_PIN               AVR32_PIN_PA18
#define AVR32_MCI_DATA_9_0_FUNCTION          0
#define AVR32_MCI_DATA_9_1_PIN               AVR32_PIN_PX49
#define AVR32_MCI_DATA_9_1_FUNCTION          2
#define AVR32_MCI_DATA_8_0_PIN               AVR32_PIN_PA19
#define AVR32_MCI_DATA_8_0_FUNCTION          0
#define AVR32_MCI_DATA_8_1_PIN               AVR32_PIN_PX50
#define AVR32_MCI_DATA_8_1_FUNCTION          2
#define AVR32_MCI_DATA_15_PIN                AVR32_PIN_PX51
#define AVR32_MCI_DATA_15_FUNCTION           2
#define AVR32_MCI_DATA_14_PIN                AVR32_PIN_PX52
#define AVR32_MCI_DATA_14_FUNCTION           2
#define AVR32_MCI_DATA_13_PIN                AVR32_PIN_PX53
#define AVR32_MCI_DATA_13_FUNCTION           2
#define AVR32_MCI_DATA_12_PIN                AVR32_PIN_PX54
#define AVR32_MCI_DATA_12_FUNCTION           2
#define AVR32_MCI_SCAN_CLOCK_0_PIN           AVR32_PIN_PA27

#include "avr32/mci_303.h"

/* Module: MSI */

#define AVR32_MSI_ADDRESS                    0xFFFE8000
#define AVR32_MSI                            (*((volatile avr32_msi_t*) AVR32_MSI_ADDRESS))

/* Module instance interrupt groups: MSI */
#define AVR32_MSI_IRQ_GROUP                  26

/* Module instance interrupts: MSI */
#define AVR32_MSI_IRQ                        832

/* Module instance parameters: MSI */

/* Module instance signals: MSI */
#define AVR32_MSI_BS_0_PIN                   AVR32_PIN_PA28
#define AVR32_MSI_BS_0_FUNCTION              3
#define AVR32_MSI_DATA_0_PIN                 AVR32_PIN_PA29
#define AVR32_MSI_DATA_0_FUNCTION            3
#define AVR32_MSI_DATA_1_PIN                 AVR32_PIN_PA30
#define AVR32_MSI_DATA_1_FUNCTION            3
#define AVR32_MSI_DATA_2_PIN                 AVR32_PIN_PA31
#define AVR32_MSI_DATA_2_FUNCTION            3
#define AVR32_MSI_DATA_3_PIN                 AVR32_PIN_PB00
#define AVR32_MSI_DATA_3_FUNCTION            3
#define AVR32_MSI_INS_0_PIN                  AVR32_PIN_PB01
#define AVR32_MSI_INS_0_FUNCTION             3
#define AVR32_MSI_SCLK_0_PIN                 AVR32_PIN_PA27
#define AVR32_MSI_SCLK_0_FUNCTION            3

#include "avr32/msi_210.h"

/* Module: PDCA */

#define AVR32_PDCA_ADDRESS                   0xFFFF0000
#define AVR32_PDCA                           (*((volatile avr32_pdca_t*) AVR32_PDCA_ADDRESS))

/* Module instance interrupt groups: PDCA */
#define AVR32_PDCA_IRQ_GROUP                 3

/* Module instance interrupts: PDCA */
#define AVR32_PDMA_IRQ_0                     96
#define AVR32_PDMA_IRQ_1                     97
#define AVR32_PDMA_IRQ_2                     98
#define AVR32_PDMA_IRQ_3                     99
#define AVR32_PDMA_IRQ_4                     100
#define AVR32_PDMA_IRQ_5                     101
#define AVR32_PDMA_IRQ_6                     102
#define AVR32_PDMA_IRQ_7                     103

/* Module instance parameters: PDCA */
#define AVR32_PDCA_CHANNEL_LENGTH            8
#define AVR32_PDCA_HADDR_MSB                 31
#define AVR32_PDCA_HDATA_MSB                 31
#define AVR32_PDCA_PADDR_MSB                 31
#define AVR32_PDCA_PDATA_MSB                 31
#define AVR32_PDCA_CHANNELS_MSB              7
#define AVR32_PDCA_PID_ADC_RX                0
#define AVR32_PDCA_PID_DAC_TX                23
#define AVR32_PDCA_PID_MCI_RX                -1
#define AVR32_PDCA_PID_SPI0_RX               10
#define AVR32_PDCA_PID_SPI0_TX               21
#define AVR32_PDCA_PID_SPI1_RX               11
#define AVR32_PDCA_PID_SPI1_TX               22
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
#define AVR32_PDCA_PID_SSC_TX                12
#define AVR32_PDCA_PID_TSADCC_RX             -1
#define AVR32_PDCA_PID_TWI0_RX               -1
#define AVR32_PDCA_PID_TWI0_TX               -1
#define AVR32_PDCA_PID_TWI1_RX               -1
#define AVR32_PDCA_PID_TWI1_TX               -1
#define AVR32_PDCA_PID_TWIM0_RX              6
#define AVR32_PDCA_PID_TWIM0_TX              17
#define AVR32_PDCA_PID_TWIM1_RX              7
#define AVR32_PDCA_PID_TWIM1_TX              18
#define AVR32_PDCA_PID_TWIS0_RX              8
#define AVR32_PDCA_PID_TWIS0_TX              19
#define AVR32_PDCA_PID_TWIS1_RX              9
#define AVR32_PDCA_PID_TWIS1_TX              20
#define AVR32_PDCA_PID_TWI_RX                -1
#define AVR32_PDCA_PID_TWI_TX                -1
#define AVR32_PDCA_PID_USART0_RX             2
#define AVR32_PDCA_PID_USART0_TX             13
#define AVR32_PDCA_PID_USART1_RX             3
#define AVR32_PDCA_PID_USART1_TX             14
#define AVR32_PDCA_PID_USART2_RX             4
#define AVR32_PDCA_PID_USART2_TX             15
#define AVR32_PDCA_PID_USART3_RX             5
#define AVR32_PDCA_PID_USART3_TX             16
#define AVR32_PDCA_PID_USART4_RX             -1
#define AVR32_PDCA_PID_USART4_TX             -1
#define AVR32_PDCA_PID_USART5_RX             -1
#define AVR32_PDCA_PID_USART5_TX             -1

/* Module instance signals: PDCA */

#include "avr32/pdca_110.h"

/* Module: PLL */

/* Module instance: PLL0 */
/* Module instance interrupt groups: PLL0 */

/* Module instance interrupts: PLL0 */

/* Module instance parameters: PLL0 */

/* Module instance signals: PLL0 */
#define AVR32_PLL0_DN_0_PIN                  AVR32_PIN_PA06
#define AVR32_PLL0_FDIV_0_PIN                AVR32_PIN_PB06
#define AVR32_PLL0_LOCK_0_PIN                AVR32_PIN_PA01
#define AVR32_PLL0_PLLCLK_0_PIN              AVR32_PIN_PA00
#define AVR32_PLL0_UP_0_PIN                  AVR32_PIN_PB05

/* Module instance: PLL1 */
/* Module instance interrupt groups: PLL1 */

/* Module instance interrupts: PLL1 */

/* Module instance parameters: PLL1 */

/* Module instance signals: PLL1 */
#define AVR32_PLL1_DN_0_PIN                  AVR32_PIN_PB09
#define AVR32_PLL1_FDIV_0_PIN                AVR32_PIN_PA05
#define AVR32_PLL1_LOCK_0_PIN                AVR32_PIN_PA03
#define AVR32_PLL1_PLLCLK_0_PIN              AVR32_PIN_PA02
#define AVR32_PLL1_UP_0_PIN                  AVR32_PIN_PB10

/* Module: PM */

#define AVR32_PM_ADDRESS                     0xFFFF0C00
#define AVR32_PM                             (*((volatile avr32_pm_t*) AVR32_PM_ADDRESS))

/* Module instance interrupt groups: PM */
#define AVR32_PM_IRQ_GROUP                   1

/* Module instance interrupts: PM */
#define AVR32_PM_IRQ                         41

/* Module instance parameters: PM */
#define AVR32_PM_CPU_MAX_FREQ                72000000
#define AVR32_PM_GCLK_MSB                    3
#define AVR32_PM_GCLK_NUM                    9
#define AVR32_PM_GCLK_USBB                   4
#define AVR32_PM_GPLP_NUM                    8
#define AVR32_PM_HSB_MAX_FREQ                72000000
#define AVR32_PM_PBA_MAX_FREQ                72000000
#define AVR32_PM_PBB_MAX_FREQ                72000000
#define AVR32_PM_PLL_VCO_RANGE0_MAX_FREQ     240000000
#define AVR32_PM_PLL_VCO_RANGE0_MIN_FREQ     160000000
#define AVR32_PM_PLL_VCO_RANGE1_MAX_FREQ     180000000
#define AVR32_PM_PLL_VCO_RANGE1_MIN_FREQ     80000000
#define AVR32_PM_RCOSC_CALIBRATION_BITS      10
#define AVR32_PM_RCOSC_FREQUENCY             115200

/* Module instance signals: PM */
#define AVR32_PM_GCLK_1_0_PIN                AVR32_PIN_PB11
#define AVR32_PM_GCLK_1_0_FUNCTION           2
#define AVR32_PM_GCLK_1_1_PIN                AVR32_PIN_PX35
#define AVR32_PM_GCLK_1_1_FUNCTION           2
#define AVR32_PM_GCLK_0_0_PIN                AVR32_PIN_PB12
#define AVR32_PM_GCLK_0_0_FUNCTION           2
#define AVR32_PM_GCLK_0_1_PIN                AVR32_PIN_PX02
#define AVR32_PM_GCLK_0_1_FUNCTION           2
#define AVR32_PM_GCLK_0_2_PIN                AVR32_PIN_PX34
#define AVR32_PM_GCLK_0_2_FUNCTION           2
#define AVR32_PM_GCLK_1_0_PIN                AVR32_PIN_PB11
#define AVR32_PM_GCLK_1_0_FUNCTION           2
#define AVR32_PM_GCLK_1_1_PIN                AVR32_PIN_PX35
#define AVR32_PM_GCLK_1_1_FUNCTION           2
#define AVR32_PM_GCLK_2_PIN                  AVR32_PIN_PX36
#define AVR32_PM_GCLK_2_FUNCTION             2
#define AVR32_PM_GCLK_3_PIN                  AVR32_PIN_PX37
#define AVR32_PM_GCLK_3_FUNCTION             2
#define AVR32_PM_RSTM_N_0_PIN                AVR32_PIN_PX46
#define AVR32_PM_XIN0_0_PIN                  AVR32_PIN_PC02
#define AVR32_PM_XIN1_0_PIN                  AVR32_PIN_PC04
#define AVR32_PM_XIN32_0_PIN                 AVR32_PIN_PC00
#define AVR32_PM_XOUT0_0_PIN                 AVR32_PIN_PC03
#define AVR32_PM_XOUT1_0_PIN                 AVR32_PIN_PC05
#define AVR32_PM_XOUT32_0_PIN                AVR32_PIN_PC01

#include "avr32/pm_231.h"

/* Module: RTC */

#define AVR32_RTC_ADDRESS                    0xFFFF0D00
#define AVR32_RTC                            (*((volatile avr32_rtc_t*) AVR32_RTC_ADDRESS))

/* Module instance interrupt groups: RTC */
#define AVR32_RTC_IRQ_GROUP                  1

/* Module instance interrupts: RTC */
#define AVR32_RTC_IRQ                        40

/* Module instance parameters: RTC */

/* Module instance signals: RTC */

#include "avr32/rtc_231.h"

/* Module: SPI */

/* Module instance: SPI0 */
#define AVR32_SPI0_ADDRESS                   0xFFFF2400
#define AVR32_SPI0                           (*((volatile avr32_spi_t*) AVR32_SPI0_ADDRESS))

/* Module instance interrupt groups: SPI0 */
#define AVR32_SPI0_IRQ_GROUP                 9

/* Module instance interrupts: SPI0 */
#define AVR32_SPI0_IRQ                       288

/* Module instance parameters: SPI0 */
#define AVR32_SPI0_PDCA_ID_RX                11
#define AVR32_SPI0_PDCA_ID_TX                22
#define AVR32_SPI0_SPI_CS_MSB                3

/* Module instance signals: SPI0 */
#define AVR32_SPI0_MISO_0_0_PIN              AVR32_PIN_PA11
#define AVR32_SPI0_MISO_0_0_FUNCTION         0
#define AVR32_SPI0_MISO_0_1_PIN              AVR32_PIN_PX27
#define AVR32_SPI0_MISO_0_1_FUNCTION         1
#define AVR32_SPI0_MOSI_0_0_PIN              AVR32_PIN_PA10
#define AVR32_SPI0_MOSI_0_0_FUNCTION         0
#define AVR32_SPI0_MOSI_0_1_PIN              AVR32_PIN_PX28
#define AVR32_SPI0_MOSI_0_1_FUNCTION         1
#define AVR32_SPI0_NPCS_3_0_PIN              AVR32_PIN_PA07
#define AVR32_SPI0_NPCS_3_0_FUNCTION         0
#define AVR32_SPI0_NPCS_3_1_PIN              AVR32_PIN_PX33
#define AVR32_SPI0_NPCS_3_1_FUNCTION         1
#define AVR32_SPI0_NPCS_0_0_PIN              AVR32_PIN_PA09
#define AVR32_SPI0_NPCS_0_0_FUNCTION         0
#define AVR32_SPI0_NPCS_0_1_PIN              AVR32_PIN_PX30
#define AVR32_SPI0_NPCS_0_1_FUNCTION         1
#define AVR32_SPI0_NPCS_0_2_PIN              AVR32_PIN_PA02
#define AVR32_SPI0_NPCS_0_2_FUNCTION         2
#define AVR32_SPI0_NPCS_1_0_PIN              AVR32_PIN_PA14
#define AVR32_SPI0_NPCS_1_0_FUNCTION         0
#define AVR32_SPI0_NPCS_1_1_PIN              AVR32_PIN_PA13
#define AVR32_SPI0_NPCS_1_1_FUNCTION         1
#define AVR32_SPI0_NPCS_1_2_PIN              AVR32_PIN_PX31
#define AVR32_SPI0_NPCS_1_2_FUNCTION         1
#define AVR32_SPI0_NPCS_2_0_PIN              AVR32_PIN_PA12
#define AVR32_SPI0_NPCS_2_0_FUNCTION         1
#define AVR32_SPI0_NPCS_2_1_PIN              AVR32_PIN_PX32
#define AVR32_SPI0_NPCS_2_1_FUNCTION         1
#define AVR32_SPI0_NPCS_1_0_PIN              AVR32_PIN_PA14
#define AVR32_SPI0_NPCS_1_0_FUNCTION         0
#define AVR32_SPI0_NPCS_1_1_PIN              AVR32_PIN_PA13
#define AVR32_SPI0_NPCS_1_1_FUNCTION         1
#define AVR32_SPI0_NPCS_1_2_PIN              AVR32_PIN_PX31
#define AVR32_SPI0_NPCS_1_2_FUNCTION         1
#define AVR32_SPI0_NPCS_0_0_PIN              AVR32_PIN_PA09
#define AVR32_SPI0_NPCS_0_0_FUNCTION         0
#define AVR32_SPI0_NPCS_0_1_PIN              AVR32_PIN_PX30
#define AVR32_SPI0_NPCS_0_1_FUNCTION         1
#define AVR32_SPI0_NPCS_0_2_PIN              AVR32_PIN_PA02
#define AVR32_SPI0_NPCS_0_2_FUNCTION         2
#define AVR32_SPI0_NPCS_1_0_PIN              AVR32_PIN_PA14
#define AVR32_SPI0_NPCS_1_0_FUNCTION         0
#define AVR32_SPI0_NPCS_1_1_PIN              AVR32_PIN_PA13
#define AVR32_SPI0_NPCS_1_1_FUNCTION         1
#define AVR32_SPI0_NPCS_1_2_PIN              AVR32_PIN_PX31
#define AVR32_SPI0_NPCS_1_2_FUNCTION         1
#define AVR32_SPI0_NPCS_2_0_PIN              AVR32_PIN_PA12
#define AVR32_SPI0_NPCS_2_0_FUNCTION         1
#define AVR32_SPI0_NPCS_2_1_PIN              AVR32_PIN_PX32
#define AVR32_SPI0_NPCS_2_1_FUNCTION         1
#define AVR32_SPI0_NPCS_3_0_PIN              AVR32_PIN_PA07
#define AVR32_SPI0_NPCS_3_0_FUNCTION         0
#define AVR32_SPI0_NPCS_3_1_PIN              AVR32_PIN_PX33
#define AVR32_SPI0_NPCS_3_1_FUNCTION         1
#define AVR32_SPI0_NPCS_0_0_PIN              AVR32_PIN_PA09
#define AVR32_SPI0_NPCS_0_0_FUNCTION         0
#define AVR32_SPI0_NPCS_0_1_PIN              AVR32_PIN_PX30
#define AVR32_SPI0_NPCS_0_1_FUNCTION         1
#define AVR32_SPI0_NPCS_0_2_PIN              AVR32_PIN_PA02
#define AVR32_SPI0_NPCS_0_2_FUNCTION         2
#define AVR32_SPI0_SCAN_CLOCK_0_PIN          AVR32_PIN_PA08
#define AVR32_SPI0_SCK_0_0_PIN               AVR32_PIN_PA08
#define AVR32_SPI0_SCK_0_0_FUNCTION          0
#define AVR32_SPI0_SCK_0_1_PIN               AVR32_PIN_PX29
#define AVR32_SPI0_SCK_0_1_FUNCTION          1

/* Module instance: SPI1 */
#define AVR32_SPI1_ADDRESS                   0xFFFF2800
#define AVR32_SPI1                           (*((volatile avr32_spi_t*) AVR32_SPI1_ADDRESS))

/* Module instance interrupt groups: SPI1 */
#define AVR32_SPI1_IRQ_GROUP                 10

/* Module instance interrupts: SPI1 */
#define AVR32_SPI1_IRQ                       320

/* Module instance parameters: SPI1 */
#define AVR32_SPI1_PDCA_ID_RX                11
#define AVR32_SPI1_PDCA_ID_TX                22
#define AVR32_SPI1_SPI_CS_MSB                3

/* Module instance signals: SPI1 */
#define AVR32_SPI1_MISO_0_0_PIN              AVR32_PIN_PB08
#define AVR32_SPI1_MISO_0_0_FUNCTION         0
#define AVR32_SPI1_MISO_0_1_PIN              AVR32_PIN_PA19
#define AVR32_SPI1_MISO_0_1_FUNCTION         1
#define AVR32_SPI1_MISO_0_2_PIN              AVR32_PIN_PX34
#define AVR32_SPI1_MISO_0_2_FUNCTION         1
#define AVR32_SPI1_MOSI_0_0_PIN              AVR32_PIN_PB10
#define AVR32_SPI1_MOSI_0_0_FUNCTION         0
#define AVR32_SPI1_MOSI_0_1_PIN              AVR32_PIN_PA16
#define AVR32_SPI1_MOSI_0_1_FUNCTION         1
#define AVR32_SPI1_MOSI_0_2_PIN              AVR32_PIN_PX35
#define AVR32_SPI1_MOSI_0_2_FUNCTION         1
#define AVR32_SPI1_NPCS_0_0_PIN              AVR32_PIN_PB09
#define AVR32_SPI1_NPCS_0_0_FUNCTION         0
#define AVR32_SPI1_NPCS_0_1_PIN              AVR32_PIN_PX37
#define AVR32_SPI1_NPCS_0_1_FUNCTION         1
#define AVR32_SPI1_NPCS_1_0_PIN              AVR32_PIN_PA17
#define AVR32_SPI1_NPCS_1_0_FUNCTION         1
#define AVR32_SPI1_NPCS_1_1_PIN              AVR32_PIN_PX38
#define AVR32_SPI1_NPCS_1_1_FUNCTION         1
#define AVR32_SPI1_NPCS_2_0_PIN              AVR32_PIN_PA18
#define AVR32_SPI1_NPCS_2_0_FUNCTION         1
#define AVR32_SPI1_NPCS_2_1_PIN              AVR32_PIN_PX39
#define AVR32_SPI1_NPCS_2_1_FUNCTION         1
#define AVR32_SPI1_NPCS_0_0_PIN              AVR32_PIN_PB09
#define AVR32_SPI1_NPCS_0_0_FUNCTION         0
#define AVR32_SPI1_NPCS_0_1_PIN              AVR32_PIN_PX37
#define AVR32_SPI1_NPCS_0_1_FUNCTION         1
#define AVR32_SPI1_NPCS_1_0_PIN              AVR32_PIN_PA17
#define AVR32_SPI1_NPCS_1_0_FUNCTION         1
#define AVR32_SPI1_NPCS_1_1_PIN              AVR32_PIN_PX38
#define AVR32_SPI1_NPCS_1_1_FUNCTION         1
#define AVR32_SPI1_NPCS_2_0_PIN              AVR32_PIN_PA18
#define AVR32_SPI1_NPCS_2_0_FUNCTION         1
#define AVR32_SPI1_NPCS_2_1_PIN              AVR32_PIN_PX39
#define AVR32_SPI1_NPCS_2_1_FUNCTION         1
#define AVR32_SPI1_NPCS_3_PIN                AVR32_PIN_PA00
#define AVR32_SPI1_NPCS_3_FUNCTION           2
#define AVR32_SPI1_SCAN_CLOCK_0_PIN          AVR32_PIN_PB07
#define AVR32_SPI1_SCK_0_0_PIN               AVR32_PIN_PB07
#define AVR32_SPI1_SCK_0_0_FUNCTION          0
#define AVR32_SPI1_SCK_0_1_PIN               AVR32_PIN_PA15
#define AVR32_SPI1_SCK_0_1_FUNCTION          1
#define AVR32_SPI1_SCK_0_2_PIN               AVR32_PIN_PX36
#define AVR32_SPI1_SCK_0_2_FUNCTION          1

#include "avr32/spi_210.h"

/* Module: SSC */

#define AVR32_SSC_ADDRESS                    0xFFFF3400
#define AVR32_SSC                            (*((volatile avr32_ssc_t*) AVR32_SSC_ADDRESS))

/* Module instance interrupt groups: SSC */
#define AVR32_SSC_IRQ_GROUP                  13

/* Module instance interrupts: SSC */
#define AVR32_SSC_IRQ                        416

/* Module instance parameters: SSC */
#define AVR32_SSC_PDCA_ID_RX                 2
#define AVR32_SSC_PDCA_ID_TX                 13

/* Module instance signals: SSC */
#define AVR32_SSC_RX_CLOCK_0_0_PIN           AVR32_PIN_PA28
#define AVR32_SSC_RX_CLOCK_0_0_FUNCTION      1
#define AVR32_SSC_RX_CLOCK_0_1_PIN           AVR32_PIN_PX28
#define AVR32_SSC_RX_CLOCK_0_1_FUNCTION      2
#define AVR32_SSC_RX_DATA_0_0_PIN            AVR32_PIN_PA27
#define AVR32_SSC_RX_DATA_0_0_FUNCTION       1
#define AVR32_SSC_RX_DATA_0_1_PIN            AVR32_PIN_PB09
#define AVR32_SSC_RX_DATA_0_1_FUNCTION       1
#define AVR32_SSC_RX_DATA_0_2_PIN            AVR32_PIN_PX25
#define AVR32_SSC_RX_DATA_0_2_FUNCTION       2
#define AVR32_SSC_RX_FRAME_SYNC_0_0_PIN      AVR32_PIN_PA20
#define AVR32_SSC_RX_FRAME_SYNC_0_0_FUNCTION 1
#define AVR32_SSC_RX_FRAME_SYNC_0_1_PIN      AVR32_PIN_PB10
#define AVR32_SSC_RX_FRAME_SYNC_0_1_FUNCTION 1
#define AVR32_SSC_RX_FRAME_SYNC_0_2_PIN      AVR32_PIN_PX26
#define AVR32_SSC_RX_FRAME_SYNC_0_2_FUNCTION 2
#define AVR32_SSC_TX_CLOCK_0_0_PIN           AVR32_PIN_PB07
#define AVR32_SSC_TX_CLOCK_0_0_FUNCTION      1
#define AVR32_SSC_TX_CLOCK_0_1_PIN           AVR32_PIN_PX23
#define AVR32_SSC_TX_CLOCK_0_1_FUNCTION      2
#define AVR32_SSC_TX_DATA_0_0_PIN            AVR32_PIN_PB08
#define AVR32_SSC_TX_DATA_0_0_FUNCTION       1
#define AVR32_SSC_TX_DATA_0_1_PIN            AVR32_PIN_PX24
#define AVR32_SSC_TX_DATA_0_1_FUNCTION       2
#define AVR32_SSC_TX_FRAME_SYNC_0_0_PIN      AVR32_PIN_PB11
#define AVR32_SSC_TX_FRAME_SYNC_0_0_FUNCTION 1
#define AVR32_SSC_TX_FRAME_SYNC_0_1_PIN      AVR32_PIN_PX27
#define AVR32_SSC_TX_FRAME_SYNC_0_1_FUNCTION 2

#include "avr32/ssc_320.h"

/* Module: TC */

/* Module instance: TC0 */
#define AVR32_TC0_ADDRESS                    0xFFFF3800
#define AVR32_TC0                            (*((volatile avr32_tc_t*) AVR32_TC0_ADDRESS))

/* Module instance interrupt groups: TC0 */
#define AVR32_TC0_IRQ_GROUP                  14

/* Module instance interrupts: TC0 */
#define AVR32_TC0_IRQ0                       448
#define AVR32_TC0_IRQ1                       449
#define AVR32_TC0_IRQ2                       450

/* Module instance parameters: TC0 */

/* Module instance signals: TC0 */
#define AVR32_TC0_A0_0_0_PIN                 AVR32_PIN_PB05
#define AVR32_TC0_A0_0_0_FUNCTION            1
#define AVR32_TC0_A0_0_1_PIN                 AVR32_PIN_PX14
#define AVR32_TC0_A0_0_1_FUNCTION            2
#define AVR32_TC0_A1_0_0_PIN                 AVR32_PIN_PA01
#define AVR32_TC0_A1_0_0_FUNCTION            1
#define AVR32_TC0_A1_0_1_PIN                 AVR32_PIN_PX16
#define AVR32_TC0_A1_0_1_FUNCTION            2
#define AVR32_TC0_A2_0_PIN                   AVR32_PIN_PX18
#define AVR32_TC0_A2_0_FUNCTION              2
#define AVR32_TC0_B0_0_0_PIN                 AVR32_PIN_PB06
#define AVR32_TC0_B0_0_0_FUNCTION            1
#define AVR32_TC0_B0_0_1_PIN                 AVR32_PIN_PX15
#define AVR32_TC0_B0_0_1_FUNCTION            2
#define AVR32_TC0_B1_0_0_PIN                 AVR32_PIN_PA02
#define AVR32_TC0_B1_0_0_FUNCTION            1
#define AVR32_TC0_B1_0_1_PIN                 AVR32_PIN_PX17
#define AVR32_TC0_B1_0_1_FUNCTION            2
#define AVR32_TC0_B2_0_PIN                   AVR32_PIN_PX19
#define AVR32_TC0_B2_0_FUNCTION              2
#define AVR32_TC0_CLK0_0_0_PIN               AVR32_PIN_PA29
#define AVR32_TC0_CLK0_0_0_FUNCTION          2
#define AVR32_TC0_CLK0_0_1_PIN               AVR32_PIN_PX20
#define AVR32_TC0_CLK0_0_1_FUNCTION          2
#define AVR32_TC0_CLK1_0_0_PIN               AVR32_PIN_PA00
#define AVR32_TC0_CLK1_0_0_FUNCTION          1
#define AVR32_TC0_CLK1_0_1_PIN               AVR32_PIN_PX21
#define AVR32_TC0_CLK1_0_1_FUNCTION          2
#define AVR32_TC0_CLK2_0_PIN                 AVR32_PIN_PX22
#define AVR32_TC0_CLK2_0_FUNCTION            2

/* Module instance: TC1 */
#define AVR32_TC1_ADDRESS                    0xFFFF4400
#define AVR32_TC1                            (*((volatile avr32_tc_t*) AVR32_TC1_ADDRESS))

/* Module instance interrupt groups: TC1 */
#define AVR32_TC1_IRQ_GROUP                  16

/* Module instance interrupts: TC1 */
#define AVR32_TC1_IRQ0                       512
#define AVR32_TC1_IRQ1                       513
#define AVR32_TC1_IRQ2                       514

/* Module instance parameters: TC1 */

/* Module instance signals: TC1 */
#define AVR32_TC1_A0_0_PIN                   AVR32_PIN_PA12
#define AVR32_TC1_A0_0_FUNCTION              2
#define AVR32_TC1_A1_0_PIN                   AVR32_PIN_PA09
#define AVR32_TC1_A1_0_FUNCTION              2
#define AVR32_TC1_A2_0_PIN                   AVR32_PIN_PA11
#define AVR32_TC1_A2_0_FUNCTION              2
#define AVR32_TC1_B0_0_PIN                   AVR32_PIN_PA10
#define AVR32_TC1_B0_0_FUNCTION              2
#define AVR32_TC1_B1_0_PIN                   AVR32_PIN_PA08
#define AVR32_TC1_B1_0_FUNCTION              2
#define AVR32_TC1_B2_0_PIN                   AVR32_PIN_PX50
#define AVR32_TC1_B2_0_FUNCTION              1
#define AVR32_TC1_CLK0_0_PIN                 AVR32_PIN_PA05
#define AVR32_TC1_CLK0_0_FUNCTION            1
#define AVR32_TC1_CLK1_0_PIN                 AVR32_PIN_PA06
#define AVR32_TC1_CLK1_0_FUNCTION            1
#define AVR32_TC1_CLK2_0_PIN                 AVR32_PIN_PA16
#define AVR32_TC1_CLK2_0_FUNCTION            2

#include "avr32/tc_223.h"

/* Module: TWIM */

/* Module instance: TWIM0 */
#define AVR32_TWIM0_ADDRESS                  0xFFFF2C00
#define AVR32_TWIM0                          (*((volatile avr32_twim_t*) AVR32_TWIM0_ADDRESS))

/* Module instance interrupt groups: TWIM0 */
#define AVR32_TWIM0_IRQ_GROUP                11

/* Module instance interrupts: TWIM0 */
#define AVR32_TWIM0_IRQ                      352

/* Module instance parameters: TWIM0 */
#define AVR32_TWIM0_PDCA_ID_RX               7
#define AVR32_TWIM0_PDCA_ID_TX               18

/* Module instance signals: TWIM0 */

/* Module instance: TWIM1 */
#define AVR32_TWIM1_ADDRESS                  0xFFFF3000
#define AVR32_TWIM1                          (*((volatile avr32_twim_t*) AVR32_TWIM1_ADDRESS))

/* Module instance interrupt groups: TWIM1 */
#define AVR32_TWIM1_IRQ_GROUP                12

/* Module instance interrupts: TWIM1 */
#define AVR32_TWIM1_IRQ                      384

/* Module instance parameters: TWIM1 */
#define AVR32_TWIM1_PDCA_ID_RX               7
#define AVR32_TWIM1_PDCA_ID_TX               18

/* Module instance signals: TWIM1 */

#include "avr32/twim_100.h"

/* Module: TWIMS */

/* Module instance: TWIMS0 */
/* Module instance interrupt groups: TWIMS0 */

/* Module instance interrupts: TWIMS0 */

/* Module instance parameters: TWIMS0 */

/* Module instance signals: TWIMS0 */
#define AVR32_TWIMS0_TWALM_0_PIN             AVR32_PIN_PA14
#define AVR32_TWIMS0_TWALM_0_FUNCTION        1
#define AVR32_TWIMS0_TWCK_0_0_PIN            AVR32_PIN_PA26
#define AVR32_TWIMS0_TWCK_0_0_FUNCTION       0
#define AVR32_TWIMS0_TWCK_0_1_PIN            AVR32_PIN_PA26
#define AVR32_TWIMS0_TWD_0_0_PIN             AVR32_PIN_PA25
#define AVR32_TWIMS0_TWD_0_0_FUNCTION        0
#define AVR32_TWIMS0_TWD_0_1_PIN             AVR32_PIN_PA25

/* Module instance: TWIMS1 */
/* Module instance interrupt groups: TWIMS1 */

/* Module instance interrupts: TWIMS1 */

/* Module instance parameters: TWIMS1 */

/* Module instance signals: TWIMS1 */
#define AVR32_TWIMS1_TWALM_0_PIN             AVR32_PIN_PA25
#define AVR32_TWIMS1_TWALM_0_FUNCTION        1
#define AVR32_TWIMS1_TWCK_0_PIN              AVR32_PIN_PA14
#define AVR32_TWIMS1_TWCK_0_FUNCTION         2
#define AVR32_TWIMS1_TWD_0_PIN               AVR32_PIN_PA15
#define AVR32_TWIMS1_TWD_0_FUNCTION          2

/* Module: TWIS */

/* Module instance: TWIS0 */
#define AVR32_TWIS0_ADDRESS                  0xFFFF5000
#define AVR32_TWIS0                          (*((volatile avr32_twis_t*) AVR32_TWIS0_ADDRESS))

/* Module instance interrupt groups: TWIS0 */
#define AVR32_TWIS0_IRQ_GROUP                27

/* Module instance interrupts: TWIS0 */
#define AVR32_TWIS0_IRQ                      864

/* Module instance parameters: TWIS0 */
#define AVR32_TWIS0_PDCA_ID_RX               9
#define AVR32_TWIS0_PDCA_ID_TX               20

/* Module instance signals: TWIS0 */

/* Module instance: TWIS1 */
#define AVR32_TWIS1_ADDRESS                  0xFFFF5400
#define AVR32_TWIS1                          (*((volatile avr32_twis_t*) AVR32_TWIS1_ADDRESS))

/* Module instance interrupt groups: TWIS1 */
#define AVR32_TWIS1_IRQ_GROUP                28

/* Module instance interrupts: TWIS1 */
#define AVR32_TWIS1_IRQ                      896

/* Module instance parameters: TWIS1 */
#define AVR32_TWIS1_PDCA_ID_RX               9
#define AVR32_TWIS1_PDCA_ID_TX               20

/* Module instance signals: TWIS1 */

#include "avr32/twis_100.h"

/* Module: USART */

/* Module instance: USART0 */
#define AVR32_USART0_ADDRESS                 0xFFFF1400
#define AVR32_USART0                         (*((volatile avr32_usart_t*) AVR32_USART0_ADDRESS))

/* Module instance interrupt groups: USART0 */
#define AVR32_USART0_IRQ_GROUP               5

/* Module instance interrupts: USART0 */
#define AVR32_USART0_IRQ                     160

/* Module instance parameters: USART0 */
#define AVR32_USART0_PADDR_MSB               12
#define AVR32_USART0_PDATA_MSB               31
#define AVR32_USART0_PDCA_ID_RX              3
#define AVR32_USART0_PDCA_ID_TX              14

/* Module instance signals: USART0 */
#define AVR32_USART0_CLK_0_PIN               AVR32_PIN_PA02
#define AVR32_USART0_CLK_0_FUNCTION          0
#define AVR32_USART0_CTS_0_0_PIN             AVR32_PIN_PA01
#define AVR32_USART0_CTS_0_0_FUNCTION        0
#define AVR32_USART0_CTS_0_1_PIN             AVR32_PIN_PX02
#define AVR32_USART0_CTS_0_1_FUNCTION        1
#define AVR32_USART0_RTS_0_0_PIN             AVR32_PIN_PA00
#define AVR32_USART0_RTS_0_0_FUNCTION        0
#define AVR32_USART0_RTS_0_1_PIN             AVR32_PIN_PX03
#define AVR32_USART0_RTS_0_1_FUNCTION        1
#define AVR32_USART0_RXD_0_0_PIN             AVR32_PIN_PA03
#define AVR32_USART0_RXD_0_0_FUNCTION        0
#define AVR32_USART0_RXD_0_1_PIN             AVR32_PIN_PX00
#define AVR32_USART0_RXD_0_1_FUNCTION        1
#define AVR32_USART0_TXD_0_0_PIN             AVR32_PIN_PA04
#define AVR32_USART0_TXD_0_0_FUNCTION        0
#define AVR32_USART0_TXD_0_1_PIN             AVR32_PIN_PX01
#define AVR32_USART0_TXD_0_1_FUNCTION        1

/* Module instance: USART1 */
#define AVR32_USART1_ADDRESS                 0xFFFF1800
#define AVR32_USART1                         (*((volatile avr32_usart_t*) AVR32_USART1_ADDRESS))

/* Module instance interrupt groups: USART1 */
#define AVR32_USART1_IRQ_GROUP               6

/* Module instance interrupts: USART1 */
#define AVR32_USART1_IRQ                     192

/* Module instance parameters: USART1 */
#define AVR32_USART1_PADDR_MSB               12
#define AVR32_USART1_PDATA_MSB               31
#define AVR32_USART1_PDCA_ID_RX              3
#define AVR32_USART1_PDCA_ID_TX              14

/* Module instance signals: USART1 */
#define AVR32_USART1_CLK_0_PIN               AVR32_PIN_PA07
#define AVR32_USART1_CLK_0_FUNCTION          2
#define AVR32_USART1_CTS_0_0_PIN             AVR32_PIN_PA12
#define AVR32_USART1_CTS_0_0_FUNCTION        0
#define AVR32_USART1_CTS_0_1_PIN             AVR32_PIN_PX06
#define AVR32_USART1_CTS_0_1_FUNCTION        1
#define AVR32_USART1_DCD_0_0_PIN             AVR32_PIN_PA25
#define AVR32_USART1_DCD_0_0_FUNCTION        2
#define AVR32_USART1_DCD_0_1_PIN             AVR32_PIN_PX38
#define AVR32_USART1_DCD_0_1_FUNCTION        2
#define AVR32_USART1_DSR_0_0_PIN             AVR32_PIN_PA26
#define AVR32_USART1_DSR_0_0_FUNCTION        2
#define AVR32_USART1_DSR_0_1_PIN             AVR32_PIN_PX39
#define AVR32_USART1_DSR_0_1_FUNCTION        2
#define AVR32_USART1_DTR_0_0_PIN             AVR32_PIN_PX44
#define AVR32_USART1_DTR_0_0_FUNCTION        1
#define AVR32_USART1_DTR_0_1_PIN             AVR32_PIN_PX01
#define AVR32_USART1_DTR_0_1_FUNCTION        2
#define AVR32_USART1_RI_0_0_PIN              AVR32_PIN_PX43
#define AVR32_USART1_RI_0_0_FUNCTION         1
#define AVR32_USART1_RI_0_1_PIN              AVR32_PIN_PX00
#define AVR32_USART1_RI_0_1_FUNCTION         2
#define AVR32_USART1_RTS_0_0_PIN             AVR32_PIN_PA13
#define AVR32_USART1_RTS_0_0_FUNCTION        0
#define AVR32_USART1_RTS_0_1_PIN             AVR32_PIN_PX07
#define AVR32_USART1_RTS_0_1_FUNCTION        1
#define AVR32_USART1_RXD_0_0_PIN             AVR32_PIN_PA05
#define AVR32_USART1_RXD_0_0_FUNCTION        0
#define AVR32_USART1_RXD_0_1_PIN             AVR32_PIN_PB11
#define AVR32_USART1_RXD_0_1_FUNCTION        0
#define AVR32_USART1_RXD_0_2_PIN             AVR32_PIN_PX04
#define AVR32_USART1_RXD_0_2_FUNCTION        1
#define AVR32_USART1_TXD_0_0_PIN             AVR32_PIN_PA06
#define AVR32_USART1_TXD_0_0_FUNCTION        0
#define AVR32_USART1_TXD_0_1_PIN             AVR32_PIN_PB12
#define AVR32_USART1_TXD_0_1_FUNCTION        0
#define AVR32_USART1_TXD_0_2_PIN             AVR32_PIN_PX05
#define AVR32_USART1_TXD_0_2_FUNCTION        1

/* Module instance: USART2 */
#define AVR32_USART2_ADDRESS                 0xFFFF1C00
#define AVR32_USART2                         (*((volatile avr32_usart_t*) AVR32_USART2_ADDRESS))

/* Module instance interrupt groups: USART2 */
#define AVR32_USART2_IRQ_GROUP               7

/* Module instance interrupts: USART2 */
#define AVR32_USART2_IRQ                     224

/* Module instance parameters: USART2 */
#define AVR32_USART2_PADDR_MSB               12
#define AVR32_USART2_PDATA_MSB               31
#define AVR32_USART2_PDCA_ID_RX              3
#define AVR32_USART2_PDCA_ID_TX              14

/* Module instance signals: USART2 */
#define AVR32_USART2_CLK_0_PIN               AVR32_PIN_PB03
#define AVR32_USART2_CLK_0_FUNCTION          1
#define AVR32_USART2_CTS_0_0_PIN             AVR32_PIN_PA26
#define AVR32_USART2_CTS_0_0_FUNCTION        1
#define AVR32_USART2_CTS_0_1_PIN             AVR32_PIN_PX12
#define AVR32_USART2_CTS_0_1_FUNCTION        1
#define AVR32_USART2_RTS_0_0_PIN             AVR32_PIN_PX13
#define AVR32_USART2_RTS_0_0_FUNCTION        1
#define AVR32_USART2_RTS_0_1_PIN             AVR32_PIN_PA01
#define AVR32_USART2_RTS_0_1_FUNCTION        2
#define AVR32_USART2_RXD_0_0_PIN             AVR32_PIN_PA31
#define AVR32_USART2_RXD_0_0_FUNCTION        1
#define AVR32_USART2_RXD_0_1_PIN             AVR32_PIN_PX10
#define AVR32_USART2_RXD_0_1_FUNCTION        1
#define AVR32_USART2_RXD_0_2_PIN             AVR32_PIN_PX55
#define AVR32_USART2_RXD_0_2_FUNCTION        2
#define AVR32_USART2_TXD_0_0_PIN             AVR32_PIN_PB00
#define AVR32_USART2_TXD_0_0_FUNCTION        1
#define AVR32_USART2_TXD_0_1_PIN             AVR32_PIN_PX11
#define AVR32_USART2_TXD_0_1_FUNCTION        1
#define AVR32_USART2_TXD_0_2_PIN             AVR32_PIN_PX56
#define AVR32_USART2_TXD_0_2_FUNCTION        2

/* Module instance: USART3 */
#define AVR32_USART3_ADDRESS                 0xFFFF2000
#define AVR32_USART3                         (*((volatile avr32_usart_t*) AVR32_USART3_ADDRESS))

/* Module instance interrupt groups: USART3 */
#define AVR32_USART3_IRQ_GROUP               8

/* Module instance interrupts: USART3 */
#define AVR32_USART3_IRQ                     256

/* Module instance parameters: USART3 */
#define AVR32_USART3_PADDR_MSB               12
#define AVR32_USART3_PDATA_MSB               31
#define AVR32_USART3_PDCA_ID_RX              3
#define AVR32_USART3_PDCA_ID_TX              14

/* Module instance signals: USART3 */
#define AVR32_USART3_CLK_0_PIN               AVR32_PIN_PA30
#define AVR32_USART3_CLK_0_FUNCTION          1
#define AVR32_USART3_CTS_0_0_PIN             AVR32_PIN_PX16
#define AVR32_USART3_CTS_0_0_FUNCTION        1
#define AVR32_USART3_CTS_0_1_PIN             AVR32_PIN_PA28
#define AVR32_USART3_CTS_0_1_FUNCTION        2
#define AVR32_USART3_RTS_0_0_PIN             AVR32_PIN_PX15
#define AVR32_USART3_RTS_0_0_FUNCTION        1
#define AVR32_USART3_RTS_0_1_PIN             AVR32_PIN_PA27
#define AVR32_USART3_RTS_0_1_FUNCTION        2
#define AVR32_USART3_RXD_0_0_PIN             AVR32_PIN_PB04
#define AVR32_USART3_RXD_0_0_FUNCTION        1
#define AVR32_USART3_RXD_0_1_PIN             AVR32_PIN_PX08
#define AVR32_USART3_RXD_0_1_FUNCTION        1
#define AVR32_USART3_RXD_0_2_PIN             AVR32_PIN_PX57
#define AVR32_USART3_RXD_0_2_FUNCTION        2
#define AVR32_USART3_TXD_0_0_PIN             AVR32_PIN_PA29
#define AVR32_USART3_TXD_0_0_FUNCTION        1
#define AVR32_USART3_TXD_0_1_PIN             AVR32_PIN_PX09
#define AVR32_USART3_TXD_0_1_FUNCTION        1
#define AVR32_USART3_TXD_0_2_PIN             AVR32_PIN_PX54
#define AVR32_USART3_TXD_0_2_FUNCTION        1
#define AVR32_USART3_TXD_0_3_PIN             AVR32_PIN_PX58
#define AVR32_USART3_TXD_0_3_FUNCTION        2

#include "avr32/usart_420.h"

/* Module: USBB */

#define AVR32_USBB_ADDRESS                   0xFFFE0000
#define AVR32_USBB                           (*((volatile avr32_usbb_t*) AVR32_USBB_ADDRESS))
#define AVR32_USBB_HSB_ADDRESS               0x00000000
#define AVR32_USBB_HSB_SIZE                  0x00000000
#define AVR32_USBB_HSB                       (*((volatile avr32_usbb_t*) AVR32_USBB_HSB_ADDRESS))

/* Module instance interrupt groups: USBB */
#define AVR32_USBB_IRQ_GROUP                 17

/* Module instance interrupts: USBB */
#define AVR32_USB_IRQ                        544

/* Module instance parameters: USBB */

/* Module instance signals: USBB */
#define AVR32_USBB_USB_ID_0_0_PIN            AVR32_PIN_PB05
#define AVR32_USBB_USB_ID_0_0_FUNCTION       0
#define AVR32_USBB_USB_ID_0_1_PIN            AVR32_PIN_PA11
#define AVR32_USBB_USB_ID_0_1_FUNCTION       1
#define AVR32_USBB_USB_ID_0_2_PIN            AVR32_PIN_PX49
#define AVR32_USBB_USB_ID_0_2_FUNCTION       1
#define AVR32_USBB_USB_ID_0_3_PIN            AVR32_PIN_PA05
#define AVR32_USBB_USB_ID_0_3_FUNCTION       2
#define AVR32_USBB_USB_ID_0_4_PIN            AVR32_PIN_PA21
#define AVR32_USBB_USB_ID_0_4_FUNCTION       2
#define AVR32_USBB_USB_VBOF_0_0_PIN          AVR32_PIN_PB06
#define AVR32_USBB_USB_VBOF_0_0_FUNCTION     0
#define AVR32_USBB_USB_VBOF_0_1_PIN          AVR32_PIN_PA10
#define AVR32_USBB_USB_VBOF_0_1_FUNCTION     1
#define AVR32_USBB_USB_VBOF_0_2_PIN          AVR32_PIN_PX48
#define AVR32_USBB_USB_VBOF_0_2_FUNCTION     1
#define AVR32_USBB_USB_VBOF_0_3_PIN          AVR32_PIN_PA06
#define AVR32_USBB_USB_VBOF_0_3_FUNCTION     2
#define AVR32_USBB_USB_VBOF_0_4_PIN          AVR32_PIN_PA22
#define AVR32_USBB_USB_VBOF_0_4_FUNCTION     2

#include "avr32/usbb_320.h"

/* Module: UTMI */

/* Module instance interrupt groups: UTMI */

/* Module instance interrupts: UTMI */

/* Module instance parameters: UTMI */

/* Module instance signals: UTMI */
#define AVR32_UTMI_CLK_12M_SCAN_0_PIN        AVR32_PIN_PB10
#define AVR32_UTMI_CLK_30M_SCAN_0_PIN        AVR32_PIN_PB11

/* Module: WDT */

#define AVR32_WDT_ADDRESS                    0xFFFF0D30
#define AVR32_WDT                            (*((volatile avr32_wdt_t*) AVR32_WDT_ADDRESS))

/* Module instance interrupt groups: WDT */

/* Module instance interrupts: WDT */

/* Module instance parameters: WDT */
#define AVR32_WDT_WDTEXTRST_MSB              1

/* Module instance signals: WDT */

#include "avr32/wdt_231.h"

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
#define AVR32_PIN_PA23                       23
#define AVR32_PIN_PA24                       24
#define AVR32_PIN_PA25                       25
#define AVR32_PIN_PA26                       26
#define AVR32_PIN_PA27                       27
#define AVR32_PIN_PA28                       28
#define AVR32_PIN_PA29                       29
#define AVR32_PIN_PA30                       30
#define AVR32_PIN_PA31                       31
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
#define AVR32_PIN_PC00                       45
#define AVR32_PIN_PC01                       46
#define AVR32_PIN_PC02                       47
#define AVR32_PIN_PC03                       48
#define AVR32_PIN_PC04                       49
#define AVR32_PIN_PC05                       50
#define AVR32_PIN_PX00                       51
#define AVR32_PIN_PX01                       52
#define AVR32_PIN_PX02                       53
#define AVR32_PIN_PX03                       54
#define AVR32_PIN_PX04                       55
#define AVR32_PIN_PX05                       56
#define AVR32_PIN_PX06                       57
#define AVR32_PIN_PX07                       58
#define AVR32_PIN_PX08                       59
#define AVR32_PIN_PX09                       60
#define AVR32_PIN_PX10                       61
#define AVR32_PIN_PX11                       62
#define AVR32_PIN_PX12                       63
#define AVR32_PIN_PX13                       64
#define AVR32_PIN_PX14                       65
#define AVR32_PIN_PX15                       66
#define AVR32_PIN_PX16                       67
#define AVR32_PIN_PX17                       68
#define AVR32_PIN_PX18                       69
#define AVR32_PIN_PX19                       70
#define AVR32_PIN_PX20                       71
#define AVR32_PIN_PX21                       72
#define AVR32_PIN_PX22                       73
#define AVR32_PIN_PX23                       74
#define AVR32_PIN_PX24                       75
#define AVR32_PIN_PX25                       76
#define AVR32_PIN_PX26                       77
#define AVR32_PIN_PX27                       78
#define AVR32_PIN_PX28                       79
#define AVR32_PIN_PX29                       80
#define AVR32_PIN_PX30                       81
#define AVR32_PIN_PX31                       82
#define AVR32_PIN_PX32                       83
#define AVR32_PIN_PX33                       84
#define AVR32_PIN_PX34                       85
#define AVR32_PIN_PX35                       86
#define AVR32_PIN_PX36                       87
#define AVR32_PIN_PX37                       88
#define AVR32_PIN_PX38                       89
#define AVR32_PIN_PX39                       90
#define AVR32_PIN_PX40                       91
#define AVR32_PIN_PX41                       92
#define AVR32_PIN_PX42                       93
#define AVR32_PIN_PX43                       94
#define AVR32_PIN_PX44                       95
#define AVR32_PIN_PX45                       96
#define AVR32_PIN_PX46                       97
#define AVR32_PIN_PX47                       98
#define AVR32_PIN_PX48                       99
#define AVR32_PIN_PX49                       100
#define AVR32_PIN_PX50                       101
#define AVR32_PIN_PX51                       102
#define AVR32_PIN_PX52                       103
#define AVR32_PIN_PX53                       104
#define AVR32_PIN_PX54                       105
#define AVR32_PIN_PX55                       106
#define AVR32_PIN_PX56                       107
#define AVR32_PIN_PX57                       108
#define AVR32_PIN_PX58                       109
#define AVR32_PIN_PX59                       110


#endif /* #ifdef _AVR32_UC3A4256S_H_INCLUDED */

