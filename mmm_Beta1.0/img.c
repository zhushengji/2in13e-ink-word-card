// width: 250, height: 122
const unsigned char logo[] = { 0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf4,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdd,0xcf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x4c,0xa7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xaf,0xd1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xba,0xec,0xe0,0x80,0x73,0x82,0x40,0xf9,0xf3,0xcf,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfa,0xb2,0x35,0x73,0xbc,0xd1,0x1c,0x73,0x89,0xe2,0x00,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0x6d,0xda,0xe3,0x9c,0xc2,0x80,0xc3,0xc9,0xc3,0xcf,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xcd,0x5a,0xe7,0x9c,0xc2,0xc1,0x45,0xd1,0xf6,0x82,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfa,0xf2,0x7c,0xe0,0x94,0x50,0x1e,0x61,0x19,0xf3,0xfc,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xbd,0xc6,0xd0,0xaa,0x42,0xe2,0xc1,0x99,0xe2,0x59,0xc0,0xff,0xff,0xff,0xff,0xab,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0x47,0xb7,0x64,0xfe,0x40,0xa3,0xc0,0xd1,0xc3,0x83,0xc0,0xff,0xff,0xff,0xfc,0xb4,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x2b,0x2b,0x70,0x80,0x52,0xa0,0x40,0x90,0xf7,0xc7,0xc0,0xff,0xff,0xff,0xf7,0x57,0x5f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0x55,0xc6,0xf4,0xfe,0x71,0xb3,0xc1,0xf9,0xe3,0x83,0xc0,0xff,0xff,0xff,0xed,0x59,0x5f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xbe,0xfe,0xe0,0xf6,0x70,0x42,0x42,0xf9,0xf3,0x11,0xc0,0xff,0xff,0xff,0xda,0xab,0x4f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xfb,0xf4,0xf5,0xe9,0x4d,0xf7,0xd7,0xfb,0xce,0x7d,0xc0,0xff,0xff,0xff,0xb5,0x6d,0x6f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x4e,0x89,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0x6a,0xaa,0xa7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x97,0xab,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfe,0xdb,0x55,0xb3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0x5f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xaa,0xda,0xab,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfd,0x55,0x55,0x95,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfe,0xb6,0xad,0x65,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfc,0xaa,0xd5,0x64,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xf9,0x55,0x5a,0xe5,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfd,0xb6,0xab,0x64,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xf9,0xaa,0xd5,0x62,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xf9,0xab,0x5a,0x86,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfc,0xb5,0x6b,0x02,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xf8,0x55,0x55,0x06,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfc,0x5b,0x5a,0xaa,0xbf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xf8,0xaa,0xab,0x42,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfe,0x55,0xad,0x59,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfa,0xda,0xb5,0x55,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xf5,0x55,0x55,0xaa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xf6,0xad,0xaa,0xa5,0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xf9,0xb6,0xb6,0x98,0xff,0xff,0xff,0xf3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xf4,0xaa,0xa9,0x53,0x7f,0xff,0xff,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfa,0xd5,0xaa,0x2a,0x7f,0xff,0xff,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfd,0x0a,0x85,0x4a,0xff,0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfe,0xa4,0x58,0xa8,0xff,0xff,0xff,0xf4,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0x2b,0x6f,0x26,0xff,0xff,0xff,0xca,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0x91,0xb4,0xa9,0xff,0xff,0xff,0xa9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xea,0xaa,0x95,0xff,0xff,0xff,0xa5,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xf5,0x52,0x54,0xff,0xff,0xff,0x96,0xff,0xff,0xff,0xff,0xff,0xfd,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xfc,0x4a,0xaa,0x3f,0xff,0xff,0xd3,0x7f,0xd8,0x00,0x01,0xff,0xf0,0xc7,0xff,0xff,0xff,0x3f,0xfd,0xf8,0xae,0xff,0xff,0xf2,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xf2,0xa5,0x52,0xcb,0xff,0xff,0xab,0xdf,0x88,0x00,0x03,0xf1,0xe0,0x42,0xaf,0xf1,0xfe,0x1f,0xf8,0xf8,0x00,0x0f,0xff,0xf9,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xcd,0x54,0x95,0x6a,0xff,0xff,0x2b,0x7f,0x08,0x00,0x01,0xf8,0x80,0x00,0x0f,0xe0,0xfc,0x3f,0xf8,0x78,0x00,0x07,0xff,0xf1,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0x55,0x2e,0x56,0xaa,0xbf,0xff,0xcb,0xfe,0x1f,0xf0,0xff,0xf1,0x83,0x00,0x0f,0xf0,0xfc,0x3f,0xf8,0x1e,0xa0,0x07,0xff,0xf0,0xff,0x7f,0xff,0xff,0xc0,0xff,0xff,0xfe,0xb5,0xbb,0xaa,0xb6,0x91,0xff,0x6a,0xbe,0x3e,0xa0,0x83,0xf1,0x82,0x00,0xbf,0xf8,0xf0,0x53,0xfe,0x1f,0xff,0xc7,0xff,0xf1,0x40,0x3f,0xff,0xff,0xc0,0xff,0xff,0xe9,0x55,0x7f,0xdb,0x55,0x6d,0xff,0xf7,0xfc,0x38,0x00,0x01,0x80,0x43,0x41,0x4f,0x00,0x00,0x01,0xff,0x3a,0xff,0xc7,0xe9,0x00,0x00,0x3f,0xff,0xff,0xc0,0xff,0xff,0xd6,0xda,0xfe,0xea,0xaa,0xaa,0x7e,0xab,0x58,0x7c,0x00,0x01,0x80,0x23,0x00,0x0e,0x00,0x00,0x01,0xff,0xf8,0x01,0x47,0x00,0x00,0x00,0x3f,0xff,0xff,0xc0,0xff,0xff,0x55,0x55,0xeb,0xea,0xdb,0x6a,0xff,0xff,0xf8,0x78,0x51,0xb1,0x80,0x23,0x00,0x0e,0x00,0x02,0xa1,0xf2,0xf0,0x00,0xc7,0x00,0x00,0xbf,0xff,0xff,0xff,0xc0,0xff,0xff,0x56,0xab,0xbf,0xb5,0x55,0xa4,0xfd,0x6d,0x50,0xb8,0xb0,0xf1,0xf0,0xa2,0xe1,0xbe,0x3f,0xe3,0xf1,0xf0,0x3d,0x00,0x47,0x0a,0x01,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xaa,0xdb,0xfe,0xfb,0x6a,0xaa,0xff,0xff,0xf0,0x1c,0x00,0x01,0xf8,0xe2,0x00,0x0f,0x1f,0xc3,0x61,0xe0,0x1f,0xfe,0xc7,0xfe,0x11,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xed,0x63,0x6b,0xfa,0x95,0x47,0xff,0x55,0xb0,0x18,0x00,0x03,0xf1,0xe2,0x00,0x0e,0x12,0x00,0x73,0xfc,0x3f,0xff,0xc7,0xfc,0x30,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xd2,0x97,0xff,0xbd,0x54,0xbf,0xff,0xfe,0xdc,0x18,0x40,0x03,0xf8,0xe2,0x00,0x0c,0x00,0x00,0x21,0xfe,0x3d,0x01,0xc7,0xfc,0x70,0x1f,0xff,0xff,0xff,0xc0,0xff,0xff,0xef,0x7e,0xde,0xee,0xa3,0xff,0xff,0xb6,0x3f,0x1c,0xf1,0xe3,0xf9,0xe2,0xa1,0xde,0x00,0x02,0xe3,0xfe,0x38,0x00,0xc7,0xf8,0x70,0x07,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xfb,0xfb,0xfd,0x5b,0xff,0xff,0xfd,0x5f,0x18,0x51,0xe3,0xf0,0x22,0x00,0x0e,0x0f,0xc7,0xe3,0xfe,0x38,0x00,0xc7,0xf0,0xf0,0x01,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xbf,0xbe,0xa9,0xff,0xff,0xea,0xfe,0x18,0x00,0x03,0xf8,0x22,0x00,0x0f,0x1f,0xc7,0xa3,0xfc,0x38,0xf8,0xc7,0xf1,0xf1,0xc0,0x7f,0xff,0xff,0xc0,0xff,0xff,0xff,0xfb,0xee,0xf7,0x6d,0xff,0xff,0xeb,0xff,0x3c,0x00,0x03,0xe0,0x3e,0x80,0x0f,0x8e,0x80,0x03,0xfe,0x78,0xf0,0xc7,0xe1,0xf1,0xf0,0x3f,0xff,0xff,0xc0,0xff,0xff,0xff,0xfe,0xfb,0xff,0x54,0xff,0xff,0xd7,0xfe,0x1d,0x40,0x07,0x80,0x69,0x55,0x5f,0x80,0x00,0x07,0xfc,0x38,0xf9,0xc7,0xc3,0xf1,0xfc,0x3f,0xff,0xff,0xc0,0xff,0xff,0xff,0xfb,0xbf,0xb7,0xab,0x7f,0xff,0xd7,0xfe,0x3c,0xf1,0xff,0x80,0xe0,0x00,0x1f,0x80,0x00,0x17,0xfc,0x78,0x70,0xc7,0xc7,0xf1,0x3f,0x7f,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xf6,0xfd,0xad,0x7f,0xff,0xaf,0xfe,0x38,0x01,0xff,0x88,0xf0,0x00,0x0f,0x80,0x07,0xff,0xfc,0x7c,0xf1,0xc7,0x87,0xc0,0x1f,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xfb,0xbf,0xdf,0xb5,0x7f,0xff,0xaf,0xfe,0x3c,0x03,0xff,0xf8,0xf4,0x34,0x0f,0xff,0xcf,0xff,0xf8,0x78,0x71,0xc7,0x8c,0x00,0x1f,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xfe,0xfb,0xf6,0xd5,0xbf,0xff,0x57,0xfe,0x3e,0x00,0xff,0xf8,0xfc,0x78,0x3f,0xff,0x87,0xff,0xfc,0xfc,0x01,0xc7,0xd8,0x00,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xfb,0xef,0x7f,0xaa,0x9f,0xfe,0xaf,0xfe,0x3e,0x00,0x1f,0xf8,0xf8,0x70,0x1f,0xff,0x8a,0x00,0xf8,0x7c,0x01,0x87,0xfc,0x11,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xe7,0xbd,0xdb,0xd6,0xdf,0xfd,0x5f,0xfc,0x3c,0x18,0x07,0xb8,0xf0,0xf8,0x0e,0x40,0x00,0x00,0xf8,0x1c,0x03,0x87,0xfd,0xf1,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xdb,0xff,0xff,0x5a,0xaf,0xf2,0xbf,0xfe,0x70,0x7e,0x01,0x80,0xf1,0xf8,0x0c,0x00,0x00,0x00,0x7c,0x0f,0xfe,0x0f,0xff,0xf1,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xe9,0xb7,0x6d,0xaa,0xaf,0xad,0xaf,0xfc,0x78,0xff,0xc1,0x80,0xe1,0xff,0x0e,0x00,0x05,0xff,0xff,0x1f,0xff,0x1f,0xff,0xe1,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0x56,0xfd,0xff,0x55,0x55,0x55,0x7f,0xfc,0x79,0xff,0xf1,0x80,0xc3,0xfe,0x1e,0xdf,0x8f,0xff,0xff,0xdf,0xff,0xbf,0xff,0xf3,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xda,0xef,0xdf,0x5b,0x6a,0xaa,0xdf,0xff,0xff,0xff,0xff,0xfb,0xe7,0xff,0xbf,0xff,0x8f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfe,0xaa,0xff,0x7a,0xaa,0xaa,0xb5,0xbf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xd5,0x6b,0xff,0x6a,0xda,0xd5,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfe,0xdb,0x3d,0x56,0xad,0x52,0xa6,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfe,0xaa,0xaf,0xfb,0x55,0xa9,0x1b,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xac,0x95,0x56,0xb6,0xb5,0x6f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfe,0xb5,0x57,0xbf,0x55,0x4a,0xb7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfe,0xaa,0xa8,0xea,0xaa,0xd5,0xdf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0x54,0x92,0xad,0xad,0x52,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0x6a,0xaf,0xfb,0x55,0x55,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfe,0x95,0x5f,0xff,0xe5,0x4b,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfc,0xa9,0x1f,0xff,0xf5,0x53,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfb,0x54,0xaf,0xff,0xfa,0xac,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xe3,0x7f,0xff,0xf9,0x2a,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xeb,0x5f,0xff,0xff,0xfc,0xd5,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xfe,0xff,0xff,0xff,0xfd,0x5f,0xbf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x6e,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xb7,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0 };
