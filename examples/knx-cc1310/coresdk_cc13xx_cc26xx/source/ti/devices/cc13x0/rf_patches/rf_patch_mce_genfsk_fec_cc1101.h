/******************************************************************************
*  Filename:       rf_patch_mce_genfsk_fec_cc1101.h
*  Revised:        $Date: 2019-01-31 15:04:25 +0100 (to, 31 jan 2019) $
*  Revision:       $Revision: 18842 $
*
*  Description: RF core patch for CC13x0 Generic FSK (with CC1101-compatible FEC and interleaver)
*
*  Copyright (c) 2015-2019, Texas Instruments Incorporated
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions are met:
*
*  1) Redistributions of source code must retain the above copyright notice,
*     this list of conditions and the following disclaimer.
*
*  2) Redistributions in binary form must reproduce the above copyright notice,
*     this list of conditions and the following disclaimer in the documentation
*     and/or other materials provided with the distribution.
*
*  3) Neither the name of the ORGANIZATION nor the names of its contributors may
*     be used to endorse or promote products derived from this software without
*     specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
*  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
*  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
*  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
*  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
*  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
*  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
*  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
*  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
*  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/

#ifndef _RF_PATCH_MCE_GENFSK_FEC_CC1101_H
#define _RF_PATCH_MCE_GENFSK_FEC_CC1101_H

#include <stdint.h>
#include "../inc/hw_types.h"

#ifndef MCE_PATCH_TYPE
    #define MCE_PATCH_TYPE static const uint32_t
#endif

#ifndef PATCH_FUN_SPEC
    #define PATCH_FUN_SPEC static inline
#endif

#ifndef RFC_MCERAM_BASE
    #define RFC_MCERAM_BASE 0x21008000
#endif

#ifndef MCE_PATCH_MODE
    #define MCE_PATCH_MODE 0
#endif

MCE_PATCH_TYPE patchGenfskFecMce[471] =
{
    0x2fcf6054,
    0x030c0f9d,
    0x070c680a,
    0xff00003f,
    0x07c0d0d0,
    0x130007e0,
    0x50433221,
    0x10037162,
    0x53403122,
    0x00017261,
    0x01000010,
    0x00021000,
    0x02000020,
    0x00042000,
    0x04000040,
    0x00084000,
    0x08000080,
    0x00018000,
    0x00200018,
    0x00200003,
    0x00290011,
    0x0029000a,
    0x00320003,
    0x00320018,
    0x003b000a,
    0x003b0011,
    0x00070003,
    0x00003d1f,
    0x04000000,
    0x0000000f,
    0x000b0387,
    0x004340f4,
    0x80828000,
    0x00000670,
    0x0510091e,
    0x00050054,
    0x3e100200,
    0x00000061,
    0x3030002f,
    0x0000027f,
    0x00000000,
    0x0000aa00,
    0x72487220,
    0x7303a32d,
    0x72037305,
    0x73067304,
    0x73767204,
    0xc7c07276,
    0x00018001,
    0x90109001,
    0x90010801,
    0x720d720c,
    0xb0c0720e,
    0xb0f07100,
    0x7218a0c0,
    0x10208132,
    0x06703952,
    0x16300020,
    0x14011101,
    0x60896c01,
    0x60f0608c,
    0x6089631d,
    0x60896089,
    0x1210608a,
    0x730f7220,
    0x73117310,
    0x00108181,
    0xb0709180,
    0x607f6069,
    0x607f6400,
    0x67a8c030,
    0xc282c341,
    0x1820c470,
    0x6e236f13,
    0x16121611,
    0x78306892,
    0x78409ab0,
    0x78509ac0,
    0x83009ad0,
    0xc4829ae0,
    0x1820c5a0,
    0x120340a7,
    0x16126e23,
    0x607f68a4,
    0x94908160,
    0x39808140,
    0x10012a70,
    0x84321611,
    0xc0f38444,
    0xc200c0f5,
    0x40cc1c01,
    0x1c10c100,
    0x4cc440c2,
    0x18031013,
    0x1a131830,
    0x39121a10,
    0x60cc68bf,
    0x60cc13f3,
    0x101513f3,
    0x1850c100,
    0x1a101a15,
    0x68ca3914,
    0x7100b0d8,
    0xa0d8b108,
    0xb480b200,
    0xb013b003,
    0xb012b002,
    0xb0d07229,
    0xb1007100,
    0x92908140,
    0xb1007100,
    0x22f08140,
    0x13f044dc,
    0x40e81c03,
    0x94929293,
    0xb1007100,
    0x94949295,
    0x71006536,
    0xb0d0b100,
    0x7000a480,
    0x7310730f,
    0x67a8c040,
    0x91c0c000,
    0xc0b7c136,
    0xc009c008,
    0xc00bc00a,
    0xc00dc00c,
    0xc10e788f,
    0x9760c030,
    0x9780c000,
    0xb48464a8,
    0x10acc009,
    0x10f010bd,
    0x1e003980,
    0x81e0411c,
    0x41122210,
    0x611581a0,
    0x061010f0,
    0x6523391f,
    0x654c653c,
    0x1ce91619,
    0x6106450d,
    0x654c653c,
    0x1ce91619,
    0x6556451c,
    0x1081607f,
    0x6f121471,
    0x41292200,
    0x10233982,
    0x311a0613,
    0x1023003a,
    0x06133913,
    0x003b311b,
    0x39481028,
    0x700006f8,
    0x652381a0,
    0x1ce91619,
    0x70004536,
    0x14921062,
    0x10c16f23,
    0x41440431,
    0x61451210,
    0x10d113f0,
    0x414a0431,
    0x614b1211,
    0x700013f1,
    0xb10192c1,
    0x7100b0d1,
    0x92c0b101,
    0xb1017100,
    0x7000a0d1,
    0xc030a0d1,
    0xc0409760,
    0xb0f19780,
    0x7100b0c1,
    0xa0c1b0f1,
    0xa0037276,
    0x7000a002,
    0xb016b006,
    0xb014b004,
    0xb012b002,
    0x78628400,
    0x81430420,
    0x2a733983,
    0xc1f29473,
    0x31621832,
    0x31511021,
    0x00200012,
    0x10309400,
    0x39301610,
    0x417f2210,
    0x31501220,
    0x31801003,
    0x93501670,
    0x12041202,
    0x41912273,
    0x97c08430,
    0x1a8287d2,
    0x97c08450,
    0x1a8487d4,
    0x22636193,
    0x8440419e,
    0x87d097c0,
    0x14021a80,
    0x97c08460,
    0x1a8087d0,
    0x61aa1404,
    0x78718440,
    0x97c00410,
    0x1a4287d2,
    0x78718460,
    0x97c00410,
    0x1a4487d4,
    0x31543152,
    0x06333963,
    0x38321613,
    0x31823834,
    0x31843982,
    0x95720042,
    0x90307810,
    0x78209050,
    0x90609040,
    0x8ae2b205,
    0x93028303,
    0xc00bc00c,
    0x31808140,
    0x39403980,
    0xc0f38141,
    0xc0140431,
    0xc0021441,
    0x69cc1412,
    0x847d3122,
    0x140dc010,
    0x142d312d,
    0x318e8ace,
    0x397e311e,
    0x31498ac9,
    0x39493979,
    0x109a3129,
    0x720d720c,
    0xb101720e,
    0x7100b0d1,
    0xa0d1b072,
    0xb06ea04e,
    0xb06cb011,
    0x7276978a,
    0xa764b764,
    0x9762c662,
    0xc088c04f,
    0x8ab166b0,
    0x45fa22f1,
    0x22f18ad1,
    0x626445fa,
    0xb0737100,
    0x80b7b760,
    0x46312207,
    0x8ab1a760,
    0x420b22f1,
    0x420b2237,
    0x80b0b113,
    0x46062230,
    0x22e16219,
    0x8090421e,
    0x421e2250,
    0x8210b0f5,
    0x41fa2220,
    0xb7649789,
    0xb0f6a764,
    0x978d61fa,
    0xa764b764,
    0x61fab0f6,
    0x22f08ad0,
    0x2237422a,
    0xb075422a,
    0x80b0b113,
    0x46242230,
    0x61fab087,
    0x42f322d1,
    0x22208090,
    0x66ae42f3,
    0x978f61fa,
    0xa0e3a0e0,
    0xa0c5a0c2,
    0xb0c1b0f1,
    0x7100a0c6,
    0xb0f19788,
    0x8961b88f,
    0x18018570,
    0x8a609551,
    0xa4888a71,
    0xc062a487,
    0x1c211801,
    0x14124e51,
    0x62524a4f,
    0x42521c01,
    0xb4874e51,
    0xb4886252,
    0xb041b061,
    0x22e08ad0,
    0x8210425a,
    0x45de2220,
    0xb04d7100,
    0xb04fb06d,
    0xb074b06f,
    0x8a73b201,
    0x70008552,
    0xb0737100,
    0x80b7b760,
    0x46832207,
    0x46992237,
    0x8ab1a760,
    0x427c22e1,
    0x22508090,
    0xb0f5427c,
    0x22208210,
    0x978d4264,
    0xa764b764,
    0x6264b0f6,
    0x42f322d1,
    0x22208090,
    0x66ae42f3,
    0x978f6264,
    0xa0e3a0e0,
    0xa0c5a0c2,
    0xb0c1b0f1,
    0x7100a0c6,
    0xb0f19788,
    0x8961b88f,
    0x31808570,
    0x18013d80,
    0x8a609551,
    0xa1828a71,
    0x978f6243,
    0xa0e3a0e0,
    0xa0c5a0c2,
    0xb0c1b0f1,
    0x7100a0c6,
    0xb0f19788,
    0x8961b88f,
    0x3d808570,
    0x95511801,
    0x8a918a80,
    0x6243b182,
    0x7000b0f2,
    0xb0f1b0f6,
    0xb113b110,
    0xb0f2b0f5,
    0x720d720c,
    0xb0e0720e,
    0x8ab2b0e3,
    0x42c122f2,
    0xb763b0c6,
    0x8ad062c4,
    0x42e422f0,
    0xa404b405,
    0xa429b428,
    0x3180caa0,
    0x0001caa1,
    0x94619451,
    0x31838ad3,
    0x84103983,
    0x39803180,
    0x00303183,
    0x84009410,
    0x39503150,
    0x39838ad3,
    0xc1f406f3,
    0x31841834,
    0x00403134,
    0xb0899400,
    0x42ee22e2,
    0x394a8aca,
    0x312a398a,
    0xb0c5978a,
    0xb763b0c6,
    0x22d28ab2,
    0xb0c242f2,
    0xb20f7000,
    0xa0e3a0e0,
    0xb764978e,
    0xb0f6a764,
    0xb113b110,
    0x22f08210,
    0xb0f542fc,
    0xa0048002,
    0xa001a006,
    0x72047203,
    0x67a8c050,
    0xb7647100,
    0xb0c5b0f6,
    0x7100a20f,
    0xa0c5b0f5,
    0x90307810,
    0x78209002,
    0x90609040,
    0xa20fb072,
    0x978a66b0,
    0xb0f6a764,
    0x120061f3,
    0xc06091b0,
    0x7a3067a8,
    0xc10095a0,
    0xc622c241,
    0x6e236f13,
    0x16121611,
    0xb0f86b26,
    0xa0c16564,
    0xb0d7b107,
    0x9760c070,
    0x9780c070,
    0x7100b107,
    0x7100b107,
    0xb107a0d7,
    0xc1071206,
    0xc00d78a8,
    0x31131063,
    0x677e1483,
    0x1c671616,
    0xc02f473e,
    0x78a97898,
    0xb04f120e,
    0x1206b06f,
    0x67a01060,
    0x31131013,
    0x67891493,
    0x31131063,
    0x677e1483,
    0x1c671616,
    0x0a1e474c,
    0x435f1e1e,
    0x78a97898,
    0x78a86361,
    0x162f7899,
    0x1e008150,
    0x3930434b,
    0x1cf01620,
    0x4f4b436a,
    0x10601206,
    0x101367a0,
    0x14933113,
    0x16166789,
    0x476b1c67,
    0x72036798,
    0x73057204,
    0xa0047306,
    0xc7c0a002,
    0x607f9010,
    0xb0c1b0f1,
    0xb0f17100,
    0x87f1a0c1,
    0x6e318802,
    0x6e321613,
    0x6d317000,
    0x95e16d31,
    0x6d311613,
    0x95f16d31,
    0x1efdb5b0,
    0x85d04b96,
    0x91900610,
    0x7000161d,
    0xb5b0c0f0,
    0x85d10a11,
    0x91910611,
    0x70006b99,
    0x06311001,
    0x39203121,
    0x12f10010,
    0x70001801,
    0x88409850,
    0x47a92200,
    0x7000b830
};

PATCH_FUN_SPEC void rf_patch_mce_genfsk_fec_cc1101(void)
{
#ifdef __PATCH_NO_UNROLLING
    uint32_t i;

    for (i = 0; i < 471; i++)
    {
        HWREG(RFC_MCERAM_BASE + 4 * i) = patchGenfskFecMce[i];
    }

#else
    const uint32_t* pS = patchGenfskFecMce;
    volatile unsigned long* pD = &HWREG(RFC_MCERAM_BASE);
    uint32_t t1, t2, t3, t4, t5, t6, t7, t8;
    uint32_t nIterations = 58;

    do
    {
        t1 = *pS++;
        t2 = *pS++;
        t3 = *pS++;
        t4 = *pS++;
        t5 = *pS++;
        t6 = *pS++;
        t7 = *pS++;
        t8 = *pS++;
        *pD++ = t1;
        *pD++ = t2;
        *pD++ = t3;
        *pD++ = t4;
        *pD++ = t5;
        *pD++ = t6;
        *pD++ = t7;
        *pD++ = t8;
    } while (--nIterations);

    t1 = *pS++;
    t2 = *pS++;
    t3 = *pS++;
    t4 = *pS++;
    t5 = *pS++;
    t6 = *pS++;
    t7 = *pS++;
    *pD++ = t1;
    *pD++ = t2;
    *pD++ = t3;
    *pD++ = t4;
    *pD++ = t5;
    *pD++ = t6;
    *pD++ = t7;
#endif
}

#endif
