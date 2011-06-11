/* linux/arch/arm/mach-s5pv210/include/mach/map.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * S5PV210 - Memory map definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_MAP_H
#define __ASM_ARCH_MAP_H __FILE__

#include <plat/map-base.h>
#include <plat/map-s5p.h>
#if defined(CONFIG_S5PV210_GARNETT_DELTA)
//mipi_temp
#define S5PV210_SZ_DSIM        (1*1024*1024)
#define S5PV210_PA_DSIM        (0xFA500000)
#endif
#define S5PV210_PA_WDT		(0xE2700000)
#define S5P_PA_WDT		S5PV210_PA_WDT

#define S5PV210_PA_DM9000	(0xA8000000)
#define S5P_PA_DM9000		S5PV210_PA_DM9000

#define S5PV210_PA_CHIPID	(0xE0000000)
#define S5P_PA_CHIPID		S5PV210_PA_CHIPID

#define S5PV210_PA_SYSCON	(0xE0100000)
#define S5P_PA_SYSCON		S5PV210_PA_SYSCON

#define S5PV210_PA_GPIO		(0xE0200000)
#define S5P_PA_GPIO		S5PV210_PA_GPIO

#define S5PV210_PA_PDMA		(0xE0900000)
#define S5P_PA_PDMA		S5PV210_PA_PDMA

#define S5PV210_PA_IIC0		(0xE1800000)
#define S5PV210_PA_IIC1		(0xFAB00000)
#define S5PV210_PA_IIC2		(0xE1A00000)

#define S5PV210_PA_TIMER	(0xE2500000)
#define S5P_PA_TIMER		S5PV210_PA_TIMER

#define S5PV210_PA_SYSTIMER	(0xE2600000)

#define S5PV210_PA_RTC		(0xE2800000)
#define S5P_PA_RTC		S5PV210_PA_RTC

#define S5PV210_PA_UART		(0xE2900000)

#define S5P_PA_UART0		(S5PV210_PA_UART + 0x0)
#define S5P_PA_UART1		(S5PV210_PA_UART + 0x400)
#define S5P_PA_UART2		(S5PV210_PA_UART + 0x800)
#define S5P_PA_UART3		(S5PV210_PA_UART + 0xC00)

#define S5P_SZ_UART		SZ_256

#define S5P_SZ_UART_FULL	SZ_1K
#define S3C_VA_UARTx(uart) (S3C_VA_UART + ((uart * S5P_SZ_UART_FULL)))

#define S5PV210_PA_SROMC	(0xE8000000)

#define S5PV210_PA_CFCON	(0xE8200000)
#define S5PV210_SZ_CFCON	SZ_1M

#define S5PV210_PA_OTG          (0xEC000000)
#define S5P_PA_OTG		S5PV210_PA_OTG
#define S5P_SZ_OTG		S5PV210_SZ_OTG

#define S5PV210_PA_OTGSFR       (0xEC100000)
#define S5P_PA_OTGSFR		S5PV210_PA_OTGSFR

#define S5PV210_PA_USB_EHCI	(0xEC200000)
#define S5P_PA_USB_EHCI		S5PV210_PA_USB_EHCI
#define S5P_SZ_USB_EHCI     	SZ_1M

#define S5PV210_PA_USB_OHCI	(0xEC300000)
#define S5P_PA_USB_OHCI		S5PV210_PA_USB_OHCI
#define S5P_SZ_USB_OHCI     	SZ_1M

#define S5PV210_VA_RTC		S3C_ADDR(0x00c00000)

#define S5PV210_VA_OTG          S3C_ADDR(0x00E00000)
#define S5PV210_SZ_OTG          SZ_1M

#define S5PV210_VA_OTGSFR       S3C_ADDR(0x00F00000)
#define S5PV210_SZ_OTGSFR       SZ_1M

#define S5PV210_PA_SPI0         (0xE1300000)
#define S5PV210_PA_SPI1         (0xE1400000)
#define S5PV210_PA_SPI2         (0xE1500000)

/* s3c-tsi */
#define S5PV210_PA_TSI        (0xEB400000)            
#define S5P_PA_TSI	       S5PV210_PA_TSI
#define S5P_SZ_TSI 		SZ_256   

#define S5PV210_PA_IIS1 	(0xE2100000)
#define S5P_PA_IIS1		S5PV210_PA_IIS1
#define S5PV210_PA_IIS2 	(0xE2A00000)
#define S5P_PA_IIS2		S5PV210_PA_IIS2
#define S5PV210_PA_IIS0 	(0xEEE30000)
#define S5P_PA_IIS0		S5PV210_PA_IIS0

#define S5PV210_PA_HSMMC(x)     (0xEB000000 + ((x) * 0x100000))

#define S5PV210_PA_AUDSS	(0xEEE10000)

#define	S5PV210_PA_PCM0		(0xE2300000)
#define	S5PV210_PA_PCM1		(0xE1200000)
#define	S5PV210_PA_PCM2		(0xE2B00000)

#define S5PV210_PA_VIC0         (0xF2000000)
#define S5P_PA_VIC0		S5PV210_PA_VIC0

#define S5PV210_PA_VIC1		(0xF2100000)
#define S5P_PA_VIC1		S5PV210_PA_VIC1

#define S5PV210_PA_VIC2		(0xF2200000)
#define S5P_PA_VIC2		S5PV210_PA_VIC2

#define S5PV210_PA_VIC3		(0xF2300000)
#define S5P_PA_VIC3		S5PV210_PA_VIC3

//chk : Vict Froyo upmg
#define S5PV210_PA_LCD	   	(0xF8000000)
//#define S5PV210_PA_LCD	   	(0xEE000000)
#define S5P_PA_LCD		S5PV210_PA_LCD
#define S5PV210_SZ_LCD		SZ_1M
#define S5P_SZ_LCD		S5PV210_SZ_LCD

#define S5PV210_PA_DMA		(0xFA200000)
#define S5P_PA_DMA		S5PV210_PA_DMA

#define S5PV210_PA_CSIS		(0xFA600000)
#define S5P_PA_CSIS		S5PV210_PA_CSIS
#define S5PV210_SZ_CSIS		SZ_1M
#define S5P_SZ_CSIS		S5PV210_SZ_CSIS

#define S5PV210_PA_FIMC0	(0xFB200000)
#define S5P_PA_FIMC0		S5PV210_PA_FIMC0
#define S5PV210_PA_FIMC1	(0xFB300000)
#define S5P_PA_FIMC1		S5PV210_PA_FIMC1
#define S5PV210_PA_FIMC2	(0xFB400000)
#define S5P_PA_FIMC2		S5PV210_PA_FIMC2
#define S5PV210_SZ_FIMC0	SZ_1M
#define S5P_SZ_FIMC0		S5PV210_SZ_FIMC0
#define S5PV210_SZ_FIMC1	SZ_1M
#define S5P_SZ_FIMC1		S5PV210_SZ_FIMC1
#define S5PV210_SZ_FIMC2	SZ_1M
#define S5P_SZ_FIMC2		S5PV210_SZ_FIMC2

#define S5PV210_PA_MFC          (0xF1700000)
#define S5PV210_SZ_MFC          SZ_1M

#define S5PV210_PA_JPEG		(0xFB600000)
#define S5PV210_SZ_JPEG		SZ_1M

#define S5PV210_PA_ROTATOR	(0xFA300000)
#define S5PV210_SZ_ROTATOR	SZ_1M

#define S5PV210_PA_IPC		(0xFB700000)
#define S5P_PA_IPC		S5PV210_PA_IPC
#define S5PV210_SZ_IPC		SZ_1M
#define S5P_SZ_IPC		S5PV210_SZ_IPC

#if defined(CONFIG_MACH_SMDKC110) || defined (CONFIG_MACH_S5PC110_ARIES) || defined (CONFIG_MACH_S5PC110_P1)
#define S5PV210_PA_SDRAM	(0x30000000)
#else
#define S5PV210_PA_SDRAM	(0x20000000)
#endif
#define S5P_PA_SDRAM		S5PV210_PA_SDRAM

/* KEYPAD IF */
#define S5PV2XX_SZ_KEYPAD       SZ_4K

#define S5PV2XX_PA_ADC          (0xE1700000)
#define S3C_PA_ADC              S5PV2XX_PA_ADC

#define S5PV2XX_PA_KEYPAD       (0xE1600000)
#define S3C_PA_KEYPAD           S5PV2XX_PA_KEYPAD
#define S3C_SZ_KEYPAD           S5PV2XX_SZ_KEYPAD

/* CEC */
#define S5PV210_PA_CEC          (0xE1B00000)
#define S5PV210_SZ_CEC          SZ_4K

/* compatibiltiy defines. */
#define S3C_PA_UART		S5PV210_PA_UART
#define S3C_PA_IIC		S5PV210_PA_IIC0
#define S3C_PA_IIC1		S5PV210_PA_IIC1
#define S3C_PA_IIC2		S5PV210_PA_IIC2

#define	S3C_PA_SPI0		S5PV210_PA_SPI0
#define	S3C_PA_SPI1		S5PV210_PA_SPI1
#define	S3C_PA_SPI2		S5PV210_PA_SPI2

#define	S3C_SZ_SPI0		SZ_4K
#define	S3C_SZ_SPI1		SZ_4K
#define	S3C_SZ_SPI2		SZ_4K

#define S5P_VA_RTC		S5PV210_VA_RTC

#define S3C_VA_OTG              S5PV210_VA_OTG
#define S3C_PA_OTG              S5PV210_PA_OTG
#define S3C_SZ_OTG              S5PV210_SZ_OTG

#define S3C_VA_OTGSFR           S5PV210_VA_OTGSFR
#define S3C_PA_OTGSFR           S5PV210_PA_OTGSFR
#define S3C_SZ_OTGSFR           S5PV210_SZ_OTGSFR

#define S3C_PA_HSMMC0		S5PV210_PA_HSMMC(0)
#define S3C_PA_HSMMC1		S5PV210_PA_HSMMC(1)
#define S3C_PA_HSMMC2		S5PV210_PA_HSMMC(2)
#define S3C_PA_HSMMC3		S5PV210_PA_HSMMC(3)

#define S5P_VA_VIC0		(S3C_VA_IRQ + 0x0)
#define S5P_VA_VIC1		(S3C_VA_IRQ + 0x10000)
#define S5P_VA_VIC2		(S3C_VA_IRQ + 0x20000)
#define S5P_VA_VIC3		(S3C_VA_IRQ + 0x30000)

/* TVOUT */
#define S5PV210_PA_TVENC        (0xF9000000)
#define S5PV210_SZ_TVENC        SZ_1M
#define S5PV210_PA_VP           (0xF9100000)
#define S5PV210_SZ_VP           SZ_1M
#define S5PV210_PA_MIXER        (0xF9200000)
#define S5PV210_SZ_MIXER        SZ_1M
#define S5PV210_PA_HDMI         (0xFA100000)
#define S5PV210_SZ_HDMI         SZ_1M
#define I2C_HDMI_PHY_BASE	(0xFA900000)
#define I2C_HDMI_SZ_PHY_BASE	SZ_1K

/* G2D */
#define S5PV210_PA_G2D	   	(0xFA000000)
#define S5P_PA_G2D		S5PV210_PA_G2D

#define S5PV210_SZ_G2D		SZ_1M
#define S5P_SZ_G2D		S5PV210_SZ_G2D

/* OneNAND */
#define S5PV210_PA_ONENAND   	(0xB0000000)
#define S5P_PA_ONENAND		S5PV210_PA_ONENAND

#define S5PV210_SZ_ONENAND	SZ_8M   // redefined at device/mtd/onenand/s5pc110.c
#define S5P_SZ_ONENAND		S5PV210_SZ_ONENAND

#define S5P_PA_DMC0		(0xF0000000)
#define S5P_VA_DMC0		S3C_ADDR(0x00a00000)

#define S5P_PA_DMC1		(0xF1400000)
#define S5P_VA_DMC1		S3C_ADDR(0x00b00000)

#ifdef CONFIG_MACH_S5PC110_ARIES
#include "map-aries.h"
#endif	/* CONFIG_MACH_ARIES */

#endif /* __ASM_ARCH_MAP_H */
