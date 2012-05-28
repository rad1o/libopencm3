/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2012 Michael Ossmann <mike@ossmann.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LPC43XX_SGPIO_H
#define LPC43XX_SGPIO_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/lpc43xx/memorymap.h>

/* --- SGPIO registers ----------------------------------------------------- */

/* Pin multiplexer configuration registers (OUT_MUX_CFG0 to 15) */
#define SGPIO_OUT_MUX_CFG0              (SGPIO_PORT_BASE + 0x00)
#define SGPIO_OUT_MUX_CFG1              (SGPIO_PORT_BASE + 0x04)
#define SGPIO_OUT_MUX_CFG2              (SGPIO_PORT_BASE + 0x08)
#define SGPIO_OUT_MUX_CFG3              (SGPIO_PORT_BASE + 0x0C)
#define SGPIO_OUT_MUX_CFG4              (SGPIO_PORT_BASE + 0x10)
#define SGPIO_OUT_MUX_CFG5              (SGPIO_PORT_BASE + 0x14)
#define SGPIO_OUT_MUX_CFG6              (SGPIO_PORT_BASE + 0x18)
#define SGPIO_OUT_MUX_CFG7              (SGPIO_PORT_BASE + 0x1C)
#define SGPIO_OUT_MUX_CFG8              (SGPIO_PORT_BASE + 0x20)
#define SGPIO_OUT_MUX_CFG9              (SGPIO_PORT_BASE + 0x24)
#define SGPIO_OUT_MUX_CFG10             (SGPIO_PORT_BASE + 0x28)
#define SGPIO_OUT_MUX_CFG11             (SGPIO_PORT_BASE + 0x2C)
#define SGPIO_OUT_MUX_CFG12             (SGPIO_PORT_BASE + 0x30)
#define SGPIO_OUT_MUX_CFG13             (SGPIO_PORT_BASE + 0x34)
#define SGPIO_OUT_MUX_CFG14             (SGPIO_PORT_BASE + 0x38)
#define SGPIO_OUT_MUX_CFG15             (SGPIO_PORT_BASE + 0x3C)

/* SGPIO multiplexer configuration registers (SGPIO_MUX_CFG0 to 15) */
#define SGPIO_MUX_CFG0                  (SGPIO_PORT_BASE + 0x40)
#define SGPIO_MUX_CFG1                  (SGPIO_PORT_BASE + 0x44)
#define SGPIO_MUX_CFG2                  (SGPIO_PORT_BASE + 0x48)
#define SGPIO_MUX_CFG3                  (SGPIO_PORT_BASE + 0x4C)
#define SGPIO_MUX_CFG4                  (SGPIO_PORT_BASE + 0x50)
#define SGPIO_MUX_CFG5                  (SGPIO_PORT_BASE + 0x54)
#define SGPIO_MUX_CFG6                  (SGPIO_PORT_BASE + 0x58)
#define SGPIO_MUX_CFG7                  (SGPIO_PORT_BASE + 0x5C)
#define SGPIO_MUX_CFG8                  (SGPIO_PORT_BASE + 0x60)
#define SGPIO_MUX_CFG9                  (SGPIO_PORT_BASE + 0x64)
#define SGPIO_MUX_CFG10                 (SGPIO_PORT_BASE + 0x68)
#define SGPIO_MUX_CFG11                 (SGPIO_PORT_BASE + 0x6C)
#define SGPIO_MUX_CFG12                 (SGPIO_PORT_BASE + 0x70)
#define SGPIO_MUX_CFG13                 (SGPIO_PORT_BASE + 0x74)
#define SGPIO_MUX_CFG14                 (SGPIO_PORT_BASE + 0x78)
#define SGPIO_MUX_CFG15                 (SGPIO_PORT_BASE + 0x7C)

/* Slice multiplexer configuration registers (SLICE_MUX_CFG0 to 15) */
#define SGPIO_SLICE_MUX_CFG0            (SGPIO_PORT_BASE + 0x80)
#define SGPIO_SLICE_MUX_CFG1            (SGPIO_PORT_BASE + 0x84)
#define SGPIO_SLICE_MUX_CFG2            (SGPIO_PORT_BASE + 0x88)
#define SGPIO_SLICE_MUX_CFG3            (SGPIO_PORT_BASE + 0x8C)
#define SGPIO_SLICE_MUX_CFG4            (SGPIO_PORT_BASE + 0x90)
#define SGPIO_SLICE_MUX_CFG5            (SGPIO_PORT_BASE + 0x94)
#define SGPIO_SLICE_MUX_CFG6            (SGPIO_PORT_BASE + 0x98)
#define SGPIO_SLICE_MUX_CFG7            (SGPIO_PORT_BASE + 0x9C)
#define SGPIO_SLICE_MUX_CFG8            (SGPIO_PORT_BASE + 0xA0)
#define SGPIO_SLICE_MUX_CFG9            (SGPIO_PORT_BASE + 0xA4)
#define SGPIO_SLICE_MUX_CFG10           (SGPIO_PORT_BASE + 0xA8)
#define SGPIO_SLICE_MUX_CFG11           (SGPIO_PORT_BASE + 0xAC)
#define SGPIO_SLICE_MUX_CFG12           (SGPIO_PORT_BASE + 0xB0)
#define SGPIO_SLICE_MUX_CFG13           (SGPIO_PORT_BASE + 0xB4)
#define SGPIO_SLICE_MUX_CFG14           (SGPIO_PORT_BASE + 0xB8)
#define SGPIO_SLICE_MUX_CFG15           (SGPIO_PORT_BASE + 0xBC)

/* Slice data registers (REG0 to 15) */
#define SGPIO_REG0                      (SGPIO_PORT_BASE + 0xC0)
#define SGPIO_REG1                      (SGPIO_PORT_BASE + 0xC4)
#define SGPIO_REG2                      (SGPIO_PORT_BASE + 0xC8)
#define SGPIO_REG3                      (SGPIO_PORT_BASE + 0xCC)
#define SGPIO_REG4                      (SGPIO_PORT_BASE + 0xD0)
#define SGPIO_REG5                      (SGPIO_PORT_BASE + 0xD4)
#define SGPIO_REG6                      (SGPIO_PORT_BASE + 0xD8)
#define SGPIO_REG7                      (SGPIO_PORT_BASE + 0xDC)
#define SGPIO_REG8                      (SGPIO_PORT_BASE + 0xE0)
#define SGPIO_REG9                      (SGPIO_PORT_BASE + 0xE4)
#define SGPIO_REG10                     (SGPIO_PORT_BASE + 0xE8)
#define SGPIO_REG11                     (SGPIO_PORT_BASE + 0xEC)
#define SGPIO_REG12                     (SGPIO_PORT_BASE + 0xF0)
#define SGPIO_REG13                     (SGPIO_PORT_BASE + 0xF4)
#define SGPIO_REG14                     (SGPIO_PORT_BASE + 0xF8)
#define SGPIO_REG15                     (SGPIO_PORT_BASE + 0xFC)

/* Slice data shadow registers (REG_SS0 to 15) */
#define SGPIO_REG_SS0                   (SGPIO_PORT_BASE + 0x100)
#define SGPIO_REG_SS1                   (SGPIO_PORT_BASE + 0x104)
#define SGPIO_REG_SS2                   (SGPIO_PORT_BASE + 0x108)
#define SGPIO_REG_SS3                   (SGPIO_PORT_BASE + 0x10C)
#define SGPIO_REG_SS4                   (SGPIO_PORT_BASE + 0x110)
#define SGPIO_REG_SS5                   (SGPIO_PORT_BASE + 0x114)
#define SGPIO_REG_SS6                   (SGPIO_PORT_BASE + 0x118)
#define SGPIO_REG_SS7                   (SGPIO_PORT_BASE + 0x11C)
#define SGPIO_REG_SS8                   (SGPIO_PORT_BASE + 0x120)
#define SGPIO_REG_SS9                   (SGPIO_PORT_BASE + 0x124)
#define SGPIO_REG_SS10                  (SGPIO_PORT_BASE + 0x128)
#define SGPIO_REG_SS11                  (SGPIO_PORT_BASE + 0x12C)
#define SGPIO_REG_SS12                  (SGPIO_PORT_BASE + 0x130)
#define SGPIO_REG_SS13                  (SGPIO_PORT_BASE + 0x134)
#define SGPIO_REG_SS14                  (SGPIO_PORT_BASE + 0x138)
#define SGPIO_REG_SS15                  (SGPIO_PORT_BASE + 0x13C)

/* Reload registers (PRESET0 to 15) */
#define SGPIO_PRESET0                   (SGPIO_PORT_BASE + 0x140)
#define SGPIO_PRESET1                   (SGPIO_PORT_BASE + 0x144)
#define SGPIO_PRESET2                   (SGPIO_PORT_BASE + 0x148)
#define SGPIO_PRESET3                   (SGPIO_PORT_BASE + 0x14C)
#define SGPIO_PRESET4                   (SGPIO_PORT_BASE + 0x150)
#define SGPIO_PRESET5                   (SGPIO_PORT_BASE + 0x154)
#define SGPIO_PRESET6                   (SGPIO_PORT_BASE + 0x158)
#define SGPIO_PRESET7                   (SGPIO_PORT_BASE + 0x15C)
#define SGPIO_PRESET8                   (SGPIO_PORT_BASE + 0x160)
#define SGPIO_PRESET9                   (SGPIO_PORT_BASE + 0x164)
#define SGPIO_PRESET10                  (SGPIO_PORT_BASE + 0x168)
#define SGPIO_PRESET11                  (SGPIO_PORT_BASE + 0x16C)
#define SGPIO_PRESET12                  (SGPIO_PORT_BASE + 0x170)
#define SGPIO_PRESET13                  (SGPIO_PORT_BASE + 0x174)
#define SGPIO_PRESET14                  (SGPIO_PORT_BASE + 0x178)
#define SGPIO_PRESET15                  (SGPIO_PORT_BASE + 0x17C)

/* Down counter registers (COUNT0 to 15) */
#define SGPIO_COUNT0                    (SGPIO_PORT_BASE + 0x180)
#define SGPIO_COUNT1                    (SGPIO_PORT_BASE + 0x184)
#define SGPIO_COUNT2                    (SGPIO_PORT_BASE + 0x188)
#define SGPIO_COUNT3                    (SGPIO_PORT_BASE + 0x18C)
#define SGPIO_COUNT4                    (SGPIO_PORT_BASE + 0x190)
#define SGPIO_COUNT5                    (SGPIO_PORT_BASE + 0x194)
#define SGPIO_COUNT6                    (SGPIO_PORT_BASE + 0x198)
#define SGPIO_COUNT7                    (SGPIO_PORT_BASE + 0x19C)
#define SGPIO_COUNT8                    (SGPIO_PORT_BASE + 0x1A0)
#define SGPIO_COUNT9                    (SGPIO_PORT_BASE + 0x1A4)
#define SGPIO_COUNT10                   (SGPIO_PORT_BASE + 0x1A8)
#define SGPIO_COUNT11                   (SGPIO_PORT_BASE + 0x1AC)
#define SGPIO_COUNT12                   (SGPIO_PORT_BASE + 0x1B0)
#define SGPIO_COUNT13                   (SGPIO_PORT_BASE + 0x1B4)
#define SGPIO_COUNT14                   (SGPIO_PORT_BASE + 0x1B8)
#define SGPIO_COUNT15                   (SGPIO_PORT_BASE + 0x1BC)

/* Position registers (POS0 to 15) */
#define SGPIO_POS0                      (SGPIO_PORT_BASE + 0x1C0)
#define SGPIO_POS1                      (SGPIO_PORT_BASE + 0x1C4)
#define SGPIO_POS2                      (SGPIO_PORT_BASE + 0x1C8)
#define SGPIO_POS3                      (SGPIO_PORT_BASE + 0x1CC)
#define SGPIO_POS4                      (SGPIO_PORT_BASE + 0x1D0)
#define SGPIO_POS5                      (SGPIO_PORT_BASE + 0x1D4)
#define SGPIO_POS6                      (SGPIO_PORT_BASE + 0x1D8)
#define SGPIO_POS7                      (SGPIO_PORT_BASE + 0x1DC)
#define SGPIO_POS8                      (SGPIO_PORT_BASE + 0x1E0)
#define SGPIO_POS9                      (SGPIO_PORT_BASE + 0x1E4)
#define SGPIO_POS10                     (SGPIO_PORT_BASE + 0x1E8)
#define SGPIO_POS11                     (SGPIO_PORT_BASE + 0x1EC)
#define SGPIO_POS12                     (SGPIO_PORT_BASE + 0x1F0)
#define SGPIO_POS13                     (SGPIO_PORT_BASE + 0x1F4)
#define SGPIO_POS14                     (SGPIO_PORT_BASE + 0x1F8)
#define SGPIO_POS15                     (SGPIO_PORT_BASE + 0x1FC)

/* Mask for pattern match function of slice A */
#define SGPIO_MASK_A                    (SGPIO_PORT_BASE + 0x200)

/* Mask for pattern match function of slice H */
#define SGPIO_MASK_H                    (SGPIO_PORT_BASE + 0x204)

/* Mask for pattern match function of slice I */
#define SGPIO_MASK_I                    (SGPIO_PORT_BASE + 0x208)

/* Mask for pattern match function of slice P */
#define SGPIO_MASK_P                    (SGPIO_PORT_BASE + 0x20C)

/* GPIO input status register */
#define SGPIO_GPIO_INREG                (SGPIO_PORT_BASE + 0x210)

/* GPIO output control register */
#define SGPIO_GPIO_OUTREG               (SGPIO_PORT_BASE + 0x214)

/* GPIO OE control register */
#define SGPIO_GPIO_OENREG               (SGPIO_PORT_BASE + 0x218)

/* Enables the slice COUNT counter */
#define SGPIO_CTRL_ENABLE               (SGPIO_PORT_BASE + 0x21C)

/* Disables the slice COUNT counter */
#define SGPIO_CTRL_DISABLE              (SGPIO_PORT_BASE + 0x220)

/* Shift clock interrupt clear mask */
#define SGPIO_CLR_EN_0                  (SGPIO_PORT_BASE + 0xF00)

/* Shift clock interrupt set mask */
#define SGPIO_SET_EN_0                  (SGPIO_PORT_BASE + 0xF04)

/* Shift clock interrupt enable */
#define SGPIO_ENABLE_0                  (SGPIO_PORT_BASE + 0xF08)

/* Shift clock interrupt status */
#define SGPIO_STATUS_0                  (SGPIO_PORT_BASE + 0xF0C)

/* Shift clock interrupt clear status */
#define SGPIO_CTR_STAT_0                (SGPIO_PORT_BASE + 0xF10)

/* Shift clock interrupt set status */
#define SGPIO_SET_STAT_0                (SGPIO_PORT_BASE + 0xF14)

/* Capture clock interrupt clear mask */
#define SGPIO_CLR_EN_1                  (SGPIO_PORT_BASE + 0xF20)

/* Capture clock interrupt set mask */
#define SGPIO_SET_EN_1                  (SGPIO_PORT_BASE + 0xF24)

/* Capture clock interrupt enable */
#define SGPIO_ENABLE_1                  (SGPIO_PORT_BASE + 0xF28)

/* Capture clock interrupt status */
#define SGPIO_STATUS_1                  (SGPIO_PORT_BASE + 0xF2C)

/* Capture clock interrupt clear status */
#define SGPIO_CTR_STAT_1                (SGPIO_PORT_BASE + 0xF30)

/* Capture clock interrupt set status */
#define SGPIO_SET_STAT_1                (SGPIO_PORT_BASE + 0xF34)

/* Pattern match interrupt clear mask */
#define SGPIO_CLR_EN_2                  (SGPIO_PORT_BASE + 0xF40)

/* Pattern match interrupt set mask */
#define SGPIO_SET_EN_2                  (SGPIO_PORT_BASE + 0xF44)

/* Pattern match interrupt enable */
#define SGPIO_ENABLE_2                  (SGPIO_PORT_BASE + 0xF48)

/* Pattern match interrupt status */
#define SGPIO_STATUS_2                  (SGPIO_PORT_BASE + 0xF4C)

/* Pattern match interrupt clear status */
#define SGPIO_CTR_STAT_2                (SGPIO_PORT_BASE + 0xF50)

/* Pattern match interrupt set status */
#define SGPIO_SET_STAT_2                (SGPIO_PORT_BASE + 0xF54)

/* Input interrupt clear mask */
#define SGPIO_CLR_EN_3                  (SGPIO_PORT_BASE + 0xF60)

/* Input bit match interrupt set mask */
#define SGPIO_SET_EN_3                  (SGPIO_PORT_BASE + 0xF64)

/* Input bit match interrupt enable */
#define SGPIO_ENABLE_3                  (SGPIO_PORT_BASE + 0xF68)

/* Input bit match interrupt status */
#define SGPIO_STATUS_3                  (SGPIO_PORT_BASE + 0xF6C)

/* Input bit match interrupt clear status */
#define SGPIO_CTR_STAT_3                (SGPIO_PORT_BASE + 0xF70)

/* Input bit match interrupt set status */
#define SGPIO_SET_STAT_3                (SGPIO_PORT_BASE + 0xF74)

#endif