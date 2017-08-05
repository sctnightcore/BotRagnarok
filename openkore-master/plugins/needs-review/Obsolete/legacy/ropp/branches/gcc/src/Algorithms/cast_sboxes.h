/*
 *	CAST-128 in C
 *	Written by Steve Reid <sreid@sea-to-sky.net>
 *	100% Public Domain - no warranty
 *	Released 1997.10.11
 */

//
// Values are changed to conform to padded packets emulator
// $Id: cast_sboxes.h 5135 2006-11-18 22:06:15Z mouseland $
//

static const dword cast_sbox1[256] = {
	0x197DC6CA, 0x2D34FB44, 0x317434B3, 0x5F158C11,
	0xAF42FC97, 0x1B03BB2D, 0xCC70A4EC, 0xDB930FEE,
	0x3076C53B, 0x1530FFDD, 0x73CBB6FC, 0x52611481,
	0xECF911A6, 0x2AADD664, 0x25765CC3, 0xF58DBCFC,
	0xA4DB00E9, 0x5A7940C2, 0xF2709581, 0xA3F9F83E,
	0x87FD8303, 0x86955DF8, 0xDAC96107, 0x7CC4C758,
	0x657E99F4, 0xDD0FEEF5, 0xCE72C164, 0x40DE2A49,
	0x6E4E42BD, 0x4FC912DA, 0xDD79B498, 0x30482F00,
	0x727D8E5D, 0xBCE2D975, 0xF7C03A93, 0x3B10B8A0,
	0xA2EC5EC3, 0x455B3408, 0x2C675366, 0x5128D416,
	0xEDB9B102, 0xE8121152, 0x6D5C0F10, 0x73908344,
	0x23D6B717, 0x98299273, 0xB9A14F91, 0xBF56D669,
	0x95434004, 0x529FA77C, 0x204512E9, 0x076CAC45,
	0x011E6DB8, 0x37555E4B, 0xA2388809, 0x6AD11508,
	0x99391D43, 0x286989F3, 0x408A820F, 0xE9952193,
	0x3DA360B6, 0x24DD5761, 0xE82C1FDE, 0x72A9B1F5,
	0xEB6C36EF, 0x4B80B8B6, 0xAD1D4F73, 0x170BE43E,
	0xA585A0F0, 0x7E93BCD3, 0x7C5DF2EF, 0xC8CDAA3E,
	0x8AFDBDD8, 0xBCF434D7, 0x57EC4833, 0x93DFF316,
	0x7AB44D88, 0x05B55F92, 0x5CDB325E, 0x7A3FE0C5,
	0x76CA701F, 0x69C50D35, 0x6E19AF41, 0x6CEF505B,
	0x8C30377D, 0xE9255FAF, 0x8AA6B00A, 0x69EE63B8,
	0xBEF591A2, 0x74D323E0, 0xB19353AB, 0x814C19ED,
	0xFC097EAE, 0x1AD19B08, 0xF4DE8A13, 0xB5FA43E9,
	0x446CFE72, 0xDB3E97F8, 0x52694453, 0xF4061FBC,
	0xB82F022D, 0x97EB35BE, 0xCC44A179, 0x4E527F66,
	0x2730A9AF, 0x7FE6574C, 0x507D9257, 0xB30E63E8,
	0xB191E3F9, 0x72311CB2, 0xE006151C, 0x3408F931,
	0x5642B029, 0x71EB64FE, 0x9BEE3CA8, 0xC0520361,
	0x17511121, 0x9AE55F02, 0x5215D71C, 0x670BB059,
	0xD3B005F1, 0xCF3DCEED, 0x23AB1447, 0x2A030127,
	0xBA6E9C97, 0x0FE5D0AF, 0x1081E559, 0xF75BD4CD,
	0xAD6CA715, 0x5ADC7539, 0x18A65932, 0xD0F14B4A,
	0xBBC8645A, 0xC123BE9A, 0x2C3A50F3, 0xC4F7459F,
	0xD474A576, 0x43C879C2, 0x4A0EEB7B, 0xD43DD2BA,
	0xF87F7979, 0xD0CDD8D1, 0x743009DA, 0xEED103AD,
	0x47C9E134, 0x8801CAA7, 0xC9B2BA00, 0x24D5B767,
	0x9273EBD6, 0x4CA55055, 0x2A830E1E, 0x65180E09,
	0x087C894F, 0x1AA769EA, 0x95B4E5E3, 0xC2BAF872,
	0x89C4AA80, 0xF4E91537, 0x2C23509F, 0x2AAC66B1,
	0x166B6FA8, 0xEA8A546A, 0xCEF25E12, 0xADFD77D9,
	0xBE62B697, 0xFA7B3665, 0x7C21FF7D, 0x4B8D1BB7,
	0x70B7915D, 0x16BA9C47, 0x349E24AF, 0xE47C427D,
	0x4F5C1FEA, 0x4D4995E0, 0x186BEC98, 0xA9BA1D0A,
	0x2841214F, 0x9F373161, 0xF7874778, 0x79487A7E,
	0x1D94C58B, 0xED7551B9, 0x02F22510, 0x64356CB9,
	0x2D37FD9E, 0x560113D8, 0x17CCA69E, 0x5A71E0CC,
	0x4829C879, 0xEAED59DE, 0x38D6CBE5, 0x6C0DF7A6,
	0x7F6B273A, 0x792842AB, 0x744F6302, 0x89E8A257,
	0xC00B18C3, 0x24B3BF40, 0xCB17AEF6, 0xC122E0EF,
	0x1DFB9D24, 0xE99CCFBC, 0x2E2F7DC2, 0x04ABB24F,
	0x863AB55B, 0xBAD5520F, 0xAC95DF65, 0x63832676,
	0x09C8516A, 0x975D982A, 0x355BC4D0, 0xDDCB2E84,
	0xA8B69030, 0x9E35511C, 0xD9605C11, 0x6242B959,
	0x42F371ED, 0xA16BBED5, 0x89D5783A, 0xF328D706,
	0x078FD771, 0xCFF19E75, 0x5488262A, 0xAE5E899A,
	0xD86ADFCD, 0x08D621ED, 0x2A9B78E2, 0x65D3DEE5,
	0xC3A56BF0, 0x5D0B382B, 0x2B0E4E70, 0x37B7B618,
	0xBA3E99FA, 0xBD8EE131, 0x28BFB6E6, 0x25EA2111,
	0xCC174CCC, 0x28512E2F, 0x30C0B223, 0x2E6C30E2,
	0xFA409174, 0xAE83FED3, 0x63205138, 0x313ED28A,
	0x23D77AF4, 0x4005527F, 0xA1DF8313, 0x516F070A,
	0x77BEE64C, 0xFCD559D2, 0xFBED49D6, 0x9BDFCF50,
	0xD6E4F56A, 0xB4F5E20C, 0x603B9160, 0xE1BF1B7E,
};

static const dword cast_sbox2[256] = {
	0xE9DE82E4, 0xB1CB2655, 0xA48773AB, 0xFF5FD645,
	0x0D829C6F, 0x0D7AF166, 0x6B6653A6, 0x54A30F5E,
	0x469D41DA, 0x7D727867, 0x36AEDF72, 0xDE6FD448,
	0xB3119415, 0x01E29B58, 0x355E073D, 0x7D834511,
	0x34ED9241, 0xB9BA5A1A, 0x5957DCD9, 0x4F0F53DB,
	0xEA223C5D, 0x96FBB6CC, 0x90C74C55, 0x36F40C65,
	0xC4CF7359, 0x9783CE5E, 0xFC9059C2, 0x414162E0,
	0xB2C35626, 0xBC8472C1, 0x8CD1020E, 0x70F6655A,
	0xD431E6E3, 0xF5FEC214, 0x317A683B, 0xC3031395,
	0x1A06118F, 0x63BFCF57, 0x096C6A48, 0x4B795EC0,
	0x7534E90D, 0xF5E9587A, 0xF6D60745, 0xE75745DC,
	0x04CA5D7A, 0xAB6B9D7E, 0x17985223, 0xA79DD8C7,
	0xB8C87DC8, 0x75657E51, 0x5DC238E1, 0x9C3B08A3,
	0x8F2E3AF6, 0x74B80C25, 0xB655CB8F, 0xA542E36F,
	0x7BED9304, 0x977226DA, 0x444F0A0D, 0xD2B15B0C,
	0x9B049802, 0xDE85FC6E, 0xE792D57C, 0x23887088,
	0xDF8349E1, 0x39116EE3, 0xBD5E5CCB, 0x98B740F5,
	0x387A87A0, 0xC9F48D38, 0xA87170FA, 0x325FAD33,
	0xB5CA814F, 0x7C40387D, 0xC7FD3019, 0xF04FB660,
	0x568217DF, 0x45F49F93, 0x0AE19C19, 0xD2A76B8E,
	0x2B92494F, 0x310092A8, 0x612DA5F8, 0xE977BD7B,
	0x141B279E, 0x5175428F, 0xEDD259B9, 0x1390BA5A,
	0x32FBA2CF, 0x96519E55, 0x8DFFAA59, 0x62215418,
	0x6444D9EF, 0xFF96760B, 0x5164A7E9, 0xD61A9BB7,
	0xCBE59DE0, 0x7D341AA2, 0x4941315A, 0x6D6B7D46,
	0x45FF0CC1, 0x2E394B29, 0x568777AB, 0x29250CB5,
	0xE4611882, 0xF4A72870, 0x872469ED, 0x09372704,
	0xB73AD033, 0xEE7DA1C8, 0xEC2BE7FE, 0x0DB1FE34,
	0xAE7D24C5, 0xFDABC6E0, 0x659911F0, 0x35A37254,
	0xBA172537, 0x3F3188F8, 0x036FE8E2, 0x82EE8144,
	0xEA1AC289, 0x9630F6E0, 0xD59E5BA5, 0xF3914D24,
	0x4E750BCC, 0x119700B8, 0xBB356A57, 0x88ACA6F5,
	0xB648F0EF, 0xB156B661, 0xC62525EA, 0x321FAA96,
	0x627382E1, 0x847E090A, 0xF48C8D5D, 0x10FB5B27,
	0x2307B0C5, 0x7C0E0884, 0x574C81B0, 0x123FA898,
	0x08F38A98, 0x88F6A3ED, 0xDE7431E4, 0x38DB91EA,
	0x1147003C, 0xB846EA27, 0x6A048E08, 0x82DF272C,
	0x4F0323D0, 0x1DFECE51, 0x39FD760C, 0xF13C594E,
	0xA128E144, 0x961F5E6B, 0x1D4E0BF0, 0x84013740,
	0x17B54CA8, 0x33988A56, 0x25F73DC5, 0x3B3EB123,
	0xB19A54DD, 0xF4795330, 0x52181A7A, 0x07C3D7F6,
	0x70E807F2, 0xEAB3C7EB, 0xA391940F, 0x06C1AA99,
	0x529D5707, 0xF465E887, 0x1773BA74, 0x2A27192C,
	0x69BB43ED, 0x227FA502, 0xB1CD8CDA, 0x63E524A0,
	0x9521ECB3, 0x74E10F7E, 0x7E60EA1F, 0xDF0BDCF4,
	0xE4001068, 0xFBBB14BA, 0x507AF536, 0x608A3038,
	0x5847010F, 0x96FEB6E6, 0x66EDAC4C, 0x1570205C,
	0xF0E68E75, 0x559904F3, 0x80C80F32, 0xEEC0CC51,
	0xACFDB7DC, 0x389CFFF0, 0xDE0B0FF9, 0xDB771446,
	0x8D6C7D13, 0x40F895DD, 0x4197AAB0, 0xFD97F91B,
	0x9234EF4A, 0x7CCBC89A, 0xE8ABE248, 0x331E8AC1,
	0xBB640D41, 0xCCF7A737, 0x9307C6CF, 0x9DFFB756,
	0x080CB739, 0x308C23B5, 0x72DB5727, 0x2C3781DC,
	0x7A0C1E01, 0xD9785A23, 0x8608846F, 0xDFD80722,
	0x1F6510C9, 0x95DD1E71, 0xAE9C5C98, 0xA5E02969,
	0xC926C052, 0x779A8EA0, 0xFA89D290, 0x9152E79F,
	0xA85F0BDB, 0x7CBF9BBF, 0x6AEFE389, 0xA03B4196,
	0xAAD1F233, 0xA64D53BE, 0xFFACA162, 0xE46D488D,
	0xC1CA868D, 0xF322B89D, 0xA8C21B1B, 0x4C06FB55,
	0x1C2CC6A6, 0x6570A95D, 0x855011B5, 0xC8084A0C,
	0x8BD693B0, 0xFC2757FC, 0x8736C33F, 0x796346A4,
	0x1FF91BAA, 0xB645908C, 0xAC851299, 0x3D35DE2C,
	0xC7733074, 0x95BC86FD, 0xF64C0DD3, 0x26501285,
	0xA366F13E, 0x989B184D, 0x545B940E, 0x44E3F2CD,
};

static const dword cast_sbox3[256] = {
	0xA84F4E0E, 0x56515265, 0x189AC2A3, 0x9F8A3079,
	0x6BC13C47, 0xFFD247BF, 0xFA5D0251, 0xEEC30FBF,
	0x5CB5DE79, 0xD5C4F101, 0xF9810808, 0x5B7D840E,
	0x7A2A2695, 0xE837503D, 0x3626A298, 0x0499CE36,
	0xC50024A9, 0x280B6562, 0xAF3D0221, 0xEB26BD68,
	0x5D57E6A7, 0xA6512F90, 0x56C527A4, 0xF0245173,
	0x131F4EAE, 0x4118AEA8, 0x2BCEE21F, 0x31A4AB97,
	0x06497B9F, 0x2950D2B8, 0x3C396185, 0xB094BA94,
	0x36F44D79, 0x4EF9BBB2, 0x7B1496E3, 0x6CF66E9B,
	0x8311D54B, 0x81144AA6, 0xE771703A, 0x45DAD87B,
	0x1EBE0118, 0x01A09E92, 0x904F107B, 0x5C1E0664,
	0xD5BD03DD, 0xBEAD9868, 0x768F54B5, 0xA0D4DA36,
	0xDB3DAB8C, 0x982B4637, 0x8A4F5EE9, 0x211B6302,
	0x0D2E0734, 0xB01BBA0F, 0xCB611D05, 0xDFB3A2B7,
	0x6C8109C5, 0x057CC3B1, 0x4904721B, 0xBADC9675,
	0xF965C05F, 0x874E916B, 0xF5199B1A, 0xD3674E1C,
	0xB3BA4CD3, 0x3691150F, 0xDDAF6A12, 0x2963ADBD,
	0xBB706D50, 0x13565E9D, 0xE395EE04, 0xACD0B037,
	0xEFA744C6, 0x3D8B4C23, 0x370E18FF, 0x5DCF79CA,
	0x4140D026, 0x8423DF93, 0xA7E706C3, 0x4B2FF736,
	0xE06A217E, 0x094B380C, 0x6542AA90, 0x66F01AAC,
	0xADF618B0, 0xCAD5357E, 0x400EF357, 0xBE42F2FB,
	0xA6F2C4FC, 0xB9DFF8CA, 0x584B0207, 0x34F59053,
	0xDD702520, 0xD54B611F, 0xADF9C5B0, 0xF62AD394,
	0x416F4B4E, 0x2F398E5D, 0x20293E52, 0xE6D0DBDF,
	0xE2CF0655, 0xB5875184, 0xE0CA5CEE, 0x04E789F3,
	0xB1918765, 0x6967E9B4, 0xCDCC2062, 0x5E70EB20,
	0xBDE4BD6E, 0x5AA826CE, 0xE85FB8E0, 0xE6790336,
	0xE698A851, 0x896B19D1, 0x3F44F658, 0xABE4D046,
	0x5CCD394D, 0xD48EB1ED, 0xB4BAE9B8, 0x9DC1533F,
	0xF0738F12, 0x6D231ED3, 0x77919102, 0xBD2E8A31,
	0xC18B8AE1, 0x234920C2, 0x66EAFF45, 0x19FD771C,
	0xDF144AA8, 0x17C1E8AA, 0x83A30282, 0xA43D1AF1,
	0x0A1EAF69, 0x48C9657B, 0xDDEECAB7, 0x6BFE61BF,
	0x738ACA13, 0x95338745, 0x649A37E6, 0x6F216E86,
	0x19779AB7, 0x212E6EF9, 0x28B86AFE, 0x81C41036,
	0xFCD52F44, 0xF97BFAA6, 0x1A46420F, 0xE0D987E0,
	0x0CA45AC9, 0xEF484C5C, 0x3956DF0A, 0x7C5FA373,
	0x3AE54A49, 0x128733EC, 0x95D721FE, 0x4657851F,
	0xB4A6EFB1, 0x7247E075, 0x2FCA19EB, 0x3DC00C95,
	0x5CCA3913, 0x0F6851F7, 0xE52EC6C1, 0x61AA4813,
	0x326E486E, 0xDA0B6862, 0xD9023891, 0xC205398B,
	0x44830DB2, 0xD21F34D6, 0x0B594F5A, 0x61C1D0EC,
	0x840A77FF, 0x0794B524, 0x59101C1C, 0x2C0F3C37,
	0xF1029626, 0x699AEC7B, 0xE5599EC7, 0x25CE4D8A,
	0xAC7B7B56, 0xF902C8CB, 0xBEF3C56B, 0x5CEE04C7,
	0x8356056F, 0xC6EB69F5, 0xA41EB1F9, 0xCF807FFD,
	0x98B24472, 0xC035BF28, 0xD7AA4370, 0x5092901D,
	0xEA8F387D, 0xF700BB44, 0x38B89AF1, 0x2E167635,
	0x59CDE172, 0x6C4D6B59, 0xD627A66A, 0x290C0247,
	0x067D4061, 0x0EFBD268, 0x911757DD, 0x62725342,
	0xF09D5448, 0xDD1AFD5F, 0x9A78CE29, 0xC75A4837,
	0x07301D19, 0xD9BACD40, 0xC05BEA7E, 0x6BA3F424,
	0x5B439CD3, 0x03CC533B, 0x229FBBBD, 0x3B7D540B,
	0xDDD7CF96, 0x7A4F8E0E, 0xC35431E5, 0x48A96ADB,
	0x8CCDA842, 0x1E337FDB, 0x909A7D16, 0x73553595,
	0x683437E8, 0xFFA81491, 0x9B326E30, 0xEB83B557,
	0x811C8A77, 0xFE7F7F40, 0xC35B0444, 0x9012EA03,
	0xD866830F, 0x3AD77FF9, 0x38D56F41, 0x6323C5A8,
	0x5C313181, 0xA390348A, 0xDAE17047, 0x73A56537,
	0x1D6D94FB, 0x4ADABF15, 0xAA5D3636, 0xA098AACE,
	0xFB1ABD6F, 0x2D76DFAA, 0xA74BA11F, 0x2A0CA54F,
	0x17498ABC, 0x2E92B417, 0xE1AAC1E0, 0xC2D164B9,
	0x7FD80D03, 0x6C314E8E, 0x497BA7BC, 0xA628C91D,
};

static const dword cast_sbox4[256] = {
	0x67B00A38, 0xEBE87E76, 0x9CAD11AB, 0x4FC4999D,
	0xC901CC2F, 0xE04A9D08, 0x8943B21B, 0x68D20F2F,
	0x52DC5B18, 0x3C167A9B, 0xCC54208E, 0xD77B44B4,
	0x3032A904, 0xCF7C1521, 0x46FF5D02, 0x8C9F465B,
	0x5512B5F1, 0x975C7FCA, 0x06144979, 0x783C07F5,
	0xC07C80F1, 0xA6B79764, 0x0CC302F2, 0xB9649690,
	0x626028F3, 0x0BAC8D01, 0x59EC7A7D, 0x2206E43E,
	0x5ADF8FF8, 0xA61B32A0, 0xEC90B00B, 0xF033FFDE,
	0x87C8A50F, 0x8705A551, 0xB5CEC48B, 0xF4E9C981,
	0x0C3B8817, 0xBF78D6F5, 0xD486871D, 0x3F2A6135,
	0xB6283A23, 0x1D76D5BA, 0x39B918A1, 0xC0D5C8EC,
	0xB7A0AA30, 0xC1EF9262, 0xC5766748, 0x981BECA5,
	0xFDA2D850, 0xBCE11E1D, 0xB7BD74D0, 0xA5EACF50,
	0x7B2EC462, 0xFC7E68D9, 0xDF8E507C, 0x0924701E,
	0x4E358F86, 0x63756098, 0x4ECAE919, 0xA3F8D0DE,
	0x58C508BC, 0x20063769, 0xF39F41C8, 0x83460DA0,
	0xA7D04FD5, 0x2411DB2C, 0xEEEF786A, 0xAA1F0974,
	0x3E654400, 0x7EA72EF2, 0x2FCA5C1E, 0x1762B34B,
	0x1A75183D, 0xFEC740C9, 0x971E0FC5, 0xBA4F3C14,
	0x3D1EAA6D, 0xC4612FA3, 0x54FD708D, 0xA3A672EF,
	0x9632FAAE, 0xE086CD70, 0x6856AF48, 0xE38877CC,
	0x35D008D2, 0x3325295E, 0xA339ADF5, 0x59E44AAC,
	0x2A09E518, 0xDC5D533F, 0x33A769C4, 0x15DADB8E,
	0x56BB8061, 0xBBF14C12, 0x0A9FE386, 0x174A2B72,
	0xC8D8E9AB, 0xD13EF207, 0x17012B5A, 0x50353958,
	0x709F11F8, 0x3CE677FE, 0x6AFD2220, 0xEEBA1541,
	0x7EC1F648, 0xEE18AAE8, 0x0473F6F8, 0xB4A9BF3C,
	0xB38DAA99, 0xD6D4ACD4, 0xE3748AC3, 0xCF221839,
	0x3EC21CFD, 0x051B6CD2, 0x09FFDBAF, 0x10263F38,
	0xFF835D53, 0x7AEBFAD3, 0x76F5FA8E, 0xB8B3243A,
	0x06DD4BBB, 0x352636D6, 0x1884D860, 0x86BCC73E,
	0x44920815, 0x36FB40DB, 0x019E7443, 0xAB4E3934,
	0xE8E18472, 0x7D4B29E2, 0x4022DE39, 0x156A794C,
	0xB2CADDE1, 0xFB15B0EB, 0xB530F721, 0xB6F16757,
	0xC21DD552, 0xCF791507, 0x71D9EE1C, 0xAD122364,
	0x29FBABC6, 0xD9573915, 0x73FB9308, 0xDABEAE83,
	0xC6533F4B, 0x29BF1B25, 0xBB980607, 0x4ED3F794,
	0xB93591C3, 0xC092BA48, 0x49B04808, 0x0873FEB8,
	0xD2A1A24D, 0x9D0F296D, 0x0D61480B, 0x08ADC3DE,
	0x428881CA, 0xB0E65594, 0x189D0601, 0x4E525706,
	0xF8F92E58, 0x1A5840BD, 0x69438219, 0xCB80A930,
	0xF4F499D9, 0xC95309E8, 0x0073CC23, 0x8E39C96D,
	0x2669B36D, 0xAFC97016, 0xEE3ED53F, 0x977CA79C,
	0xAF69AB02, 0xDCCAB656, 0x0273AC4E, 0xE63944CD,
	0x6EE3519A, 0x4E44B988, 0x6C32326E, 0x8C71AF00,
	0x73E7D634, 0x07498BCD, 0x0C7B9581, 0x5743D846,
	0xBE7508D0, 0xF6D81C04, 0xF24EB7A7, 0x7A8FCF8E,
	0x407E097E, 0x3BE16A4D, 0x2F9C97CE, 0xD25575D8,
	0x1801C82F, 0xC6747798, 0x926435F8, 0x70A6E814,
	0x261E56D2, 0x888242E5, 0x5BB79224, 0x65811B63,
	0x8AB69187, 0x902AEB35, 0x4B93CD52, 0x90D61BB4,
	0x25D7AB3E, 0xEE3C4287, 0x81FAB693, 0x02B5DA17,
	0x067373E8, 0x73D968EB, 0x1DDB6DC6, 0xB92F667C,
	0x2D991AA4, 0x4D0F4C42, 0xDF36E20B, 0xA703A2D4,
	0x9A3A6F62, 0x6EA0FEAB, 0xE82C2642, 0xEB71BB3E,
	0x4E648123, 0xC6DC6F06, 0x369B289C, 0x6569829A,
	0x381963F5, 0x63819E73, 0xCB86E9D8, 0x36DC1808,
	0x684812CA, 0x47B19BD2, 0xA7FA6726, 0x3DC87C79,
	0xEF027091, 0x717B4644, 0xB8F8B476, 0x8A409FEC,
	0xAB45AC6B, 0xE1BFCFC8, 0x1071CFD8, 0x1D417F61,
	0xAE039637, 0x977D173E, 0xBE74982D, 0xE7CC1ED8,
	0xE74B5E15, 0x84B61DB7, 0xA2F13084, 0x07C28B52,
	0x770EC5F5, 0xC789E132, 0xDD0996EE, 0x5D52B7DE,
	0x4C5B0AE7, 0x40D674CF, 0x4D9BBA59, 0x096DA06C,
};

static const dword cast_sbox5[256] = {
	0x3710C652, 0x7F7FA987, 0x0FC050A3, 0xEFFEE3C0,
	0x28406CF7, 0xD2A1E341, 0x183A61D6, 0xE1F20090,
	0x6804D8B7, 0x9467E326, 0x80374914, 0x537A047A,
	0x075A2C73, 0xA5B1CB16, 0x47D7F96D, 0x0495CF70,
	0xE6344759, 0x06AD8911, 0x6DFA8FC1, 0x14436281,
	0x24A1394B, 0xB62D0038, 0xC2B1ED40, 0x7394DBAE,
	0xC1B10348, 0xC5306D5A, 0x871B13DB, 0x22692CD5,
	0xAD559461, 0x13D79297, 0x9BF81F71, 0x20D13528,
	0xE98C0C95, 0xC0009EE0, 0x0F78F333, 0x8DEC2476,
	0x74464BD3, 0xDDDD6153, 0xB18C9E0F, 0x397BEBE0,
	0x5EA3622E, 0x293D1BC2, 0xC33310E7, 0x35AC7974,
	0x88934093, 0xD4209D5D, 0x246D79DA, 0x9051EE04,
	0x10170514, 0xDFB7E6F2, 0xE43A9AD8, 0x3ABA2BBF,
	0xF83E91A0, 0x39D116B3, 0xE49B92F2, 0x33953F75,
	0x2FD80547, 0xD28E0D8F, 0x438F6127, 0x8C141A47,
	0xB6163009, 0xDACEDC56, 0xF1160867, 0x3416DC34,
	0x9CF742D7, 0x21928259, 0x0E3085C2, 0x2BCB663C,
	0xC15B2BB0, 0xC809FF56, 0x5BEEDA29, 0x71F3C64F,
	0x4552ECA4, 0xCE03437F, 0x072FF7AA, 0x27CFFE6E,
	0x18EC74B3, 0x13906FA4, 0x0203EA47, 0x1C1E0EA8,
	0x4B0AC3DE, 0xB8C152E3, 0x6C6AA5E0, 0x6010E4ED,
	0xCDBB0904, 0xAC841C3E, 0x067547A3, 0x0396924D,
	0x9E0F0745, 0xFFDCBEA4, 0x0E03B072, 0xF6BE17C9,
	0xCEE7EBA2, 0x81B62625, 0x5624F15C, 0x386A7340,
	0x4E529719, 0x722366B1, 0xFEE81841, 0xD9A997E2,
	0x1D601B9C, 0xC3348D59, 0xF4300752, 0xC97C929F,
	0x3BF1652A, 0x53D87C1C, 0x4A2BCD7E, 0x09E27458,
	0xA92697D4, 0x420021EA, 0xEF995BA5, 0x98EB1D3C,
	0x75ED9088, 0x81DACEC4, 0xD3AAC0F7, 0x86779D2B,
	0x91486168, 0x1F3822C9, 0x274FFC55, 0xC396E525,
	0x0D370844, 0x0C296EC9, 0xCA770FCD, 0x5059143B,
	0xD7B8874A, 0x48AE70E4, 0xBC42F941, 0x4CAF0B6C,
	0xF1CDDD4C, 0xD3C55A1A, 0xFDA1ABD1, 0x7788D898,
	0x6A65FB69, 0xBE600C6C, 0x9E92348B, 0x01F57DEF,
	0x22A0EFA1, 0xF8AE94B9, 0x8E179441, 0xEB04F952,
	0x397FBBE4, 0x818FF421, 0xCD3FCC12, 0x24A73CC0,
	0xA0D05E43, 0x6AE42BA5, 0x5BEBDA0E, 0xBCDD5759,
	0x66C5C8BD, 0x92EC3944, 0x4929B0F6, 0x839748FD,
	0x7B5E0A42, 0x19771EFE, 0x85FB6E09, 0xCAF402AD,
	0xEF7923D2, 0xFF95CBA3, 0x1160E237, 0x40E4A278,
	0xA328138E, 0x24574F83, 0xFD593E60, 0x2567195E,
	0xB67ADA45, 0xB99C9A6F, 0x37E461B5, 0x597D584F,
	0x184F6927, 0x8D74CC66, 0xC1136B14, 0xDD276E4C,
	0xCAB8DF05, 0xB0FFC678, 0xAAC53C8F, 0xA0645B64,
	0xDAC41C0D, 0x33FE9796, 0xD21BE506, 0xD2341087,
	0x3A532011, 0x059F4FCE, 0x6AF365A7, 0x5398ACC5,
	0xEA851C40, 0x36C4BE12, 0x417FBC54, 0x249E0F2F,
	0xF84ACF7B, 0xB68D0572, 0x777EDB1C, 0x54284983,
	0x469359C0, 0x85E823EC, 0xFC11D1FF, 0xC3454B04,
	0xF37FBA21, 0xA4C72862, 0xD1469DEE, 0x91F6339F,
	0x0FFEF39E, 0x2249F403, 0x050F32E8, 0xBF4AE336,
	0x5A01F325, 0xEF6F98BF, 0x886BBDFD, 0x3C206BF7,
	0x05A7DAC8, 0x0C070377, 0x5A5BF01D, 0xF89BC9C5,
	0x0FE08876, 0x88434549, 0x8CDD1A59, 0x1398FFAD,
	0x58AC1E3F, 0x43126F37, 0x0CE30BA0, 0x9E390C90,
	0x000C6A13, 0x6D745F31, 0xDC9DC402, 0x586DD0AF,
	0xF8FE9F03, 0xD67A1745, 0xFCD9638F, 0x71248CB9,
	0x4F849A0E, 0x9FF3B675, 0x7AA9DA07, 0xE97E0FEF,
	0xF5AE7C14, 0xB71F1DA0, 0x480B18AB, 0xA16C693F,
	0xEB5A2645, 0x2EDE5AF6, 0x65022E6A, 0xB8ED8A8B,
	0x3F9A9782, 0xE5116F57, 0xD18B0B25, 0x2EF182F2,
	0xD36DF0DA, 0xFBF75BD4, 0xADA8CF0A, 0xE3995275,
	0xC7D31F3D, 0x60601F5C, 0xC8685AFB, 0xF8D3F902,
	0x19DD16BC, 0x246CAAFF, 0x32ABBCF7, 0x5CA178BB,
};

static const dword cast_sbox6[256] = {
	0x3710C652, 0x7F7FA987, 0x0FC050A3, 0xEFFEE3C0,
	0x28406CF7, 0xD2A1E341, 0x183A61D6, 0xE1F20090,
	0x6804D8B7, 0x9467E326, 0x80374914, 0x537A047A,
	0x075A2C73, 0xA5B1CB16, 0x47D7F96D, 0x0495CF70,
	0xE6344759, 0x06AD8911, 0x6DFA8FC1, 0x14436281,
	0x24A1394B, 0xB62D0038, 0xC2B1ED40, 0x7394DBAE,
	0xC1B10348, 0xC5306D5A, 0x871B13DB, 0x22692CD5,
	0xAD559461, 0x13D79297, 0x9BF81F71, 0x20D13528,
	0xE98C0C95, 0xC0009EE0, 0x0F78F333, 0x8DEC2476,
	0x74464BD3, 0xDDDD6153, 0xB18C9E0F, 0x397BEBE0,
	0x5EA3622E, 0x293D1BC2, 0xC33310E7, 0x35AC7974,
	0x88934093, 0xD4209D5D, 0x246D79DA, 0x9051EE04,
	0x10170514, 0xDFB7E6F2, 0xE43A9AD8, 0x3ABA2BBF,
	0xF83E91A0, 0x39D116B3, 0xE49B92F2, 0x33953F75,
	0x2FD80547, 0xD28E0D8F, 0x438F6127, 0x8C141A47,
	0xB6163009, 0xDACEDC56, 0xF1160867, 0x3416DC34,
	0x9CF742D7, 0x21928259, 0x0E3085C2, 0x2BCB663C,
	0xC15B2BB0, 0xC809FF56, 0x5BEEDA29, 0x71F3C64F,
	0x4552ECA4, 0xCE03437F, 0x072FF7AA, 0x27CFFE6E,
	0x18EC74B3, 0x13906FA4, 0x0203EA47, 0x1C1E0EA8,
	0x4B0AC3DE, 0xB8C152E3, 0x6C6AA5E0, 0x6010E4ED,
	0xCDBB0904, 0xAC841C3E, 0x067547A3, 0x0396924D,
	0x9E0F0745, 0xFFDCBEA4, 0x0E03B072, 0xF6BE17C9,
	0xCEE7EBA2, 0x81B62625, 0x5624F15C, 0x386A7340,
	0x4E529719, 0x722366B1, 0xFEE81841, 0xD9A997E2,
	0x1D601B9C, 0xC3348D59, 0xF4300752, 0xC97C929F,
	0x3BF1652A, 0x53D87C1C, 0x4A2BCD7E, 0x09E27458,
	0xA92697D4, 0x420021EA, 0xEF995BA5, 0x98EB1D3C,
	0x75ED9088, 0x81DACEC4, 0xD3AAC0F7, 0x86779D2B,
	0x91486168, 0x1F3822C9, 0x274FFC55, 0xC396E525,
	0x0D370844, 0x0C296EC9, 0xCA770FCD, 0x5059143B,
	0xD7B8874A, 0x48AE70E4, 0xBC42F941, 0x4CAF0B6C,
	0xF1CDDD4C, 0xD3C55A1A, 0xFDA1ABD1, 0x7788D898,
	0x6A65FB69, 0xBE600C6C, 0x9E92348B, 0x01F57DEF,
	0x22A0EFA1, 0xF8AE94B9, 0x8E179441, 0xEB04F952,
	0x397FBBE4, 0x818FF421, 0xCD3FCC12, 0x24A73CC0,
	0xA0D05E43, 0x6AE42BA5, 0x5BEBDA0E, 0xBCDD5759,
	0x66C5C8BD, 0x92EC3944, 0x4929B0F6, 0x839748FD,
	0x7B5E0A42, 0x19771EFE, 0x85FB6E09, 0xCAF402AD,
	0xEF7923D2, 0xFF95CBA3, 0x1160E237, 0x40E4A278,
	0xA328138E, 0x24574F83, 0xFD593E60, 0x2567195E,
	0xB67ADA45, 0xB99C9A6F, 0x37E461B5, 0x597D584F,
	0x184F6927, 0x8D74CC66, 0xC1136B14, 0xDD276E4C,
	0xCAB8DF05, 0xB0FFC678, 0xAAC53C8F, 0xA0645B64,
	0xDAC41C0D, 0x33FE9796, 0xD21BE506, 0xD2341087,
	0x3A532011, 0x059F4FCE, 0x6AF365A7, 0x5398ACC5,
	0xEA851C40, 0x36C4BE12, 0x417FBC54, 0x249E0F2F,
	0xF84ACF7B, 0xB68D0572, 0x777EDB1C, 0x54284983,
	0x469359C0, 0x85E823EC, 0xFC11D1FF, 0xC3454B04,
	0xF37FBA21, 0xA4C72862, 0xD1469DEE, 0x91F6339F,
	0x0FFEF39E, 0x2249F403, 0x050F32E8, 0xBF4AE336,
	0x5A01F325, 0xEF6F98BF, 0x886BBDFD, 0x3C206BF7,
	0x05A7DAC8, 0x0C070377, 0x5A5BF01D, 0xF89BC9C5,
	0x0FE08876, 0x88434549, 0x8CDD1A59, 0x1398FFAD,
	0x58AC1E3F, 0x43126F37, 0x0CE30BA0, 0x9E390C90,
	0x000C6A13, 0x6D745F31, 0xDC9DC402, 0x586DD0AF,
	0xF8FE9F03, 0xD67A1745, 0xFCD9638F, 0x71248CB9,
	0x4F849A0E, 0x9FF3B675, 0x7AA9DA07, 0xE97E0FEF,
	0xF5AE7C14, 0xB71F1DA0, 0x480B18AB, 0xA16C693F,
	0xEB5A2645, 0x2EDE5AF6, 0x65022E6A, 0xB8ED8A8B,
	0x3F9A9782, 0xE5116F57, 0xD18B0B25, 0x2EF182F2,
	0xD36DF0DA, 0xFBF75BD4, 0xADA8CF0A, 0xE3995275,
	0xC7D31F3D, 0x60601F5C, 0xC8685AFB, 0xF8D3F902,
	0x19DD16BC, 0x246CAAFF, 0x32ABBCF7, 0x5CA178BB,
};

static const dword cast_sbox7[256] = {
	0xF681827C, 0x0405D598, 0x73D3AFAB, 0x8F384DF4,
	0x86800CDF, 0xC409389A, 0xB7201080, 0x7B021000,
	0x7E2B6556, 0xFCB96CB0, 0x53196299, 0xCF88B430,
	0xCE62AFE2, 0x8C06800A, 0x57AFA4C7, 0x8BAB5895,
	0x7646D9B1, 0x75FE8479, 0xB4D1C629, 0xA069CC1E,
	0x97D6E395, 0xC683780C, 0x89BFC89F, 0x3DC420BB,
	0x1002DEAD, 0x7FB54DB3, 0xB639AB39, 0x12DC557C,
	0xF1DBB8DA, 0x9092F28F, 0x4B5F7EF8, 0x608F7A62,
	0x3B4F632B, 0x191C878E, 0x492211DA, 0x15DF8F7C,
	0xED600F9F, 0xFB32FCA2, 0xAF91A4E1, 0x33CB65AA,
	0xF72D8A39, 0x450452EB, 0x6DAC281D, 0xA9643BFC,
	0x6987F6F6, 0xE8629757, 0x83547C6C, 0x8898E073,
	0x339C32D8, 0xF27DBEE8, 0x02B8B0D0, 0xCF89871E,
	0x763E6EEE, 0x6524C49D, 0xF8A8D478, 0x6E06FDDD,
	0x118C7B08, 0x4087BA66, 0x4844D924, 0x753F54B0,
	0x14777856, 0x83877153, 0xFF9CCE05, 0xE4F59BC8,
	0x701D55C9, 0x1F223875, 0x1F71931A, 0xBC67C2F4,
	0x43401260, 0x236AC0BB, 0x96024933, 0xEC85C944,
	0x7F2FBF1B, 0x8F4E4715, 0x773FDE80, 0x843FB1B8,
	0x04AB3DFA, 0x53DFAFA4, 0xBF0954F2, 0x84968951,
	0xF0D2AB0E, 0x800CE757, 0x508FAA97, 0xED98411D,
	0x5596F926, 0x14D4102D, 0x68A1E141, 0xAE48DAFF,
	0x12062872, 0x015A1819, 0xDA6F1720, 0xD78353F4,
	0x371337E2, 0x676B0128, 0xB3C91E22, 0x597ABB2E,
	0xC5DB3677, 0x2429EA6C, 0xE5C00549, 0x420E057B,
	0xAA301520, 0x4A9393C4, 0x8E73DD94, 0xA44E2EED,
	0xF821D50D, 0xD8993D40, 0x80C28403, 0x5E1B3874,
	0xAFDF740F, 0xBE4BB7F1, 0xEBCE2C97, 0x7193223E,
	0xCD180424, 0x0D9A11B5, 0xBD56A44F, 0xFBB8FC1D,
	0x340E757E, 0xC4855BAE, 0xD89A0D2B, 0xEE79B610,
	0x1390C5DC, 0xD31C86CC, 0x6B7A451B, 0x2AE65138,
	0x5ACF066F, 0x5A5091FD, 0x67F67E30, 0xDDF0DC83,
	0x0A991715, 0x3A3F8C53, 0xBA2F7888, 0xE9A637F3,
	0x011018F0, 0x72BB67DD, 0x76E471E5, 0x5DF88387,
	0x7133FAEF, 0x12E3237B, 0x9A554B77, 0x39F6BF30,
	0x4AF3CB03, 0x2AA8CE4D, 0x1773F42C, 0x7D91CA1C,
	0x8A5E6D5B, 0x9A194B24, 0x0B2D9FF6, 0x1AD8B71D,
	0x1366F0B6, 0x6336A73F, 0x488319F4, 0x1FBB9332,
	0x141A7247, 0xA4EFF37E, 0xFD857416, 0x8C4A507C,
	0x7D6BC5FB, 0x3E4420C2, 0x1B23CF5D, 0x5175FDE9,
	0x4E5708C4, 0x3F463D49, 0x807EFAB8, 0x8F4D7A7B,
	0x68F02BB1, 0x99E43BE5, 0x6E650547, 0x15B1E721,
	0xFA352FD2, 0x6B2E08A6, 0xA4F8F1FA, 0x13D235FB,
	0xE4170317, 0x9514C69A, 0x4328DDC1, 0x6A8E63FA,
	0x4794D771, 0x28A77493, 0x590489BD, 0x28E7711D,
	0xF2CE8BFF, 0x13D6F3C0, 0xC87C35DD, 0x5FFC7054,
	0x15941FA1, 0x66B16121, 0x9F90B202, 0xDE9D5EBF,
	0x90078477, 0x2139B097, 0xCF601F6A, 0xC6EB1D4F,
	0x8325E962, 0x455CEF30, 0x56CD6CF7, 0x15D5BDF3,
	0xCFD02F81, 0xC01C0EFE, 0x56D69998, 0xDD7B4CCB,
	0x733744B4, 0xB479FED0, 0xBE8BB76D, 0xEEADBCB7,
	0x8F3B4A1B, 0xF181DEE7, 0x7FDDA557, 0x668C0CD8,
	0x04EA30A7, 0xA536AE02, 0xA7DB8365, 0x47073C1D,
	0xE1260647, 0xB2874E51, 0x387541A7, 0x803E5C76,
	0x161EBD1B, 0x3784DFD4, 0x21BBE00D, 0x31F14DF3,
	0xC3A35304, 0x141D406B, 0x739E7F87, 0x4A613EA5,
	0xC8E3CA10, 0x4A539127, 0x2C1CEE26, 0xBC7CFF7B,
	0x36B02241, 0xF835C207, 0x4E473DF9, 0x8624A165,
	0xFC3969A6, 0xFEC3E40B, 0xC81F6DE0, 0xC8892273,
	0x3A6F9120, 0x6CFEE534, 0xAB827DFC, 0x6289A4B6,
	0xC120A9CD, 0x33C4C870, 0xF5A27D2C, 0x6526F71C,
	0xC09E818F, 0x61379AE1, 0xA86E5D70, 0xC06F2998,
	0x17986A75, 0xF9464C87, 0xB3C62EF8, 0x93554C37,
	0xE65F1380, 0xF802DF30, 0x26CBCF95, 0xBFE64F0A,
};

static const dword cast_sbox8[256] = {
	0xC5F24EA6, 0xA99C01A8, 0xE6E6FEA3, 0x2F72A628,
	0xE4C0ABB7, 0xC6717EE3, 0x4606C04B, 0xF5211071,
	0x7443E2F5, 0x540BE55A, 0x16EC9B2F, 0x4B8674F7,
	0x857B3261, 0x634B45FF, 0x58774F31, 0x13A0D0BA,
	0x07686B09, 0xD43F9EC1, 0x1BB70D71, 0x4C7026AB,
	0x0A0B9DEF, 0xC6EAE1D0, 0x4FBCA3ED, 0xF70565C8,
	0x6F53B8F2, 0x39492D0C, 0xE4673397, 0x133E9E14,
	0x4550CD33, 0x0D5D5276, 0xFBC7CD7E, 0xA02EC0AC,
	0x9D13CBB1, 0x5317702D, 0x83DC4F82, 0xAEC2EA61,
	0x558BC26B, 0x199687F1, 0x8C96CBC4, 0x2D1CFF54,
	0x9FA8B344, 0x52CB9803, 0xF6162043, 0x1E2BFC84,
	0x3A7A9C59, 0xFBA49241, 0xE24B8FFF, 0x70EFF3E2,
	0x56017F9C, 0x154385CD, 0x3F25D6D8, 0x5358E26C,
	0xF44E3B1C, 0xA1877267, 0x0DC417EE, 0x9877CC34,
	0xF330F1C9, 0xBE80584D, 0x4C195132, 0x5D4B9E29,
	0x73D7AFA3, 0x2D3F2751, 0x0D0384B3, 0x94D46A5C,
	0x643457CB, 0x1CA3EF92, 0x2FC2A161, 0x3D132EBB,
	0xC645F910, 0x7DCC9010, 0xC226B74D, 0x5616DD48,
	0xAA0C7392, 0x4F8A4BCB, 0xD740C666, 0xE1BF7402,
	0xFF790741, 0x931EEFA4, 0x6C1FBEBC, 0xED1D1509,
	0xB6AA743E, 0x57467CBA, 0x5393B03F, 0x6A21AF3E,
	0xED81EA48, 0x8D34030D, 0xCBDC9AE0, 0x49E92290,
	0x961D499F, 0x24D8838E, 0xB5BB6FDD, 0xA8679E3F,
	0xA05E9223, 0x4D20FC3B, 0x0F5F3CF8, 0x799B04FB,
	0x3B55D4D5, 0xD62E5E16, 0xDBB8F241, 0xCB7363F5,
	0x48F01FC4, 0xD1E1A93F, 0x18B6B2D6, 0x8F01BB3C,
	0xB66144E0, 0x4D59FE74, 0xC77A5B89, 0xB454FC90,
	0xA5786139, 0x3B773C07, 0xE7E3FE79, 0x5A4C3731,
	0x054388C0, 0x994A63B7, 0x87018996, 0x61F96B00,
	0xD6B48874, 0x69D29494, 0x9AE40EF1, 0xF96C880C,
	0x29EA8265, 0xAA1FBEBE, 0x1D6D8C79, 0xF3749E35,
	0xEDD57593, 0x6C02C106, 0x02ABF33E, 0x6E41AEAB,
	0x136661EF, 0x90BACD9B, 0x789E5420, 0x5AC3A74F,
	0xB9BB4678, 0x3507B34D, 0x5F46AE5F, 0xA8FB991F,
	0xC1B6043E, 0x4B19A13D, 0xA7A4F1AC, 0x77E8742D,
	0x5A77DC22, 0xD2D08959, 0x61B72D36, 0xC68A5959,
	0x54DC8D52, 0xCB5D5BA3, 0xAC7F63FD, 0x78D227C1,
	0xD0F737B0, 0x457F253B, 0x58EC82F2, 0xAADEEE77,
	0xBDC7DB4B, 0x2057E9FF, 0x751F9A14, 0x4E909E4A,
	0x1B5C6704, 0x7CF396E1, 0x04F7AB73, 0x53F7485B,
	0xEA87EDF9, 0x4A353C00, 0x1484A60F, 0xD914EB98,
	0x2A766C2C, 0x893CCC6C, 0x95D6A9D9, 0xD1F67703,
	0xEC1BD58C, 0x49E854F5, 0x88DE86CF, 0x497CFCAB,
	0x0F76361A, 0x6A4AD6BC, 0xFB8B6DF3, 0x23B97B80,
	0xB37591E4, 0x0D5142A0, 0xC0ED3C55, 0x8FAAE393,
	0xC93AD6EC, 0x112DB6D1, 0x16F4F5F3, 0x5B4144D3,
	0x40A41311, 0xA6AE1430, 0xDEC1B7BF, 0x89AD9E50,
	0x48D34A74, 0x9CD56BCC, 0x164363B8, 0x48BEE2FA,
	0xB1A77A13, 0x04B0AB84, 0xB07A07FE, 0x68742FD2,
	0x9C3193D0, 0xED51D58B, 0xDB669552, 0x09E055F7,
	0xF77095DB, 0x37A807AE, 0x68F82CF3, 0x1C117439,
	0xC574A112, 0x02A3230F, 0x764F9CB1, 0x90E79DB8,
	0x031E9677, 0x4F6439AD, 0xF45B16CC, 0x9583AF65,
	0xB27D8418, 0xFCCA4768, 0xD50C79F4, 0xFCC3AA4F,
	0xE3816CE8, 0x1CE64F60, 0x4673C56A, 0xD4B99E56,
	0x755A3CE4, 0xBCB63096, 0x199F1A0D, 0x2D648CAA,
	0x88C8F62E, 0xCD4C1A09, 0x6D6059DD, 0xF7C5632C,
	0x1DFCB985, 0x4077EE99, 0x22F691DB, 0x32EA33DA,
	0x03D56629, 0x3467BA67, 0x5822B216, 0xEFA5FCC7,
	0x7A630C0A, 0xAA1D7062, 0xF013DC8E, 0x0D26BFD0,
	0x52B7AB09, 0x8068209A, 0x19C9E023, 0x9C5B6B26,
	0xACB02345, 0xD878D80F, 0xA314ECF6, 0xAD3600AA,
	0x766EA4BE, 0x913D7AA1, 0xAE25E205, 0x2ED69E6B,
	0xB3C11F54, 0xDCA80571, 0x1BEAD242, 0x112B265A,
};

