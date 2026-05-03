#include "panel.h"
#include "iic.h"

void Panel_Init(void)
{
	/* ILI7807D DCS initialization sequence via TC358870 DCSCMD_Q (0x0504) */

	/* SLPOUT - Sleep Out (0x11), no parameter */
	i2c1_uh2cd_write16(0x0504, 0x0005); // DCS Short Write, no param
	i2c1_uh2cd_write16(0x0504, 0x0011); // command: SLPOUT
	HAL_Delay(120);

	/* COLMOD - Set Pixel Format (0x3A) = 0x77 (24-bit RGB) */
	i2c1_uh2cd_write16(0x0504, 0x0015); // DCS Short Write, 1 param
	i2c1_uh2cd_write16(0x0504, 0x773A); // cmd=0x3A, param=0x77
	HAL_Delay(10);

	/* NORON - Normal Display Mode On (0x13), no parameter */
	i2c1_uh2cd_write16(0x0504, 0x0005); // DCS Short Write, no param
	i2c1_uh2cd_write16(0x0504, 0x0013); // command: NORON
	HAL_Delay(10);

	/* INVOFF - Display Inversion Off (0x20), no parameter */
	i2c1_uh2cd_write16(0x0504, 0x0005); // DCS Short Write, no param
	i2c1_uh2cd_write16(0x0504, 0x0020); // command: INVOFF
	HAL_Delay(10);

	/* TEON - Tearing Effect Line On (0x35), VSYNC mode (param=0x00) */
	i2c1_uh2cd_write16(0x0504, 0x0015); // DCS Short Write, 1 param
	i2c1_uh2cd_write16(0x0504, 0x0035); // cmd=0x35, param=0x00
	HAL_Delay(10);

	/* DISPON - Display On (0x29), no parameter */
	i2c1_uh2cd_write16(0x0504, 0x0005); // DCS Short Write, no param
	i2c1_uh2cd_write16(0x0504, 0x0029); // command: DISPON
	HAL_Delay(10);
}


