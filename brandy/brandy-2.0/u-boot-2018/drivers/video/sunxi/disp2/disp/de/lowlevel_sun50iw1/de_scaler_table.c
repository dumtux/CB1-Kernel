/*
 * drivers/video/sunxi/disp2/disp/de/lowlevel_sun50iw1/de_scaler_table.c
 *
 * Copyright (c) 2007-2019 Allwinnertech Co., Ltd.
 * Author: zhengxiaobin <zhengxiaobin@allwinnertech.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#include "de_scaler_table.h"

unsigned int lan2coefftab16[256] = {
	0x00004000,0x00033ffe,0x00063efc,0x000a3bfb,
	0xff0f37fb,0xfe1433fb,0xfd192ffb,0xfd1f29fb,
	0xfc2424fc,0xfb291ffd,0xfb2f19fd,0xfb3314fe,
	0xfb370fff,0xfb3b0a00,0xfc3e0600,0xfe3f0300,
	//counter = 1
	0x00004000,0x00033ffe,0x00063efc,0x000a3bfb,
	0xff0f37fb,0xfe1433fb,0xfd192ffb,0xfd1f29fb,
	0xfc2424fc,0xfb291ffd,0xfb2f19fd,0xfb3314fe,
	0xfb370fff,0xfb3b0a00,0xfc3e0600,0xfe3f0300,
	//counter = 2
	0xff053804,0xff083801,0xff0a3700,0xff0e34ff,
	0xff1232fd,0xfe162ffd,0xfd1b2cfc,0xfd1f28fc,
	0xfd2323fd,0xfc281ffd,0xfc2c1bfd,0xfd2f16fe,
	0xfd3212ff,0xff340eff,0x00360a00,0x02370700,
	//counter = 3
	0xff083207,0xff0a3205,0xff0d3103,0xfe113001,
	0xfe142e00,0xfe182bff,0xfe1b29fe,0xfe1f25fe,
	0xfe2222fe,0xfe251ffe,0xfe291bfe,0xff2b18fe,
	0x002e14fe,0x013010ff,0x03310dff,0x05310a00,
	//counter =
	0xff0a2e09,0xff0c2e07,0xff0f2d05,0xff122c03,
	0xfe152b02,0xfe182901,0xfe1b2700,0xff1e24ff,
	0xff2121ff,0xff241eff,0x00261bff,0x012818ff,
	0x022a15ff,0x032c12ff,0x052d0fff,0x072d0c00,
	//counter =
	0xff0c2a0b,0xff0e2a09,0xff102a07,0xff132905,
	0xff162803,0xff182702,0xff1b2501,0xff1e2300,
	0x00202000,0x01221d00,0x01251bff,0x032618ff,
	0x042815ff,0x052913ff,0x072a10ff,0x092a0d00,
	//counter =
	0xff0d280c,0xff0f280a,0xff112808,0xff142706,
	0xff162605,0xff192503,0x001b2302,0x001d2201,
	0x011f1f01,0x01221d00,0x02231b00,0x04241800,
	0x052616ff,0x072713ff,0x08271100,0x0a280e00,
	//counter =
	0xff0e260d,0xff10260b,0xff122609,0xff142508,
	0x00152506,0x00182305,0x001b2203,0x011d2002,
	0x011f1f01,0x02201d01,0x03221b00,0x04231801,
	0x06241600,0x08251300,0x09261100,0x0b260f00,
	//counter =
	0xff0e250e,0xff10250c,0x0011250a,0x00142408,
	0x00162307,0x00182206,0x011a2104,0x011c2003,
	0x021e1e02,0x03201c01,0x04211a01,0x05221801,
	0x07231600,0x08241400,0x0a241200,0x0c241000,
	//counter =
	0x000e240e,0x0010240c,0x0013230a,0x00142309,
	0x00162208,0x01182106,0x011a2005,0x021b1f04,
	0x031d1d03,0x041e1c02,0x05201a01,0x06211801,
	0x07221601,0x09231400,0x0a231300,0x0c231100,
	//counter =
	0x000f220f,0x0011220d,0x0013220b,0x0015210a,
	0x01162108,0x01182007,0x02191f06,0x031a1e05,
	0x041c1c04,0x051d1b03,0x061f1902,0x07201801,
	0x08211601,0x0a211500,0x0b221300,0x0d221100,
	//counter =
	0x0010210f,0x0011210e,0x0013210c,0x0114200b,
	0x01161f0a,0x02171f08,0x03181e07,0x031a1d06,
	0x041c1c04,0x051d1a04,0x071d1903,0x081e1802,
	0x091f1602,0x0b1f1501,0x0c211300,0x0e201200,
	//counter =
	0x00102010,0x0012200e,0x0013200d,0x01151f0b,
	0x01161f0a,0x02171e09,0x03191d07,0x041a1c06,
	0x051b1b05,0x061c1a04,0x071d1903,0x081e1703,
	0x0a1f1601,0x0b1f1501,0x0d201300,0x0e201200,
	//counter =
	0x00102010,0x00121f0f,0x00141f0d,0x01141f0c,
	0x02161e0a,0x03171d09,0x03181d08,0x041a1c06,
	0x051b1b05,0x061c1a04,0x081c1903,0x091d1703,
	0x0a1e1602,0x0c1e1501,0x0d1f1400,0x0e1f1201,
	//counter =
	0x00111e11,0x00131e0f,0x01131e0e,0x02151d0c,
	0x02161d0b,0x03171c0a,0x04181b09,0x05191b07,
	0x061a1a06,0x071b1905,0x091b1804,0x0a1c1703,
	0x0b1d1602,0x0c1d1502,0x0e1d1401,0x0f1e1300,
	//counter =
	0x00111e11,0x00131d10,0x01141d0e,0x02151c0d,
	0x03161c0b,0x04171b0a,0x05171b09,0x06181a08,
	0x07191907,0x081a1806,0x091a1805,0x0a1b1704,
	0x0b1c1603,0x0d1c1502,0x0e1d1401,0x0f1d1301,
	//counter = 16
};

unsigned int lan3coefftab32_left[512] = {
	0x40000000,0x40fe0000,0x3ffd0100,0x3efc0100,
	0x3efb0100,0x3dfa0200,0x3cf90200,0x3bf80200,
	0x39f70200,0x37f70200,0x35f70200,0x33f70200,
	0x31f70200,0x2ef70200,0x2cf70200,0x2af70200,
	0x27f70200,0x24f80100,0x22f80100,0x1ef90100,
	0x1cf90100,0x19fa0100,0x17fa0100,0x14fb0100,
	0x11fc0000,0x0ffc0000,0x0cfd0000,0x0afd0000,
	0x08fe0000,0x05ff0000,0x03ff0000,0x02000000,

	0x40000000,0x40fe0000,0x3ffd0100,0x3efc0100,
	0x3efb0100,0x3dfa0200,0x3cf90200,0x3bf80200,
	0x39f70200,0x37f70200,0x35f70200,0x33f70200,
	0x31f70200,0x2ef70200,0x2cf70200,0x2af70200,
	0x27f70200,0x24f80100,0x22f80100,0x1ef90100,
	0x1cf90100,0x19fa0100,0x17fa0100,0x14fb0100,
	0x11fc0000,0x0ffc0000,0x0cfd0000,0x0afd0000,
	0x08fe0000,0x05ff0000,0x03ff0000,0x02000000,

	0x3806fc02,0x3805fc02,0x3803fd01,0x3801fe01,
	0x3700fe01,0x35ffff01,0x35fdff01,0x34fc0001,
	0x34fb0000,0x33fa0000,0x31fa0100,0x2ff90100,
	0x2df80200,0x2bf80200,0x2af70200,0x28f70200,
	0x27f70200,0x24f70300,0x22f70300,0x1ff70300,
	0x1ef70300,0x1cf70300,0x1af70300,0x18f70300,
	0x16f80300,0x13f80300,0x11f90300,0x0ef90300,
	0x0efa0200,0x0cfa0200,0x0afb0200,0x08fb0200,

	0x320bfa02,0x3309fa02,0x3208fb02,0x3206fb02,
	0x3205fb02,0x3104fc02,0x3102fc01,0x3001fd01,
	0x3000fd01,0x2ffffd01,0x2efefe01,0x2dfdfe01,
	0x2bfcff01,0x29fcff01,0x28fbff01,0x27fa0001,
	0x26fa0000,0x24f90000,0x22f90100,0x20f90100,
	0x1ff80100,0x1ef80100,0x1cf80100,0x1af80200,
	0x18f80200,0x17f80200,0x15f80200,0x12f80200,
	0x11f90200,0x0ff90200,0x0df90200,0x0cfa0200,

	0x2e0efa01,0x2f0dfa01,0x2f0bfa01,0x2e0afa01,
	0x2e09fa01,0x2e07fb01,0x2d06fb01,0x2d05fb01,
	0x2c04fb01,0x2b03fc01,0x2a02fc01,0x2a01fc01,
	0x2800fd01,0x28fffd01,0x26fefd01,0x25fefe01,
	0x24fdfe01,0x23fcfe01,0x21fcff01,0x20fbff01,
	0x1efbff01,0x1efbff00,0x1cfa0000,0x1bfa0000,
	0x19fa0000,0x18fa0000,0x17f90000,0x15f90100,
	0x14f90100,0x12f90100,0x11f90100,0x0ff90100,

	0x2b10fa00,0x2b0ffa00,0x2b0efa00,0x2b0cfa00,
	0x2b0bfa00,0x2a0afb01,0x2a09fb01,0x2908fb01,
	0x2807fb01,0x2806fb01,0x2805fb01,0x2604fc01,
	0x2503fc01,0x2502fc01,0x2401fc01,0x2301fc01,
	0x2100fd01,0x21fffd01,0x21fffd01,0x20fefd01,
	0x1dfefe01,0x1cfdfe01,0x1cfdfe00,0x1bfcfe00,
	0x19fcff00,0x19fbff00,0x17fbff00,0x16fbff00,
	0x15fbff00,0x14fb0000,0x13fa0000,0x11fa0000,

	0x2811fcff,0x2810fcff,0x280ffbff,0x280efbff,
	0x270dfb00,0x270cfb00,0x270bfb00,0x260afb00,
	0x2609fb00,0x2508fb00,0x2507fb00,0x2407fb00,
	0x2406fc00,0x2305fc00,0x2204fc00,0x2203fc00,
	0x2103fc00,0x2002fc00,0x1f01fd00,0x1e01fd00,
	0x1d00fd00,0x1dfffd00,0x1cfffd00,0x1bfefd00,
	0x1afefe00,0x19fefe00,0x18fdfe00,0x17fdfe00,
	0x16fdfe00,0x15fcff00,0x13fcff00,0x12fcff00,

	0x2512fdfe,0x2511fdff,0x2410fdff,0x240ffdff,
	0x240efcff,0x240dfcff,0x240dfcff,0x240cfcff,
	0x230bfcff,0x230afc00,0x2209fc00,0x2108fc00,
	0x2108fc00,0x2007fc00,0x2006fc00,0x2005fc00,
	0x1f05fc00,0x1e04fc00,0x1e03fc00,0x1c03fd00,
	0x1c02fd00,0x1b02fd00,0x1b01fd00,0x1a00fd00,
	0x1900fd00,0x1800fd00,0x17fffe00,0x16fffe00,
	0x16fefe00,0x14fefe00,0x13fefe00,0x13fdfe00,

	0x2212fffe,0x2211fefe,0x2211fefe,0x2110fefe,
	0x210ffeff,0x220efdff,0x210dfdff,0x210dfdff,
	0x210cfdff,0x210bfdff,0x200afdff,0x200afdff,
	0x1f09fdff,0x1f08fdff,0x1d08fd00,0x1c07fd00,
	0x1d06fd00,0x1b06fd00,0x1b05fd00,0x1c04fd00,
	0x1b04fd00,0x1a03fd00,0x1a03fd00,0x1902fd00,
	0x1802fd00,0x1801fd00,0x1701fd00,0x1600fd00,
	0x1400fe00,0x1400fe00,0x14fffe00,0x13fffe00,

	0x201200fe,0x201100fe,0x1f11fffe,0x2010fffe,
	0x1f0ffffe,0x1e0ffffe,0x1f0efeff,0x1f0dfeff,
	0x1f0dfeff,0x1e0cfeff,0x1e0bfeff,0x1d0bfeff,
	0x1d0afeff,0x1d09fdff,0x1d09fdff,0x1c08fdff,
	0x1c07fdff,0x1b07fd00,0x1b06fd00,0x1a06fd00,
	0x1a05fd00,0x1805fd00,0x1904fd00,0x1804fd00,
	0x1703fd00,0x1703fd00,0x1602fe00,0x1502fe00,
	0x1501fe00,0x1401fe00,0x1301fe00,0x1300fe00,

	0x1c1202fe,0x1c1102fe,0x1b1102fe,0x1c1001fe,
	0x1b1001fe,0x1b0f01ff,0x1b0e00ff,0x1b0e00ff,
	0x1b0d00ff,0x1a0d00ff,0x1a0c00ff,0x1a0cffff,
	0x1a0bffff,0x1a0bffff,0x1a0affff,0x180affff,
	0x1909ffff,0x1809ffff,0x1808ffff,0x1808feff,
	0x1807feff,0x1707fe00,0x1606fe00,0x1506fe00,
	0x1605fe00,0x1505fe00,0x1504fe00,0x1304fe00,
	0x1304fe00,0x1303fe00,0x1203fe00,0x1203fe00,

	0x181104ff,0x191103ff,0x191003ff,0x181003ff,
	0x180f03ff,0x190f02ff,0x190e02ff,0x180e02ff,
	0x180d02ff,0x180d01ff,0x180d01ff,0x180c01ff,
	0x180c01ff,0x180b00ff,0x170b00ff,0x170a00ff,
	0x170a00ff,0x170900ff,0x160900ff,0x160900ff,
	0x1608ffff,0x1508ffff,0x1507ff00,0x1507ff00,
	0x1407ff00,0x1306ff00,0x1306ff00,0x1305ff00,
	0x1205ff00,0x1105ff00,0x1204ff00,0x1104ff00,

	0x171005ff,0x171005ff,0x171004ff,0x170f04ff,
	0x160f04ff,0x170f03ff,0x170e03ff,0x160e03ff,
	0x160d03ff,0x160d02ff,0x160d02ff,0x160c02ff,
	0x160c02ff,0x160c02ff,0x160b01ff,0x150b01ff,
	0x150a01ff,0x150a01ff,0x150a01ff,0x140901ff,
	0x14090000,0x14090000,0x14080000,0x13080000,
	0x13070000,0x12070000,0x12070000,0x12060000,
	0x11060000,0x11060000,0x11050000,0x1105ff00,

	0x14100600,0x15100500,0x150f0500,0x150f0500,
	0x140f0500,0x150e0400,0x140e0400,0x130e0400,
	0x140d0400,0x150d0300,0x130d0300,0x140c0300,
	0x140c0300,0x140c0200,0x140b0200,0x130b0200,
	0x120b0200,0x130a0200,0x130a0200,0x130a0100,
	0x13090100,0x12090100,0x11090100,0x12080100,
	0x11080100,0x10080100,0x11070100,0x11070000,
	0x10070000,0x11060000,0x10060000,0x10060000,

	0x140f0600,0x140f0600,0x130f0600,0x140f0500,
	0x140e0500,0x130e0500,0x130e0500,0x140d0400,
	0x140d0400,0x130d0400,0x120d0400,0x130c0400,
	0x130c0300,0x130c0300,0x130b0300,0x130b0300,
	0x110b0300,0x130a0200,0x120a0200,0x120a0200,
	0x120a0200,0x12090200,0x10090200,0x11090100,
	0x11080100,0x11080100,0x10080100,0x10080100,
	0x10070100,0x10070100,0x0f070100,0x10060100,

	0x120f0701,0x130f0601,0x130e0601,0x130e0601,
	0x120e0601,0x130e0501,0x130e0500,0x130d0500,
	0x120d0500,0x120d0500,0x130c0400,0x130c0400,
	0x120c0400,0x110c0400,0x120b0400,0x120b0300,
	0x120b0300,0x120b0300,0x120a0300,0x110a0300,
	0x110a0200,0x11090200,0x11090200,0x10090200,
	0x10090200,0x10080200,0x10080200,0x10080100,
	0x0f080100,0x10070100,0x0f070100,0x0f070100

};

unsigned int lan3coefftab32_right[512] = {

	0x00000000,0x00000002,0x0000ff04,0x0000ff06,
	0x0000fe08,0x0000fd0a,0x0000fd0c,0x0000fc0f,
	0x0000fc12,0x0001fb14,0x0001fa17,0x0001fa19,
	0x0001f91c,0x0001f91f,0x0001f822,0x0001f824,
	0x0002f727,0x0002f72a,0x0002f72c,0x0002f72f,
	0x0002f731,0x0002f733,0x0002f735,0x0002f737,
	0x0002f73a,0x0002f83b,0x0002f93c,0x0002fa3d,
	0x0001fb3e,0x0001fc3f,0x0001fd40,0x0000fe40,

	0x00000000,0x00000002,0x0000ff04,0x0000ff06,
	0x0000fe08,0x0000fd0a,0x0000fd0c,0x0000fc0f,
	0x0000fc12,0x0001fb14,0x0001fa17,0x0001fa19,
	0x0001f91c,0x0001f91f,0x0001f822,0x0001f824,
	0x0002f727,0x0002f72a,0x0002f72c,0x0002f72f,
	0x0002f731,0x0002f733,0x0002f735,0x0002f737,
	0x0002f73a,0x0002f83b,0x0002f93c,0x0002fa3d,
	0x0001fb3e,0x0001fc3f,0x0001fd40,0x0000fe40,

	0x0002fc06,0x0002fb08,0x0002fb0a,0x0002fa0c,
	0x0002fa0e,0x0003f910,0x0003f912,0x0003f814,
	0x0003f816,0x0003f719,0x0003f71a,0x0003f71d,
	0x0003f71f,0x0003f721,0x0003f723,0x0003f725,
	0x0002f727,0x0002f729,0x0002f72b,0x0002f82d,
	0x0002f82e,0x0001f930,0x0001fa31,0x0000fa34,
	0x0000fb34,0x0100fc35,0x01fffd36,0x01ffff37,
	0x01fe0037,0x01fe0138,0x01fd0338,0x02fc0538,

	0x0002fa0b,0x0002fa0c,0x0002f90e,0x0002f910,
	0x0002f911,0x0002f813,0x0002f816,0x0002f817,
	0x0002f818,0x0002f81a,0x0001f81c,0x0001f81e,
	0x0001f820,0x0001f921,0x0001f923,0x0000f925,
	0x0000fa26,0x0100fa28,0x01fffb29,0x01fffc2a,
	0x01fffc2c,0x01fefd2d,0x01fefe2e,0x01fdff2f,
	0x01fd0030,0x01fd0130,0x01fc0232,0x02fc0432,
	0x02fb0532,0x02fb0633,0x02fb0833,0x02fa0933,

	0x0001fa0e,0x0001f90f,0x0001f911,0x0001f913,
	0x0001f914,0x0001f915,0x0000f918,0x0000fa18,
	0x0000fa1a,0x0000fa1b,0x0000fa1d,0x00fffb1e,
	0x01fffb1f,0x01fffb20,0x01fffc22,0x01fefc23,
	0x01fefd24,0x01fefe25,0x01fdfe27,0x01fdff28,
	0x01fd0029,0x01fc012a,0x01fc022b,0x01fc032b,
	0x01fb042d,0x01fb052d,0x01fb062e,0x01fb072e,
	0x01fa092e,0x01fa0a2f,0x01fa0b2f,0x01fa0d2f,

	0x0000fa11,0x0000fa12,0x0000fa13,0x0000fb14,
	0x00fffb16,0x00fffb16,0x00fffb17,0x00fffb19,
	0x00fffc1a,0x00fefc1c,0x00fefd1c,0x01fefd1d,
	0x01fefe1e,0x01fdfe20,0x01fdff21,0x01fdff22,
	0x01fd0023,0x01fc0124,0x01fc0124,0x01fc0225,
	0x01fc0326,0x01fc0427,0x01fb0528,0x01fb0629,
	0x01fb0729,0x01fb0829,0x01fb092a,0x01fb0a2a,
	0x00fa0b2c,0x00fa0c2b,0x00fa0e2b,0x00fa0f2c,

	0x00fffc11,0x00fffc12,0x00fffc14,0x00fffc15,
	0x00fefd16,0x00fefd17,0x00fefd18,0x00fefe19,
	0x00fefe1a,0x00fdfe1d,0x00fdff1d,0x00fdff1e,
	0x00fd001d,0x00fd011e,0x00fd0120,0x00fc0221,
	0x00fc0321,0x00fc0323,0x00fc0423,0x00fc0523,
	0x00fc0624,0x00fb0725,0x00fb0726,0x00fb0827,
	0x00fb0926,0x00fb0a26,0x00fb0b27,0x00fb0c27,
	0x00fb0d27,0xfffb0e28,0xfffb0f29,0xfffc1028,

	0x00fefd13,0x00fefd13,0x00fefe14,0x00fefe15,
	0x00fefe17,0x00feff17,0x00feff17,0x00fd0018,
	0x00fd001a,0x00fd001a,0x00fd011b,0x00fd021c,
	0x00fd021c,0x00fd031d,0x00fc031f,0x00fc041f,
	0x00fc051f,0x00fc0521,0x00fc0621,0x00fc0721,
	0x00fc0821,0x00fc0822,0x00fc0922,0x00fc0a23,
	0xfffc0b24,0xfffc0c24,0xfffc0d24,0xfffc0d25,
	0xfffc0e25,0xfffd0f25,0xfffd1025,0xfffd1125,

	0x00feff12,0x00feff14,0x00feff14,0x00fe0015,
	0x00fe0015,0x00fd0017,0x00fd0118,0x00fd0118,
	0x00fd0218,0x00fd0219,0x00fd031a,0x00fd031a,
	0x00fd041b,0x00fd041c,0x00fd051c,0x00fd061d,
	0x00fd061d,0x00fd071e,0x00fd081e,0xfffd081f,
	0xfffd091f,0xfffd0a20,0xfffd0a20,0xfffd0b21,
	0xfffd0c21,0xfffd0d21,0xfffd0d22,0xfffd0e23,
	0xfffe0f22,0xfefe1022,0xfefe1122,0xfefe1123,

	0x00fe0012,0x00fe0013,0x00fe0114,0x00fe0114,
	0x00fe0116,0x00fe0216,0x00fe0216,0x00fd0317,
	0x00fd0317,0x00fd0418,0x00fd0419,0x00fd0519,
	0x00fd051a,0x00fd061b,0x00fd061b,0x00fd071c,
	0xfffd071e,0xfffd081d,0xfffd091d,0xfffd091e,
	0xfffe0a1d,0xfffe0b1e,0xfffe0b1e,0xfffe0c1e,
	0xfffe0d1f,0xfffe0d1f,0xfffe0e1f,0xfeff0f1f,
	0xfeff0f20,0xfeff1020,0xfeff1120,0xfe001120,

	0x00fe0212,0x00fe0312,0x00fe0313,0x00fe0314,
	0x00fe0414,0x00fe0414,0x00fe0416,0x00fe0515,
	0x00fe0516,0x00fe0616,0x00fe0617,0x00fe0717,
	0xfffe0719,0xfffe0818,0xffff0818,0xffff0919,
	0xffff0919,0xffff0a19,0xffff0a1a,0xffff0b1a,
	0xffff0b1b,0xffff0c1a,0xff000c1b,0xff000d1b,
	0xff000d1b,0xff000e1b,0xff000e1c,0xff010f1c,
	0xfe01101c,0xfe01101d,0xfe02111c,0xfe02111c,

	0x00ff0411,0x00ff0411,0x00ff0412,0x00ff0512,
	0x00ff0513,0x00ff0513,0x00ff0613,0x00ff0614,
	0x00ff0714,0x00ff0715,0x00ff0715,0xffff0816,
	0xffff0816,0xff000916,0xff000917,0xff000918,
	0xff000a17,0xff000a18,0xff000b18,0xff000b18,
	0xff010c18,0xff010c19,0xff010d18,0xff010d18,
	0xff020d18,0xff020e19,0xff020e19,0xff020f19,
	0xff030f19,0xff031019,0xff031019,0xff031119,

	0x00ff0511,0x00ff0511,0x00000511,0x00000611,
	0x00000612,0x00000612,0x00000712,0x00000713,
	0x00000714,0x00000814,0x00000814,0x00000914,
	0x00000914,0xff010914,0xff010a15,0xff010a16,
	0xff010a17,0xff010b16,0xff010b16,0xff020c16,
	0xff020c16,0xff020c16,0xff020d16,0xff020d17,
	0xff030d17,0xff030e17,0xff030e17,0xff030f17,
	0xff040f17,0xff040f17,0xff041017,0xff051017,

	0x00000610,0x00000610,0x00000611,0x00000611,
	0x00000711,0x00000712,0x00010712,0x00010812,
	0x00010812,0x00010812,0x00010913,0x00010913,
	0x00010913,0x00010a13,0x00020a13,0x00020a14,
	0x00020b14,0x00020b14,0x00020b14,0x00020c14,
	0x00030c14,0x00030c15,0x00030d15,0x00030d15,
	0x00040d15,0x00040e15,0x00040e15,0x00040e16,
	0x00050f15,0x00050f15,0x00050f16,0x00051015,

	0x00000611,0x00010610,0x00010710,0x00010710,
	0x00010711,0x00010811,0x00010811,0x00010812,
	0x00010812,0x00010912,0x00020912,0x00020912,
	0x00020a12,0x00020a12,0x00020a13,0x00020a13,
	0x00030b13,0x00030b13,0x00030b14,0x00030c13,
	0x00030c13,0x00040c13,0x00040d14,0x00040d14,
	0x00040d15,0x00040d15,0x00050e14,0x00050e14,
	0x00050e15,0x00050f14,0x00060f14,0x00060f14,

	0x0001070f,0x0001070f,0x00010710,0x00010710,
	0x00010810,0x00010810,0x00020810,0x00020811,
	0x00020911,0x00020911,0x00020912,0x00020912,
	0x00020a12,0x00030a12,0x00030a12,0x00030b12,
	0x00030b12,0x00030b12,0x00040b12,0x00040c12,
	0x00040c13,0x00040c14,0x00040c14,0x00050d13,
	0x00050d13,0x00050d14,0x00050e13,0x01050e13,
	0x01060e13,0x01060e13,0x01060e14,0x01060f13
};



unsigned int lan2coefftab32[512] = {
	0x00004000,0x000140ff,0x00033ffe,0x00043ffd,0x00063efc,0xff083dfc,0x000a3bfb,0xff0d39fb,
	0xff0f37fb,0xff1136fa,0xfe1433fb,0xfe1631fb,0xfd192ffb,0xfd1c2cfb,0xfd1f29fb,0xfc2127fc,
	0xfc2424fc,0xfc2721fc,0xfb291ffd,0xfb2c1cfd,0xfb2f19fd,0xfb3116fe,0xfb3314fe,0xfa3611ff,
	0xfb370fff,0xfb390dff,0xfb3b0a00,0xfc3d08ff,0xfc3e0600,0xfd3f0400,0xfe3f0300,0xff400100,
	//counter = 1
	0x00004000,0x000140ff,0x00033ffe,0x00043ffd,0x00063efc,0xff083dfc,0x000a3bfb,0xff0d39fb,
	0xff0f37fb,0xff1136fa,0xfe1433fb,0xfe1631fb,0xfd192ffb,0xfd1c2cfb,0xfd1f29fb,0xfc2127fc,
	0xfc2424fc,0xfc2721fc,0xfb291ffd,0xfb2c1cfd,0xfb2f19fd,0xfb3116fe,0xfb3314fe,0xfa3611ff,
	0xfb370fff,0xfb390dff,0xfb3b0a00,0xfc3d08ff,0xfc3e0600,0xfd3f0400,0xfe3f0300,0xff400100,
	//counter = 2
	0xff053804,0xff063803,0xff083801,0xff093701,0xff0a3700,0xff0c3500,0xff0e34ff,0xff1033fe,
	0xff1232fd,0xfe1431fd,0xfe162ffd,0xfe182dfd,0xfd1b2cfc,0xfd1d2afc,0xfd1f28fc,0xfd2126fc,
	0xfd2323fd,0xfc2621fd,0xfc281ffd,0xfc2a1dfd,0xfc2c1bfd,0xfd2d18fe,0xfd2f16fe,0xfd3114fe,
	0xfd3212ff,0xfe3310ff,0xff340eff,0x00350cff,0x00360a00,0x01360900,0x02370700,0x03370600,
	//counter = 3
	0xff083207,0xff093206,0xff0a3205,0xff0c3203,0xff0d3103,0xff0e3102,0xfe113001,0xfe132f00,
	0xfe142e00,0xfe162dff,0xfe182bff,0xfe192aff,0xfe1b29fe,0xfe1d27fe,0xfe1f25fe,0xfd2124fe,
	0xfe2222fe,0xfe2421fd,0xfe251ffe,0xfe271dfe,0xfe291bfe,0xff2a19fe,0xff2b18fe,0xff2d16fe,
	0x002e14fe,0x002f12ff,0x013010ff,0x02300fff,0x03310dff,0x04310cff,0x05310a00,0x06310900,
	//counter = 4
	0xff0a2e09,0xff0b2e08,0xff0c2e07,0xff0e2d06,0xff0f2d05,0xff102d04,0xff122c03,0xfe142c02,
	0xfe152b02,0xfe172a01,0xfe182901,0xfe1a2800,0xfe1b2700,0xfe1d2500,0xff1e24ff,0xfe2023ff,
	0xff2121ff,0xff2320fe,0xff241eff,0x00251dfe,0x00261bff,0x00281afe,0x012818ff,0x012a16ff,
	0x022a15ff,0x032b13ff,0x032c12ff,0x052c10ff,0x052d0fff,0x062d0d00,0x072d0c00,0x082d0b00,
	//counter = 5
	0xff0c2a0b,0xff0d2a0a,0xff0e2a09,0xff0f2a08,0xff102a07,0xff112a06,0xff132905,0xff142904,
	0xff162803,0xff172703,0xff182702,0xff1a2601,0xff1b2501,0xff1c2401,0xff1e2300,0xff1f2200,
	0x00202000,0x00211f00,0x01221d00,0x01231c00,0x01251bff,0x02251aff,0x032618ff,0x032717ff,
	0x042815ff,0x052814ff,0x052913ff,0x06291100,0x072a10ff,0x082a0e00,0x092a0d00,0x0a2a0c00,
	//counter = 6
	0xff0d280c,0xff0e280b,0xff0f280a,0xff102809,0xff112808,0xff122708,0xff142706,0xff152705,
	0xff162605,0xff172604,0xff192503,0xff1a2403,0x001b2302,0x001c2202,0x001d2201,0x001e2101,
	0x011f1f01,0x01211e00,0x01221d00,0x02221c00,0x02231b00,0x03241900,0x04241800,0x04251700,
	0x052616ff,0x06261400,0x072713ff,0x08271100,0x08271100,0x09271000,0x0a280e00,0x0b280d00,
	//counter = 7
	0xff0e260d,0xff0f260c,0xff10260b,0xff11260a,0xff122609,0xff132608,0xff142508,0xff152507,
	0x00152506,0x00172405,0x00182305,0x00192304,0x001b2203,0x001c2103,0x011d2002,0x011d2002,
	0x011f1f01,0x021f1e01,0x02201d01,0x03211c00,0x03221b00,0x04221a00,0x04231801,0x05241700,
	0x06241600,0x07241500,0x08251300,0x09251200,0x09261100,0x0a261000,0x0b260f00,0x0c260e00,
	//counter = 8
	0xff0e250e,0xff0f250d,0xff10250c,0xff11250b,0x0011250a,0x00132409,0x00142408,0x00152407,
	0x00162307,0x00172306,0x00182206,0x00192205,0x011a2104,0x011b2004,0x011c2003,0x021c1f03,
	0x021e1e02,0x031e1d02,0x03201c01,0x04201b01,0x04211a01,0x05221900,0x05221801,0x06231700,
	0x07231600,0x07241500,0x08241400,0x09241300,0x0a241200,0x0b241100,0x0c241000,0x0d240f00,
	//counter = 9
	0x000e240e,0x000f240d,0x0010240c,0x0011240b,0x0013230a,0x0013230a,0x00142309,0x00152308,
	0x00162208,0x00172207,0x01182106,0x01192105,0x011a2005,0x021b1f04,0x021b1f04,0x021d1e03,
	0x031d1d03,0x031e1d02,0x041e1c02,0x041f1b02,0x05201a01,0x05211901,0x06211801,0x07221700,
	0x07221601,0x08231500,0x09231400,0x0a231300,0x0a231300,0x0b231200,0x0c231100,0x0d231000,
	//counter = 10
	0x000f220f,0x0010220e,0x0011220d,0x0012220c,0x0013220b,0x0013220b,0x0015210a,0x0015210a,
	0x01162108,0x01172008,0x01182007,0x02191f06,0x02191f06,0x021a1e06,0x031a1e05,0x031c1d04,
	0x041c1c04,0x041d1c03,0x051d1b03,0x051e1a03,0x061f1902,0x061f1902,0x07201801,0x08201701,
	0x08211601,0x09211501,0x0a211500,0x0b211400,0x0b221300,0x0c221200,0x0d221100,0x0e221000,
	//counter = 11
	0x0010210f,0x0011210e,0x0011210e,0x0012210d,0x0013210c,0x0014200c,0x0114200b,0x0115200a,
	0x01161f0a,0x01171f09,0x02171f08,0x02181e08,0x03181e07,0x031a1d06,0x031a1d06,0x041b1c05,
	0x041c1c04,0x051c1b04,0x051d1a04,0x061d1a03,0x071d1903,0x071e1803,0x081e1802,0x081f1702,
	0x091f1602,0x0a201501,0x0b1f1501,0x0b201401,0x0c211300,0x0d211200,0x0e201200,0x0e211100,
	//counter = 12
	0x00102010,0x0011200f,0x0012200e,0x0013200d,0x0013200d,0x01141f0c,0x01151f0b,0x01151f0b,
	0x01161f0a,0x02171e09,0x02171e09,0x03181d08,0x03191d07,0x03191d07,0x041a1c06,0x041b1c05,
	0x051b1b05,0x051c1b04,0x061c1a04,0x071d1903,0x071d1903,0x081d1803,0x081e1703,0x091e1702,
	0x0a1f1601,0x0a1f1502,0x0b1f1501,0x0c1f1401,0x0d201300,0x0d201300,0x0e201200,0x0f201100,
	//counter = 13
	0x00102010,0x0011200f,0x00121f0f,0x00131f0e,0x00141f0d,0x01141f0c,0x01141f0c,0x01151e0c,
	0x02161e0a,0x02171e09,0x03171d09,0x03181d08,0x03181d08,0x04191c07,0x041a1c06,0x051a1b06,
	0x051b1b05,0x061b1a05,0x061c1a04,0x071c1904,0x081c1903,0x081d1803,0x091d1703,0x091e1702,
	0x0a1e1602,0x0b1e1502,0x0c1e1501,0x0c1f1401,0x0d1f1400,0x0e1f1300,0x0e1f1201,0x0f1f1200,
	//counter = 14
	0x00111e11,0x00121e10,0x00131e0f,0x00131e0f,0x01131e0e,0x01141d0e,0x02151d0c,0x02151d0c,
	0x02161d0b,0x03161c0b,0x03171c0a,0x04171c09,0x04181b09,0x05181b08,0x05191b07,0x06191a07,
	0x061a1a06,0x071a1906,0x071b1905,0x081b1805,0x091b1804,0x091c1704,0x0a1c1703,0x0a1c1604,
	0x0b1d1602,0x0c1d1502,0x0c1d1502,0x0d1d1402,0x0e1d1401,0x0e1e1301,0x0f1e1300,0x101e1200,
	//counter = 15
	0x00111e11,0x00121e10,0x00131d10,0x01131d0f,0x01141d0e,0x01141d0e,0x02151c0d,0x02151c0d,
	0x03161c0b,0x03161c0b,0x04171b0a,0x04171b0a,0x05171b09,0x05181a09,0x06181a08,0x06191a07,
	0x07191907,0x071a1906,0x081a1806,0x081a1806,0x091a1805,0x0a1b1704,0x0a1b1704,0x0b1c1603,
	0x0b1c1603,0x0c1c1503,0x0d1c1502,0x0d1d1402,0x0e1d1401,0x0f1d1301,0x0f1d1301,0x101e1200,
	//counter = 16
};

unsigned int bicubic8coefftab32_left[512] = {

	0x40000000,0x40ff0000,0x3ffe0000,0x3efe0000,
	0x3dfd0000,0x3cfc0000,0x3bfc0000,0x39fc0000,
	0x36fc0000,0x35fb0000,0x33fb0000,0x31fb0000,
	0x2ffb0000,0x2cfb0000,0x29fc0000,0x27fc0000,
	0x24fc0000,0x21fc0000,0x1efd0000,0x1cfd0000,
	0x19fd0000,0x16fe0000,0x14fe0000,0x11fe0000,
	0x0dff0000,0x0cff0000,0x0aff0000,0x08ff0000,
	0x05000000,0x03000000,0x02000000,0x01000000,

	0x40000000,0x40ff0000,0x3ffe0000,0x3efe0000,
	0x3dfd0000,0x3cfc0000,0x3bfc0000,0x39fc0000,
	0x36fc0000,0x35fb0000,0x33fb0000,0x31fb0000,
	0x2ffb0000,0x2cfb0000,0x29fc0000,0x27fc0000,
	0x24fc0000,0x21fc0000,0x1efd0000,0x1cfd0000,
	0x19fd0000,0x16fe0000,0x14fe0000,0x11fe0000,
	0x0dff0000,0x0cff0000,0x0aff0000,0x08ff0000,
	0x05000000,0x03000000,0x02000000,0x01000000,

	0x3904ff00,0x3903ff00,0x3902ff00,0x38010000,
	0x37000000,0x36ff0000,0x35ff0000,0x34fe0000,
	0x32fe0000,0x31fd0000,0x30fd0000,0x2efc0000,
	0x2cfc0000,0x2afc0000,0x28fc0000,0x26fc0000,
	0x24fc0000,0x22fc0000,0x20fc0000,0x1efc0000,
	0x1cfc0000,0x19fc0000,0x17fc0000,0x15fd0000,
	0x12fd0000,0x11fd0000,0x0ffd0000,0x0dfe0000,
	0x0bfe0000,0x09fe0000,0x08fe0000,0x06ff0000,

	0x3209fe00,0x3407fe00,0x3306fe00,0x3305fe00,
	0x3204fe00,0x3102ff00,0x3102ff00,0x3001ff00,
	0x2f00ff00,0x2effff00,0x2cff0000,0x2bfe0000,
	0x29fe0000,0x28fe0000,0x26fd0000,0x24fd0000,
	0x23fd0000,0x21fd0000,0x20fc0000,0x1efc0000,
	0x1dfc0000,0x1bfc0000,0x19fc0000,0x17fc0000,
	0x16fc0000,0x14fc0000,0x12fc0000,0x10fd0000,
	0x0ffd0000,0x0dfd0000,0x0cfd0000,0x0afd0000,

	0x2e0cfd00,0x2e0bfd00,0x2e09fd00,0x2e08fd00,
	0x2e07fd00,0x2c06fe00,0x2c05fe00,0x2b04fe00,
	0x2b03fe00,0x2a02fe00,0x2901fe00,0x2701ff00,
	0x2700ff00,0x26ffff00,0x24ffff00,0x23ffff00,
	0x22feff00,0x20fe0000,0x1ffe0000,0x1efd0000,
	0x1dfd0000,0x1bfd0000,0x1afd0000,0x19fd0000,
	0x17fd0000,0x15fd0000,0x13fd0000,0x12fd0000,
	0x11fd0000,0x10fd0000,0x0ffd0000,0x0cfd0000,

	0x2a0efd00,0x2a0dfd00,0x2a0cfd00,0x290bfd00,
	0x290afd00,0x2909fd00,0x2908fd00,0x2807fd00,
	0x2706fd00,0x2705fd00,0x2604fe00,0x2603fe00,
	0x2502fe00,0x2402fe00,0x2401fe00,0x2200fe00,
	0x2200fe00,0x2000ff00,0x1fffff00,0x1effff00,
	0x1dfeff00,0x1cfeff00,0x1afeff00,0x19feff00,
	0x17fe0000,0x16fd0000,0x15fd0000,0x14fd0000,
	0x12fd0000,0x11fd0000,0x10fd0000,0x0ffd0000,

	0x2610fd00,0x260ffd00,0x260efd00,0x260dfd00,
	0x260cfd00,0x260bfd00,0x260afd00,0x2609fd00,
	0x2508fd00,0x2507fd00,0x2406fd00,0x2406fd00,
	0x2305fd00,0x2304fd00,0x2203fe00,0x2103fe00,
	0x2002fe00,0x1f01fe00,0x1e01fe00,0x1e00fe00,
	0x1c00fe00,0x1b00fe00,0x1afffe00,0x19ffff00,
	0x18ffff00,0x17feff00,0x16feff00,0x15feff00,
	0x14feff00,0x13feff00,0x11feff00,0x10fd0000,

	0x2411feff,0x2410feff,0x240ffeff,0x230efeff,
	0x240dfeff,0x240cfeff,0x230cfd00,0x230bfd00,
	0x230afd00,0x2309fd00,0x2208fd00,0x2108fd00,
	0x2007fd00,0x2106fd00,0x2005fd00,0x1f05fd00,
	0x1f04fd00,0x1e03fd00,0x1d03fe00,0x1c02fe00,
	0x1b02fe00,0x1a01fe00,0x1a01fe00,0x1900fe00,
	0x1800fe00,0x1700fe00,0x16fffe00,0x15fffe00,
	0x13ffff00,0x12ffff00,0x12feff00,0x11feff00,

	0x2212fffe,0x2211fffe,0x2210ffff,0x220ffeff,
	0x220efeff,0x210efeff,0x210dfeff,0x210cfeff,
	0x210bfeff,0x200bfeff,0x200afeff,0x1f09feff,
	0x1f08feff,0x1d08fe00,0x1e07fd00,0x1e06fd00,
	0x1d06fd00,0x1c05fd00,0x1b04fe00,0x1a04fe00,
	0x1a03fe00,0x1903fe00,0x1802fe00,0x1802fe00,
	0x1701fe00,0x1601fe00,0x1501fe00,0x1500fe00,
	0x1400fe00,0x1400fe00,0x13fffe00,0x12fffe00,

	0x201200fe,0x201100fe,0x1f1100fe,0x2010fffe,
	0x200ffffe,0x1f0ffffe,0x1f0efffe,0x1e0dffff,
	0x1f0cfeff,0x1e0cfeff,0x1e0bfeff,0x1e0afeff,
	0x1d0afeff,0x1d09feff,0x1c08feff,0x1b08feff,
	0x1b07feff,0x1a07feff,0x1a06feff,0x1a05feff,
	0x1805fe00,0x1904fe00,0x1704fe00,0x1703fe00,
	0x1603fe00,0x1602fe00,0x1402fe00,0x1402fe00,
	0x1401fe00,0x1301fe00,0x1201fe00,0x1200fe00,

	0x1c1202fe,0x1c1102fe,0x1b1102fe,0x1c1001fe,
	0x1b1001fe,0x1c0f01fe,0x1b0f00fe,0x1b0e00fe,
	0x1b0e00fe,0x1b0d00fe,0x1b0c00fe,0x1a0cfffe,
	0x1a0bfffe,0x1a0bfffe,0x190afffe,0x190afffe,
	0x1909fffe,0x1709ffff,0x1808ffff,0x1708feff,
	0x1707feff,0x1707feff,0x1606feff,0x1506feff,
	0x1505feff,0x1505feff,0x1404feff,0x1404feff,
	0x1404feff,0x1303feff,0x1203feff,0x1202feff,

	0x191104fe,0x191104fe,0x191003fe,0x191003fe,
	0x171003fe,0x180f03fe,0x180f02fe,0x180e02fe,
	0x180e02fe,0x180d01fe,0x180d01fe,0x180d01fe,
	0x170c01fe,0x160c01fe,0x170b00fe,0x170b00fe,
	0x160a00fe,0x160a00fe,0x160a00fe,0x150900fe,
	0x1509fffe,0x1508fffe,0x1508fffe,0x1408fffe,
	0x1407fffe,0x1307ffff,0x1306ffff,0x1206ffff,
	0x1206ffff,0x1205ffff,0x1205ffff,0x1104feff,

	0x161006ff,0x161005ff,0x161005ff,0x160f05ff,
	0x160f04ff,0x150f04ff,0x150e04ff,0x150e04ff,
	0x150e03ff,0x150d03ff,0x150d03ff,0x150d02ff,
	0x140c02ff,0x150c02fe,0x150c02fe,0x150b02fe,
	0x140b01fe,0x140b01fe,0x140a01fe,0x140a01fe,
	0x140a01fe,0x130900fe,0x130900fe,0x130900fe,
	0x130800fe,0x120800fe,0x120800fe,0x120700fe,
	0x120700fe,0x1107fffe,0x1106fffe,0x1106fffe,

	0x140f0700,0x140f0600,0x140f0600,0x140f0600,
	0x140e0600,0x130e0500,0x140e05ff,0x130e05ff,
	0x140d05ff,0x130d04ff,0x130d04ff,0x120d04ff,
	0x130c04ff,0x130c03ff,0x130c03ff,0x120c03ff,
	0x120b03ff,0x120b02ff,0x120b02ff,0x120a02ff,
	0x120a02ff,0x110a02ff,0x110a01ff,0x120901ff,
	0x100901ff,0x100901ff,0x110801ff,0x110801ff,
	0x100800ff,0x100800ff,0x100700ff,0x100700fe,

	0x120f0701,0x120e0701,0x120e0701,0x120e0701,
	0x120e0600,0x110e0600,0x120d0600,0x120d0600,
	0x120d0500,0x120d0500,0x110d0500,0x110c0500,
	0x110c0500,0x110c0400,0x110c0400,0x110b04ff,
	0x110b04ff,0x110b04ff,0x110b03ff,0x110b03ff,
	0x110a03ff,0x110a03ff,0x100a03ff,0x110a02ff,
	0x100902ff,0x100902ff,0x100902ff,0x0f0902ff,
	0x0e0902ff,0x100801ff,0x0f0801ff,0x0f0801ff,

	0x100e0802,0x100e0802,0x110e0702,0x110d0701,
	0x110d0701,0x100d0701,0x100d0701,0x110d0601,
	0x110d0601,0x110c0601,0x110c0601,0x100c0600,
	0x100c0500,0x100c0500,0x100c0500,0x100b0500,
	0x100b0500,0x100b0400,0x100b0400,0x0f0b0400,
	0x100a0400,0x0f0a0400,0x0f0a0400,0x0f0a0300,
	0x0f0a03ff,0x0f0903ff,0x0f0903ff,0x0f0903ff,
	0x0f0903ff,0x0f0902ff,0x0f0902ff,0x0f0802ff

};
unsigned int bicubic8coefftab32_right[512] = {

	0x00000000,0x00000001,0x00000003,0x00000004,
	0x00000006,0x0000ff09,0x0000ff0a,0x0000ff0c,
	0x0000ff0f,0x0000fe12,0x0000fe14,0x0000fe16,
	0x0000fd19,0x0000fd1c,0x0000fd1e,0x0000fc21,
	0x0000fc24,0x0000fc27,0x0000fc29,0x0000fb2c,
	0x0000fb2f,0x0000fb31,0x0000fb33,0x0000fb36,
	0x0000fc38,0x0000fc39,0x0000fc3b,0x0000fc3d,
	0x0000fd3e,0x0000fe3f,0x0000fe40,0x0000ff40,

	0x00000000,0x00000001,0x00000003,0x00000004,
	0x00000006,0x0000ff09,0x0000ff0a,0x0000ff0c,
	0x0000ff0f,0x0000fe12,0x0000fe14,0x0000fe16,
	0x0000fd19,0x0000fd1c,0x0000fd1e,0x0000fc21,
	0x0000fc24,0x0000fc27,0x0000fc29,0x0000fb2c,
	0x0000fb2f,0x0000fb31,0x0000fb33,0x0000fb36,
	0x0000fc38,0x0000fc39,0x0000fc3b,0x0000fc3d,
	0x0000fd3e,0x0000fe3f,0x0000fe40,0x0000ff40,

	0x0000ff05,0x0000ff06,0x0000fe08,0x0000fe09,
	0x0000fe0b,0x0000fe0d,0x0000fd0f,0x0000fd11,
	0x0000fd13,0x0000fd15,0x0000fc17,0x0000fc1a,
	0x0000fc1c,0x0000fc1e,0x0000fc20,0x0000fc22,
	0x0000fc24,0x0000fc26,0x0000fc28,0x0000fc2a,
	0x0000fc2c,0x0000fc2f,0x0000fd30,0x0000fd31,
	0x0000fe33,0x0000fe34,0x0000ff35,0x0000ff36,
	0x00000037,0x00000138,0x00ff0239,0x00ff0339,

	0x0000fe09,0x0000fd0a,0x0000fd0c,0x0000fd0d,
	0x0000fd0f,0x0000fd11,0x0000fc12,0x0000fc14,
	0x0000fc16,0x0000fc18,0x0000fc19,0x0000fc1b,
	0x0000fc1d,0x0000fc1e,0x0000fc21,0x0000fd22,
	0x0000fd23,0x0000fd25,0x0000fd27,0x0000fe28,
	0x0000fe29,0x0000fe2b,0x0000ff2c,0x00ffff2f,
	0x00ff002f,0x00ff0130,0x00ff0231,0x00ff0232,
	0x00fe0432,0x00fe0533,0x00fe0633,0x00fe0734,

	0x0000fd0c,0x0000fd0d,0x0000fd0f,0x0000fd10,
	0x0000fd11,0x0000fd13,0x0000fd14,0x0000fd16,
	0x0000fd17,0x0000fd19,0x0000fd1b,0x0000fd1c,
	0x0000fd1d,0x0000fd1f,0x0000fe20,0x0000fe21,
	0x00fffe24,0x00ffff24,0x00ffff25,0x00ffff27,
	0x00ff0027,0x00ff0128,0x00fe012a,0x00fe022a,
	0x00fe032b,0x00fe042c,0x00fe052d,0x00fe062d,
	0x00fd072e,0x00fd082e,0x00fd092e,0x00fd0b2f,

	0x0000fd0e,0x0000fd0f,0x0000fd10,0x0000fd12,
	0x0000fd13,0x0000fd14,0x0000fd15,0x0000fd17,
	0x0000fe18,0x00fffe1a,0x00fffe1b,0x00fffe1c,
	0x00fffe1e,0x00ffff1e,0x00ffff1f,0x00ff0021,
	0x00fe0022,0x00fe0023,0x00fe0124,0x00fe0224,
	0x00fe0226,0x00fe0326,0x00fe0427,0x00fd0528,
	0x00fd0628,0x00fd0729,0x00fd0829,0x00fd0929,
	0x00fd0a2a,0x00fd0b2a,0x00fd0c2a,0x00fd0d2a,

	0x0000fd10,0x0000fd11,0x00fffe12,0x00fffe13,
	0x00fffe14,0x00fffe15,0x00fffe16,0x00fffe17,
	0x00ffff18,0x00ffff19,0x00feff1c,0x00fe001b,
	0x00fe001d,0x00fe001e,0x00fe011e,0x00fe011f,
	0x00fe0220,0x00fe0321,0x00fe0322,0x00fd0423,
	0x00fd0524,0x00fd0624,0x00fd0626,0x00fd0725,
	0x00fd0825,0x00fd0926,0x00fd0a26,0x00fd0b26,
	0x00fd0c26,0x00fd0d26,0x00fd0e27,0x00fd0f27,

	0x00fffe11,0x00fffe12,0x00fffe13,0x00ffff14,
	0x00ffff14,0x00feff16,0x00feff17,0x00fe0017,
	0x00fe0018,0x00fe0019,0x00fe011a,0x00fe011b,
	0x00fe021c,0x00fe021c,0x00fe031d,0x00fd031f,
	0x00fd041f,0x00fd0520,0x00fd0520,0x00fd0621,
	0x00fd0721,0x00fd0822,0x00fd0822,0x00fd0923,
	0x00fd0a23,0x00fd0b23,0x00fd0b25,0x00fe0c24,
	0x00fe0d24,0x00fe0e24,0x00fe0f24,0x00fe1024,

	0x00feff12,0x00feff13,0x00feff13,0x00fe0014,
	0x00fe0015,0x00fe0016,0x00fe0116,0x00fe0117,
	0x00fe0118,0x00fe0218,0x00fe0219,0x00fe031a,
	0x00fe031b,0x00fe041b,0x00fd041d,0x00fd051d,
	0x00fd061d,0x00fd061f,0x00fe071e,0x00fe081e,
	0x00fe081f,0x00fe091f,0x00fe0a20,0x00fe0a20,
	0x00fe0b21,0x00fe0c21,0x00fe0d21,0x00fe0d22,
	0x00fe0e22,0x00fe0f21,0x00ff1021,0x00ff1022,

	0x00fe0012,0x00fe0013,0x00fe0113,0x00fe0114,
	0x00fe0115,0x00fe0215,0x00fe0216,0x00fe0217,
	0x00fe0317,0x00fe0318,0x00fe0418,0x00fe0419,
	0x00fe0519,0x00fe051a,0x00fe061b,0x00fe071b,
	0x00fe071c,0x00fe081c,0x00fe081d,0x00fe091d,
	0x00fe0a1d,0x00fe0a1d,0x00fe0b1e,0x00fe0c1e,
	0x00ff0c1e,0x00ff0d1e,0x00ff0e1f,0x00ff0e1f,
	0x00ff0f1f,0x00ff0f20,0x0000101f,0x0000111f,

	0x00fe0212,0x00fe0312,0x00fe0313,0x00fe0314,
	0x00fe0414,0x00fe0414,0x00fe0515,0x00fe0516,
	0x00fe0516,0x00fe0616,0x00fe0617,0x00fe0718,
	0x00fe0719,0x00fe0818,0x00ff0819,0x00ff0918,
	0x00ff0919,0x00ff0a19,0x00ff0a19,0x00ff0b1a,
	0x00ff0b1b,0x00ff0c1a,0x00000c1b,0x00000d1b,
	0x00000d1c,0x00000e1b,0x00000e1d,0x00010f1b,
	0x00010f1b,0x0001101c,0x0001101d,0x0002111c,

	0x00fe0412,0x00fe0412,0x00ff0512,0x00ff0512,
	0x00ff0613,0x00ff0613,0x00ff0614,0x00ff0714,
	0x00ff0714,0x00ff0815,0x00ff0815,0x00ff0815,
	0x00ff0916,0x00000916,0x00000a16,0x00000a16,
	0x00000a18,0x00000b17,0x00000b17,0x00010c17,
	0x00010c18,0x00010d18,0x00010d18,0x00010d19,
	0x00020e18,0x00020e18,0x00020f18,0x00030f18,
	0x00030f18,0x00031018,0x00031018,0x00041119,

	0x00ff0610,0x00ff0611,0x00ff0611,0x00ff0711,
	0x00000711,0x00000712,0x00000812,0x00000812,
	0x00000813,0x00000913,0x00000913,0x00000914,
	0x00010a14,0x00010a14,0x00010a14,0x00010b14,
	0x00010b16,0x00020b15,0x00020c15,0x00020c15,
	0x00020c15,0x00020d17,0x00030d16,0x00030d16,
	0x00030e16,0x00040e16,0x00040e16,0x00040f16,
	0x00040f16,0x00050f17,0x00051017,0x00051017,

	0x0000070f,0x00000710,0x00000710,0x00000710,
	0x00000810,0x00010811,0x00010811,0x00010911,
	0x00010911,0x00010913,0x00010913,0x00020a12,
	0x00020a12,0x00020a13,0x00020b12,0x00020b13,
	0x00030b13,0x00030c13,0x00030c13,0x00030c14,
	0x00040c13,0x00040d13,0x00040d14,0x00040d14,
	0x00050e14,0x00050e14,0x00050e14,0x00050e14,
	0x00060f14,0x00060f14,0x00060f15,0x00061015,

	0x0001070f,0x0001080f,0x0001080f,0x0001080f,
	0x00010811,0x00020910,0x00020910,0x00020910,
	0x00020911,0x00020a10,0x00030a10,0x00030a11,
	0x00030a11,0x00030b11,0x00030b11,0x00040b12,
	0x00040b12,0x00040c11,0x00040c12,0x00040c12,
	0x00050c12,0x00050c12,0x00050d12,0x00050d12,
	0x00060d13,0x00060d13,0x00060e12,0x00060e13,
	0x00070e13,0x00070e13,0x00070f13,0x00070f13,

	0x0002080e,0x0002080e,0x0002080e,0x00020810,
	0x0002090f,0x0003090f,0x0003090f,0x0003090f,
	0x0003090f,0x00030a0f,0x00030a0f,0x00040a10,
	0x00040a11,0x00040b10,0x00040b10,0x00040b11,
	0x00050b10,0x00050b11,0x00050c10,0x00050c11,
	0x00050c11,0x00060c11,0x00060c11,0x00060d11,
	0x00060d12,0x00070d12,0x00070d12,0x00070e11,
	0x00070e11,0x00070e12,0x00080e11,0x00080e12

};

unsigned int bicubic4coefftab32[512] = {
    0x00004000,0x000140ff,0x00033ffe,0x00043ffd,0x00063dfd,0xff083dfc,0xff0a3bfc,0xff0c39fc,
    0xff0e37fc,0xfe1136fb,0xfe1433fb,0xfe1631fb,0xfd192ffb,0xfd1c2cfb,0xfd1e29fc,0xfc2127fc,
    0xfc2424fc,0xfc2721fc,0xfc291efd,0xfb2c1cfd,0xfb2f19fd,0xfb3116fe,0xfb3314fe,0xfb3611fe,
    0xfc370eff,0xfc390cff,0xfc3b0aff,0xfc3d08ff,0xfd3d0600,0xfd3f0400,0xfe3f0300,0xff400100,

    0x00004000,0x000140ff,0x00033ffe,0x00043ffd,0x00063dfd,0xff083dfc,0xff0a3bfc,0xff0c39fc,
    0xff0e37fc,0xfe1136fb,0xfe1433fb,0xfe1631fb,0xfd192ffb,0xfd1c2cfb,0xfd1e29fc,0xfc2127fc,
    0xfc2424fc,0xfc2721fc,0xfc291efd,0xfb2c1cfd,0xfb2f19fd,0xfb3116fe,0xfb3314fe,0xfb3611fe,
    0xfc370eff,0xfc390cff,0xfc3b0aff,0xfc3d08ff,0xfd3d0600,0xfd3f0400,0xfe3f0300,0xff400100,

    0xfe053904,0xfe063903,0xfe083901,0xfe0a3800,0xfd0b3800,0xfe0d36ff,0xfd0f35ff,0xfd1134fe,
    0xfd1332fe,0xfd1531fd,0xfc1730fd,0xfc1a2efc,0xfc1c2cfc,0xfc1e2afc,0xfc2028fc,0xfc2226fc,
    0xfc2424fc,0xfc2622fc,0xfc2820fc,0xfc2a1efc,0xfc2c1cfc,0xfc2e1afc,0xfd3017fc,0xfd3115fd,
    0xfe3213fd,0xfe3411fd,0xff350ffd,0xff360dfe,0x00370bfe,0x013809fe,0x023808fe,0x033806ff,

    0xfd093208,0xfd0a3207,0xfd0c3205,0xfd0d3204,0xfc0f3203,0xfc113102,0xfc123002,0xfc143000,
    0xfc152f00,0xfc172d00,0xfc192cff,0xfc1b2bfe,0xfc1d29fe,0xfc1e28fe,0xfc2027fd,0xfd2125fd,
    0xfd2323fd,0xfd2521fd,0xfd2720fc,0xfe281efc,0xfe291dfc,0xfe2b1bfc,0xff2c19fc,0x002d17fc,
    0x002e16fc,0x012f14fc,0x022f12fd,0x023110fd,0x03310ffd,0x05310dfd,0x06320bfd,0x07320afd,

    0xfc0c2d0b,0xfc0d2d0a,0xfc0e2d09,0xfc102d07,0xfc112c07,0xfc132c05,0xfc142c04,0xfc162b03,
    0xfc172a03,0xfc192a01,0xfc1a2901,0xfd1b2800,0xfd1c2700,0xfd1e2500,0xfe1f24ff,0xfe2023ff,
    0xfe2222fe,0xff2320fe,0xff241ffe,0x00251efd,0x00271cfd,0x01271bfd,0x01281afd,0x022918fd,
    0x032a16fd,0x032b15fd,0x042b14fd,0x052c12fd,0x072c10fd,0x082c0ffd,0x092c0efd,0x0a2c0dfd,

    0xfd0d290d,0xfd0e290c,0xfd0f290b,0xfd11280a,0xfd122809,0xfd132808,0xfd142807,0xfd162706,
    0xfd172705,0xfd192604,0xfe1a2503,0xfe1b2502,0xfe1c2402,0xfe1d2302,0xff1e2201,0xff1f2101,
    0x00202000,0x00211f00,0x01221eff,0x02221dff,0x02241cfe,0x03241bfe,0x042519fe,0x042618fe,
    0x052617fe,0x062716fd,0x072714fe,0x082713fe,0x092812fd,0x0a2811fd,0x0b2810fd,0x0c280ffd,

    0xfd0f250f,0xfd10250e,0xfd11250d,0xfd12250c,0xfd13250b,0xfe13250a,0xfe152409,0xfe162408,
    0xfe172308,0xff182306,0xff192305,0xff1a2205,0x001b2104,0x001c2103,0x001d2003,0x011e1f02,
    0x011f1f01,0x021f1e01,0x03201d00,0x03211c00,0x04211b00,0x05221aff,0x062219ff,0x062318ff,
    0x082316ff,0x082316ff,0x092415fe,0x0a2414fe,0x0b2413fe,0x0c2412fe,0x0d2411fe,0x0e2410fe,

    0xfe10230f,0xfe11230e,0xfe12220e,0xfe13220d,0xfe14220c,0xff14220b,0xff15220a,0xff16210a,
    0x00162109,0x00172108,0x00182008,0x01192006,0x011a1f06,0x021a1f05,0x021b1e05,0x031c1d04,
    0x031d1d03,0x041d1c03,0x041e1b03,0x051e1b02,0x061f1a01,0x06201901,0x07201801,0x08201800,
    0x09201700,0x0a211500,0x0b2115ff,0x0c2114ff,0x0c2213ff,0x0d2212ff,0x0e2211ff,0x0f2211fe,

    0xff112010,0xff12200f,0xff12200f,0xff13200e,0x0013200d,0x0014200c,0x00151f0c,0x00161f0b,
    0x01161f0a,0x01171e0a,0x02171e09,0x02181e08,0x03191d07,0x03191d07,0x041a1c06,0x041b1c05,
    0x051b1b05,0x051c1b04,0x061c1a04,0x071c1a03,0x071d1903,0x081e1802,0x091d1802,0x091e1702,
    0x0a1f1601,0x0b1f1600,0x0b1f1501,0x0c201400,0x0d1f1400,0x0e2013ff,0x0f1f1200,0x102011ff,

    0x00111f10,0x00121e10,0x00131e0f,0x00131e0f,0x01131e0e,0x01141e0d,0x01151d0d,0x02151d0c,
    0x02161d0b,0x03161d0a,0x03171c0a,0x04171c09,0x04181c08,0x05181b08,0x05191b07,0x06191a07,
    0x061a1a06,0x071a1906,0x071b1905,0x081b1805,0x081c1804,0x091c1704,0x0a1c1703,0x0a1d1603,
    0x0b1d1602,0x0c1d1502,0x0c1d1502,0x0d1e1401,0x0e1d1401,0x0e1e1301,0x0f1e1300,0x101e1200,

    0x02111c11,0x02121c10,0x02131b10,0x03131b0f,0x03131b0f,0x03141b0e,0x04141b0d,0x04151a0d,
    0x05151a0c,0x05151a0c,0x05161a0b,0x0616190b,0x0616190b,0x0716190a,0x0717180a,0x08171809,
    0x08181808,0x09181708,0x09181708,0x0a181707,0x0a191607,0x0b191606,0x0b1a1605,0x0c1a1505,
    0x0c1a1505,0x0d1a1504,0x0d1b1404,0x0e1b1403,0x0f1b1303,0x0f1b1303,0x101b1302,0x101c1202,

    0x04111a11,0x04121911,0x04131910,0x0513190f,0x0513190f,0x0513190f,0x0613190e,0x0614180e,
    0x0714180d,0x0714180d,0x0715180c,0x0814180c,0x0815170c,0x0816170b,0x0916170a,0x0916170a,
    0x0a16160a,0x0a171609,0x0a171609,0x0b171608,0x0b171509,0x0c171508,0x0c181507,0x0d171507,
    0x0d181407,0x0e181406,0x0e181406,0x0e191306,0x0f191305,0x0f191305,0x10191304,0x10191205,

    0x05121811,0x06121810,0x06121810,0x06131710,0x0713170f,0x0713170f,0x0713170f,0x0813170e,
    0x0813170e,0x0814170d,0x0914160d,0x0914160d,0x0914160d,0x0a14160c,0x0a15160b,0x0a15150c,
    0x0b15150b,0x0b15150b,0x0b16150a,0x0c15150a,0x0c16140a,0x0d161409,0x0d161409,0x0d171408,
    0x0e161408,0x0e171308,0x0e171308,0x0f171307,0x0f171307,0x10171306,0x10181206,0x10181206,

    0x07111711,0x07121710,0x07121611,0x08121610,0x08121610,0x0813160f,0x0912160f,0x0913160e,
    0x0913160e,0x0913160e,0x0a14150d,0x0a14150d,0x0a14150d,0x0b14150c,0x0b14150c,0x0b14150c,
    0x0c14140c,0x0c15140b,0x0c15140b,0x0c15140b,0x0d15140a,0x0d15140a,0x0d15140a,0x0e161309,
    0x0e161309,0x0e161309,0x0f151309,0x0f161308,0x0f161209,0x10161208,0x10161208,0x10171207,

    0x0a111411,0x0b111410,0x0b111410,0x0b111410,0x0b111410,0x0b12140f,0x0b12140f,0x0c12130f,
    0x0c12130f,0x0c12130f,0x0c12130f,0x0c12130f,0x0d12130e,0x0d12130e,0x0d12130e,0x0d13130d,
    0x0d13130d,0x0d13130d,0x0e12130d,0x0e13120d,0x0e13120d,0x0e13120d,0x0e13120d,0x0f13120c,
    0x0f13120c,0x0f13120c,0x0f14120b,0x0f14120b,0x1013120b,0x1013120b,0x1013120b,0x1014110b,

    0x0c111310,0x0c111310,0x0c111310,0x0d101310,0x0d101310,0x0d111210,0x0d111210,0x0d111210,
    0x0d12120f,0x0d12120f,0x0d12120f,0x0d12120f,0x0e11120f,0x0e12120e,0x0e12120e,0x0e12120e,
    0x0e12120e,0x0e12120e,0x0e12120e,0x0e12120e,0x0f11120e,0x0f12120d,0x0f12120d,0x0f12120d,
    0x0f12120d,0x0f12110e,0x0f12110e,0x0f12110e,0x1012110d,0x1012110d,0x1013110c,0x1013110c,

};

