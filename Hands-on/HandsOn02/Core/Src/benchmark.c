#include "benchmark.h"
uint32_t test_func0(uint32_t value){
	value *= value;
	value += 0x2e27;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-39;
}
uint32_t test_func1(uint32_t value){
	value *= value;
	value += 0x8794;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	return value-37;
}
uint32_t test_func2(uint32_t value){
	value *= value;
	value += 0x76ad;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	return value-56;
}
uint32_t test_func3(uint32_t value){
	value *= value;
	value += 0x152b;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-43;
}
uint32_t test_func4(uint32_t value){
	value *= value;
	value += 0x589b;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 4);
	return value-79;
}
uint32_t test_func5(uint32_t value){
	value *= value;
	value += 0x2ade;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 8);
	return value-70;
}
uint32_t test_func6(uint32_t value){
	value *= value;
	value += 0x52aa;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	value = (value >> 5) + (value >> 2);
	return value-86;
}
uint32_t test_func7(uint32_t value){
	value *= value;
	value += 0x2c08;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	return value-11;
}
uint32_t test_func8(uint32_t value){
	value *= value;
	value += 0x30d4;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	return value-63;
}
uint32_t test_func9(uint32_t value){
	value *= value;
	value += 0x513f;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	return value-112;
}
uint32_t test_func10(uint32_t value){
	value *= value;
	value += 0x1c50;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	return value-37;
}
uint32_t test_func11(uint32_t value){
	value *= value;
	value += 0x385f;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	return value-103;
}
uint32_t test_func12(uint32_t value){
	value *= value;
	value += 0x2b99;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	return value-117;
}
uint32_t test_func13(uint32_t value){
	value *= value;
	value += 0x747f;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	return value-126;
}
uint32_t test_func14(uint32_t value){
	value *= value;
	value += 0x7267;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 1);
	return value-10;
}
uint32_t test_func15(uint32_t value){
	value *= value;
	value += 0x1df9;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	return value-126;
}
uint32_t test_func16(uint32_t value){
	value *= value;
	value += 0x11b3;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	return value-70;
}
uint32_t test_func17(uint32_t value){
	value *= value;
	value += 0x6266;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	return value-14;
}
uint32_t test_func18(uint32_t value){
	value *= value;
	value += 0x47b7;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	return value-57;
}
uint32_t test_func19(uint32_t value){
	value *= value;
	value += 0x149f;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-81;
}
uint32_t test_func20(uint32_t value){
	value *= value;
	value += 0x7feb;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	return value-64;
}
uint32_t test_func21(uint32_t value){
	value *= value;
	value += 0x3cbc;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	return value-6;
}
uint32_t test_func22(uint32_t value){
	value *= value;
	value += 0x6307;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 2);
	return value-39;
}
uint32_t test_func23(uint32_t value){
	value *= value;
	value += 0x2817;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	return value-43;
}
uint32_t test_func24(uint32_t value){
	value *= value;
	value += 0x6707;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-67;
}
uint32_t test_func25(uint32_t value){
	value *= value;
	value += 0x7948;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	return value-21;
}
uint32_t test_func26(uint32_t value){
	value *= value;
	value += 0x5f21;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	return value-25;
}
uint32_t test_func27(uint32_t value){
	value *= value;
	value += 0x3829;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	return value-29;
}
uint32_t test_func28(uint32_t value){
	value *= value;
	value += 0x8bcf;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	return value-116;
}
uint32_t test_func29(uint32_t value){
	value *= value;
	value += 0x61d3;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	return value-51;
}
uint32_t test_func30(uint32_t value){
	value *= value;
	value += 0x2acb;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	return value-20;
}
uint32_t test_func31(uint32_t value){
	value *= value;
	value += 0x789f;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	return value-5;
}
uint32_t test_func32(uint32_t value){
	value *= value;
	value += 0x870d;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	return value-64;
}
uint32_t test_func33(uint32_t value){
	value *= value;
	value += 0x1425;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	return value-29;
}
uint32_t test_func34(uint32_t value){
	value *= value;
	value += 0x88ce;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	return value-108;
}
uint32_t test_func35(uint32_t value){
	value *= value;
	value += 0x7140;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	return value-2;
}
uint32_t test_func36(uint32_t value){
	value *= value;
	value += 0x4587;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	return value-89;
}
uint32_t test_func37(uint32_t value){
	value *= value;
	value += 0x8206;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 5);
	return value-89;
}
uint32_t test_func38(uint32_t value){
	value *= value;
	value += 0x8ff2;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 6);
	return value-55;
}
uint32_t test_func39(uint32_t value){
	value *= value;
	value += 0x7dd3;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	return value-2;
}
uint32_t test_func40(uint32_t value){
	value *= value;
	value += 0x8806;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 4);
	return value-64;
}
uint32_t test_func41(uint32_t value){
	value *= value;
	value += 0x713e;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	return value-58;
}
uint32_t test_func42(uint32_t value){
	value *= value;
	value += 0x2afe;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	return value-90;
}
uint32_t test_func43(uint32_t value){
	value *= value;
	value += 0x4e21;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	return value-55;
}
uint32_t test_func44(uint32_t value){
	value *= value;
	value += 0x6352;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	return value-55;
}
uint32_t test_func45(uint32_t value){
	value *= value;
	value += 0x7b94;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	return value-81;
}
uint32_t test_func46(uint32_t value){
	value *= value;
	value += 0x18bc;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-121;
}
uint32_t test_func47(uint32_t value){
	value *= value;
	value += 0x65f2;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	return value-29;
}
uint32_t test_func48(uint32_t value){
	value *= value;
	value += 0x4033;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-75;
}
uint32_t test_func49(uint32_t value){
	value *= value;
	value += 0x8ed2;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	return value-4;
}
uint32_t test_func50(uint32_t value){
	value *= value;
	value += 0x6bf2;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	return value-8;
}
uint32_t test_func51(uint32_t value){
	value *= value;
	value += 0x1d0d;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-115;
}
uint32_t test_func52(uint32_t value){
	value *= value;
	value += 0x5b71;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	return value-83;
}
uint32_t test_func53(uint32_t value){
	value *= value;
	value += 0x6cbe;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	return value-114;
}
uint32_t test_func54(uint32_t value){
	value *= value;
	value += 0x8b69;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-61;
}
uint32_t test_func55(uint32_t value){
	value *= value;
	value += 0x1f3c;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	return value-71;
}
uint32_t test_func56(uint32_t value){
	value *= value;
	value += 0x45d3;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-105;
}
uint32_t test_func57(uint32_t value){
	value *= value;
	value += 0x2b21;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 8);
	return value-15;
}
uint32_t test_func58(uint32_t value){
	value *= value;
	value += 0x31e9;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 3);
	return value-30;
}
uint32_t test_func59(uint32_t value){
	value *= value;
	value += 0x6c45;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	return value-107;
}
uint32_t test_func60(uint32_t value){
	value *= value;
	value += 0x6423;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	return value-113;
}
uint32_t test_func61(uint32_t value){
	value *= value;
	value += 0x33c2;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-17;
}
uint32_t test_func62(uint32_t value){
	value *= value;
	value += 0x6e3a;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-107;
}
uint32_t test_func63(uint32_t value){
	value *= value;
	value += 0x57f1;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	return value-121;
}
uint32_t test_func64(uint32_t value){
	value *= value;
	value += 0x6f27;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	return value-29;
}
uint32_t test_func65(uint32_t value){
	value *= value;
	value += 0x446b;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	return value-116;
}
uint32_t test_func66(uint32_t value){
	value *= value;
	value += 0x2322;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 2);
	return value-63;
}
uint32_t test_func67(uint32_t value){
	value *= value;
	value += 0x8a08;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-86;
}
uint32_t test_func68(uint32_t value){
	value *= value;
	value += 0x73a8;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-92;
}
uint32_t test_func69(uint32_t value){
	value *= value;
	value += 0x6ee2;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	return value-5;
}
uint32_t test_func70(uint32_t value){
	value *= value;
	value += 0x876d;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	return value-108;
}
uint32_t test_func71(uint32_t value){
	value *= value;
	value += 0x7e52;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	return value-42;
}
uint32_t test_func72(uint32_t value){
	value *= value;
	value += 0x526d;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-110;
}
uint32_t test_func73(uint32_t value){
	value *= value;
	value += 0x18f0;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	return value-76;
}
uint32_t test_func74(uint32_t value){
	value *= value;
	value += 0x25e0;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	return value-21;
}
uint32_t test_func75(uint32_t value){
	value *= value;
	value += 0x8497;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	return value-107;
}
uint32_t test_func76(uint32_t value){
	value *= value;
	value += 0x4041;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	return value-88;
}
uint32_t test_func77(uint32_t value){
	value *= value;
	value += 0x7c5d;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 8);
	return value-35;
}
uint32_t test_func78(uint32_t value){
	value *= value;
	value += 0x5d44;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	return value-34;
}
uint32_t test_func79(uint32_t value){
	value *= value;
	value += 0x409e;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-80;
}
uint32_t test_func80(uint32_t value){
	value *= value;
	value += 0x45e7;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	return value-103;
}
uint32_t test_func81(uint32_t value){
	value *= value;
	value += 0x26f1;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	value = (value >> 4) + (value >> 6);
	return value-41;
}
uint32_t test_func82(uint32_t value){
	value *= value;
	value += 0x6061;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	return value-70;
}
uint32_t test_func83(uint32_t value){
	value *= value;
	value += 0x2a30;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-94;
}
uint32_t test_func84(uint32_t value){
	value *= value;
	value += 0x402b;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-45;
}
uint32_t test_func85(uint32_t value){
	value *= value;
	value += 0x7a74;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	return value-67;
}
uint32_t test_func86(uint32_t value){
	value *= value;
	value += 0x35ff;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	return value-118;
}
uint32_t test_func87(uint32_t value){
	value *= value;
	value += 0x8d15;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 5);
	return value-97;
}
uint32_t test_func88(uint32_t value){
	value *= value;
	value += 0x5fd4;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-10;
}
uint32_t test_func89(uint32_t value){
	value *= value;
	value += 0x2cad;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	return value-35;
}
uint32_t test_func90(uint32_t value){
	value *= value;
	value += 0x38e5;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	return value-119;
}
uint32_t test_func91(uint32_t value){
	value *= value;
	value += 0x8915;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-105;
}
uint32_t test_func92(uint32_t value){
	value *= value;
	value += 0x29aa;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	return value-32;
}
uint32_t test_func93(uint32_t value){
	value *= value;
	value += 0x4765;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-59;
}
uint32_t test_func94(uint32_t value){
	value *= value;
	value += 0x17dc;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	return value-79;
}
uint32_t test_func95(uint32_t value){
	value *= value;
	value += 0x11f7;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	return value-84;
}
uint32_t test_func96(uint32_t value){
	value *= value;
	value += 0x7675;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	return value-93;
}
uint32_t test_func97(uint32_t value){
	value *= value;
	value += 0x2864;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-81;
}
uint32_t test_func98(uint32_t value){
	value *= value;
	value += 0x55ac;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	return value-80;
}
uint32_t test_func99(uint32_t value){
	value *= value;
	value += 0x6f85;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	return value-68;
}
uint32_t test_func100(uint32_t value){
	value *= value;
	value += 0x72fc;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	return value-119;
}
uint32_t test_func101(uint32_t value){
	value *= value;
	value += 0x8172;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 4);
	return value-99;
}
uint32_t test_func102(uint32_t value){
	value *= value;
	value += 0x491d;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 2);
	return value-18;
}
uint32_t test_func103(uint32_t value){
	value *= value;
	value += 0x3d85;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 7);
	return value-34;
}
uint32_t test_func104(uint32_t value){
	value *= value;
	value += 0x2008;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	return value-106;
}
uint32_t test_func105(uint32_t value){
	value *= value;
	value += 0x5857;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	return value-72;
}
uint32_t test_func106(uint32_t value){
	value *= value;
	value += 0x1cf6;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	return value-119;
}
uint32_t test_func107(uint32_t value){
	value *= value;
	value += 0x6bc0;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	return value-33;
}
uint32_t test_func108(uint32_t value){
	value *= value;
	value += 0x5261;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	return value-122;
}
uint32_t test_func109(uint32_t value){
	value *= value;
	value += 0x86da;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-17;
}
uint32_t test_func110(uint32_t value){
	value *= value;
	value += 0x5001;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	return value-38;
}
uint32_t test_func111(uint32_t value){
	value *= value;
	value += 0x3dfe;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	return value-59;
}
uint32_t test_func112(uint32_t value){
	value *= value;
	value += 0x32cf;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	return value-54;
}
uint32_t test_func113(uint32_t value){
	value *= value;
	value += 0x3ac5;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-33;
}
uint32_t test_func114(uint32_t value){
	value *= value;
	value += 0x3504;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	return value-18;
}
uint32_t test_func115(uint32_t value){
	value *= value;
	value += 0x4c07;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-55;
}
uint32_t test_func116(uint32_t value){
	value *= value;
	value += 0x3e1a;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	return value-111;
}
uint32_t test_func117(uint32_t value){
	value *= value;
	value += 0x75de;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	return value-25;
}
uint32_t test_func118(uint32_t value){
	value *= value;
	value += 0x72c8;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	return value-114;
}
uint32_t test_func119(uint32_t value){
	value *= value;
	value += 0x81a2;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-28;
}
uint32_t test_func120(uint32_t value){
	value *= value;
	value += 0x4509;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	return value-70;
}
uint32_t test_func121(uint32_t value){
	value *= value;
	value += 0x8dee;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	return value-110;
}
uint32_t test_func122(uint32_t value){
	value *= value;
	value += 0x8415;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	return value-73;
}
uint32_t test_func123(uint32_t value){
	value *= value;
	value += 0x1e99;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	return value-62;
}
uint32_t test_func124(uint32_t value){
	value *= value;
	value += 0x6c65;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 3);
	return value-31;
}
uint32_t test_func125(uint32_t value){
	value *= value;
	value += 0x2cbc;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-85;
}
uint32_t test_func126(uint32_t value){
	value *= value;
	value += 0x37b3;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-92;
}
uint32_t test_func127(uint32_t value){
	value *= value;
	value += 0x36b2;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-56;
}
uint32_t test_func128(uint32_t value){
	value *= value;
	value += 0x2cf6;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	return value-36;
}
uint32_t test_func129(uint32_t value){
	value *= value;
	value += 0x5012;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	return value-76;
}
uint32_t test_func130(uint32_t value){
	value *= value;
	value += 0x3069;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	return value-64;
}
uint32_t test_func131(uint32_t value){
	value *= value;
	value += 0x31b6;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-110;
}
uint32_t test_func132(uint32_t value){
	value *= value;
	value += 0x5384;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	return value-74;
}
uint32_t test_func133(uint32_t value){
	value *= value;
	value += 0x49b6;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-25;
}
uint32_t test_func134(uint32_t value){
	value *= value;
	value += 0x6500;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-75;
}
uint32_t test_func135(uint32_t value){
	value *= value;
	value += 0x4b6c;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 1);
	return value-9;
}
uint32_t test_func136(uint32_t value){
	value *= value;
	value += 0x80d7;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	return value-81;
}
uint32_t test_func137(uint32_t value){
	value *= value;
	value += 0x3f71;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	return value-77;
}
uint32_t test_func138(uint32_t value){
	value *= value;
	value += 0x2041;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-31;
}
uint32_t test_func139(uint32_t value){
	value *= value;
	value += 0x139e;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	return value-122;
}
uint32_t test_func140(uint32_t value){
	value *= value;
	value += 0x29b6;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	return value-61;
}
uint32_t test_func141(uint32_t value){
	value *= value;
	value += 0x2b0b;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-60;
}
uint32_t test_func142(uint32_t value){
	value *= value;
	value += 0x80f1;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	return value-38;
}
uint32_t test_func143(uint32_t value){
	value *= value;
	value += 0x6e12;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	return value-127;
}
uint32_t test_func144(uint32_t value){
	value *= value;
	value += 0x16eb;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	return value-90;
}
uint32_t test_func145(uint32_t value){
	value *= value;
	value += 0x5a4c;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 4);
	return value-9;
}
uint32_t test_func146(uint32_t value){
	value *= value;
	value += 0x79db;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-12;
}
uint32_t test_func147(uint32_t value){
	value *= value;
	value += 0x1291;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-28;
}
uint32_t test_func148(uint32_t value){
	value *= value;
	value += 0x653c;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-60;
}
uint32_t test_func149(uint32_t value){
	value *= value;
	value += 0x6efc;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-23;
}
uint32_t test_func150(uint32_t value){
	value *= value;
	value += 0x51c6;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	return value-80;
}
uint32_t test_func151(uint32_t value){
	value *= value;
	value += 0x8ce3;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	return value-22;
}
uint32_t test_func152(uint32_t value){
	value *= value;
	value += 0x8572;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-65;
}
uint32_t test_func153(uint32_t value){
	value *= value;
	value += 0x5ee2;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-21;
}
uint32_t test_func154(uint32_t value){
	value *= value;
	value += 0x2379;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-49;
}
uint32_t test_func155(uint32_t value){
	value *= value;
	value += 0x3cd0;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	return value-6;
}
uint32_t test_func156(uint32_t value){
	value *= value;
	value += 0x3c55;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	return value-13;
}
uint32_t test_func157(uint32_t value){
	value *= value;
	value += 0x73c7;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	return value-122;
}
uint32_t test_func158(uint32_t value){
	value *= value;
	value += 0x5dbd;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	return value-53;
}
uint32_t test_func159(uint32_t value){
	value *= value;
	value += 0x5620;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	return value-69;
}
uint32_t test_func160(uint32_t value){
	value *= value;
	value += 0x22ac;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-14;
}
uint32_t test_func161(uint32_t value){
	value *= value;
	value += 0x4b73;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 8);
	return value-11;
}
uint32_t test_func162(uint32_t value){
	value *= value;
	value += 0x435a;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	return value-46;
}
uint32_t test_func163(uint32_t value){
	value *= value;
	value += 0x609a;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	return value-115;
}
uint32_t test_func164(uint32_t value){
	value *= value;
	value += 0x2541;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-119;
}
uint32_t test_func165(uint32_t value){
	value *= value;
	value += 0x57ae;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	return value-68;
}
uint32_t test_func166(uint32_t value){
	value *= value;
	value += 0x6b18;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	return value-54;
}
uint32_t test_func167(uint32_t value){
	value *= value;
	value += 0x3808;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	return value-126;
}
uint32_t test_func168(uint32_t value){
	value *= value;
	value += 0x84da;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 7) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	return value-70;
}
uint32_t test_func169(uint32_t value){
	value *= value;
	value += 0x5e40;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 4);
	return value-124;
}
uint32_t test_func170(uint32_t value){
	value *= value;
	value += 0x3fbf;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 2);
	return value-45;
}
uint32_t test_func171(uint32_t value){
	value *= value;
	value += 0x8c30;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	return value-23;
}
uint32_t test_func172(uint32_t value){
	value *= value;
	value += 0x5640;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	return value-64;
}
uint32_t test_func173(uint32_t value){
	value *= value;
	value += 0x78f0;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-70;
}
uint32_t test_func174(uint32_t value){
	value *= value;
	value += 0x8016;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-63;
}
uint32_t test_func175(uint32_t value){
	value *= value;
	value += 0x60da;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	return value-59;
}
uint32_t test_func176(uint32_t value){
	value *= value;
	value += 0x823b;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-114;
}
uint32_t test_func177(uint32_t value){
	value *= value;
	value += 0x1587;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	value = (value >> 7) + (value >> 1);
	return value-4;
}
uint32_t test_func178(uint32_t value){
	value *= value;
	value += 0x3ee6;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	return value-87;
}
uint32_t test_func179(uint32_t value){
	value *= value;
	value += 0x8dd0;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-42;
}
uint32_t test_func180(uint32_t value){
	value *= value;
	value += 0x4592;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	return value-47;
}
uint32_t test_func181(uint32_t value){
	value *= value;
	value += 0x75ce;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	return value-88;
}
uint32_t test_func182(uint32_t value){
	value *= value;
	value += 0x62f7;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-50;
}
uint32_t test_func183(uint32_t value){
	value *= value;
	value += 0x3ed9;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	return value-113;
}
uint32_t test_func184(uint32_t value){
	value *= value;
	value += 0x310f;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-24;
}
uint32_t test_func185(uint32_t value){
	value *= value;
	value += 0x2f8a;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-53;
}
uint32_t test_func186(uint32_t value){
	value *= value;
	value += 0x2711;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	return value-77;
}
uint32_t test_func187(uint32_t value){
	value *= value;
	value += 0x73bc;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	return value-97;
}
uint32_t test_func188(uint32_t value){
	value *= value;
	value += 0x2978;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	return value-13;
}
uint32_t test_func189(uint32_t value){
	value *= value;
	value += 0x2c86;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	return value-80;
}
uint32_t test_func190(uint32_t value){
	value *= value;
	value += 0x19fc;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	return value-118;
}
uint32_t test_func191(uint32_t value){
	value *= value;
	value += 0x8042;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	return value-23;
}
uint32_t test_func192(uint32_t value){
	value *= value;
	value += 0x6796;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 3);
	return value-59;
}
uint32_t test_func193(uint32_t value){
	value *= value;
	value += 0x2a89;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	return value-40;
}
uint32_t test_func194(uint32_t value){
	value *= value;
	value += 0x1e7f;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	return value-59;
}
uint32_t test_func195(uint32_t value){
	value *= value;
	value += 0x8c33;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-116;
}
uint32_t test_func196(uint32_t value){
	value *= value;
	value += 0x7831;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 8);
	value = (value >> 9) + (value >> 8);
	return value-27;
}
uint32_t test_func197(uint32_t value){
	value *= value;
	value += 0x3b5a;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 4);
	return value-5;
}
uint32_t test_func198(uint32_t value){
	value *= value;
	value += 0x6b64;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	return value-115;
}
uint32_t test_func199(uint32_t value){
	value *= value;
	value += 0x1357;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 4);
	value = (value >> 8) + (value >> 2);
	return value-35;
}
uint32_t test_func200(uint32_t value){
	value *= value;
	value += 0x3c11;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	return value-102;
}
uint32_t test_func201(uint32_t value){
	value *= value;
	value += 0x44c2;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	return value-115;
}
uint32_t test_func202(uint32_t value){
	value *= value;
	value += 0x8b71;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-67;
}
uint32_t test_func203(uint32_t value){
	value *= value;
	value += 0x6575;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	return value-25;
}
uint32_t test_func204(uint32_t value){
	value *= value;
	value += 0x67fd;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-35;
}
uint32_t test_func205(uint32_t value){
	value *= value;
	value += 0x8089;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	return value-76;
}
uint32_t test_func206(uint32_t value){
	value *= value;
	value += 0x5d6f;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	return value-18;
}
uint32_t test_func207(uint32_t value){
	value *= value;
	value += 0x2657;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	value = (value >> 9) + (value >> 8);
	return value-14;
}
uint32_t test_func208(uint32_t value){
	value *= value;
	value += 0x84be;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	return value-31;
}
uint32_t test_func209(uint32_t value){
	value *= value;
	value += 0x7c77;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	return value-47;
}
uint32_t test_func210(uint32_t value){
	value *= value;
	value += 0x1425;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-15;
}
uint32_t test_func211(uint32_t value){
	value *= value;
	value += 0x4dc3;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-4;
}
uint32_t test_func212(uint32_t value){
	value *= value;
	value += 0x6f1c;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	return value-109;
}
uint32_t test_func213(uint32_t value){
	value *= value;
	value += 0x1a53;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	return value-126;
}
uint32_t test_func214(uint32_t value){
	value *= value;
	value += 0x365d;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-53;
}
uint32_t test_func215(uint32_t value){
	value *= value;
	value += 0x2782;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-74;
}
uint32_t test_func216(uint32_t value){
	value *= value;
	value += 0x57df;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	return value-107;
}
uint32_t test_func217(uint32_t value){
	value *= value;
	value += 0x8fe7;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	return value-110;
}
uint32_t test_func218(uint32_t value){
	value *= value;
	value += 0x1edd;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	return value-67;
}
uint32_t test_func219(uint32_t value){
	value *= value;
	value += 0x535c;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	return value-112;
}
uint32_t test_func220(uint32_t value){
	value *= value;
	value += 0x43cf;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-59;
}
uint32_t test_func221(uint32_t value){
	value *= value;
	value += 0x66f9;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	return value-113;
}
uint32_t test_func222(uint32_t value){
	value *= value;
	value += 0x7c6e;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	return value-67;
}
uint32_t test_func223(uint32_t value){
	value *= value;
	value += 0x4518;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	return value-81;
}
uint32_t test_func224(uint32_t value){
	value *= value;
	value += 0x8bb4;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	return value-80;
}
uint32_t test_func225(uint32_t value){
	value *= value;
	value += 0x7d52;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-73;
}
uint32_t test_func226(uint32_t value){
	value *= value;
	value += 0x51d8;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-7;
}
uint32_t test_func227(uint32_t value){
	value *= value;
	value += 0x4480;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	return value-16;
}
uint32_t test_func228(uint32_t value){
	value *= value;
	value += 0x5c55;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-89;
}
uint32_t test_func229(uint32_t value){
	value *= value;
	value += 0x84ba;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-123;
}
uint32_t test_func230(uint32_t value){
	value *= value;
	value += 0x75e3;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	return value-37;
}
uint32_t test_func231(uint32_t value){
	value *= value;
	value += 0x6d5a;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 1);
	return value-26;
}
uint32_t test_func232(uint32_t value){
	value *= value;
	value += 0x367b;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-84;
}
uint32_t test_func233(uint32_t value){
	value *= value;
	value += 0x82f9;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	return value-85;
}
uint32_t test_func234(uint32_t value){
	value *= value;
	value += 0x1357;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	return value-127;
}
uint32_t test_func235(uint32_t value){
	value *= value;
	value += 0x2f6f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	return value-29;
}
uint32_t test_func236(uint32_t value){
	value *= value;
	value += 0x6eee;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-8;
}
uint32_t test_func237(uint32_t value){
	value *= value;
	value += 0x51d6;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	return value-113;
}
uint32_t test_func238(uint32_t value){
	value *= value;
	value += 0x28fb;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	return value-63;
}
uint32_t test_func239(uint32_t value){
	value *= value;
	value += 0x4e87;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-23;
}
uint32_t test_func240(uint32_t value){
	value *= value;
	value += 0x2e76;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	return value-1;
}
uint32_t test_func241(uint32_t value){
	value *= value;
	value += 0x1f1a;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	return value-44;
}
uint32_t test_func242(uint32_t value){
	value *= value;
	value += 0x8998;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	return value-84;
}
uint32_t test_func243(uint32_t value){
	value *= value;
	value += 0x626a;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-74;
}
uint32_t test_func244(uint32_t value){
	value *= value;
	value += 0x71db;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	return value-19;
}
uint32_t test_func245(uint32_t value){
	value *= value;
	value += 0x6c8d;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-43;
}
uint32_t test_func246(uint32_t value){
	value *= value;
	value += 0x5bf6;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	return value-121;
}
uint32_t test_func247(uint32_t value){
	value *= value;
	value += 0x56df;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 5) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	return value-66;
}
uint32_t test_func248(uint32_t value){
	value *= value;
	value += 0x89e4;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-89;
}
uint32_t test_func249(uint32_t value){
	value *= value;
	value += 0x8ff7;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	return value-96;
}
uint32_t test_func250(uint32_t value){
	value *= value;
	value += 0x1add;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	return value-46;
}
uint32_t test_func251(uint32_t value){
	value *= value;
	value += 0x6baf;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	return value-81;
}
uint32_t test_func252(uint32_t value){
	value *= value;
	value += 0x1b5b;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-61;
}
uint32_t test_func253(uint32_t value){
	value *= value;
	value += 0x3320;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	return value-1;
}
uint32_t test_func254(uint32_t value){
	value *= value;
	value += 0x1514;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	return value-58;
}
uint32_t test_func255(uint32_t value){
	value *= value;
	value += 0x34a2;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-18;
}
uint32_t test_func256(uint32_t value){
	value *= value;
	value += 0x1f06;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	return value-102;
}
uint32_t test_func257(uint32_t value){
	value *= value;
	value += 0x53d0;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	value = (value >> 9) + (value >> 8);
	return value-12;
}
uint32_t test_func258(uint32_t value){
	value *= value;
	value += 0x6d65;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-49;
}
uint32_t test_func259(uint32_t value){
	value *= value;
	value += 0x1980;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-104;
}
uint32_t test_func260(uint32_t value){
	value *= value;
	value += 0x61ad;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-77;
}
uint32_t test_func261(uint32_t value){
	value *= value;
	value += 0x43ce;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 2);
	return value-70;
}
uint32_t test_func262(uint32_t value){
	value *= value;
	value += 0x1a97;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	return value-103;
}
uint32_t test_func263(uint32_t value){
	value *= value;
	value += 0x5611;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	return value-124;
}
uint32_t test_func264(uint32_t value){
	value *= value;
	value += 0x841a;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	return value-46;
}
uint32_t test_func265(uint32_t value){
	value *= value;
	value += 0x28e3;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	return value-65;
}
uint32_t test_func266(uint32_t value){
	value *= value;
	value += 0x6771;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	return value-1;
}
uint32_t test_func267(uint32_t value){
	value *= value;
	value += 0x7a1d;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	return value-68;
}
uint32_t test_func268(uint32_t value){
	value *= value;
	value += 0x7b14;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	return value-14;
}
uint32_t test_func269(uint32_t value){
	value *= value;
	value += 0x7cd7;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	return value-84;
}
uint32_t test_func270(uint32_t value){
	value *= value;
	value += 0x72bc;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-104;
}
uint32_t test_func271(uint32_t value){
	value *= value;
	value += 0x696b;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	return value-120;
}
uint32_t test_func272(uint32_t value){
	value *= value;
	value += 0x8f62;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	return value-54;
}
uint32_t test_func273(uint32_t value){
	value *= value;
	value += 0x8d72;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	return value-26;
}
uint32_t test_func274(uint32_t value){
	value *= value;
	value += 0x2f3f;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	return value-73;
}
uint32_t test_func275(uint32_t value){
	value *= value;
	value += 0x5bc4;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-28;
}
uint32_t test_func276(uint32_t value){
	value *= value;
	value += 0x5dcd;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	return value-64;
}
uint32_t test_func277(uint32_t value){
	value *= value;
	value += 0x7c7b;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	return value-126;
}
uint32_t test_func278(uint32_t value){
	value *= value;
	value += 0x63c4;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	return value-33;
}
uint32_t test_func279(uint32_t value){
	value *= value;
	value += 0x5cf0;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 4);
	return value-123;
}
uint32_t test_func280(uint32_t value){
	value *= value;
	value += 0x571d;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 4);
	return value-6;
}
uint32_t test_func281(uint32_t value){
	value *= value;
	value += 0x3fbc;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	return value-44;
}
uint32_t test_func282(uint32_t value){
	value *= value;
	value += 0x2b11;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	return value-47;
}
uint32_t test_func283(uint32_t value){
	value *= value;
	value += 0x4cb7;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	return value-39;
}
uint32_t test_func284(uint32_t value){
	value *= value;
	value += 0x401a;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	return value-46;
}
uint32_t test_func285(uint32_t value){
	value *= value;
	value += 0x20fb;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	return value-31;
}
uint32_t test_func286(uint32_t value){
	value *= value;
	value += 0x73f0;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	return value-124;
}
uint32_t test_func287(uint32_t value){
	value *= value;
	value += 0x5ee1;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	return value-124;
}
uint32_t test_func288(uint32_t value){
	value *= value;
	value += 0x318b;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	return value-35;
}
uint32_t test_func289(uint32_t value){
	value *= value;
	value += 0x3e01;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	return value-15;
}
uint32_t test_func290(uint32_t value){
	value *= value;
	value += 0x8126;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	return value-88;
}
uint32_t test_func291(uint32_t value){
	value *= value;
	value += 0x1b35;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	return value-27;
}
uint32_t test_func292(uint32_t value){
	value *= value;
	value += 0x183a;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-28;
}
uint32_t test_func293(uint32_t value){
	value *= value;
	value += 0x8896;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	return value-8;
}
uint32_t test_func294(uint32_t value){
	value *= value;
	value += 0x697e;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-93;
}
uint32_t test_func295(uint32_t value){
	value *= value;
	value += 0x5d7c;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	return value-113;
}
uint32_t test_func296(uint32_t value){
	value *= value;
	value += 0x34ed;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	return value-21;
}
uint32_t test_func297(uint32_t value){
	value *= value;
	value += 0x4681;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	value = (value >> 5) + (value >> 3);
	return value-86;
}
uint32_t test_func298(uint32_t value){
	value *= value;
	value += 0x17bf;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	return value-107;
}
uint32_t test_func299(uint32_t value){
	value *= value;
	value += 0x557e;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	return value-47;
}
uint32_t test_func300(uint32_t value){
	value *= value;
	value += 0x1c6d;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 2);
	return value-82;
}
uint32_t test_func301(uint32_t value){
	value *= value;
	value += 0x118c;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	return value-20;
}
uint32_t test_func302(uint32_t value){
	value *= value;
	value += 0x4ab0;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	return value-43;
}
uint32_t test_func303(uint32_t value){
	value *= value;
	value += 0x8703;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	return value-82;
}
uint32_t test_func304(uint32_t value){
	value *= value;
	value += 0x3782;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	return value-97;
}
uint32_t test_func305(uint32_t value){
	value *= value;
	value += 0x577d;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 4);
	return value-28;
}
uint32_t test_func306(uint32_t value){
	value *= value;
	value += 0x151b;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	return value-14;
}
uint32_t test_func307(uint32_t value){
	value *= value;
	value += 0x49d3;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-26;
}
uint32_t test_func308(uint32_t value){
	value *= value;
	value += 0x42f3;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 1);
	return value-23;
}
uint32_t test_func309(uint32_t value){
	value *= value;
	value += 0x5a1d;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 2);
	return value-21;
}
uint32_t test_func310(uint32_t value){
	value *= value;
	value += 0x5dc6;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	return value-76;
}
uint32_t test_func311(uint32_t value){
	value *= value;
	value += 0x49b5;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	return value-20;
}
uint32_t test_func312(uint32_t value){
	value *= value;
	value += 0x4f8a;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 3);
	return value-15;
}
uint32_t test_func313(uint32_t value){
	value *= value;
	value += 0x2f34;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	return value-114;
}
uint32_t test_func314(uint32_t value){
	value *= value;
	value += 0x5f79;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	return value-104;
}
uint32_t test_func315(uint32_t value){
	value *= value;
	value += 0x8673;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	return value-18;
}
uint32_t test_func316(uint32_t value){
	value *= value;
	value += 0x420d;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	return value-47;
}
uint32_t test_func317(uint32_t value){
	value *= value;
	value += 0x408a;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	return value-104;
}
uint32_t test_func318(uint32_t value){
	value *= value;
	value += 0x28fe;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 6);
	return value-40;
}
uint32_t test_func319(uint32_t value){
	value *= value;
	value += 0x53d3;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	return value-45;
}
uint32_t test_func320(uint32_t value){
	value *= value;
	value += 0x5345;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-37;
}
uint32_t test_func321(uint32_t value){
	value *= value;
	value += 0x4be6;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	return value-115;
}
uint32_t test_func322(uint32_t value){
	value *= value;
	value += 0x1d1c;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	return value-32;
}
uint32_t test_func323(uint32_t value){
	value *= value;
	value += 0x599e;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-74;
}
uint32_t test_func324(uint32_t value){
	value *= value;
	value += 0x8ffa;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	return value-99;
}
uint32_t test_func325(uint32_t value){
	value *= value;
	value += 0x6312;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	return value-93;
}
uint32_t test_func326(uint32_t value){
	value *= value;
	value += 0x729a;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	return value-38;
}
uint32_t test_func327(uint32_t value){
	value *= value;
	value += 0x139b;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	return value-20;
}
uint32_t test_func328(uint32_t value){
	value *= value;
	value += 0x58f4;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	return value-40;
}
uint32_t test_func329(uint32_t value){
	value *= value;
	value += 0x6bd4;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	return value-54;
}
uint32_t test_func330(uint32_t value){
	value *= value;
	value += 0x3441;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	return value-90;
}
uint32_t test_func331(uint32_t value){
	value *= value;
	value += 0x5194;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	return value-126;
}
uint32_t test_func332(uint32_t value){
	value *= value;
	value += 0x62fa;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-120;
}
uint32_t test_func333(uint32_t value){
	value *= value;
	value += 0x1ff5;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	return value-80;
}
uint32_t test_func334(uint32_t value){
	value *= value;
	value += 0x40d9;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	return value-40;
}
uint32_t test_func335(uint32_t value){
	value *= value;
	value += 0x374f;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-66;
}
uint32_t test_func336(uint32_t value){
	value *= value;
	value += 0x36d6;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	return value-32;
}
uint32_t test_func337(uint32_t value){
	value *= value;
	value += 0x8d3d;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	return value-77;
}
uint32_t test_func338(uint32_t value){
	value *= value;
	value += 0x4b2a;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	return value-64;
}
uint32_t test_func339(uint32_t value){
	value *= value;
	value += 0x3c96;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-99;
}
uint32_t test_func340(uint32_t value){
	value *= value;
	value += 0x314e;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	return value-54;
}
uint32_t test_func341(uint32_t value){
	value *= value;
	value += 0x1573;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-19;
}
uint32_t test_func342(uint32_t value){
	value *= value;
	value += 0x59fb;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-25;
}
uint32_t test_func343(uint32_t value){
	value *= value;
	value += 0x2d2f;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	return value-43;
}
uint32_t test_func344(uint32_t value){
	value *= value;
	value += 0x832b;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-20;
}
uint32_t test_func345(uint32_t value){
	value *= value;
	value += 0x6e61;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	return value-81;
}
uint32_t test_func346(uint32_t value){
	value *= value;
	value += 0x4815;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	return value-118;
}
uint32_t test_func347(uint32_t value){
	value *= value;
	value += 0x28e2;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	return value-45;
}
uint32_t test_func348(uint32_t value){
	value *= value;
	value += 0x3134;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 7);
	return value-97;
}
uint32_t test_func349(uint32_t value){
	value *= value;
	value += 0x21cd;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-1;
}
uint32_t test_func350(uint32_t value){
	value *= value;
	value += 0x4441;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	return value-96;
}
uint32_t test_func351(uint32_t value){
	value *= value;
	value += 0x2379;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	return value-69;
}
uint32_t test_func352(uint32_t value){
	value *= value;
	value += 0x1433;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	return value-9;
}
uint32_t test_func353(uint32_t value){
	value *= value;
	value += 0x8d80;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-91;
}
uint32_t test_func354(uint32_t value){
	value *= value;
	value += 0x5145;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	return value-36;
}
uint32_t test_func355(uint32_t value){
	value *= value;
	value += 0x64ba;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	return value-21;
}
uint32_t test_func356(uint32_t value){
	value *= value;
	value += 0x58ee;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 5);
	return value-65;
}
uint32_t test_func357(uint32_t value){
	value *= value;
	value += 0x6342;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	return value-106;
}
uint32_t test_func358(uint32_t value){
	value *= value;
	value += 0x45e9;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-95;
}
uint32_t test_func359(uint32_t value){
	value *= value;
	value += 0x886f;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	return value-10;
}
uint32_t test_func360(uint32_t value){
	value *= value;
	value += 0x802f;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	return value-7;
}
uint32_t test_func361(uint32_t value){
	value *= value;
	value += 0x28da;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-125;
}
uint32_t test_func362(uint32_t value){
	value *= value;
	value += 0x4cf7;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	return value-111;
}
uint32_t test_func363(uint32_t value){
	value *= value;
	value += 0x7e5e;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	return value-82;
}
uint32_t test_func364(uint32_t value){
	value *= value;
	value += 0x5ebc;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	return value-30;
}
uint32_t test_func365(uint32_t value){
	value *= value;
	value += 0x3812;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	return value-43;
}
uint32_t test_func366(uint32_t value){
	value *= value;
	value += 0x6535;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	return value-2;
}
uint32_t test_func367(uint32_t value){
	value *= value;
	value += 0x8a50;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-105;
}
uint32_t test_func368(uint32_t value){
	value *= value;
	value += 0x1d5d;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-21;
}
uint32_t test_func369(uint32_t value){
	value *= value;
	value += 0x3eb0;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-81;
}
uint32_t test_func370(uint32_t value){
	value *= value;
	value += 0x616d;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	return value-2;
}
uint32_t test_func371(uint32_t value){
	value *= value;
	value += 0x440c;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-23;
}
uint32_t test_func372(uint32_t value){
	value *= value;
	value += 0x38dc;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-61;
}
uint32_t test_func373(uint32_t value){
	value *= value;
	value += 0x3e7d;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	return value-22;
}
uint32_t test_func374(uint32_t value){
	value *= value;
	value += 0x6865;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	return value-42;
}
uint32_t test_func375(uint32_t value){
	value *= value;
	value += 0x175c;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-98;
}
uint32_t test_func376(uint32_t value){
	value *= value;
	value += 0x8200;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	return value-54;
}
uint32_t test_func377(uint32_t value){
	value *= value;
	value += 0x8d41;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-107;
}
uint32_t test_func378(uint32_t value){
	value *= value;
	value += 0x74e6;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-124;
}
uint32_t test_func379(uint32_t value){
	value *= value;
	value += 0x4406;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	return value-29;
}
uint32_t test_func380(uint32_t value){
	value *= value;
	value += 0x1d90;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	return value-100;
}
uint32_t test_func381(uint32_t value){
	value *= value;
	value += 0x54c4;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-5;
}
uint32_t test_func382(uint32_t value){
	value *= value;
	value += 0x55b7;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	return value-65;
}
uint32_t test_func383(uint32_t value){
	value *= value;
	value += 0x5dd3;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-101;
}
uint32_t test_func384(uint32_t value){
	value *= value;
	value += 0x8455;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 8);
	return value-114;
}
uint32_t test_func385(uint32_t value){
	value *= value;
	value += 0x12cd;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	return value-99;
}
uint32_t test_func386(uint32_t value){
	value *= value;
	value += 0x2da2;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	return value-9;
}
uint32_t test_func387(uint32_t value){
	value *= value;
	value += 0x4c8b;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-28;
}
uint32_t test_func388(uint32_t value){
	value *= value;
	value += 0x8317;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	return value-90;
}
uint32_t test_func389(uint32_t value){
	value *= value;
	value += 0x1926;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-76;
}
uint32_t test_func390(uint32_t value){
	value *= value;
	value += 0x736d;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	return value-45;
}
uint32_t test_func391(uint32_t value){
	value *= value;
	value += 0x4bf6;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	return value-106;
}
uint32_t test_func392(uint32_t value){
	value *= value;
	value += 0x3a9d;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	return value-83;
}
uint32_t test_func393(uint32_t value){
	value *= value;
	value += 0x8d95;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 2);
	return value-78;
}
uint32_t test_func394(uint32_t value){
	value *= value;
	value += 0x71e1;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-76;
}
uint32_t test_func395(uint32_t value){
	value *= value;
	value += 0x6bdb;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	return value-70;
}
uint32_t test_func396(uint32_t value){
	value *= value;
	value += 0x1fb1;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-101;
}
uint32_t test_func397(uint32_t value){
	value *= value;
	value += 0x69e3;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-67;
}
uint32_t test_func398(uint32_t value){
	value *= value;
	value += 0x47c6;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-83;
}
uint32_t test_func399(uint32_t value){
	value *= value;
	value += 0x1004;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 1);
	return value-106;
}
uint32_t test_func400(uint32_t value){
	value *= value;
	value += 0x7b19;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	return value-91;
}
uint32_t test_func401(uint32_t value){
	value *= value;
	value += 0x7bd8;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	return value-70;
}
uint32_t test_func402(uint32_t value){
	value *= value;
	value += 0x67e4;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 2);
	return value-112;
}
uint32_t test_func403(uint32_t value){
	value *= value;
	value += 0x7037;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-87;
}
uint32_t test_func404(uint32_t value){
	value *= value;
	value += 0x699e;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	return value-77;
}
uint32_t test_func405(uint32_t value){
	value *= value;
	value += 0x653b;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	return value-63;
}
uint32_t test_func406(uint32_t value){
	value *= value;
	value += 0x1902;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	return value-28;
}
uint32_t test_func407(uint32_t value){
	value *= value;
	value += 0x183d;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	return value-88;
}
uint32_t test_func408(uint32_t value){
	value *= value;
	value += 0x5c08;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	return value-21;
}
uint32_t test_func409(uint32_t value){
	value *= value;
	value += 0x1bd6;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-93;
}
uint32_t test_func410(uint32_t value){
	value *= value;
	value += 0x75ea;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-25;
}
uint32_t test_func411(uint32_t value){
	value *= value;
	value += 0x67de;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	return value-1;
}
uint32_t test_func412(uint32_t value){
	value *= value;
	value += 0x171f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	return value-87;
}
uint32_t test_func413(uint32_t value){
	value *= value;
	value += 0x696f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	return value-24;
}
uint32_t test_func414(uint32_t value){
	value *= value;
	value += 0x6d62;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-108;
}
uint32_t test_func415(uint32_t value){
	value *= value;
	value += 0x12e1;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	return value-45;
}
uint32_t test_func416(uint32_t value){
	value *= value;
	value += 0x33ab;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	return value-2;
}
uint32_t test_func417(uint32_t value){
	value *= value;
	value += 0x6bcf;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	return value-45;
}
uint32_t test_func418(uint32_t value){
	value *= value;
	value += 0x4233;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 6);
	return value-107;
}
uint32_t test_func419(uint32_t value){
	value *= value;
	value += 0x2110;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	return value-125;
}
uint32_t test_func420(uint32_t value){
	value *= value;
	value += 0x1e73;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	return value-74;
}
uint32_t test_func421(uint32_t value){
	value *= value;
	value += 0x14be;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-36;
}
uint32_t test_func422(uint32_t value){
	value *= value;
	value += 0x8b25;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-44;
}
uint32_t test_func423(uint32_t value){
	value *= value;
	value += 0x6e31;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	return value-94;
}
uint32_t test_func424(uint32_t value){
	value *= value;
	value += 0x1840;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	return value-44;
}
uint32_t test_func425(uint32_t value){
	value *= value;
	value += 0x2a03;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	return value-73;
}
uint32_t test_func426(uint32_t value){
	value *= value;
	value += 0x32ff;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-17;
}
uint32_t test_func427(uint32_t value){
	value *= value;
	value += 0x2a0d;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	return value-2;
}
uint32_t test_func428(uint32_t value){
	value *= value;
	value += 0x35da;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	return value-108;
}
uint32_t test_func429(uint32_t value){
	value *= value;
	value += 0x4568;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-56;
}
uint32_t test_func430(uint32_t value){
	value *= value;
	value += 0x788b;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	return value-65;
}
uint32_t test_func431(uint32_t value){
	value *= value;
	value += 0x586c;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	return value-98;
}
uint32_t test_func432(uint32_t value){
	value *= value;
	value += 0x6009;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 4);
	return value-24;
}
uint32_t test_func433(uint32_t value){
	value *= value;
	value += 0x54b3;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	value = (value >> 5) + (value >> 7);
	return value-76;
}
uint32_t test_func434(uint32_t value){
	value *= value;
	value += 0x6e8f;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	return value-45;
}
uint32_t test_func435(uint32_t value){
	value *= value;
	value += 0x5116;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-67;
}
uint32_t test_func436(uint32_t value){
	value *= value;
	value += 0x5395;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	return value-5;
}
uint32_t test_func437(uint32_t value){
	value *= value;
	value += 0x19ad;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	return value-44;
}
uint32_t test_func438(uint32_t value){
	value *= value;
	value += 0x7bd4;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	return value-18;
}
uint32_t test_func439(uint32_t value){
	value *= value;
	value += 0x3fd2;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 8) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	return value-46;
}
uint32_t test_func440(uint32_t value){
	value *= value;
	value += 0x2145;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	return value-78;
}
uint32_t test_func441(uint32_t value){
	value *= value;
	value += 0x2a1e;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-73;
}
uint32_t test_func442(uint32_t value){
	value *= value;
	value += 0x5b22;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 9) + (value >> 8);
	return value-105;
}
uint32_t test_func443(uint32_t value){
	value *= value;
	value += 0x2469;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	return value-120;
}
uint32_t test_func444(uint32_t value){
	value *= value;
	value += 0x2de2;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	return value-91;
}
uint32_t test_func445(uint32_t value){
	value *= value;
	value += 0x6fce;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	return value-87;
}
uint32_t test_func446(uint32_t value){
	value *= value;
	value += 0x1b40;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	return value-4;
}
uint32_t test_func447(uint32_t value){
	value *= value;
	value += 0x52a4;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 2);
	return value-60;
}
uint32_t test_func448(uint32_t value){
	value *= value;
	value += 0x3234;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	return value-85;
}
uint32_t test_func449(uint32_t value){
	value *= value;
	value += 0x2884;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	return value-87;
}
uint32_t test_func450(uint32_t value){
	value *= value;
	value += 0x1ef8;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	return value-108;
}
uint32_t test_func451(uint32_t value){
	value *= value;
	value += 0x7249;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-89;
}
uint32_t test_func452(uint32_t value){
	value *= value;
	value += 0x3b03;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	return value-50;
}
uint32_t test_func453(uint32_t value){
	value *= value;
	value += 0x660a;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	return value-15;
}
uint32_t test_func454(uint32_t value){
	value *= value;
	value += 0x1d10;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	return value-125;
}
uint32_t test_func455(uint32_t value){
	value *= value;
	value += 0x7f20;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	return value-127;
}
uint32_t test_func456(uint32_t value){
	value *= value;
	value += 0x2917;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 3);
	return value-48;
}
uint32_t test_func457(uint32_t value){
	value *= value;
	value += 0x8e26;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	return value-14;
}
uint32_t test_func458(uint32_t value){
	value *= value;
	value += 0x2051;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	return value-89;
}
uint32_t test_func459(uint32_t value){
	value *= value;
	value += 0x48f3;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	return value-31;
}
uint32_t test_func460(uint32_t value){
	value *= value;
	value += 0x3138;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	return value-83;
}
uint32_t test_func461(uint32_t value){
	value *= value;
	value += 0x5aa1;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	return value-43;
}
uint32_t test_func462(uint32_t value){
	value *= value;
	value += 0x8783;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	return value-104;
}
uint32_t test_func463(uint32_t value){
	value *= value;
	value += 0x7388;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-111;
}
uint32_t test_func464(uint32_t value){
	value *= value;
	value += 0x5c2d;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	return value-106;
}
uint32_t test_func465(uint32_t value){
	value *= value;
	value += 0x5942;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 8);
	return value-5;
}
uint32_t test_func466(uint32_t value){
	value *= value;
	value += 0x856e;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	return value-90;
}
uint32_t test_func467(uint32_t value){
	value *= value;
	value += 0x76a8;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-121;
}
uint32_t test_func468(uint32_t value){
	value *= value;
	value += 0x86bf;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	return value-7;
}
uint32_t test_func469(uint32_t value){
	value *= value;
	value += 0x6bd3;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 2);
	return value-1;
}
uint32_t test_func470(uint32_t value){
	value *= value;
	value += 0x20d9;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	return value-40;
}
uint32_t test_func471(uint32_t value){
	value *= value;
	value += 0x1e1b;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	return value-4;
}
uint32_t test_func472(uint32_t value){
	value *= value;
	value += 0x61b6;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-7;
}
uint32_t test_func473(uint32_t value){
	value *= value;
	value += 0x481a;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 3);
	return value-78;
}
uint32_t test_func474(uint32_t value){
	value *= value;
	value += 0x348e;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	return value-20;
}
uint32_t test_func475(uint32_t value){
	value *= value;
	value += 0x89a9;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	return value-36;
}
uint32_t test_func476(uint32_t value){
	value *= value;
	value += 0x71da;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	return value-15;
}
uint32_t test_func477(uint32_t value){
	value *= value;
	value += 0x77e1;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	return value-102;
}
uint32_t test_func478(uint32_t value){
	value *= value;
	value += 0x6f53;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	return value-36;
}
uint32_t test_func479(uint32_t value){
	value *= value;
	value += 0x2d1a;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	return value-50;
}
uint32_t test_func480(uint32_t value){
	value *= value;
	value += 0x8ff2;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-13;
}
uint32_t test_func481(uint32_t value){
	value *= value;
	value += 0x58ee;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	return value-4;
}
uint32_t test_func482(uint32_t value){
	value *= value;
	value += 0x53f1;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	return value-44;
}
uint32_t test_func483(uint32_t value){
	value *= value;
	value += 0x5035;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	return value-83;
}
uint32_t test_func484(uint32_t value){
	value *= value;
	value += 0x68c8;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	return value-53;
}
uint32_t test_func485(uint32_t value){
	value *= value;
	value += 0x1d09;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	return value-50;
}
uint32_t test_func486(uint32_t value){
	value *= value;
	value += 0x3930;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-65;
}
uint32_t test_func487(uint32_t value){
	value *= value;
	value += 0x8ec3;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	return value-113;
}
uint32_t test_func488(uint32_t value){
	value *= value;
	value += 0x7d22;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-3;
}
uint32_t test_func489(uint32_t value){
	value *= value;
	value += 0x49fc;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	return value-61;
}
uint32_t test_func490(uint32_t value){
	value *= value;
	value += 0x49d7;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	return value-73;
}
uint32_t test_func491(uint32_t value){
	value *= value;
	value += 0x588c;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	return value-63;
}
uint32_t test_func492(uint32_t value){
	value *= value;
	value += 0x21c9;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	return value-61;
}
uint32_t test_func493(uint32_t value){
	value *= value;
	value += 0x398e;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	return value-59;
}
uint32_t test_func494(uint32_t value){
	value *= value;
	value += 0x84b0;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-106;
}
uint32_t test_func495(uint32_t value){
	value *= value;
	value += 0x7158;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	return value-53;
}
uint32_t test_func496(uint32_t value){
	value *= value;
	value += 0x7f85;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	return value-110;
}
uint32_t test_func497(uint32_t value){
	value *= value;
	value += 0x1986;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	return value-13;
}
uint32_t test_func498(uint32_t value){
	value *= value;
	value += 0x3c81;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	return value-21;
}
uint32_t test_func499(uint32_t value){
	value *= value;
	value += 0x70ef;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-27;
}
uint32_t test_func500(uint32_t value){
	value *= value;
	value += 0x131d;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 1);
	return value-111;
}
uint32_t test_func501(uint32_t value){
	value *= value;
	value += 0x6bad;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-90;
}
uint32_t test_func502(uint32_t value){
	value *= value;
	value += 0x1813;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-2;
}
uint32_t test_func503(uint32_t value){
	value *= value;
	value += 0x4319;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-120;
}
uint32_t test_func504(uint32_t value){
	value *= value;
	value += 0x2d5b;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	return value-89;
}
uint32_t test_func505(uint32_t value){
	value *= value;
	value += 0x85cb;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	return value-14;
}
uint32_t test_func506(uint32_t value){
	value *= value;
	value += 0x122e;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-50;
}
uint32_t test_func507(uint32_t value){
	value *= value;
	value += 0x279d;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	return value-33;
}
uint32_t test_func508(uint32_t value){
	value *= value;
	value += 0x7305;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 7);
	return value-19;
}
uint32_t test_func509(uint32_t value){
	value *= value;
	value += 0x11a8;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	return value-96;
}
uint32_t test_func510(uint32_t value){
	value *= value;
	value += 0x7999;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-110;
}
uint32_t test_func511(uint32_t value){
	value *= value;
	value += 0x3244;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	return value-49;
}
uint32_t test_func512(uint32_t value){
	value *= value;
	value += 0x5ce4;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	return value-72;
}
uint32_t test_func513(uint32_t value){
	value *= value;
	value += 0x8d0b;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-83;
}
uint32_t test_func514(uint32_t value){
	value *= value;
	value += 0x711e;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 2);
	return value-73;
}
uint32_t test_func515(uint32_t value){
	value *= value;
	value += 0x4ad6;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-7;
}
uint32_t test_func516(uint32_t value){
	value *= value;
	value += 0x37c0;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	return value-110;
}
uint32_t test_func517(uint32_t value){
	value *= value;
	value += 0x49bd;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	return value-41;
}
uint32_t test_func518(uint32_t value){
	value *= value;
	value += 0x6f83;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	return value-27;
}
uint32_t test_func519(uint32_t value){
	value *= value;
	value += 0x2d1b;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	return value-82;
}
uint32_t test_func520(uint32_t value){
	value *= value;
	value += 0x2461;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 1);
	return value-65;
}
uint32_t test_func521(uint32_t value){
	value *= value;
	value += 0x6d87;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-116;
}
uint32_t test_func522(uint32_t value){
	value *= value;
	value += 0x3f91;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	return value-127;
}
uint32_t test_func523(uint32_t value){
	value *= value;
	value += 0x68da;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	return value-3;
}
uint32_t test_func524(uint32_t value){
	value *= value;
	value += 0x178e;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 8);
	return value-70;
}
uint32_t test_func525(uint32_t value){
	value *= value;
	value += 0x722f;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 4);
	return value-10;
}
uint32_t test_func526(uint32_t value){
	value *= value;
	value += 0x8010;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 8);
	return value-102;
}
uint32_t test_func527(uint32_t value){
	value *= value;
	value += 0x61dd;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	return value-85;
}
uint32_t test_func528(uint32_t value){
	value *= value;
	value += 0x5a11;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-73;
}
uint32_t test_func529(uint32_t value){
	value *= value;
	value += 0x257d;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	return value-10;
}
uint32_t test_func530(uint32_t value){
	value *= value;
	value += 0x23c8;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-126;
}
uint32_t test_func531(uint32_t value){
	value *= value;
	value += 0x4fea;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-74;
}
uint32_t test_func532(uint32_t value){
	value *= value;
	value += 0x88b0;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	return value-98;
}
uint32_t test_func533(uint32_t value){
	value *= value;
	value += 0x293b;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	return value-87;
}
uint32_t test_func534(uint32_t value){
	value *= value;
	value += 0x7181;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	return value-62;
}
uint32_t test_func535(uint32_t value){
	value *= value;
	value += 0x3eca;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	return value-47;
}
uint32_t test_func536(uint32_t value){
	value *= value;
	value += 0x1434;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-107;
}
uint32_t test_func537(uint32_t value){
	value *= value;
	value += 0x732f;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	return value-39;
}
uint32_t test_func538(uint32_t value){
	value *= value;
	value += 0x8402;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	return value-104;
}
uint32_t test_func539(uint32_t value){
	value *= value;
	value += 0x8e45;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	return value-19;
}
uint32_t test_func540(uint32_t value){
	value *= value;
	value += 0x4164;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-8;
}
uint32_t test_func541(uint32_t value){
	value *= value;
	value += 0x4d22;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	return value-106;
}
uint32_t test_func542(uint32_t value){
	value *= value;
	value += 0x4a14;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	return value-5;
}
uint32_t test_func543(uint32_t value){
	value *= value;
	value += 0x7222;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	return value-86;
}
uint32_t test_func544(uint32_t value){
	value *= value;
	value += 0x290a;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	return value-40;
}
uint32_t test_func545(uint32_t value){
	value *= value;
	value += 0x54dd;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 1);
	return value-99;
}
uint32_t test_func546(uint32_t value){
	value *= value;
	value += 0x867f;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	return value-102;
}
uint32_t test_func547(uint32_t value){
	value *= value;
	value += 0x722b;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	return value-23;
}
uint32_t test_func548(uint32_t value){
	value *= value;
	value += 0x37ec;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	return value-127;
}
uint32_t test_func549(uint32_t value){
	value *= value;
	value += 0x7c25;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-23;
}
uint32_t test_func550(uint32_t value){
	value *= value;
	value += 0x500b;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	return value-36;
}
uint32_t test_func551(uint32_t value){
	value *= value;
	value += 0x6a26;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	return value-65;
}
uint32_t test_func552(uint32_t value){
	value *= value;
	value += 0x2ed4;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	return value-12;
}
uint32_t test_func553(uint32_t value){
	value *= value;
	value += 0x88c5;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	return value-85;
}
uint32_t test_func554(uint32_t value){
	value *= value;
	value += 0x117f;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	return value-30;
}
uint32_t test_func555(uint32_t value){
	value *= value;
	value += 0x89dc;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	return value-11;
}
uint32_t test_func556(uint32_t value){
	value *= value;
	value += 0x2288;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-16;
}
uint32_t test_func557(uint32_t value){
	value *= value;
	value += 0x1483;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	return value-54;
}
uint32_t test_func558(uint32_t value){
	value *= value;
	value += 0x89a5;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	return value-125;
}
uint32_t test_func559(uint32_t value){
	value *= value;
	value += 0x5515;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	return value-105;
}
uint32_t test_func560(uint32_t value){
	value *= value;
	value += 0x7bd0;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	return value-24;
}
uint32_t test_func561(uint32_t value){
	value *= value;
	value += 0x8d29;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 2);
	return value-21;
}
uint32_t test_func562(uint32_t value){
	value *= value;
	value += 0x4b43;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	return value-55;
}
uint32_t test_func563(uint32_t value){
	value *= value;
	value += 0x2398;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-36;
}
uint32_t test_func564(uint32_t value){
	value *= value;
	value += 0x7776;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	return value-124;
}
uint32_t test_func565(uint32_t value){
	value *= value;
	value += 0x347d;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	return value-29;
}
uint32_t test_func566(uint32_t value){
	value *= value;
	value += 0x3d22;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	return value-124;
}
uint32_t test_func567(uint32_t value){
	value *= value;
	value += 0x212f;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	return value-66;
}
uint32_t test_func568(uint32_t value){
	value *= value;
	value += 0x2640;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	return value-86;
}
uint32_t test_func569(uint32_t value){
	value *= value;
	value += 0x2048;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	return value-55;
}
uint32_t test_func570(uint32_t value){
	value *= value;
	value += 0x1a0a;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	return value-84;
}
uint32_t test_func571(uint32_t value){
	value *= value;
	value += 0x4da0;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	return value-26;
}
uint32_t test_func572(uint32_t value){
	value *= value;
	value += 0x6cf8;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-15;
}
uint32_t test_func573(uint32_t value){
	value *= value;
	value += 0x3a51;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	return value-32;
}
uint32_t test_func574(uint32_t value){
	value *= value;
	value += 0x70c3;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	return value-7;
}
uint32_t test_func575(uint32_t value){
	value *= value;
	value += 0x7cb4;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	return value-66;
}
uint32_t test_func576(uint32_t value){
	value *= value;
	value += 0x8464;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	return value-77;
}
uint32_t test_func577(uint32_t value){
	value *= value;
	value += 0x4062;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 8);
	return value-83;
}
uint32_t test_func578(uint32_t value){
	value *= value;
	value += 0x2414;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 1);
	return value-34;
}
uint32_t test_func579(uint32_t value){
	value *= value;
	value += 0x5633;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-34;
}
uint32_t test_func580(uint32_t value){
	value *= value;
	value += 0x794d;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	return value-11;
}
uint32_t test_func581(uint32_t value){
	value *= value;
	value += 0x4441;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	return value-25;
}
uint32_t test_func582(uint32_t value){
	value *= value;
	value += 0x6ac6;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 5);
	return value-1;
}
uint32_t test_func583(uint32_t value){
	value *= value;
	value += 0x55e5;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	return value-98;
}
uint32_t test_func584(uint32_t value){
	value *= value;
	value += 0x2c7a;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-3;
}
uint32_t test_func585(uint32_t value){
	value *= value;
	value += 0x2bb7;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-1;
}
uint32_t test_func586(uint32_t value){
	value *= value;
	value += 0x4fa1;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 1);
	return value-66;
}
uint32_t test_func587(uint32_t value){
	value *= value;
	value += 0x4b92;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	return value-117;
}
uint32_t test_func588(uint32_t value){
	value *= value;
	value += 0x52b5;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	return value-57;
}
uint32_t test_func589(uint32_t value){
	value *= value;
	value += 0x308c;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	return value-95;
}
uint32_t test_func590(uint32_t value){
	value *= value;
	value += 0x316d;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-80;
}
uint32_t test_func591(uint32_t value){
	value *= value;
	value += 0x5b01;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	return value-22;
}
uint32_t test_func592(uint32_t value){
	value *= value;
	value += 0x74c4;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 3);
	return value-122;
}
uint32_t test_func593(uint32_t value){
	value *= value;
	value += 0x6088;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 3);
	return value-83;
}
uint32_t test_func594(uint32_t value){
	value *= value;
	value += 0x42f2;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-92;
}
uint32_t test_func595(uint32_t value){
	value *= value;
	value += 0x7bfb;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-73;
}
uint32_t test_func596(uint32_t value){
	value *= value;
	value += 0x6f70;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	return value-95;
}
uint32_t test_func597(uint32_t value){
	value *= value;
	value += 0x1d73;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	return value-70;
}
uint32_t test_func598(uint32_t value){
	value *= value;
	value += 0x8af8;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 8);
	return value-95;
}
uint32_t test_func599(uint32_t value){
	value *= value;
	value += 0x7a48;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-86;
}
uint32_t test_func600(uint32_t value){
	value *= value;
	value += 0x7381;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-64;
}
uint32_t test_func601(uint32_t value){
	value *= value;
	value += 0x1d14;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	return value-99;
}
uint32_t test_func602(uint32_t value){
	value *= value;
	value += 0x6446;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-24;
}
uint32_t test_func603(uint32_t value){
	value *= value;
	value += 0x75b0;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	return value-83;
}
uint32_t test_func604(uint32_t value){
	value *= value;
	value += 0x85bf;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	return value-69;
}
uint32_t test_func605(uint32_t value){
	value *= value;
	value += 0x6934;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-36;
}
uint32_t test_func606(uint32_t value){
	value *= value;
	value += 0x7da5;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-18;
}
uint32_t test_func607(uint32_t value){
	value *= value;
	value += 0x61fb;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	return value-24;
}
uint32_t test_func608(uint32_t value){
	value *= value;
	value += 0x7ef2;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	return value-87;
}
uint32_t test_func609(uint32_t value){
	value *= value;
	value += 0x5f9b;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-70;
}
uint32_t test_func610(uint32_t value){
	value *= value;
	value += 0x59dd;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	return value-27;
}
uint32_t test_func611(uint32_t value){
	value *= value;
	value += 0x86f0;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	return value-73;
}
uint32_t test_func612(uint32_t value){
	value *= value;
	value += 0x8be1;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	return value-45;
}
uint32_t test_func613(uint32_t value){
	value *= value;
	value += 0x3211;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	return value-82;
}
uint32_t test_func614(uint32_t value){
	value *= value;
	value += 0x4fb6;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	return value-78;
}
uint32_t test_func615(uint32_t value){
	value *= value;
	value += 0x8058;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 7);
	return value-81;
}
uint32_t test_func616(uint32_t value){
	value *= value;
	value += 0x2d55;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	return value-69;
}
uint32_t test_func617(uint32_t value){
	value *= value;
	value += 0x665e;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-20;
}
uint32_t test_func618(uint32_t value){
	value *= value;
	value += 0x89f8;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	return value-11;
}
uint32_t test_func619(uint32_t value){
	value *= value;
	value += 0x3dfb;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	return value-100;
}
uint32_t test_func620(uint32_t value){
	value *= value;
	value += 0x3816;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-99;
}
uint32_t test_func621(uint32_t value){
	value *= value;
	value += 0x5649;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	return value-37;
}
uint32_t test_func622(uint32_t value){
	value *= value;
	value += 0x876a;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	return value-125;
}
uint32_t test_func623(uint32_t value){
	value *= value;
	value += 0x83a1;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-122;
}
uint32_t test_func624(uint32_t value){
	value *= value;
	value += 0x54ec;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	return value-20;
}
uint32_t test_func625(uint32_t value){
	value *= value;
	value += 0x2f9c;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 2);
	value = (value >> 9) + (value >> 8);
	return value-98;
}
uint32_t test_func626(uint32_t value){
	value *= value;
	value += 0x1ad5;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-17;
}
uint32_t test_func627(uint32_t value){
	value *= value;
	value += 0x6912;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-88;
}
uint32_t test_func628(uint32_t value){
	value *= value;
	value += 0x809f;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 4);
	return value-44;
}
uint32_t test_func629(uint32_t value){
	value *= value;
	value += 0x741d;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	return value-116;
}
uint32_t test_func630(uint32_t value){
	value *= value;
	value += 0x6b01;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	return value-4;
}
uint32_t test_func631(uint32_t value){
	value *= value;
	value += 0x5a15;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-9;
}
uint32_t test_func632(uint32_t value){
	value *= value;
	value += 0x8bf6;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 7);
	return value-71;
}
uint32_t test_func633(uint32_t value){
	value *= value;
	value += 0x7995;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-73;
}
uint32_t test_func634(uint32_t value){
	value *= value;
	value += 0x72b6;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	return value-81;
}
uint32_t test_func635(uint32_t value){
	value *= value;
	value += 0x1674;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	return value-94;
}
uint32_t test_func636(uint32_t value){
	value *= value;
	value += 0x1bba;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	return value-74;
}
uint32_t test_func637(uint32_t value){
	value *= value;
	value += 0x69cb;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 8);
	return value-22;
}
uint32_t test_func638(uint32_t value){
	value *= value;
	value += 0x80bc;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	return value-70;
}
uint32_t test_func639(uint32_t value){
	value *= value;
	value += 0x31f5;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-115;
}
uint32_t test_func640(uint32_t value){
	value *= value;
	value += 0x28b3;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-101;
}
uint32_t test_func641(uint32_t value){
	value *= value;
	value += 0x4289;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 1);
	value = (value >> 5) + (value >> 1);
	return value-91;
}
uint32_t test_func642(uint32_t value){
	value *= value;
	value += 0x37da;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	return value-114;
}
uint32_t test_func643(uint32_t value){
	value *= value;
	value += 0x1461;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-43;
}
uint32_t test_func644(uint32_t value){
	value *= value;
	value += 0x7fa9;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	return value-11;
}
uint32_t test_func645(uint32_t value){
	value *= value;
	value += 0x5595;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	return value-96;
}
uint32_t test_func646(uint32_t value){
	value *= value;
	value += 0x8eda;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	return value-48;
}
uint32_t test_func647(uint32_t value){
	value *= value;
	value += 0x797f;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-48;
}
uint32_t test_func648(uint32_t value){
	value *= value;
	value += 0x4164;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 6);
	return value-117;
}
uint32_t test_func649(uint32_t value){
	value *= value;
	value += 0x48b8;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	return value-50;
}
uint32_t test_func650(uint32_t value){
	value *= value;
	value += 0x5082;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-29;
}
uint32_t test_func651(uint32_t value){
	value *= value;
	value += 0x7119;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	return value-117;
}
uint32_t test_func652(uint32_t value){
	value *= value;
	value += 0x62ab;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	return value-46;
}
uint32_t test_func653(uint32_t value){
	value *= value;
	value += 0x15ba;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-42;
}
uint32_t test_func654(uint32_t value){
	value *= value;
	value += 0x1b9b;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	return value-36;
}
uint32_t test_func655(uint32_t value){
	value *= value;
	value += 0x5ef5;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	return value-55;
}
uint32_t test_func656(uint32_t value){
	value *= value;
	value += 0x2c48;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	return value-1;
}
uint32_t test_func657(uint32_t value){
	value *= value;
	value += 0x8a63;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-101;
}
uint32_t test_func658(uint32_t value){
	value *= value;
	value += 0x62ec;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	return value-117;
}
uint32_t test_func659(uint32_t value){
	value *= value;
	value += 0x7add;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-116;
}
uint32_t test_func660(uint32_t value){
	value *= value;
	value += 0x3b01;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-127;
}
uint32_t test_func661(uint32_t value){
	value *= value;
	value += 0x487b;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-73;
}
uint32_t test_func662(uint32_t value){
	value *= value;
	value += 0x6d3f;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	return value-10;
}
uint32_t test_func663(uint32_t value){
	value *= value;
	value += 0x5096;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	return value-123;
}
uint32_t test_func664(uint32_t value){
	value *= value;
	value += 0x7f9f;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-9;
}
uint32_t test_func665(uint32_t value){
	value *= value;
	value += 0x45c9;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-8;
}
uint32_t test_func666(uint32_t value){
	value *= value;
	value += 0x555a;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-34;
}
uint32_t test_func667(uint32_t value){
	value *= value;
	value += 0x3feb;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	return value-95;
}
uint32_t test_func668(uint32_t value){
	value *= value;
	value += 0x3eea;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	return value-67;
}
uint32_t test_func669(uint32_t value){
	value *= value;
	value += 0x4c16;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	return value-21;
}
uint32_t test_func670(uint32_t value){
	value *= value;
	value += 0x8a06;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	return value-71;
}
uint32_t test_func671(uint32_t value){
	value *= value;
	value += 0x7ca3;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	return value-120;
}
uint32_t test_func672(uint32_t value){
	value *= value;
	value += 0x11a9;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	return value-24;
}
uint32_t test_func673(uint32_t value){
	value *= value;
	value += 0x792a;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	return value-50;
}
uint32_t test_func674(uint32_t value){
	value *= value;
	value += 0x4e0b;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	return value-74;
}
uint32_t test_func675(uint32_t value){
	value *= value;
	value += 0x8e85;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	return value-106;
}
uint32_t test_func676(uint32_t value){
	value *= value;
	value += 0x64a6;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 4);
	return value-63;
}
uint32_t test_func677(uint32_t value){
	value *= value;
	value += 0x3ecd;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	return value-98;
}
uint32_t test_func678(uint32_t value){
	value *= value;
	value += 0x3831;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 4);
	return value-67;
}
uint32_t test_func679(uint32_t value){
	value *= value;
	value += 0x515b;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	return value-32;
}
uint32_t test_func680(uint32_t value){
	value *= value;
	value += 0x78a7;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	return value-52;
}
uint32_t test_func681(uint32_t value){
	value *= value;
	value += 0x62c7;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	return value-120;
}
uint32_t test_func682(uint32_t value){
	value *= value;
	value += 0x3340;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	return value-21;
}
uint32_t test_func683(uint32_t value){
	value *= value;
	value += 0x74eb;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	return value-76;
}
uint32_t test_func684(uint32_t value){
	value *= value;
	value += 0x6275;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	return value-58;
}
uint32_t test_func685(uint32_t value){
	value *= value;
	value += 0x7edf;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	return value-12;
}
uint32_t test_func686(uint32_t value){
	value *= value;
	value += 0x7dff;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-100;
}
uint32_t test_func687(uint32_t value){
	value *= value;
	value += 0x7cfe;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-105;
}
uint32_t test_func688(uint32_t value){
	value *= value;
	value += 0x8ad8;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-96;
}
uint32_t test_func689(uint32_t value){
	value *= value;
	value += 0x80df;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	return value-119;
}
uint32_t test_func690(uint32_t value){
	value *= value;
	value += 0x2b37;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 1);
	return value-38;
}
uint32_t test_func691(uint32_t value){
	value *= value;
	value += 0x415b;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-60;
}
uint32_t test_func692(uint32_t value){
	value *= value;
	value += 0x2e97;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-123;
}
uint32_t test_func693(uint32_t value){
	value *= value;
	value += 0x2a8d;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	return value-99;
}
uint32_t test_func694(uint32_t value){
	value *= value;
	value += 0x21b0;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-19;
}
uint32_t test_func695(uint32_t value){
	value *= value;
	value += 0x6dcc;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	return value-78;
}
uint32_t test_func696(uint32_t value){
	value *= value;
	value += 0x5e7c;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	return value-40;
}
uint32_t test_func697(uint32_t value){
	value *= value;
	value += 0x11b1;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-62;
}
uint32_t test_func698(uint32_t value){
	value *= value;
	value += 0x1c32;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	return value-39;
}
uint32_t test_func699(uint32_t value){
	value *= value;
	value += 0x8217;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	return value-113;
}
uint32_t test_func700(uint32_t value){
	value *= value;
	value += 0x7f4d;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	return value-75;
}
uint32_t test_func701(uint32_t value){
	value *= value;
	value += 0x2015;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	return value-66;
}
uint32_t test_func702(uint32_t value){
	value *= value;
	value += 0x2985;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	return value-50;
}
uint32_t test_func703(uint32_t value){
	value *= value;
	value += 0x5205;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	return value-67;
}
uint32_t test_func704(uint32_t value){
	value *= value;
	value += 0x49d3;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	value = (value >> 4) + (value >> 6);
	return value-15;
}
uint32_t test_func705(uint32_t value){
	value *= value;
	value += 0x1380;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-105;
}
uint32_t test_func706(uint32_t value){
	value *= value;
	value += 0x2c70;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-64;
}
uint32_t test_func707(uint32_t value){
	value *= value;
	value += 0x855e;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-34;
}
uint32_t test_func708(uint32_t value){
	value *= value;
	value += 0x4ad6;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	return value-107;
}
uint32_t test_func709(uint32_t value){
	value *= value;
	value += 0x7db9;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	return value-123;
}
uint32_t test_func710(uint32_t value){
	value *= value;
	value += 0x5bbd;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	return value-42;
}
uint32_t test_func711(uint32_t value){
	value *= value;
	value += 0x17ea;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	return value-61;
}
uint32_t test_func712(uint32_t value){
	value *= value;
	value += 0x631e;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	return value-28;
}
uint32_t test_func713(uint32_t value){
	value *= value;
	value += 0x4489;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	value = (value >> 8) + (value >> 4);
	return value-11;
}
uint32_t test_func714(uint32_t value){
	value *= value;
	value += 0x4232;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 3);
	return value-19;
}
uint32_t test_func715(uint32_t value){
	value *= value;
	value += 0x5970;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-5;
}
uint32_t test_func716(uint32_t value){
	value *= value;
	value += 0x4772;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-39;
}
uint32_t test_func717(uint32_t value){
	value *= value;
	value += 0x21b8;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-107;
}
uint32_t test_func718(uint32_t value){
	value *= value;
	value += 0x3e98;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	return value-96;
}
uint32_t test_func719(uint32_t value){
	value *= value;
	value += 0x6dba;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	return value-53;
}
uint32_t test_func720(uint32_t value){
	value *= value;
	value += 0x809b;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	value = (value >> 2) + (value >> 3);
	return value-86;
}
uint32_t test_func721(uint32_t value){
	value *= value;
	value += 0x230e;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-60;
}
uint32_t test_func722(uint32_t value){
	value *= value;
	value += 0x83b6;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	return value-71;
}
uint32_t test_func723(uint32_t value){
	value *= value;
	value += 0x4c8e;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-80;
}
uint32_t test_func724(uint32_t value){
	value *= value;
	value += 0x6b62;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-64;
}
uint32_t test_func725(uint32_t value){
	value *= value;
	value += 0x2a53;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	return value-98;
}
uint32_t test_func726(uint32_t value){
	value *= value;
	value += 0x1856;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	return value-62;
}
uint32_t test_func727(uint32_t value){
	value *= value;
	value += 0x41b5;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-33;
}
uint32_t test_func728(uint32_t value){
	value *= value;
	value += 0x388d;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 4);
	return value-68;
}
uint32_t test_func729(uint32_t value){
	value *= value;
	value += 0x6d4e;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	return value-18;
}
uint32_t test_func730(uint32_t value){
	value *= value;
	value += 0x573e;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	return value-6;
}
uint32_t test_func731(uint32_t value){
	value *= value;
	value += 0x6cf7;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-57;
}
uint32_t test_func732(uint32_t value){
	value *= value;
	value += 0x6ce4;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	return value-4;
}
uint32_t test_func733(uint32_t value){
	value *= value;
	value += 0x75c8;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	return value-59;
}
uint32_t test_func734(uint32_t value){
	value *= value;
	value += 0x6f37;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	return value-38;
}
uint32_t test_func735(uint32_t value){
	value *= value;
	value += 0x421b;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	return value-116;
}
uint32_t test_func736(uint32_t value){
	value *= value;
	value += 0x6131;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	return value-107;
}
uint32_t test_func737(uint32_t value){
	value *= value;
	value += 0x2189;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-35;
}
uint32_t test_func738(uint32_t value){
	value *= value;
	value += 0x6309;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	return value-114;
}
uint32_t test_func739(uint32_t value){
	value *= value;
	value += 0x88eb;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	return value-120;
}
uint32_t test_func740(uint32_t value){
	value *= value;
	value += 0x423a;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	return value-49;
}
uint32_t test_func741(uint32_t value){
	value *= value;
	value += 0x2259;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	return value-75;
}
uint32_t test_func742(uint32_t value){
	value *= value;
	value += 0x897c;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	return value-4;
}
uint32_t test_func743(uint32_t value){
	value *= value;
	value += 0x5d2d;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 1);
	return value-43;
}
uint32_t test_func744(uint32_t value){
	value *= value;
	value += 0x10c8;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 1);
	return value-82;
}
uint32_t test_func745(uint32_t value){
	value *= value;
	value += 0x7e00;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	return value-6;
}
uint32_t test_func746(uint32_t value){
	value *= value;
	value += 0x8d58;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-54;
}
uint32_t test_func747(uint32_t value){
	value *= value;
	value += 0x2eaa;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	return value-66;
}
uint32_t test_func748(uint32_t value){
	value *= value;
	value += 0x21a3;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	return value-19;
}
uint32_t test_func749(uint32_t value){
	value *= value;
	value += 0x8e45;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	return value-104;
}
uint32_t test_func750(uint32_t value){
	value *= value;
	value += 0x6d64;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	return value-55;
}
uint32_t test_func751(uint32_t value){
	value *= value;
	value += 0x412a;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-56;
}
uint32_t test_func752(uint32_t value){
	value *= value;
	value += 0x1d93;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	return value-1;
}
uint32_t test_func753(uint32_t value){
	value *= value;
	value += 0x80f1;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	return value-80;
}
uint32_t test_func754(uint32_t value){
	value *= value;
	value += 0x7c69;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	return value-119;
}
uint32_t test_func755(uint32_t value){
	value *= value;
	value += 0x2c75;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-78;
}
uint32_t test_func756(uint32_t value){
	value *= value;
	value += 0x8160;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 6);
	return value-110;
}
uint32_t test_func757(uint32_t value){
	value *= value;
	value += 0x57cc;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 4);
	return value-105;
}
uint32_t test_func758(uint32_t value){
	value *= value;
	value += 0x612f;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	return value-43;
}
uint32_t test_func759(uint32_t value){
	value *= value;
	value += 0x5c52;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	value = (value >> 9) + (value >> 8);
	return value-18;
}
uint32_t test_func760(uint32_t value){
	value *= value;
	value += 0x1dd1;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-123;
}
uint32_t test_func761(uint32_t value){
	value *= value;
	value += 0x689e;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 3);
	return value-28;
}
uint32_t test_func762(uint32_t value){
	value *= value;
	value += 0x167e;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	return value-90;
}
uint32_t test_func763(uint32_t value){
	value *= value;
	value += 0x108a;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	return value-85;
}
uint32_t test_func764(uint32_t value){
	value *= value;
	value += 0x17b0;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-11;
}
uint32_t test_func765(uint32_t value){
	value *= value;
	value += 0x5d2f;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	return value-35;
}
uint32_t test_func766(uint32_t value){
	value *= value;
	value += 0x6b1e;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	return value-70;
}
uint32_t test_func767(uint32_t value){
	value *= value;
	value += 0x5ce5;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-49;
}
uint32_t test_func768(uint32_t value){
	value *= value;
	value += 0x67c3;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	return value-75;
}
uint32_t test_func769(uint32_t value){
	value *= value;
	value += 0x3347;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	return value-123;
}
uint32_t test_func770(uint32_t value){
	value *= value;
	value += 0x81d6;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-5;
}
uint32_t test_func771(uint32_t value){
	value *= value;
	value += 0x292b;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-9;
}
uint32_t test_func772(uint32_t value){
	value *= value;
	value += 0x5ad3;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-47;
}
uint32_t test_func773(uint32_t value){
	value *= value;
	value += 0x3cad;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	return value-110;
}
uint32_t test_func774(uint32_t value){
	value *= value;
	value += 0x5170;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	return value-110;
}
uint32_t test_func775(uint32_t value){
	value *= value;
	value += 0x3124;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-8;
}
uint32_t test_func776(uint32_t value){
	value *= value;
	value += 0x11a7;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	return value-116;
}
uint32_t test_func777(uint32_t value){
	value *= value;
	value += 0x1f2a;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	return value-9;
}
uint32_t test_func778(uint32_t value){
	value *= value;
	value += 0x24b2;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	return value-35;
}
uint32_t test_func779(uint32_t value){
	value *= value;
	value += 0x8498;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	return value-36;
}
uint32_t test_func780(uint32_t value){
	value *= value;
	value += 0x8109;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-31;
}
uint32_t test_func781(uint32_t value){
	value *= value;
	value += 0x5486;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	return value-34;
}
uint32_t test_func782(uint32_t value){
	value *= value;
	value += 0x1a65;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-8;
}
uint32_t test_func783(uint32_t value){
	value *= value;
	value += 0x874e;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	return value-18;
}
uint32_t test_func784(uint32_t value){
	value *= value;
	value += 0x71bf;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	return value-127;
}
uint32_t test_func785(uint32_t value){
	value *= value;
	value += 0x2a89;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 3);
	return value-89;
}
uint32_t test_func786(uint32_t value){
	value *= value;
	value += 0x2551;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	return value-83;
}
uint32_t test_func787(uint32_t value){
	value *= value;
	value += 0x710f;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-88;
}
uint32_t test_func788(uint32_t value){
	value *= value;
	value += 0x8092;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	return value-37;
}
uint32_t test_func789(uint32_t value){
	value *= value;
	value += 0x42fa;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	return value-20;
}
uint32_t test_func790(uint32_t value){
	value *= value;
	value += 0x8c3d;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	return value-124;
}
uint32_t test_func791(uint32_t value){
	value *= value;
	value += 0x4da3;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	return value-66;
}
uint32_t test_func792(uint32_t value){
	value *= value;
	value += 0x1e4a;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	return value-112;
}
uint32_t test_func793(uint32_t value){
	value *= value;
	value += 0x13a3;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	return value-2;
}
uint32_t test_func794(uint32_t value){
	value *= value;
	value += 0x69f2;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	return value-67;
}
uint32_t test_func795(uint32_t value){
	value *= value;
	value += 0x7cd2;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-98;
}
uint32_t test_func796(uint32_t value){
	value *= value;
	value += 0x8faf;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	return value-4;
}
uint32_t test_func797(uint32_t value){
	value *= value;
	value += 0x664a;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	return value-25;
}
uint32_t test_func798(uint32_t value){
	value *= value;
	value += 0x2d39;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	return value-49;
}
uint32_t test_func799(uint32_t value){
	value *= value;
	value += 0x3264;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	return value-18;
}
uint32_t test_func800(uint32_t value){
	value *= value;
	value += 0x6d88;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-79;
}
uint32_t test_func801(uint32_t value){
	value *= value;
	value += 0x58b8;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	return value-25;
}
uint32_t test_func802(uint32_t value){
	value *= value;
	value += 0x18d8;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-23;
}
uint32_t test_func803(uint32_t value){
	value *= value;
	value += 0x7620;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	return value-117;
}
uint32_t test_func804(uint32_t value){
	value *= value;
	value += 0x249f;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-7;
}
uint32_t test_func805(uint32_t value){
	value *= value;
	value += 0x5cb5;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-9;
}
uint32_t test_func806(uint32_t value){
	value *= value;
	value += 0x4397;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 4);
	return value-12;
}
uint32_t test_func807(uint32_t value){
	value *= value;
	value += 0x23cf;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	return value-116;
}
uint32_t test_func808(uint32_t value){
	value *= value;
	value += 0x75ba;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	return value-35;
}
uint32_t test_func809(uint32_t value){
	value *= value;
	value += 0x3809;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	return value-56;
}
uint32_t test_func810(uint32_t value){
	value *= value;
	value += 0x1840;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	return value-115;
}
uint32_t test_func811(uint32_t value){
	value *= value;
	value += 0x6b39;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	return value-70;
}
uint32_t test_func812(uint32_t value){
	value *= value;
	value += 0x75a2;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	return value-109;
}
uint32_t test_func813(uint32_t value){
	value *= value;
	value += 0x847b;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	return value-59;
}
uint32_t test_func814(uint32_t value){
	value *= value;
	value += 0x5599;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	return value-116;
}
uint32_t test_func815(uint32_t value){
	value *= value;
	value += 0x5026;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	return value-98;
}
uint32_t test_func816(uint32_t value){
	value *= value;
	value += 0x8d1f;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	return value-114;
}
uint32_t test_func817(uint32_t value){
	value *= value;
	value += 0x2fd4;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-112;
}
uint32_t test_func818(uint32_t value){
	value *= value;
	value += 0x8e6c;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	return value-127;
}
uint32_t test_func819(uint32_t value){
	value *= value;
	value += 0x2a5e;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-14;
}
uint32_t test_func820(uint32_t value){
	value *= value;
	value += 0x78f9;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	return value-5;
}
uint32_t test_func821(uint32_t value){
	value *= value;
	value += 0x7bdc;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-3;
}
uint32_t test_func822(uint32_t value){
	value *= value;
	value += 0x297f;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	return value-81;
}
uint32_t test_func823(uint32_t value){
	value *= value;
	value += 0x25a8;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-82;
}
uint32_t test_func824(uint32_t value){
	value *= value;
	value += 0x49f7;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	return value-66;
}
uint32_t test_func825(uint32_t value){
	value *= value;
	value += 0x7e5b;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	return value-94;
}
uint32_t test_func826(uint32_t value){
	value *= value;
	value += 0x619a;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-99;
}
uint32_t test_func827(uint32_t value){
	value *= value;
	value += 0x41ce;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	return value-4;
}
uint32_t test_func828(uint32_t value){
	value *= value;
	value += 0x64e2;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-15;
}
uint32_t test_func829(uint32_t value){
	value *= value;
	value += 0x2119;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	return value-60;
}
uint32_t test_func830(uint32_t value){
	value *= value;
	value += 0x4587;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	return value-6;
}
uint32_t test_func831(uint32_t value){
	value *= value;
	value += 0x5296;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	return value-59;
}
uint32_t test_func832(uint32_t value){
	value *= value;
	value += 0x8283;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-24;
}
uint32_t test_func833(uint32_t value){
	value *= value;
	value += 0x21dd;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	return value-23;
}
uint32_t test_func834(uint32_t value){
	value *= value;
	value += 0x380d;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	return value-69;
}
uint32_t test_func835(uint32_t value){
	value *= value;
	value += 0x7fc9;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	return value-91;
}
uint32_t test_func836(uint32_t value){
	value *= value;
	value += 0x2f9f;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-85;
}
uint32_t test_func837(uint32_t value){
	value *= value;
	value += 0x1271;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-55;
}
uint32_t test_func838(uint32_t value){
	value *= value;
	value += 0x6ff3;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-124;
}
uint32_t test_func839(uint32_t value){
	value *= value;
	value += 0x452f;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 5);
	return value-18;
}
uint32_t test_func840(uint32_t value){
	value *= value;
	value += 0x4d01;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-127;
}
uint32_t test_func841(uint32_t value){
	value *= value;
	value += 0x589b;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-46;
}
uint32_t test_func842(uint32_t value){
	value *= value;
	value += 0x7802;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	return value-75;
}
uint32_t test_func843(uint32_t value){
	value *= value;
	value += 0x728f;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	return value-78;
}
uint32_t test_func844(uint32_t value){
	value *= value;
	value += 0x8f6f;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	return value-28;
}
uint32_t test_func845(uint32_t value){
	value *= value;
	value += 0x2e24;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	return value-79;
}
uint32_t test_func846(uint32_t value){
	value *= value;
	value += 0x2f02;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	return value-27;
}
uint32_t test_func847(uint32_t value){
	value *= value;
	value += 0x2bb2;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	return value-75;
}
uint32_t test_func848(uint32_t value){
	value *= value;
	value += 0x7fb3;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-122;
}
uint32_t test_func849(uint32_t value){
	value *= value;
	value += 0x20d4;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	return value-59;
}
uint32_t test_func850(uint32_t value){
	value *= value;
	value += 0x47bb;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	return value-27;
}
uint32_t test_func851(uint32_t value){
	value *= value;
	value += 0x6861;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-17;
}
uint32_t test_func852(uint32_t value){
	value *= value;
	value += 0x7a93;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 4);
	return value-43;
}
uint32_t test_func853(uint32_t value){
	value *= value;
	value += 0x1272;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	return value-89;
}
uint32_t test_func854(uint32_t value){
	value *= value;
	value += 0x48f4;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-70;
}
uint32_t test_func855(uint32_t value){
	value *= value;
	value += 0x7462;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-99;
}
uint32_t test_func856(uint32_t value){
	value *= value;
	value += 0x30d8;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	return value-16;
}
uint32_t test_func857(uint32_t value){
	value *= value;
	value += 0x38c8;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	return value-87;
}
uint32_t test_func858(uint32_t value){
	value *= value;
	value += 0x8d77;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	return value-91;
}
uint32_t test_func859(uint32_t value){
	value *= value;
	value += 0x6f7d;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	return value-89;
}
uint32_t test_func860(uint32_t value){
	value *= value;
	value += 0x274a;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	return value-73;
}
uint32_t test_func861(uint32_t value){
	value *= value;
	value += 0x1d9c;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	return value-44;
}
uint32_t test_func862(uint32_t value){
	value *= value;
	value += 0x440a;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	return value-100;
}
uint32_t test_func863(uint32_t value){
	value *= value;
	value += 0x4d7c;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	return value-77;
}
uint32_t test_func864(uint32_t value){
	value *= value;
	value += 0x36b0;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	value = (value >> 5) + (value >> 7);
	return value-71;
}
uint32_t test_func865(uint32_t value){
	value *= value;
	value += 0x1eb7;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	return value-22;
}
uint32_t test_func866(uint32_t value){
	value *= value;
	value += 0x6f76;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	return value-51;
}
uint32_t test_func867(uint32_t value){
	value *= value;
	value += 0x5625;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	return value-95;
}
uint32_t test_func868(uint32_t value){
	value *= value;
	value += 0x8bd3;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	return value-59;
}
uint32_t test_func869(uint32_t value){
	value *= value;
	value += 0x6de1;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	return value-29;
}
uint32_t test_func870(uint32_t value){
	value *= value;
	value += 0x6682;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	return value-94;
}
uint32_t test_func871(uint32_t value){
	value *= value;
	value += 0x2542;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	return value-124;
}
uint32_t test_func872(uint32_t value){
	value *= value;
	value += 0x277c;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	return value-38;
}
uint32_t test_func873(uint32_t value){
	value *= value;
	value += 0x10e1;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	return value-14;
}
uint32_t test_func874(uint32_t value){
	value *= value;
	value += 0x53f8;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-74;
}
uint32_t test_func875(uint32_t value){
	value *= value;
	value += 0x2a99;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	return value-88;
}
uint32_t test_func876(uint32_t value){
	value *= value;
	value += 0x5e71;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-75;
}
uint32_t test_func877(uint32_t value){
	value *= value;
	value += 0x6181;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	return value-2;
}
uint32_t test_func878(uint32_t value){
	value *= value;
	value += 0x369e;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-27;
}
uint32_t test_func879(uint32_t value){
	value *= value;
	value += 0x29f3;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-108;
}
uint32_t test_func880(uint32_t value){
	value *= value;
	value += 0x597b;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	return value-53;
}
uint32_t test_func881(uint32_t value){
	value *= value;
	value += 0x8d87;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	return value-88;
}
uint32_t test_func882(uint32_t value){
	value *= value;
	value += 0x613e;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	return value-67;
}
uint32_t test_func883(uint32_t value){
	value *= value;
	value += 0x3b17;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-124;
}
uint32_t test_func884(uint32_t value){
	value *= value;
	value += 0x1561;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	return value-59;
}
uint32_t test_func885(uint32_t value){
	value *= value;
	value += 0x16bc;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 1);
	return value-53;
}
uint32_t test_func886(uint32_t value){
	value *= value;
	value += 0x7a9e;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-125;
}
uint32_t test_func887(uint32_t value){
	value *= value;
	value += 0x49cf;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-20;
}
uint32_t test_func888(uint32_t value){
	value *= value;
	value += 0x62ed;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	return value-122;
}
uint32_t test_func889(uint32_t value){
	value *= value;
	value += 0x52e8;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-8;
}
uint32_t test_func890(uint32_t value){
	value *= value;
	value += 0x7d87;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-73;
}
uint32_t test_func891(uint32_t value){
	value *= value;
	value += 0x15e1;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	return value-3;
}
uint32_t test_func892(uint32_t value){
	value *= value;
	value += 0x66e5;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	return value-84;
}
uint32_t test_func893(uint32_t value){
	value *= value;
	value += 0x6bd3;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	return value-10;
}
uint32_t test_func894(uint32_t value){
	value *= value;
	value += 0x38c0;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	return value-110;
}
uint32_t test_func895(uint32_t value){
	value *= value;
	value += 0x3316;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-101;
}
uint32_t test_func896(uint32_t value){
	value *= value;
	value += 0x1a12;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	return value-120;
}
uint32_t test_func897(uint32_t value){
	value *= value;
	value += 0x5f44;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	return value-55;
}
uint32_t test_func898(uint32_t value){
	value *= value;
	value += 0x4f13;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	return value-1;
}
uint32_t test_func899(uint32_t value){
	value *= value;
	value += 0x8936;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-30;
}
uint32_t test_func900(uint32_t value){
	value *= value;
	value += 0x493c;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-91;
}
uint32_t test_func901(uint32_t value){
	value *= value;
	value += 0x7f05;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-85;
}
uint32_t test_func902(uint32_t value){
	value *= value;
	value += 0x3746;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	return value-84;
}
uint32_t test_func903(uint32_t value){
	value *= value;
	value += 0x5409;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-87;
}
uint32_t test_func904(uint32_t value){
	value *= value;
	value += 0x152a;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-59;
}
uint32_t test_func905(uint32_t value){
	value *= value;
	value += 0x70dc;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	return value-120;
}
uint32_t test_func906(uint32_t value){
	value *= value;
	value += 0x3c22;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-15;
}
uint32_t test_func907(uint32_t value){
	value *= value;
	value += 0x2356;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-8;
}
uint32_t test_func908(uint32_t value){
	value *= value;
	value += 0x72a6;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	return value-27;
}
uint32_t test_func909(uint32_t value){
	value *= value;
	value += 0x2e92;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	return value-115;
}
uint32_t test_func910(uint32_t value){
	value *= value;
	value += 0x7c6f;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-22;
}
uint32_t test_func911(uint32_t value){
	value *= value;
	value += 0x5ae7;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	return value-101;
}
uint32_t test_func912(uint32_t value){
	value *= value;
	value += 0x2a76;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-70;
}
uint32_t test_func913(uint32_t value){
	value *= value;
	value += 0x85ef;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	return value-101;
}
uint32_t test_func914(uint32_t value){
	value *= value;
	value += 0x6af5;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 1);
	return value-28;
}
uint32_t test_func915(uint32_t value){
	value *= value;
	value += 0x3282;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-117;
}
uint32_t test_func916(uint32_t value){
	value *= value;
	value += 0x5963;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	return value-84;
}
uint32_t test_func917(uint32_t value){
	value *= value;
	value += 0x18ba;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-53;
}
uint32_t test_func918(uint32_t value){
	value *= value;
	value += 0x4e7b;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-25;
}
uint32_t test_func919(uint32_t value){
	value *= value;
	value += 0x35f0;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-3;
}
uint32_t test_func920(uint32_t value){
	value *= value;
	value += 0x7035;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	return value-33;
}
uint32_t test_func921(uint32_t value){
	value *= value;
	value += 0x5cbd;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	value = (value >> 9) + (value >> 8);
	return value-19;
}
uint32_t test_func922(uint32_t value){
	value *= value;
	value += 0x41cb;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	return value-78;
}
uint32_t test_func923(uint32_t value){
	value *= value;
	value += 0x44f9;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	return value-30;
}
uint32_t test_func924(uint32_t value){
	value *= value;
	value += 0x33b4;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	return value-79;
}
uint32_t test_func925(uint32_t value){
	value *= value;
	value += 0x1bbe;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	return value-116;
}
uint32_t test_func926(uint32_t value){
	value *= value;
	value += 0x33ab;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	return value-67;
}
uint32_t test_func927(uint32_t value){
	value *= value;
	value += 0x1364;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	return value-36;
}
uint32_t test_func928(uint32_t value){
	value *= value;
	value += 0x3ca8;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	return value-81;
}
uint32_t test_func929(uint32_t value){
	value *= value;
	value += 0x7386;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	return value-24;
}
uint32_t test_func930(uint32_t value){
	value *= value;
	value += 0x66e4;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	return value-74;
}
uint32_t test_func931(uint32_t value){
	value *= value;
	value += 0x28fb;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	return value-56;
}
uint32_t test_func932(uint32_t value){
	value *= value;
	value += 0x77d8;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	return value-84;
}
uint32_t test_func933(uint32_t value){
	value *= value;
	value += 0x55dd;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-6;
}
uint32_t test_func934(uint32_t value){
	value *= value;
	value += 0x723e;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	return value-124;
}
uint32_t test_func935(uint32_t value){
	value *= value;
	value += 0x6184;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-68;
}
uint32_t test_func936(uint32_t value){
	value *= value;
	value += 0x260d;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	return value-92;
}
uint32_t test_func937(uint32_t value){
	value *= value;
	value += 0x888a;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	return value-12;
}
uint32_t test_func938(uint32_t value){
	value *= value;
	value += 0x4080;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	return value-58;
}
uint32_t test_func939(uint32_t value){
	value *= value;
	value += 0x6cc8;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	return value-120;
}
uint32_t test_func940(uint32_t value){
	value *= value;
	value += 0x5c0f;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	value = (value >> 2) + (value >> 3);
	return value-42;
}
uint32_t test_func941(uint32_t value){
	value *= value;
	value += 0x2557;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-64;
}
uint32_t test_func942(uint32_t value){
	value *= value;
	value += 0x1074;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 4);
	return value-43;
}
uint32_t test_func943(uint32_t value){
	value *= value;
	value += 0x4e8f;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-84;
}
uint32_t test_func944(uint32_t value){
	value *= value;
	value += 0x82a6;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	return value-76;
}
uint32_t test_func945(uint32_t value){
	value *= value;
	value += 0x1a0a;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	return value-4;
}
uint32_t test_func946(uint32_t value){
	value *= value;
	value += 0x74e0;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	return value-67;
}
uint32_t test_func947(uint32_t value){
	value *= value;
	value += 0x5ea1;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-25;
}
uint32_t test_func948(uint32_t value){
	value *= value;
	value += 0x569a;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	return value-22;
}
uint32_t test_func949(uint32_t value){
	value *= value;
	value += 0x286c;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 3);
	return value-124;
}
uint32_t test_func950(uint32_t value){
	value *= value;
	value += 0x548d;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	return value-53;
}
uint32_t test_func951(uint32_t value){
	value *= value;
	value += 0x48c5;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-80;
}
uint32_t test_func952(uint32_t value){
	value *= value;
	value += 0x68b2;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	return value-35;
}
uint32_t test_func953(uint32_t value){
	value *= value;
	value += 0x6645;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	return value-24;
}
uint32_t test_func954(uint32_t value){
	value *= value;
	value += 0x6a43;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-9;
}
uint32_t test_func955(uint32_t value){
	value *= value;
	value += 0x8cc5;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	return value-78;
}
uint32_t test_func956(uint32_t value){
	value *= value;
	value += 0x1db7;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	return value-93;
}
uint32_t test_func957(uint32_t value){
	value *= value;
	value += 0x3d5d;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	return value-14;
}
uint32_t test_func958(uint32_t value){
	value *= value;
	value += 0x44c9;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-2;
}
uint32_t test_func959(uint32_t value){
	value *= value;
	value += 0x7e67;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	return value-44;
}
uint32_t test_func960(uint32_t value){
	value *= value;
	value += 0x2e72;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-108;
}
uint32_t test_func961(uint32_t value){
	value *= value;
	value += 0x6b7b;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-93;
}
uint32_t test_func962(uint32_t value){
	value *= value;
	value += 0x46e9;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-53;
}
uint32_t test_func963(uint32_t value){
	value *= value;
	value += 0x4574;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	return value-77;
}
uint32_t test_func964(uint32_t value){
	value *= value;
	value += 0x27a8;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-71;
}
uint32_t test_func965(uint32_t value){
	value *= value;
	value += 0x8269;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	return value-75;
}
uint32_t test_func966(uint32_t value){
	value *= value;
	value += 0x2769;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 4);
	return value-120;
}
uint32_t test_func967(uint32_t value){
	value *= value;
	value += 0x5db3;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	return value-94;
}
uint32_t test_func968(uint32_t value){
	value *= value;
	value += 0x6a24;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	return value-42;
}
uint32_t test_func969(uint32_t value){
	value *= value;
	value += 0x67ed;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	return value-104;
}
uint32_t test_func970(uint32_t value){
	value *= value;
	value += 0x7112;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	return value-107;
}
uint32_t test_func971(uint32_t value){
	value *= value;
	value += 0x16ee;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-78;
}
uint32_t test_func972(uint32_t value){
	value *= value;
	value += 0x2aad;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	return value-26;
}
uint32_t test_func973(uint32_t value){
	value *= value;
	value += 0x55d0;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	return value-13;
}
uint32_t test_func974(uint32_t value){
	value *= value;
	value += 0x82ac;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	return value-123;
}
uint32_t test_func975(uint32_t value){
	value *= value;
	value += 0x14eb;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	return value-93;
}
uint32_t test_func976(uint32_t value){
	value *= value;
	value += 0x720a;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	return value-100;
}
uint32_t test_func977(uint32_t value){
	value *= value;
	value += 0x59d9;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-84;
}
uint32_t test_func978(uint32_t value){
	value *= value;
	value += 0x8eff;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	return value-87;
}
uint32_t test_func979(uint32_t value){
	value *= value;
	value += 0x4f73;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-9;
}
uint32_t test_func980(uint32_t value){
	value *= value;
	value += 0x1d04;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	return value-31;
}
uint32_t test_func981(uint32_t value){
	value *= value;
	value += 0x55d2;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	return value-41;
}
uint32_t test_func982(uint32_t value){
	value *= value;
	value += 0x1cd2;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	value = (value >> 4) + (value >> 7);
	return value-117;
}
uint32_t test_func983(uint32_t value){
	value *= value;
	value += 0x124e;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-30;
}
uint32_t test_func984(uint32_t value){
	value *= value;
	value += 0x5c63;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-36;
}
uint32_t test_func985(uint32_t value){
	value *= value;
	value += 0x7f81;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	return value-54;
}
uint32_t test_func986(uint32_t value){
	value *= value;
	value += 0x86ef;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-25;
}
uint32_t test_func987(uint32_t value){
	value *= value;
	value += 0x7d44;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-48;
}
uint32_t test_func988(uint32_t value){
	value *= value;
	value += 0x34ef;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-26;
}
uint32_t test_func989(uint32_t value){
	value *= value;
	value += 0x60b0;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	return value-116;
}
uint32_t test_func990(uint32_t value){
	value *= value;
	value += 0x7c1c;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	return value-75;
}
uint32_t test_func991(uint32_t value){
	value *= value;
	value += 0x841d;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	return value-28;
}
uint32_t test_func992(uint32_t value){
	value *= value;
	value += 0x7f6f;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-106;
}
uint32_t test_func993(uint32_t value){
	value *= value;
	value += 0x5725;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	return value-33;
}
uint32_t test_func994(uint32_t value){
	value *= value;
	value += 0x7f22;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	return value-93;
}
uint32_t test_func995(uint32_t value){
	value *= value;
	value += 0x6ea0;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	return value-125;
}
uint32_t test_func996(uint32_t value){
	value *= value;
	value += 0x68ad;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	return value-81;
}
uint32_t test_func997(uint32_t value){
	value *= value;
	value += 0x14a9;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	return value-69;
}
uint32_t test_func998(uint32_t value){
	value *= value;
	value += 0x66c9;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	return value-100;
}
uint32_t test_func999(uint32_t value){
	value *= value;
	value += 0x5897;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	return value-72;
}
uint32_t test_func1000(uint32_t value){
	value *= value;
	value += 0x716f;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-68;
}
uint32_t test_func1001(uint32_t value){
	value *= value;
	value += 0x1f03;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	return value-48;
}
uint32_t test_func1002(uint32_t value){
	value *= value;
	value += 0x5dd8;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	return value-68;
}
uint32_t test_func1003(uint32_t value){
	value *= value;
	value += 0x31c8;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	return value-41;
}
uint32_t test_func1004(uint32_t value){
	value *= value;
	value += 0x6e7e;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-12;
}
uint32_t test_func1005(uint32_t value){
	value *= value;
	value += 0x4ffd;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	return value-118;
}
uint32_t test_func1006(uint32_t value){
	value *= value;
	value += 0x6319;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	return value-39;
}
uint32_t test_func1007(uint32_t value){
	value *= value;
	value += 0x3dfb;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	return value-28;
}
uint32_t test_func1008(uint32_t value){
	value *= value;
	value += 0x88a2;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-52;
}
uint32_t test_func1009(uint32_t value){
	value *= value;
	value += 0x555d;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 1);
	return value-118;
}
uint32_t test_func1010(uint32_t value){
	value *= value;
	value += 0x4952;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	return value-121;
}
uint32_t test_func1011(uint32_t value){
	value *= value;
	value += 0x14fa;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-100;
}
uint32_t test_func1012(uint32_t value){
	value *= value;
	value += 0x3ca2;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	return value-17;
}
uint32_t test_func1013(uint32_t value){
	value *= value;
	value += 0x30ec;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	return value-89;
}
uint32_t test_func1014(uint32_t value){
	value *= value;
	value += 0x374c;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	return value-119;
}
uint32_t test_func1015(uint32_t value){
	value *= value;
	value += 0x228c;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	return value-12;
}
uint32_t test_func1016(uint32_t value){
	value *= value;
	value += 0x5b48;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	return value-65;
}
uint32_t test_func1017(uint32_t value){
	value *= value;
	value += 0x3872;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	return value-13;
}
uint32_t test_func1018(uint32_t value){
	value *= value;
	value += 0x27cf;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-34;
}
uint32_t test_func1019(uint32_t value){
	value *= value;
	value += 0x2678;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	return value-104;
}
uint32_t test_func1020(uint32_t value){
	value *= value;
	value += 0x895a;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	return value-38;
}
uint32_t test_func1021(uint32_t value){
	value *= value;
	value += 0x15b7;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 3);
	return value-72;
}
uint32_t test_func1022(uint32_t value){
	value *= value;
	value += 0x69a3;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	return value-64;
}
uint32_t test_func1023(uint32_t value){
	value *= value;
	value += 0x3487;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	return value-17;
}
uint32_t test_func1024(uint32_t value){
	value *= value;
	value += 0x3fa1;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 2) + (value >> 3);
	return value-111;
}
uint32_t test_func1025(uint32_t value){
	value *= value;
	value += 0x4682;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 3);
	return value-8;
}
uint32_t test_func1026(uint32_t value){
	value *= value;
	value += 0x1f8f;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	return value-99;
}
uint32_t test_func1027(uint32_t value){
	value *= value;
	value += 0x3481;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-106;
}
uint32_t test_func1028(uint32_t value){
	value *= value;
	value += 0x4ae5;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	return value-18;
}
uint32_t test_func1029(uint32_t value){
	value *= value;
	value += 0x1c9c;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	return value-23;
}
uint32_t test_func1030(uint32_t value){
	value *= value;
	value += 0x405c;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	return value-99;
}
uint32_t test_func1031(uint32_t value){
	value *= value;
	value += 0x622e;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	return value-33;
}
uint32_t test_func1032(uint32_t value){
	value *= value;
	value += 0x4bee;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 4);
	return value-74;
}
uint32_t test_func1033(uint32_t value){
	value *= value;
	value += 0x3dce;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	return value-127;
}
uint32_t test_func1034(uint32_t value){
	value *= value;
	value += 0x16d2;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	return value-100;
}
uint32_t test_func1035(uint32_t value){
	value *= value;
	value += 0x4d55;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	return value-38;
}
uint32_t test_func1036(uint32_t value){
	value *= value;
	value += 0x3783;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	return value-29;
}
uint32_t test_func1037(uint32_t value){
	value *= value;
	value += 0x23de;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 4) + (value >> 1);
	return value-29;
}
uint32_t test_func1038(uint32_t value){
	value *= value;
	value += 0x41b9;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	return value-77;
}
uint32_t test_func1039(uint32_t value){
	value *= value;
	value += 0x59c0;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	return value-50;
}
uint32_t test_func1040(uint32_t value){
	value *= value;
	value += 0x566e;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-86;
}
uint32_t test_func1041(uint32_t value){
	value *= value;
	value += 0x1c94;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	return value-10;
}
uint32_t test_func1042(uint32_t value){
	value *= value;
	value += 0x33d9;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	return value-76;
}
uint32_t test_func1043(uint32_t value){
	value *= value;
	value += 0x3f35;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-74;
}
uint32_t test_func1044(uint32_t value){
	value *= value;
	value += 0x4575;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-10;
}
uint32_t test_func1045(uint32_t value){
	value *= value;
	value += 0x49ba;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	return value-49;
}
uint32_t test_func1046(uint32_t value){
	value *= value;
	value += 0x33fa;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-93;
}
uint32_t test_func1047(uint32_t value){
	value *= value;
	value += 0x897d;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	return value-57;
}
uint32_t test_func1048(uint32_t value){
	value *= value;
	value += 0x7561;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	return value-24;
}
uint32_t test_func1049(uint32_t value){
	value *= value;
	value += 0x2116;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-61;
}
uint32_t test_func1050(uint32_t value){
	value *= value;
	value += 0x5ce3;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	return value-64;
}
uint32_t test_func1051(uint32_t value){
	value *= value;
	value += 0x1860;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-19;
}
uint32_t test_func1052(uint32_t value){
	value *= value;
	value += 0x2af9;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	return value-36;
}
uint32_t test_func1053(uint32_t value){
	value *= value;
	value += 0x6c72;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-40;
}
uint32_t test_func1054(uint32_t value){
	value *= value;
	value += 0x1d5d;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	return value-127;
}
uint32_t test_func1055(uint32_t value){
	value *= value;
	value += 0x1fa5;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	return value-47;
}
uint32_t test_func1056(uint32_t value){
	value *= value;
	value += 0x7f07;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	return value-25;
}
uint32_t test_func1057(uint32_t value){
	value *= value;
	value += 0x4994;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-49;
}
uint32_t test_func1058(uint32_t value){
	value *= value;
	value += 0x3830;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	return value-104;
}
uint32_t test_func1059(uint32_t value){
	value *= value;
	value += 0x2716;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	return value-52;
}
uint32_t test_func1060(uint32_t value){
	value *= value;
	value += 0x5e51;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	return value-46;
}
uint32_t test_func1061(uint32_t value){
	value *= value;
	value += 0x2a44;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-91;
}
uint32_t test_func1062(uint32_t value){
	value *= value;
	value += 0x4424;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	return value-23;
}
uint32_t test_func1063(uint32_t value){
	value *= value;
	value += 0x8a79;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	return value-11;
}
uint32_t test_func1064(uint32_t value){
	value *= value;
	value += 0x89a1;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	return value-93;
}
uint32_t test_func1065(uint32_t value){
	value *= value;
	value += 0x544c;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	return value-122;
}
uint32_t test_func1066(uint32_t value){
	value *= value;
	value += 0x2c00;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-106;
}
uint32_t test_func1067(uint32_t value){
	value *= value;
	value += 0x7997;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	return value-99;
}
uint32_t test_func1068(uint32_t value){
	value *= value;
	value += 0x15bd;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-109;
}
uint32_t test_func1069(uint32_t value){
	value *= value;
	value += 0x6173;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	return value-33;
}
uint32_t test_func1070(uint32_t value){
	value *= value;
	value += 0x2e8e;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	return value-12;
}
uint32_t test_func1071(uint32_t value){
	value *= value;
	value += 0x7838;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	return value-63;
}
uint32_t test_func1072(uint32_t value){
	value *= value;
	value += 0x6b6d;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	return value-109;
}
uint32_t test_func1073(uint32_t value){
	value *= value;
	value += 0x3f80;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-47;
}
uint32_t test_func1074(uint32_t value){
	value *= value;
	value += 0x5e94;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-107;
}
uint32_t test_func1075(uint32_t value){
	value *= value;
	value += 0x5e23;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-91;
}
uint32_t test_func1076(uint32_t value){
	value *= value;
	value += 0x477b;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	return value-45;
}
uint32_t test_func1077(uint32_t value){
	value *= value;
	value += 0x303c;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	return value-77;
}
uint32_t test_func1078(uint32_t value){
	value *= value;
	value += 0x22db;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	return value-68;
}
uint32_t test_func1079(uint32_t value){
	value *= value;
	value += 0x5722;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	return value-70;
}
uint32_t test_func1080(uint32_t value){
	value *= value;
	value += 0x3aad;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-78;
}
uint32_t test_func1081(uint32_t value){
	value *= value;
	value += 0x496f;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	return value-104;
}
uint32_t test_func1082(uint32_t value){
	value *= value;
	value += 0x362b;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	return value-22;
}
uint32_t test_func1083(uint32_t value){
	value *= value;
	value += 0x62fb;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	return value-79;
}
uint32_t test_func1084(uint32_t value){
	value *= value;
	value += 0x29cd;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	return value-49;
}
uint32_t test_func1085(uint32_t value){
	value *= value;
	value += 0x74e0;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	return value-55;
}
uint32_t test_func1086(uint32_t value){
	value *= value;
	value += 0x274c;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	return value-40;
}
uint32_t test_func1087(uint32_t value){
	value *= value;
	value += 0x5577;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	return value-20;
}
uint32_t test_func1088(uint32_t value){
	value *= value;
	value += 0x4da1;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	return value-8;
}
uint32_t test_func1089(uint32_t value){
	value *= value;
	value += 0x7059;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	return value-58;
}
uint32_t test_func1090(uint32_t value){
	value *= value;
	value += 0x5905;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	return value-13;
}
uint32_t test_func1091(uint32_t value){
	value *= value;
	value += 0x565e;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	return value-119;
}
uint32_t test_func1092(uint32_t value){
	value *= value;
	value += 0x32f2;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	return value-65;
}
uint32_t test_func1093(uint32_t value){
	value *= value;
	value += 0x4da0;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	return value-54;
}
uint32_t test_func1094(uint32_t value){
	value *= value;
	value += 0x821f;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	return value-28;
}
uint32_t test_func1095(uint32_t value){
	value *= value;
	value += 0x6178;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	return value-35;
}
uint32_t test_func1096(uint32_t value){
	value *= value;
	value += 0x3a87;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	value = (value >> 1) + (value >> 2);
	return value-29;
}
uint32_t test_func1097(uint32_t value){
	value *= value;
	value += 0x727f;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-60;
}
uint32_t test_func1098(uint32_t value){
	value *= value;
	value += 0x2d63;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	return value-117;
}
uint32_t test_func1099(uint32_t value){
	value *= value;
	value += 0x468d;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	return value-9;
}
uint32_t test_func1100(uint32_t value){
	value *= value;
	value += 0x192a;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	return value-33;
}
uint32_t test_func1101(uint32_t value){
	value *= value;
	value += 0x18bb;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	return value-34;
}
uint32_t test_func1102(uint32_t value){
	value *= value;
	value += 0x3996;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-7;
}
uint32_t test_func1103(uint32_t value){
	value *= value;
	value += 0x2964;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	return value-101;
}
uint32_t test_func1104(uint32_t value){
	value *= value;
	value += 0x57a1;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	return value-26;
}
uint32_t test_func1105(uint32_t value){
	value *= value;
	value += 0x4e1f;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	return value-6;
}
uint32_t test_func1106(uint32_t value){
	value *= value;
	value += 0x5983;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	return value-122;
}
uint32_t test_func1107(uint32_t value){
	value *= value;
	value += 0x81c6;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-58;
}
uint32_t test_func1108(uint32_t value){
	value *= value;
	value += 0x52b5;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	return value-25;
}
uint32_t test_func1109(uint32_t value){
	value *= value;
	value += 0x7472;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-79;
}
uint32_t test_func1110(uint32_t value){
	value *= value;
	value += 0x13f1;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	return value-78;
}
uint32_t test_func1111(uint32_t value){
	value *= value;
	value += 0x1b7b;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-83;
}
uint32_t test_func1112(uint32_t value){
	value *= value;
	value += 0x3b2e;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	return value-1;
}
uint32_t test_func1113(uint32_t value){
	value *= value;
	value += 0x417b;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	return value-44;
}
uint32_t test_func1114(uint32_t value){
	value *= value;
	value += 0x43a7;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-64;
}
uint32_t test_func1115(uint32_t value){
	value *= value;
	value += 0x164b;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	return value-65;
}
uint32_t test_func1116(uint32_t value){
	value *= value;
	value += 0x15d4;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-111;
}
uint32_t test_func1117(uint32_t value){
	value *= value;
	value += 0x3f03;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	return value-21;
}
uint32_t test_func1118(uint32_t value){
	value *= value;
	value += 0x176e;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-90;
}
uint32_t test_func1119(uint32_t value){
	value *= value;
	value += 0x65fe;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	return value-99;
}
uint32_t test_func1120(uint32_t value){
	value *= value;
	value += 0x3b6f;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 8);
	return value-89;
}
uint32_t test_func1121(uint32_t value){
	value *= value;
	value += 0x4ad2;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	return value-70;
}
uint32_t test_func1122(uint32_t value){
	value *= value;
	value += 0x120e;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-110;
}
uint32_t test_func1123(uint32_t value){
	value *= value;
	value += 0x525b;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	return value-87;
}
uint32_t test_func1124(uint32_t value){
	value *= value;
	value += 0x58c6;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-108;
}
uint32_t test_func1125(uint32_t value){
	value *= value;
	value += 0x16b0;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	return value-72;
}
uint32_t test_func1126(uint32_t value){
	value *= value;
	value += 0x8a4f;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	return value-18;
}
uint32_t test_func1127(uint32_t value){
	value *= value;
	value += 0x772b;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	return value-10;
}
uint32_t test_func1128(uint32_t value){
	value *= value;
	value += 0x6ea2;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	return value-41;
}
uint32_t test_func1129(uint32_t value){
	value *= value;
	value += 0x2865;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	return value-105;
}
uint32_t test_func1130(uint32_t value){
	value *= value;
	value += 0x2af9;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	return value-42;
}
uint32_t test_func1131(uint32_t value){
	value *= value;
	value += 0x4436;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	return value-48;
}
uint32_t test_func1132(uint32_t value){
	value *= value;
	value += 0x51cb;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-83;
}
uint32_t test_func1133(uint32_t value){
	value *= value;
	value += 0x59b8;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	return value-65;
}
uint32_t test_func1134(uint32_t value){
	value *= value;
	value += 0x72d3;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	return value-91;
}
uint32_t test_func1135(uint32_t value){
	value *= value;
	value += 0x7d44;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-66;
}
uint32_t test_func1136(uint32_t value){
	value *= value;
	value += 0x2b09;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	return value-120;
}
uint32_t test_func1137(uint32_t value){
	value *= value;
	value += 0x5873;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	return value-45;
}
uint32_t test_func1138(uint32_t value){
	value *= value;
	value += 0x34a6;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	return value-25;
}
uint32_t test_func1139(uint32_t value){
	value *= value;
	value += 0x3a1d;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-4;
}
uint32_t test_func1140(uint32_t value){
	value *= value;
	value += 0x7724;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	return value-110;
}
uint32_t test_func1141(uint32_t value){
	value *= value;
	value += 0x265c;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	return value-86;
}
uint32_t test_func1142(uint32_t value){
	value *= value;
	value += 0x173a;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	value = (value >> 1) + (value >> 5);
	return value-27;
}
uint32_t test_func1143(uint32_t value){
	value *= value;
	value += 0x6688;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	return value-125;
}
uint32_t test_func1144(uint32_t value){
	value *= value;
	value += 0x86e3;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	return value-78;
}
uint32_t test_func1145(uint32_t value){
	value *= value;
	value += 0x193c;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	return value-41;
}
uint32_t test_func1146(uint32_t value){
	value *= value;
	value += 0x1557;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	return value-99;
}
uint32_t test_func1147(uint32_t value){
	value *= value;
	value += 0x424f;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	return value-7;
}
uint32_t test_func1148(uint32_t value){
	value *= value;
	value += 0x7f0f;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	return value-1;
}
uint32_t test_func1149(uint32_t value){
	value *= value;
	value += 0x5ada;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-94;
}
uint32_t test_func1150(uint32_t value){
	value *= value;
	value += 0x7dc5;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	return value-58;
}
uint32_t test_func1151(uint32_t value){
	value *= value;
	value += 0x6138;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-55;
}
uint32_t test_func1152(uint32_t value){
	value *= value;
	value += 0x5870;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-46;
}
uint32_t test_func1153(uint32_t value){
	value *= value;
	value += 0x6900;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	return value-114;
}
uint32_t test_func1154(uint32_t value){
	value *= value;
	value += 0x734b;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-47;
}
uint32_t test_func1155(uint32_t value){
	value *= value;
	value += 0x2b0c;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-112;
}
uint32_t test_func1156(uint32_t value){
	value *= value;
	value += 0x5fce;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	return value-81;
}
uint32_t test_func1157(uint32_t value){
	value *= value;
	value += 0x1574;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	return value-47;
}
uint32_t test_func1158(uint32_t value){
	value *= value;
	value += 0x6cb3;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	return value-29;
}
uint32_t test_func1159(uint32_t value){
	value *= value;
	value += 0x5b92;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-98;
}
uint32_t test_func1160(uint32_t value){
	value *= value;
	value += 0x35f1;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	return value-34;
}
uint32_t test_func1161(uint32_t value){
	value *= value;
	value += 0x85ff;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	return value-32;
}
uint32_t test_func1162(uint32_t value){
	value *= value;
	value += 0x34c3;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 4);
	value = (value >> 9) + (value >> 8);
	return value-34;
}
uint32_t test_func1163(uint32_t value){
	value *= value;
	value += 0x8294;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-122;
}
uint32_t test_func1164(uint32_t value){
	value *= value;
	value += 0x4fa1;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	return value-40;
}
uint32_t test_func1165(uint32_t value){
	value *= value;
	value += 0x3469;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	return value-30;
}
uint32_t test_func1166(uint32_t value){
	value *= value;
	value += 0x6a44;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	return value-43;
}
uint32_t test_func1167(uint32_t value){
	value *= value;
	value += 0x83d8;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	return value-117;
}
uint32_t test_func1168(uint32_t value){
	value *= value;
	value += 0x75a5;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-47;
}
uint32_t test_func1169(uint32_t value){
	value *= value;
	value += 0x6e7a;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	return value-72;
}
uint32_t test_func1170(uint32_t value){
	value *= value;
	value += 0x7ffd;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	return value-101;
}
uint32_t test_func1171(uint32_t value){
	value *= value;
	value += 0x1728;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-87;
}
uint32_t test_func1172(uint32_t value){
	value *= value;
	value += 0x44c6;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	return value-75;
}
uint32_t test_func1173(uint32_t value){
	value *= value;
	value += 0x55fa;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-4;
}
uint32_t test_func1174(uint32_t value){
	value *= value;
	value += 0x3cb8;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	return value-73;
}
uint32_t test_func1175(uint32_t value){
	value *= value;
	value += 0x484a;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 3);
	return value-105;
}
uint32_t test_func1176(uint32_t value){
	value *= value;
	value += 0x2dcc;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-89;
}
uint32_t test_func1177(uint32_t value){
	value *= value;
	value += 0x60b0;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-1;
}
uint32_t test_func1178(uint32_t value){
	value *= value;
	value += 0x3b3a;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-28;
}
uint32_t test_func1179(uint32_t value){
	value *= value;
	value += 0x7706;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	return value-63;
}
uint32_t test_func1180(uint32_t value){
	value *= value;
	value += 0x757f;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	return value-127;
}
uint32_t test_func1181(uint32_t value){
	value *= value;
	value += 0x5865;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	return value-53;
}
uint32_t test_func1182(uint32_t value){
	value *= value;
	value += 0x6a4f;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	return value-98;
}
uint32_t test_func1183(uint32_t value){
	value *= value;
	value += 0x5726;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	return value-51;
}
uint32_t test_func1184(uint32_t value){
	value *= value;
	value += 0x34a6;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	return value-42;
}
uint32_t test_func1185(uint32_t value){
	value *= value;
	value += 0x5ae1;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	return value-96;
}
uint32_t test_func1186(uint32_t value){
	value *= value;
	value += 0x8cbc;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-109;
}
uint32_t test_func1187(uint32_t value){
	value *= value;
	value += 0x7071;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 4);
	return value-103;
}
uint32_t test_func1188(uint32_t value){
	value *= value;
	value += 0x580b;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	return value-14;
}
uint32_t test_func1189(uint32_t value){
	value *= value;
	value += 0x59ec;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	return value-10;
}
uint32_t test_func1190(uint32_t value){
	value *= value;
	value += 0x394a;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	return value-88;
}
uint32_t test_func1191(uint32_t value){
	value *= value;
	value += 0x1eae;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	return value-73;
}
uint32_t test_func1192(uint32_t value){
	value *= value;
	value += 0x2074;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	return value-39;
}
uint32_t test_func1193(uint32_t value){
	value *= value;
	value += 0x1b4e;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	return value-1;
}
uint32_t test_func1194(uint32_t value){
	value *= value;
	value += 0x5ac1;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	return value-3;
}
uint32_t test_func1195(uint32_t value){
	value *= value;
	value += 0x11a6;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	return value-10;
}
uint32_t test_func1196(uint32_t value){
	value *= value;
	value += 0x22aa;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 8);
	return value-60;
}
uint32_t test_func1197(uint32_t value){
	value *= value;
	value += 0x38ce;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	return value-89;
}
uint32_t test_func1198(uint32_t value){
	value *= value;
	value += 0x2fe8;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-21;
}
uint32_t test_func1199(uint32_t value){
	value *= value;
	value += 0x4d21;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-33;
}
uint32_t test_func1200(uint32_t value){
	value *= value;
	value += 0x4775;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	return value-88;
}
uint32_t test_func1201(uint32_t value){
	value *= value;
	value += 0x2036;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	return value-114;
}
uint32_t test_func1202(uint32_t value){
	value *= value;
	value += 0x4b88;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	return value-126;
}
uint32_t test_func1203(uint32_t value){
	value *= value;
	value += 0x28e6;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-87;
}
uint32_t test_func1204(uint32_t value){
	value *= value;
	value += 0x4b9c;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-80;
}
uint32_t test_func1205(uint32_t value){
	value *= value;
	value += 0x134c;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-118;
}
uint32_t test_func1206(uint32_t value){
	value *= value;
	value += 0x1469;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-122;
}
uint32_t test_func1207(uint32_t value){
	value *= value;
	value += 0x50bf;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	return value-52;
}
uint32_t test_func1208(uint32_t value){
	value *= value;
	value += 0x3fe9;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-64;
}
uint32_t test_func1209(uint32_t value){
	value *= value;
	value += 0x27d9;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	return value-80;
}
uint32_t test_func1210(uint32_t value){
	value *= value;
	value += 0x4553;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	return value-11;
}
uint32_t test_func1211(uint32_t value){
	value *= value;
	value += 0x4472;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	return value-11;
}
uint32_t test_func1212(uint32_t value){
	value *= value;
	value += 0x8922;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	return value-16;
}
uint32_t test_func1213(uint32_t value){
	value *= value;
	value += 0x47a4;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	return value-58;
}
uint32_t test_func1214(uint32_t value){
	value *= value;
	value += 0x6d0e;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-116;
}
uint32_t test_func1215(uint32_t value){
	value *= value;
	value += 0x57c8;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	return value-119;
}
uint32_t test_func1216(uint32_t value){
	value *= value;
	value += 0x6010;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 4) + (value >> 1);
	value = (value >> 5) + (value >> 8);
	return value-106;
}
uint32_t test_func1217(uint32_t value){
	value *= value;
	value += 0x3077;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	return value-49;
}
uint32_t test_func1218(uint32_t value){
	value *= value;
	value += 0x6e61;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-75;
}
uint32_t test_func1219(uint32_t value){
	value *= value;
	value += 0x3289;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-89;
}
uint32_t test_func1220(uint32_t value){
	value *= value;
	value += 0x517b;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	return value-67;
}
uint32_t test_func1221(uint32_t value){
	value *= value;
	value += 0x7418;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-123;
}
uint32_t test_func1222(uint32_t value){
	value *= value;
	value += 0x8016;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 3);
	return value-104;
}
uint32_t test_func1223(uint32_t value){
	value *= value;
	value += 0x507d;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	return value-95;
}
uint32_t test_func1224(uint32_t value){
	value *= value;
	value += 0x3e2b;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	return value-89;
}
uint32_t test_func1225(uint32_t value){
	value *= value;
	value += 0x7850;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 8);
	return value-41;
}
uint32_t test_func1226(uint32_t value){
	value *= value;
	value += 0x2cf3;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	return value-104;
}
uint32_t test_func1227(uint32_t value){
	value *= value;
	value += 0x816b;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-121;
}
uint32_t test_func1228(uint32_t value){
	value *= value;
	value += 0x5ae7;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	return value-49;
}
uint32_t test_func1229(uint32_t value){
	value *= value;
	value += 0x76e7;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-17;
}
uint32_t test_func1230(uint32_t value){
	value *= value;
	value += 0x53c1;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-56;
}
uint32_t test_func1231(uint32_t value){
	value *= value;
	value += 0x691d;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	return value-102;
}
uint32_t test_func1232(uint32_t value){
	value *= value;
	value += 0x3078;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	value = (value >> 4) + (value >> 6);
	return value-21;
}
uint32_t test_func1233(uint32_t value){
	value *= value;
	value += 0x7da5;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	return value-79;
}
uint32_t test_func1234(uint32_t value){
	value *= value;
	value += 0x2747;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	return value-9;
}
uint32_t test_func1235(uint32_t value){
	value *= value;
	value += 0x7f59;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-35;
}
uint32_t test_func1236(uint32_t value){
	value *= value;
	value += 0x1ba7;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-29;
}
uint32_t test_func1237(uint32_t value){
	value *= value;
	value += 0x6e52;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	return value-78;
}
uint32_t test_func1238(uint32_t value){
	value *= value;
	value += 0x2e4f;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-80;
}
uint32_t test_func1239(uint32_t value){
	value *= value;
	value += 0x8fe8;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-127;
}
uint32_t test_func1240(uint32_t value){
	value *= value;
	value += 0x4d3a;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-36;
}
uint32_t test_func1241(uint32_t value){
	value *= value;
	value += 0x7eb5;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	return value-59;
}
uint32_t test_func1242(uint32_t value){
	value *= value;
	value += 0x439f;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	return value-79;
}
uint32_t test_func1243(uint32_t value){
	value *= value;
	value += 0x3a92;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-11;
}
uint32_t test_func1244(uint32_t value){
	value *= value;
	value += 0x49f9;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	return value-80;
}
uint32_t test_func1245(uint32_t value){
	value *= value;
	value += 0x3897;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	return value-13;
}
uint32_t test_func1246(uint32_t value){
	value *= value;
	value += 0x1601;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 6);
	return value-19;
}
uint32_t test_func1247(uint32_t value){
	value *= value;
	value += 0x731e;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	return value-34;
}
uint32_t test_func1248(uint32_t value){
	value *= value;
	value += 0x6aae;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	return value-15;
}
uint32_t test_func1249(uint32_t value){
	value *= value;
	value += 0x79c0;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-4;
}
uint32_t test_func1250(uint32_t value){
	value *= value;
	value += 0x283a;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-104;
}
uint32_t test_func1251(uint32_t value){
	value *= value;
	value += 0x8156;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-102;
}
uint32_t test_func1252(uint32_t value){
	value *= value;
	value += 0x5c1f;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	return value-18;
}
uint32_t test_func1253(uint32_t value){
	value *= value;
	value += 0x73f8;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 2);
	return value-34;
}
uint32_t test_func1254(uint32_t value){
	value *= value;
	value += 0x5115;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-104;
}
uint32_t test_func1255(uint32_t value){
	value *= value;
	value += 0x8100;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	return value-69;
}
uint32_t test_func1256(uint32_t value){
	value *= value;
	value += 0x1f15;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	return value-88;
}
uint32_t test_func1257(uint32_t value){
	value *= value;
	value += 0x2d07;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	return value-60;
}
uint32_t test_func1258(uint32_t value){
	value *= value;
	value += 0x3b59;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	return value-117;
}
uint32_t test_func1259(uint32_t value){
	value *= value;
	value += 0x61e5;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	return value-111;
}
uint32_t test_func1260(uint32_t value){
	value *= value;
	value += 0x8858;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	return value-38;
}
uint32_t test_func1261(uint32_t value){
	value *= value;
	value += 0x7eb4;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-101;
}
uint32_t test_func1262(uint32_t value){
	value *= value;
	value += 0x65cd;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	return value-57;
}
uint32_t test_func1263(uint32_t value){
	value *= value;
	value += 0x67cd;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-97;
}
uint32_t test_func1264(uint32_t value){
	value *= value;
	value += 0x40b0;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 8);
	return value-9;
}
uint32_t test_func1265(uint32_t value){
	value *= value;
	value += 0x16c8;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	return value-126;
}
uint32_t test_func1266(uint32_t value){
	value *= value;
	value += 0x233b;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	return value-31;
}
uint32_t test_func1267(uint32_t value){
	value *= value;
	value += 0x2a80;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-90;
}
uint32_t test_func1268(uint32_t value){
	value *= value;
	value += 0x44e5;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-84;
}
uint32_t test_func1269(uint32_t value){
	value *= value;
	value += 0x770c;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	return value-44;
}
uint32_t test_func1270(uint32_t value){
	value *= value;
	value += 0x1a69;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	return value-102;
}
uint32_t test_func1271(uint32_t value){
	value *= value;
	value += 0x15c5;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	return value-105;
}
uint32_t test_func1272(uint32_t value){
	value *= value;
	value += 0x65be;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	return value-38;
}
uint32_t test_func1273(uint32_t value){
	value *= value;
	value += 0x7545;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	return value-95;
}
uint32_t test_func1274(uint32_t value){
	value *= value;
	value += 0x461f;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	return value-13;
}
uint32_t test_func1275(uint32_t value){
	value *= value;
	value += 0x6965;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	return value-93;
}
uint32_t test_func1276(uint32_t value){
	value *= value;
	value += 0x4805;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	return value-98;
}
uint32_t test_func1277(uint32_t value){
	value *= value;
	value += 0x3b3e;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	return value-78;
}
uint32_t test_func1278(uint32_t value){
	value *= value;
	value += 0x7527;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	return value-92;
}
uint32_t test_func1279(uint32_t value){
	value *= value;
	value += 0x3929;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	return value-84;
}
uint32_t test_func1280(uint32_t value){
	value *= value;
	value += 0x6480;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	return value-56;
}
uint32_t test_func1281(uint32_t value){
	value *= value;
	value += 0x46be;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	return value-117;
}
uint32_t test_func1282(uint32_t value){
	value *= value;
	value += 0x4a48;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	return value-99;
}
uint32_t test_func1283(uint32_t value){
	value *= value;
	value += 0x6cd6;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	return value-48;
}
uint32_t test_func1284(uint32_t value){
	value *= value;
	value += 0x87f8;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	return value-25;
}
uint32_t test_func1285(uint32_t value){
	value *= value;
	value += 0x698c;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	return value-33;
}
uint32_t test_func1286(uint32_t value){
	value *= value;
	value += 0x3c49;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	return value-123;
}
uint32_t test_func1287(uint32_t value){
	value *= value;
	value += 0x4037;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-29;
}
uint32_t test_func1288(uint32_t value){
	value *= value;
	value += 0x5334;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-66;
}
uint32_t test_func1289(uint32_t value){
	value *= value;
	value += 0x4971;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	return value-89;
}
uint32_t test_func1290(uint32_t value){
	value *= value;
	value += 0x15f3;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	return value-73;
}
uint32_t test_func1291(uint32_t value){
	value *= value;
	value += 0x4313;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	return value-10;
}
uint32_t test_func1292(uint32_t value){
	value *= value;
	value += 0x3afe;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	return value-60;
}
uint32_t test_func1293(uint32_t value){
	value *= value;
	value += 0x6035;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	return value-120;
}
uint32_t test_func1294(uint32_t value){
	value *= value;
	value += 0x760e;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-49;
}
uint32_t test_func1295(uint32_t value){
	value *= value;
	value += 0x5931;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	return value-50;
}
uint32_t test_func1296(uint32_t value){
	value *= value;
	value += 0x881c;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	return value-79;
}
uint32_t test_func1297(uint32_t value){
	value *= value;
	value += 0x7ba0;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	return value-31;
}
uint32_t test_func1298(uint32_t value){
	value *= value;
	value += 0x4f62;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	return value-101;
}
uint32_t test_func1299(uint32_t value){
	value *= value;
	value += 0x3a5a;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-29;
}
uint32_t test_func1300(uint32_t value){
	value *= value;
	value += 0x5756;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	return value-20;
}
uint32_t test_func1301(uint32_t value){
	value *= value;
	value += 0x3d79;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	return value-47;
}
uint32_t test_func1302(uint32_t value){
	value *= value;
	value += 0x68b6;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	return value-96;
}
uint32_t test_func1303(uint32_t value){
	value *= value;
	value += 0x7256;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	return value-18;
}
uint32_t test_func1304(uint32_t value){
	value *= value;
	value += 0x1977;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-99;
}
uint32_t test_func1305(uint32_t value){
	value *= value;
	value += 0x1b8a;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-93;
}
uint32_t test_func1306(uint32_t value){
	value *= value;
	value += 0x5cd3;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 3);
	return value-95;
}
uint32_t test_func1307(uint32_t value){
	value *= value;
	value += 0x60ed;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-36;
}
uint32_t test_func1308(uint32_t value){
	value *= value;
	value += 0x1344;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	return value-101;
}
uint32_t test_func1309(uint32_t value){
	value *= value;
	value += 0x5f99;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	return value-28;
}
uint32_t test_func1310(uint32_t value){
	value *= value;
	value += 0x1a82;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	return value-109;
}
uint32_t test_func1311(uint32_t value){
	value *= value;
	value += 0x39e7;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-46;
}
uint32_t test_func1312(uint32_t value){
	value *= value;
	value += 0x5d86;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-5;
}
uint32_t test_func1313(uint32_t value){
	value *= value;
	value += 0x276f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-42;
}
uint32_t test_func1314(uint32_t value){
	value *= value;
	value += 0x6489;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	return value-91;
}
uint32_t test_func1315(uint32_t value){
	value *= value;
	value += 0x850b;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 4);
	return value-84;
}
uint32_t test_func1316(uint32_t value){
	value *= value;
	value += 0x6504;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	return value-119;
}
uint32_t test_func1317(uint32_t value){
	value *= value;
	value += 0x64d4;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-18;
}
uint32_t test_func1318(uint32_t value){
	value *= value;
	value += 0x51b0;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	return value-67;
}
uint32_t test_func1319(uint32_t value){
	value *= value;
	value += 0x1e22;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	return value-2;
}
uint32_t test_func1320(uint32_t value){
	value *= value;
	value += 0x6a87;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-59;
}
uint32_t test_func1321(uint32_t value){
	value *= value;
	value += 0x5d90;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	return value-32;
}
uint32_t test_func1322(uint32_t value){
	value *= value;
	value += 0x4cc1;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	return value-4;
}
uint32_t test_func1323(uint32_t value){
	value *= value;
	value += 0x34f4;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	return value-101;
}
uint32_t test_func1324(uint32_t value){
	value *= value;
	value += 0x82d7;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	return value-19;
}
uint32_t test_func1325(uint32_t value){
	value *= value;
	value += 0x2b6a;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-105;
}
uint32_t test_func1326(uint32_t value){
	value *= value;
	value += 0x1482;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	return value-70;
}
uint32_t test_func1327(uint32_t value){
	value *= value;
	value += 0x4d49;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	return value-125;
}
uint32_t test_func1328(uint32_t value){
	value *= value;
	value += 0x16bc;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	return value-11;
}
uint32_t test_func1329(uint32_t value){
	value *= value;
	value += 0x3c2b;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-79;
}
uint32_t test_func1330(uint32_t value){
	value *= value;
	value += 0x3bbd;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	return value-122;
}
uint32_t test_func1331(uint32_t value){
	value *= value;
	value += 0x3ee9;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-11;
}
uint32_t test_func1332(uint32_t value){
	value *= value;
	value += 0x62fe;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	return value-121;
}
uint32_t test_func1333(uint32_t value){
	value *= value;
	value += 0x519b;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	return value-120;
}
uint32_t test_func1334(uint32_t value){
	value *= value;
	value += 0x2938;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	return value-92;
}
uint32_t test_func1335(uint32_t value){
	value *= value;
	value += 0x359c;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	return value-26;
}
uint32_t test_func1336(uint32_t value){
	value *= value;
	value += 0x7864;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	return value-124;
}
uint32_t test_func1337(uint32_t value){
	value *= value;
	value += 0x8182;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	return value-84;
}
uint32_t test_func1338(uint32_t value){
	value *= value;
	value += 0x17bc;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-103;
}
uint32_t test_func1339(uint32_t value){
	value *= value;
	value += 0x3129;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	return value-126;
}
uint32_t test_func1340(uint32_t value){
	value *= value;
	value += 0x3bb7;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-118;
}
uint32_t test_func1341(uint32_t value){
	value *= value;
	value += 0x35a8;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	return value-23;
}
uint32_t test_func1342(uint32_t value){
	value *= value;
	value += 0x1610;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 3);
	return value-107;
}
uint32_t test_func1343(uint32_t value){
	value *= value;
	value += 0x8559;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	return value-81;
}
uint32_t test_func1344(uint32_t value){
	value *= value;
	value += 0x65bf;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	return value-23;
}
uint32_t test_func1345(uint32_t value){
	value *= value;
	value += 0x2bd5;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	return value-64;
}
uint32_t test_func1346(uint32_t value){
	value *= value;
	value += 0x86fe;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 2);
	return value-116;
}
uint32_t test_func1347(uint32_t value){
	value *= value;
	value += 0x59f4;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-116;
}
uint32_t test_func1348(uint32_t value){
	value *= value;
	value += 0x8344;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	return value-79;
}
uint32_t test_func1349(uint32_t value){
	value *= value;
	value += 0x75d0;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	return value-25;
}
uint32_t test_func1350(uint32_t value){
	value *= value;
	value += 0x214c;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-92;
}
uint32_t test_func1351(uint32_t value){
	value *= value;
	value += 0x2ac2;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	return value-22;
}
uint32_t test_func1352(uint32_t value){
	value *= value;
	value += 0x750e;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	return value-94;
}
uint32_t test_func1353(uint32_t value){
	value *= value;
	value += 0x7962;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	return value-45;
}
uint32_t test_func1354(uint32_t value){
	value *= value;
	value += 0x6fc3;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	return value-67;
}
uint32_t test_func1355(uint32_t value){
	value *= value;
	value += 0x478a;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	return value-37;
}
uint32_t test_func1356(uint32_t value){
	value *= value;
	value += 0x6fe4;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	return value-72;
}
uint32_t test_func1357(uint32_t value){
	value *= value;
	value += 0x7053;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	return value-87;
}
uint32_t test_func1358(uint32_t value){
	value *= value;
	value += 0x512b;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	return value-20;
}
uint32_t test_func1359(uint32_t value){
	value *= value;
	value += 0x5416;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	return value-94;
}
uint32_t test_func1360(uint32_t value){
	value *= value;
	value += 0x7c90;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	return value-91;
}
uint32_t test_func1361(uint32_t value){
	value *= value;
	value += 0x686b;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	return value-51;
}
uint32_t test_func1362(uint32_t value){
	value *= value;
	value += 0x784c;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	return value-125;
}
uint32_t test_func1363(uint32_t value){
	value *= value;
	value += 0x482c;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-69;
}
uint32_t test_func1364(uint32_t value){
	value *= value;
	value += 0x77d8;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	return value-41;
}
uint32_t test_func1365(uint32_t value){
	value *= value;
	value += 0x4371;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-40;
}
uint32_t test_func1366(uint32_t value){
	value *= value;
	value += 0x6bed;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	return value-121;
}
uint32_t test_func1367(uint32_t value){
	value *= value;
	value += 0x6f95;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-36;
}
uint32_t test_func1368(uint32_t value){
	value *= value;
	value += 0x1285;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 3);
	return value-20;
}
uint32_t test_func1369(uint32_t value){
	value *= value;
	value += 0x372f;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-99;
}
uint32_t test_func1370(uint32_t value){
	value *= value;
	value += 0x86d8;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	return value-72;
}
uint32_t test_func1371(uint32_t value){
	value *= value;
	value += 0x6a19;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	return value-13;
}
uint32_t test_func1372(uint32_t value){
	value *= value;
	value += 0x515f;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	return value-58;
}
uint32_t test_func1373(uint32_t value){
	value *= value;
	value += 0x4d6b;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	return value-94;
}
uint32_t test_func1374(uint32_t value){
	value *= value;
	value += 0x77d3;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	return value-115;
}
uint32_t test_func1375(uint32_t value){
	value *= value;
	value += 0x2b7f;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	return value-91;
}
uint32_t test_func1376(uint32_t value){
	value *= value;
	value += 0x8d2d;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	return value-12;
}
uint32_t test_func1377(uint32_t value){
	value *= value;
	value += 0x63ee;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 6);
	return value-87;
}
uint32_t test_func1378(uint32_t value){
	value *= value;
	value += 0x41a7;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 4);
	return value-75;
}
uint32_t test_func1379(uint32_t value){
	value *= value;
	value += 0x7b91;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-48;
}
uint32_t test_func1380(uint32_t value){
	value *= value;
	value += 0x72b9;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-63;
}
uint32_t test_func1381(uint32_t value){
	value *= value;
	value += 0x2c80;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	return value-87;
}
uint32_t test_func1382(uint32_t value){
	value *= value;
	value += 0x3b1c;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	return value-103;
}
uint32_t test_func1383(uint32_t value){
	value *= value;
	value += 0x7615;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 4);
	return value-120;
}
uint32_t test_func1384(uint32_t value){
	value *= value;
	value += 0x82c9;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	return value-79;
}
uint32_t test_func1385(uint32_t value){
	value *= value;
	value += 0x2ce8;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 6) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	return value-40;
}
uint32_t test_func1386(uint32_t value){
	value *= value;
	value += 0x8ef9;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-43;
}
uint32_t test_func1387(uint32_t value){
	value *= value;
	value += 0x8ad4;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	return value-103;
}
uint32_t test_func1388(uint32_t value){
	value *= value;
	value += 0x1226;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	return value-127;
}
uint32_t test_func1389(uint32_t value){
	value *= value;
	value += 0x3ef0;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	return value-99;
}
uint32_t test_func1390(uint32_t value){
	value *= value;
	value += 0x3c08;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-61;
}
uint32_t test_func1391(uint32_t value){
	value *= value;
	value += 0x7d96;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-119;
}
uint32_t test_func1392(uint32_t value){
	value *= value;
	value += 0x4998;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	return value-94;
}
uint32_t test_func1393(uint32_t value){
	value *= value;
	value += 0x105e;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	return value-103;
}
uint32_t test_func1394(uint32_t value){
	value *= value;
	value += 0x150f;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-15;
}
uint32_t test_func1395(uint32_t value){
	value *= value;
	value += 0x6622;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-106;
}
uint32_t test_func1396(uint32_t value){
	value *= value;
	value += 0x25e6;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	return value-66;
}
uint32_t test_func1397(uint32_t value){
	value *= value;
	value += 0x22fb;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	return value-90;
}
uint32_t test_func1398(uint32_t value){
	value *= value;
	value += 0x40d7;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-89;
}
uint32_t test_func1399(uint32_t value){
	value *= value;
	value += 0x3042;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	return value-75;
}
uint32_t test_func1400(uint32_t value){
	value *= value;
	value += 0x77da;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-68;
}
uint32_t test_func1401(uint32_t value){
	value *= value;
	value += 0x4c8f;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-46;
}
uint32_t test_func1402(uint32_t value){
	value *= value;
	value += 0x3a28;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	return value-32;
}
uint32_t test_func1403(uint32_t value){
	value *= value;
	value += 0x1bbc;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	return value-110;
}
uint32_t test_func1404(uint32_t value){
	value *= value;
	value += 0x643a;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-77;
}
uint32_t test_func1405(uint32_t value){
	value *= value;
	value += 0x36e2;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-22;
}
uint32_t test_func1406(uint32_t value){
	value *= value;
	value += 0x4fc9;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	return value-37;
}
uint32_t test_func1407(uint32_t value){
	value *= value;
	value += 0x3c59;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	return value-106;
}
uint32_t test_func1408(uint32_t value){
	value *= value;
	value += 0x63cf;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	return value-8;
}
uint32_t test_func1409(uint32_t value){
	value *= value;
	value += 0x5fbb;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	return value-19;
}
uint32_t test_func1410(uint32_t value){
	value *= value;
	value += 0x2484;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	return value-126;
}
uint32_t test_func1411(uint32_t value){
	value *= value;
	value += 0x79e1;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	return value-39;
}
uint32_t test_func1412(uint32_t value){
	value *= value;
	value += 0x4361;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	return value-104;
}
uint32_t test_func1413(uint32_t value){
	value *= value;
	value += 0x18e4;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 1);
	return value-104;
}
uint32_t test_func1414(uint32_t value){
	value *= value;
	value += 0x2f1f;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	return value-6;
}
uint32_t test_func1415(uint32_t value){
	value *= value;
	value += 0x101c;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	return value-78;
}
uint32_t test_func1416(uint32_t value){
	value *= value;
	value += 0x23b8;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	return value-43;
}
uint32_t test_func1417(uint32_t value){
	value *= value;
	value += 0x8823;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	return value-42;
}
uint32_t test_func1418(uint32_t value){
	value *= value;
	value += 0x3a63;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	return value-88;
}
uint32_t test_func1419(uint32_t value){
	value *= value;
	value += 0x8ed2;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-79;
}
uint32_t test_func1420(uint32_t value){
	value *= value;
	value += 0x799b;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-87;
}
uint32_t test_func1421(uint32_t value){
	value *= value;
	value += 0x2741;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	return value-43;
}
uint32_t test_func1422(uint32_t value){
	value *= value;
	value += 0x6518;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	return value-95;
}
uint32_t test_func1423(uint32_t value){
	value *= value;
	value += 0x59ca;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	return value-103;
}
uint32_t test_func1424(uint32_t value){
	value *= value;
	value += 0x8dd3;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	return value-57;
}
uint32_t test_func1425(uint32_t value){
	value *= value;
	value += 0x4406;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	return value-12;
}
uint32_t test_func1426(uint32_t value){
	value *= value;
	value += 0x2206;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	return value-78;
}
uint32_t test_func1427(uint32_t value){
	value *= value;
	value += 0x28cd;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-28;
}
uint32_t test_func1428(uint32_t value){
	value *= value;
	value += 0x7d29;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	return value-98;
}
uint32_t test_func1429(uint32_t value){
	value *= value;
	value += 0x8039;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	return value-53;
}
uint32_t test_func1430(uint32_t value){
	value *= value;
	value += 0x37f4;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	return value-29;
}
uint32_t test_func1431(uint32_t value){
	value *= value;
	value += 0x87a3;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-50;
}
uint32_t test_func1432(uint32_t value){
	value *= value;
	value += 0x3862;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	return value-53;
}
uint32_t test_func1433(uint32_t value){
	value *= value;
	value += 0x51a4;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	return value-81;
}
uint32_t test_func1434(uint32_t value){
	value *= value;
	value += 0x41ac;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	return value-11;
}
uint32_t test_func1435(uint32_t value){
	value *= value;
	value += 0x5614;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	return value-67;
}
uint32_t test_func1436(uint32_t value){
	value *= value;
	value += 0x8449;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 3);
	return value-82;
}
uint32_t test_func1437(uint32_t value){
	value *= value;
	value += 0x820d;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	return value-88;
}
uint32_t test_func1438(uint32_t value){
	value *= value;
	value += 0x2df4;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 3);
	return value-35;
}
uint32_t test_func1439(uint32_t value){
	value *= value;
	value += 0x47e8;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-36;
}
uint32_t test_func1440(uint32_t value){
	value *= value;
	value += 0x79a5;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	return value-39;
}
uint32_t test_func1441(uint32_t value){
	value *= value;
	value += 0x2f3d;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	return value-12;
}
uint32_t test_func1442(uint32_t value){
	value *= value;
	value += 0x3f95;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	return value-51;
}
uint32_t test_func1443(uint32_t value){
	value *= value;
	value += 0x64e6;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 4);
	return value-122;
}
uint32_t test_func1444(uint32_t value){
	value *= value;
	value += 0x853d;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	return value-104;
}
uint32_t test_func1445(uint32_t value){
	value *= value;
	value += 0x4afc;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	return value-113;
}
uint32_t test_func1446(uint32_t value){
	value *= value;
	value += 0x8d57;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	return value-85;
}
uint32_t test_func1447(uint32_t value){
	value *= value;
	value += 0x88d7;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-48;
}
uint32_t test_func1448(uint32_t value){
	value *= value;
	value += 0x67da;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	return value-20;
}
uint32_t test_func1449(uint32_t value){
	value *= value;
	value += 0x1b11;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	return value-86;
}
uint32_t test_func1450(uint32_t value){
	value *= value;
	value += 0x8201;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	return value-108;
}
uint32_t test_func1451(uint32_t value){
	value *= value;
	value += 0x6383;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	return value-121;
}
uint32_t test_func1452(uint32_t value){
	value *= value;
	value += 0x3644;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	return value-112;
}
uint32_t test_func1453(uint32_t value){
	value *= value;
	value += 0x3946;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-81;
}
uint32_t test_func1454(uint32_t value){
	value *= value;
	value += 0x5c5d;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	return value-30;
}
uint32_t test_func1455(uint32_t value){
	value *= value;
	value += 0x78b2;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-80;
}
uint32_t test_func1456(uint32_t value){
	value *= value;
	value += 0x5943;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 1);
	return value-7;
}
uint32_t test_func1457(uint32_t value){
	value *= value;
	value += 0x1361;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	return value-69;
}
uint32_t test_func1458(uint32_t value){
	value *= value;
	value += 0x2f31;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	return value-93;
}
uint32_t test_func1459(uint32_t value){
	value *= value;
	value += 0x202c;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-120;
}
uint32_t test_func1460(uint32_t value){
	value *= value;
	value += 0x8d9f;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 1);
	return value-45;
}
uint32_t test_func1461(uint32_t value){
	value *= value;
	value += 0x6b2b;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	return value-83;
}
uint32_t test_func1462(uint32_t value){
	value *= value;
	value += 0x6146;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	return value-99;
}
uint32_t test_func1463(uint32_t value){
	value *= value;
	value += 0x85b8;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	return value-122;
}
uint32_t test_func1464(uint32_t value){
	value *= value;
	value += 0x641f;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	return value-127;
}
uint32_t test_func1465(uint32_t value){
	value *= value;
	value += 0x566c;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	return value-110;
}
uint32_t test_func1466(uint32_t value){
	value *= value;
	value += 0x2d64;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 5);
	return value-46;
}
uint32_t test_func1467(uint32_t value){
	value *= value;
	value += 0x2920;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	return value-44;
}
uint32_t test_func1468(uint32_t value){
	value *= value;
	value += 0x418d;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	return value-102;
}
uint32_t test_func1469(uint32_t value){
	value *= value;
	value += 0x3eec;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	return value-75;
}
uint32_t test_func1470(uint32_t value){
	value *= value;
	value += 0x2252;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	return value-10;
}
uint32_t test_func1471(uint32_t value){
	value *= value;
	value += 0x5e2a;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	return value-36;
}
uint32_t test_func1472(uint32_t value){
	value *= value;
	value += 0x5eaf;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	return value-11;
}
uint32_t test_func1473(uint32_t value){
	value *= value;
	value += 0x6272;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-105;
}
uint32_t test_func1474(uint32_t value){
	value *= value;
	value += 0x22da;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	return value-5;
}
uint32_t test_func1475(uint32_t value){
	value *= value;
	value += 0x4c9f;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-73;
}
uint32_t test_func1476(uint32_t value){
	value *= value;
	value += 0x484d;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-97;
}
uint32_t test_func1477(uint32_t value){
	value *= value;
	value += 0x52c8;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-16;
}
uint32_t test_func1478(uint32_t value){
	value *= value;
	value += 0x65c2;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	return value-121;
}
uint32_t test_func1479(uint32_t value){
	value *= value;
	value += 0x7046;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	return value-68;
}
uint32_t test_func1480(uint32_t value){
	value *= value;
	value += 0x5f31;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	return value-44;
}
uint32_t test_func1481(uint32_t value){
	value *= value;
	value += 0x75b4;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 2) + (value >> 7);
	return value-76;
}
uint32_t test_func1482(uint32_t value){
	value *= value;
	value += 0x75d3;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	return value-8;
}
uint32_t test_func1483(uint32_t value){
	value *= value;
	value += 0x18e9;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-7;
}
uint32_t test_func1484(uint32_t value){
	value *= value;
	value += 0x5822;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	return value-104;
}
uint32_t test_func1485(uint32_t value){
	value *= value;
	value += 0x84ff;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-117;
}
uint32_t test_func1486(uint32_t value){
	value *= value;
	value += 0x31d5;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-25;
}
uint32_t test_func1487(uint32_t value){
	value *= value;
	value += 0x6a4e;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	return value-81;
}
uint32_t test_func1488(uint32_t value){
	value *= value;
	value += 0x3be7;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	return value-103;
}
uint32_t test_func1489(uint32_t value){
	value *= value;
	value += 0x8e71;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	return value-45;
}
uint32_t test_func1490(uint32_t value){
	value *= value;
	value += 0x4c90;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 2);
	return value-92;
}
uint32_t test_func1491(uint32_t value){
	value *= value;
	value += 0x5c3e;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-31;
}
uint32_t test_func1492(uint32_t value){
	value *= value;
	value += 0x6749;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	return value-63;
}
uint32_t test_func1493(uint32_t value){
	value *= value;
	value += 0x73d1;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-88;
}
uint32_t test_func1494(uint32_t value){
	value *= value;
	value += 0x4ccc;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-75;
}
uint32_t test_func1495(uint32_t value){
	value *= value;
	value += 0x3a81;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-66;
}
uint32_t test_func1496(uint32_t value){
	value *= value;
	value += 0x8b10;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	value = (value >> 9) + (value >> 8);
	return value-72;
}
uint32_t test_func1497(uint32_t value){
	value *= value;
	value += 0x6ae9;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	value = (value >> 1) + (value >> 4);
	return value-37;
}
uint32_t test_func1498(uint32_t value){
	value *= value;
	value += 0x8d50;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	return value-42;
}
uint32_t test_func1499(uint32_t value){
	value *= value;
	value += 0x24df;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-69;
}
uint32_t test_func1500(uint32_t value){
	value *= value;
	value += 0x2c04;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-43;
}
uint32_t test_func1501(uint32_t value){
	value *= value;
	value += 0x7d7f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	return value-10;
}
uint32_t test_func1502(uint32_t value){
	value *= value;
	value += 0x3ce5;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 5);
	return value-124;
}
uint32_t test_func1503(uint32_t value){
	value *= value;
	value += 0x8f20;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	return value-12;
}
uint32_t test_func1504(uint32_t value){
	value *= value;
	value += 0x22ec;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	return value-84;
}
uint32_t test_func1505(uint32_t value){
	value *= value;
	value += 0x895c;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	return value-69;
}
uint32_t test_func1506(uint32_t value){
	value *= value;
	value += 0x5e53;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	return value-21;
}
uint32_t test_func1507(uint32_t value){
	value *= value;
	value += 0x410b;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-50;
}
uint32_t test_func1508(uint32_t value){
	value *= value;
	value += 0x1c92;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	return value-116;
}
uint32_t test_func1509(uint32_t value){
	value *= value;
	value += 0x4048;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	return value-98;
}
uint32_t test_func1510(uint32_t value){
	value *= value;
	value += 0x4862;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	return value-14;
}
uint32_t test_func1511(uint32_t value){
	value *= value;
	value += 0x566a;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	return value-38;
}
uint32_t test_func1512(uint32_t value){
	value *= value;
	value += 0x19bc;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	return value-13;
}
uint32_t test_func1513(uint32_t value){
	value *= value;
	value += 0x280a;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	return value-43;
}
uint32_t test_func1514(uint32_t value){
	value *= value;
	value += 0x25d9;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	return value-72;
}
uint32_t test_func1515(uint32_t value){
	value *= value;
	value += 0x3f03;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	return value-26;
}
uint32_t test_func1516(uint32_t value){
	value *= value;
	value += 0x6f33;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	return value-98;
}
uint32_t test_func1517(uint32_t value){
	value *= value;
	value += 0x1a6c;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-55;
}
uint32_t test_func1518(uint32_t value){
	value *= value;
	value += 0x7582;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	return value-107;
}
uint32_t test_func1519(uint32_t value){
	value *= value;
	value += 0x3e9e;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	return value-9;
}
uint32_t test_func1520(uint32_t value){
	value *= value;
	value += 0x45bf;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-127;
}
uint32_t test_func1521(uint32_t value){
	value *= value;
	value += 0x4534;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	return value-104;
}
uint32_t test_func1522(uint32_t value){
	value *= value;
	value += 0x8a23;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-103;
}
uint32_t test_func1523(uint32_t value){
	value *= value;
	value += 0x6d05;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-52;
}
uint32_t test_func1524(uint32_t value){
	value *= value;
	value += 0x1a27;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	return value-58;
}
uint32_t test_func1525(uint32_t value){
	value *= value;
	value += 0x2a2b;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	return value-97;
}
uint32_t test_func1526(uint32_t value){
	value *= value;
	value += 0x8a85;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	return value-119;
}
uint32_t test_func1527(uint32_t value){
	value *= value;
	value += 0x35ff;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	return value-39;
}
uint32_t test_func1528(uint32_t value){
	value *= value;
	value += 0x3d35;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	return value-45;
}
uint32_t test_func1529(uint32_t value){
	value *= value;
	value += 0x1f19;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-20;
}
uint32_t test_func1530(uint32_t value){
	value *= value;
	value += 0x7170;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	return value-25;
}
uint32_t test_func1531(uint32_t value){
	value *= value;
	value += 0x5953;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	return value-54;
}
uint32_t test_func1532(uint32_t value){
	value *= value;
	value += 0x53af;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	return value-65;
}
uint32_t test_func1533(uint32_t value){
	value *= value;
	value += 0x4dc6;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	return value-53;
}
uint32_t test_func1534(uint32_t value){
	value *= value;
	value += 0x8dac;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	return value-24;
}
uint32_t test_func1535(uint32_t value){
	value *= value;
	value += 0x6aca;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	return value-121;
}
uint32_t test_func1536(uint32_t value){
	value *= value;
	value += 0x565e;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	return value-33;
}
uint32_t test_func1537(uint32_t value){
	value *= value;
	value += 0x33f9;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	return value-70;
}
uint32_t test_func1538(uint32_t value){
	value *= value;
	value += 0x8200;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	return value-6;
}
uint32_t test_func1539(uint32_t value){
	value *= value;
	value += 0x522c;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	return value-87;
}
uint32_t test_func1540(uint32_t value){
	value *= value;
	value += 0x120a;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 4);
	return value-64;
}
uint32_t test_func1541(uint32_t value){
	value *= value;
	value += 0x237c;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	return value-11;
}
uint32_t test_func1542(uint32_t value){
	value *= value;
	value += 0x4535;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-55;
}
uint32_t test_func1543(uint32_t value){
	value *= value;
	value += 0x4b41;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 1);
	return value-119;
}
uint32_t test_func1544(uint32_t value){
	value *= value;
	value += 0x277b;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	return value-93;
}
uint32_t test_func1545(uint32_t value){
	value *= value;
	value += 0x4215;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 2);
	return value-20;
}
uint32_t test_func1546(uint32_t value){
	value *= value;
	value += 0x2213;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-79;
}
uint32_t test_func1547(uint32_t value){
	value *= value;
	value += 0x65d0;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	return value-79;
}
uint32_t test_func1548(uint32_t value){
	value *= value;
	value += 0x8b78;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	return value-123;
}
uint32_t test_func1549(uint32_t value){
	value *= value;
	value += 0x898d;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	return value-55;
}
uint32_t test_func1550(uint32_t value){
	value *= value;
	value += 0x3762;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	return value-56;
}
uint32_t test_func1551(uint32_t value){
	value *= value;
	value += 0x85a3;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	return value-22;
}
uint32_t test_func1552(uint32_t value){
	value *= value;
	value += 0x86cb;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	return value-106;
}
uint32_t test_func1553(uint32_t value){
	value *= value;
	value += 0x47ab;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 6);
	return value-21;
}
uint32_t test_func1554(uint32_t value){
	value *= value;
	value += 0x77ea;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-34;
}
uint32_t test_func1555(uint32_t value){
	value *= value;
	value += 0x6280;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-82;
}
uint32_t test_func1556(uint32_t value){
	value *= value;
	value += 0x363a;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-61;
}
uint32_t test_func1557(uint32_t value){
	value *= value;
	value += 0x1e39;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	return value-18;
}
uint32_t test_func1558(uint32_t value){
	value *= value;
	value += 0x2a73;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	return value-5;
}
uint32_t test_func1559(uint32_t value){
	value *= value;
	value += 0x8830;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	return value-76;
}
uint32_t test_func1560(uint32_t value){
	value *= value;
	value += 0x8a8e;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	return value-79;
}
uint32_t test_func1561(uint32_t value){
	value *= value;
	value += 0x82fd;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	return value-92;
}
uint32_t test_func1562(uint32_t value){
	value *= value;
	value += 0x69c4;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-32;
}
uint32_t test_func1563(uint32_t value){
	value *= value;
	value += 0x567b;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-25;
}
uint32_t test_func1564(uint32_t value){
	value *= value;
	value += 0x488e;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	return value-72;
}
uint32_t test_func1565(uint32_t value){
	value *= value;
	value += 0x3fc1;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	return value-110;
}
uint32_t test_func1566(uint32_t value){
	value *= value;
	value += 0x24a6;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	return value-126;
}
uint32_t test_func1567(uint32_t value){
	value *= value;
	value += 0x8128;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-18;
}
uint32_t test_func1568(uint32_t value){
	value *= value;
	value += 0x8904;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-17;
}
uint32_t test_func1569(uint32_t value){
	value *= value;
	value += 0x724b;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-6;
}
uint32_t test_func1570(uint32_t value){
	value *= value;
	value += 0x1de1;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	value = (value >> 2) + (value >> 8);
	return value-113;
}
uint32_t test_func1571(uint32_t value){
	value *= value;
	value += 0x1001;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 4);
	return value-88;
}
uint32_t test_func1572(uint32_t value){
	value *= value;
	value += 0x38b6;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	return value-99;
}
uint32_t test_func1573(uint32_t value){
	value *= value;
	value += 0x8c63;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-42;
}
uint32_t test_func1574(uint32_t value){
	value *= value;
	value += 0x6c3d;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 2);
	return value-17;
}
uint32_t test_func1575(uint32_t value){
	value *= value;
	value += 0x5ecc;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	return value-90;
}
uint32_t test_func1576(uint32_t value){
	value *= value;
	value += 0x186e;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	return value-57;
}
uint32_t test_func1577(uint32_t value){
	value *= value;
	value += 0x53d3;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-38;
}
uint32_t test_func1578(uint32_t value){
	value *= value;
	value += 0x7a82;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	return value-63;
}
uint32_t test_func1579(uint32_t value){
	value *= value;
	value += 0x1d52;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	return value-72;
}
uint32_t test_func1580(uint32_t value){
	value *= value;
	value += 0x3cf2;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-87;
}
uint32_t test_func1581(uint32_t value){
	value *= value;
	value += 0x6263;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-19;
}
uint32_t test_func1582(uint32_t value){
	value *= value;
	value += 0x8777;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-32;
}
uint32_t test_func1583(uint32_t value){
	value *= value;
	value += 0x4f5b;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	return value-29;
}
uint32_t test_func1584(uint32_t value){
	value *= value;
	value += 0x8f0a;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	return value-75;
}
uint32_t test_func1585(uint32_t value){
	value *= value;
	value += 0x25d7;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-81;
}
uint32_t test_func1586(uint32_t value){
	value *= value;
	value += 0x25e5;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	return value-43;
}
uint32_t test_func1587(uint32_t value){
	value *= value;
	value += 0x4caf;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-29;
}
uint32_t test_func1588(uint32_t value){
	value *= value;
	value += 0x4b80;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	return value-103;
}
uint32_t test_func1589(uint32_t value){
	value *= value;
	value += 0x5ffb;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-7;
}
uint32_t test_func1590(uint32_t value){
	value *= value;
	value += 0x3c94;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	return value-20;
}
uint32_t test_func1591(uint32_t value){
	value *= value;
	value += 0x4115;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	return value-82;
}
uint32_t test_func1592(uint32_t value){
	value *= value;
	value += 0x831b;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-78;
}
uint32_t test_func1593(uint32_t value){
	value *= value;
	value += 0x2696;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	return value-32;
}
uint32_t test_func1594(uint32_t value){
	value *= value;
	value += 0x864c;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	return value-93;
}
uint32_t test_func1595(uint32_t value){
	value *= value;
	value += 0x2c56;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	return value-15;
}
uint32_t test_func1596(uint32_t value){
	value *= value;
	value += 0x1aa2;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	return value-93;
}
uint32_t test_func1597(uint32_t value){
	value *= value;
	value += 0x6370;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	return value-87;
}
uint32_t test_func1598(uint32_t value){
	value *= value;
	value += 0x11d5;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	return value-80;
}
uint32_t test_func1599(uint32_t value){
	value *= value;
	value += 0x623a;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	return value-111;
}
uint32_t test_func1600(uint32_t value){
	value *= value;
	value += 0x4ade;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	return value-72;
}
uint32_t test_func1601(uint32_t value){
	value *= value;
	value += 0x5450;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	return value-41;
}
uint32_t test_func1602(uint32_t value){
	value *= value;
	value += 0x41f6;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-125;
}
uint32_t test_func1603(uint32_t value){
	value *= value;
	value += 0x8a89;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-85;
}
uint32_t test_func1604(uint32_t value){
	value *= value;
	value += 0x2097;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	return value-127;
}
uint32_t test_func1605(uint32_t value){
	value *= value;
	value += 0x8aff;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	return value-93;
}
uint32_t test_func1606(uint32_t value){
	value *= value;
	value += 0x4d79;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 2);
	return value-63;
}
uint32_t test_func1607(uint32_t value){
	value *= value;
	value += 0x210b;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 2);
	return value-106;
}
uint32_t test_func1608(uint32_t value){
	value *= value;
	value += 0x7c94;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	return value-64;
}
uint32_t test_func1609(uint32_t value){
	value *= value;
	value += 0x6d46;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	return value-1;
}
uint32_t test_func1610(uint32_t value){
	value *= value;
	value += 0x3f24;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-50;
}
uint32_t test_func1611(uint32_t value){
	value *= value;
	value += 0x7588;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	return value-36;
}
uint32_t test_func1612(uint32_t value){
	value *= value;
	value += 0x139f;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	return value-19;
}
uint32_t test_func1613(uint32_t value){
	value *= value;
	value += 0x34eb;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	return value-109;
}
uint32_t test_func1614(uint32_t value){
	value *= value;
	value += 0x75c0;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	return value-68;
}
uint32_t test_func1615(uint32_t value){
	value *= value;
	value += 0x2bc7;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 4);
	return value-59;
}
uint32_t test_func1616(uint32_t value){
	value *= value;
	value += 0x6e7e;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 8);
	return value-63;
}
uint32_t test_func1617(uint32_t value){
	value *= value;
	value += 0x6fb6;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	return value-65;
}
uint32_t test_func1618(uint32_t value){
	value *= value;
	value += 0x2414;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	return value-34;
}
uint32_t test_func1619(uint32_t value){
	value *= value;
	value += 0x3b91;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-50;
}
uint32_t test_func1620(uint32_t value){
	value *= value;
	value += 0x69fa;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 4);
	return value-91;
}
uint32_t test_func1621(uint32_t value){
	value *= value;
	value += 0x7f71;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	return value-97;
}
uint32_t test_func1622(uint32_t value){
	value *= value;
	value += 0x50ea;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	return value-70;
}
uint32_t test_func1623(uint32_t value){
	value *= value;
	value += 0x70ae;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-86;
}
uint32_t test_func1624(uint32_t value){
	value *= value;
	value += 0x36db;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	return value-71;
}
uint32_t test_func1625(uint32_t value){
	value *= value;
	value += 0x19e2;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-125;
}
uint32_t test_func1626(uint32_t value){
	value *= value;
	value += 0x5708;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	return value-113;
}
uint32_t test_func1627(uint32_t value){
	value *= value;
	value += 0x6ae6;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-56;
}
uint32_t test_func1628(uint32_t value){
	value *= value;
	value += 0x59e9;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-38;
}
uint32_t test_func1629(uint32_t value){
	value *= value;
	value += 0x48d3;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	return value-13;
}
uint32_t test_func1630(uint32_t value){
	value *= value;
	value += 0x6537;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	return value-44;
}
uint32_t test_func1631(uint32_t value){
	value *= value;
	value += 0x1e01;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	return value-53;
}
uint32_t test_func1632(uint32_t value){
	value *= value;
	value += 0x2bec;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-98;
}
uint32_t test_func1633(uint32_t value){
	value *= value;
	value += 0x6a0a;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	return value-78;
}
uint32_t test_func1634(uint32_t value){
	value *= value;
	value += 0x7e3f;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-73;
}
uint32_t test_func1635(uint32_t value){
	value *= value;
	value += 0x51c6;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-109;
}
uint32_t test_func1636(uint32_t value){
	value *= value;
	value += 0x59ab;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	return value-52;
}
uint32_t test_func1637(uint32_t value){
	value *= value;
	value += 0x2f4f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-70;
}
uint32_t test_func1638(uint32_t value){
	value *= value;
	value += 0x78e8;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 6);
	return value-95;
}
uint32_t test_func1639(uint32_t value){
	value *= value;
	value += 0x21fe;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	return value-75;
}
uint32_t test_func1640(uint32_t value){
	value *= value;
	value += 0x63ef;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-21;
}
uint32_t test_func1641(uint32_t value){
	value *= value;
	value += 0x1e6c;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	return value-71;
}
uint32_t test_func1642(uint32_t value){
	value *= value;
	value += 0x7ffa;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	return value-79;
}
uint32_t test_func1643(uint32_t value){
	value *= value;
	value += 0x7e71;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	return value-3;
}
uint32_t test_func1644(uint32_t value){
	value *= value;
	value += 0x1f80;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	return value-77;
}
uint32_t test_func1645(uint32_t value){
	value *= value;
	value += 0x1127;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-100;
}
uint32_t test_func1646(uint32_t value){
	value *= value;
	value += 0x123c;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	return value-64;
}
uint32_t test_func1647(uint32_t value){
	value *= value;
	value += 0x2ae7;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	return value-17;
}
uint32_t test_func1648(uint32_t value){
	value *= value;
	value += 0x3526;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	return value-102;
}
uint32_t test_func1649(uint32_t value){
	value *= value;
	value += 0x354a;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	return value-2;
}
uint32_t test_func1650(uint32_t value){
	value *= value;
	value += 0x8277;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 3);
	return value-41;
}
uint32_t test_func1651(uint32_t value){
	value *= value;
	value += 0x3f28;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-53;
}
uint32_t test_func1652(uint32_t value){
	value *= value;
	value += 0x21a9;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 1);
	return value-56;
}
uint32_t test_func1653(uint32_t value){
	value *= value;
	value += 0x8c9b;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 8);
	return value-65;
}
uint32_t test_func1654(uint32_t value){
	value *= value;
	value += 0x7773;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	return value-59;
}
uint32_t test_func1655(uint32_t value){
	value *= value;
	value += 0x26fb;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	return value-122;
}
uint32_t test_func1656(uint32_t value){
	value *= value;
	value += 0x35d0;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	return value-94;
}
uint32_t test_func1657(uint32_t value){
	value *= value;
	value += 0x6ce3;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-19;
}
uint32_t test_func1658(uint32_t value){
	value *= value;
	value += 0x6bf8;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	return value-123;
}
uint32_t test_func1659(uint32_t value){
	value *= value;
	value += 0x222a;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-54;
}
uint32_t test_func1660(uint32_t value){
	value *= value;
	value += 0x1664;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	return value-60;
}
uint32_t test_func1661(uint32_t value){
	value *= value;
	value += 0x7fe9;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	return value-46;
}
uint32_t test_func1662(uint32_t value){
	value *= value;
	value += 0x2ece;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	return value-51;
}
uint32_t test_func1663(uint32_t value){
	value *= value;
	value += 0x447b;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-2;
}
uint32_t test_func1664(uint32_t value){
	value *= value;
	value += 0x3c2e;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	return value-1;
}
uint32_t test_func1665(uint32_t value){
	value *= value;
	value += 0x4377;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	return value-18;
}
uint32_t test_func1666(uint32_t value){
	value *= value;
	value += 0x62bc;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	return value-113;
}
uint32_t test_func1667(uint32_t value){
	value *= value;
	value += 0x75b7;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	return value-64;
}
uint32_t test_func1668(uint32_t value){
	value *= value;
	value += 0x73f3;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 6);
	return value-32;
}
uint32_t test_func1669(uint32_t value){
	value *= value;
	value += 0x8953;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	return value-6;
}
uint32_t test_func1670(uint32_t value){
	value *= value;
	value += 0x7e8c;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	return value-18;
}
uint32_t test_func1671(uint32_t value){
	value *= value;
	value += 0x71a6;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	return value-27;
}
uint32_t test_func1672(uint32_t value){
	value *= value;
	value += 0x5e7e;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	return value-86;
}
uint32_t test_func1673(uint32_t value){
	value *= value;
	value += 0x7746;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	return value-22;
}
uint32_t test_func1674(uint32_t value){
	value *= value;
	value += 0x4d04;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	return value-49;
}
uint32_t test_func1675(uint32_t value){
	value *= value;
	value += 0x480f;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	return value-6;
}
uint32_t test_func1676(uint32_t value){
	value *= value;
	value += 0x7096;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	return value-41;
}
uint32_t test_func1677(uint32_t value){
	value *= value;
	value += 0x8718;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	return value-27;
}
uint32_t test_func1678(uint32_t value){
	value *= value;
	value += 0x6ced;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	return value-58;
}
uint32_t test_func1679(uint32_t value){
	value *= value;
	value += 0x5cbb;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-61;
}
uint32_t test_func1680(uint32_t value){
	value *= value;
	value += 0x7302;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	return value-101;
}
uint32_t test_func1681(uint32_t value){
	value *= value;
	value += 0x8691;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	return value-52;
}
uint32_t test_func1682(uint32_t value){
	value *= value;
	value += 0x510e;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	return value-92;
}
uint32_t test_func1683(uint32_t value){
	value *= value;
	value += 0x6773;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-66;
}
uint32_t test_func1684(uint32_t value){
	value *= value;
	value += 0x828b;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	return value-30;
}
uint32_t test_func1685(uint32_t value){
	value *= value;
	value += 0x1779;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 3);
	return value-71;
}
uint32_t test_func1686(uint32_t value){
	value *= value;
	value += 0x4031;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	return value-18;
}
uint32_t test_func1687(uint32_t value){
	value *= value;
	value += 0x73fd;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	return value-94;
}
uint32_t test_func1688(uint32_t value){
	value *= value;
	value += 0x8ff9;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	return value-50;
}
uint32_t test_func1689(uint32_t value){
	value *= value;
	value += 0x2f97;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	value = (value >> 1) + (value >> 3);
	return value-3;
}
uint32_t test_func1690(uint32_t value){
	value *= value;
	value += 0x551c;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	return value-29;
}
uint32_t test_func1691(uint32_t value){
	value *= value;
	value += 0x6221;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-39;
}
uint32_t test_func1692(uint32_t value){
	value *= value;
	value += 0x6014;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-69;
}
uint32_t test_func1693(uint32_t value){
	value *= value;
	value += 0x18b4;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	return value-94;
}
uint32_t test_func1694(uint32_t value){
	value *= value;
	value += 0x7e98;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	return value-6;
}
uint32_t test_func1695(uint32_t value){
	value *= value;
	value += 0x65a9;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-119;
}
uint32_t test_func1696(uint32_t value){
	value *= value;
	value += 0x8ba3;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	return value-68;
}
uint32_t test_func1697(uint32_t value){
	value *= value;
	value += 0x7098;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 5);
	return value-27;
}
uint32_t test_func1698(uint32_t value){
	value *= value;
	value += 0x7f6d;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-27;
}
uint32_t test_func1699(uint32_t value){
	value *= value;
	value += 0x865b;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 4);
	return value-109;
}
uint32_t test_func1700(uint32_t value){
	value *= value;
	value += 0x7f70;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	return value-102;
}
uint32_t test_func1701(uint32_t value){
	value *= value;
	value += 0x290b;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 8);
	return value-57;
}
uint32_t test_func1702(uint32_t value){
	value *= value;
	value += 0x6e63;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-117;
}
uint32_t test_func1703(uint32_t value){
	value *= value;
	value += 0x2001;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	return value-122;
}
uint32_t test_func1704(uint32_t value){
	value *= value;
	value += 0x7c41;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 8);
	return value-36;
}
uint32_t test_func1705(uint32_t value){
	value *= value;
	value += 0x87d5;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	return value-15;
}
uint32_t test_func1706(uint32_t value){
	value *= value;
	value += 0x3642;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 3) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	return value-119;
}
uint32_t test_func1707(uint32_t value){
	value *= value;
	value += 0x6261;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-77;
}
uint32_t test_func1708(uint32_t value){
	value *= value;
	value += 0x16df;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-69;
}
uint32_t test_func1709(uint32_t value){
	value *= value;
	value += 0x26bd;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	return value-46;
}
uint32_t test_func1710(uint32_t value){
	value *= value;
	value += 0x15d1;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	return value-75;
}
uint32_t test_func1711(uint32_t value){
	value *= value;
	value += 0x5144;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-98;
}
uint32_t test_func1712(uint32_t value){
	value *= value;
	value += 0x3812;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-85;
}
uint32_t test_func1713(uint32_t value){
	value *= value;
	value += 0x738d;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	return value-119;
}
uint32_t test_func1714(uint32_t value){
	value *= value;
	value += 0x1fd9;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-95;
}
uint32_t test_func1715(uint32_t value){
	value *= value;
	value += 0x4471;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-122;
}
uint32_t test_func1716(uint32_t value){
	value *= value;
	value += 0x1ca1;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	return value-44;
}
uint32_t test_func1717(uint32_t value){
	value *= value;
	value += 0x300b;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 6) + (value >> 2);
	return value-17;
}
uint32_t test_func1718(uint32_t value){
	value *= value;
	value += 0x3b22;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	return value-108;
}
uint32_t test_func1719(uint32_t value){
	value *= value;
	value += 0x67b2;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	return value-34;
}
uint32_t test_func1720(uint32_t value){
	value *= value;
	value += 0x5556;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-97;
}
uint32_t test_func1721(uint32_t value){
	value *= value;
	value += 0x7200;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	return value-108;
}
uint32_t test_func1722(uint32_t value){
	value *= value;
	value += 0x2274;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 8);
	return value-116;
}
uint32_t test_func1723(uint32_t value){
	value *= value;
	value += 0x3acd;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-44;
}
uint32_t test_func1724(uint32_t value){
	value *= value;
	value += 0x46f7;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	return value-93;
}
uint32_t test_func1725(uint32_t value){
	value *= value;
	value += 0x2333;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	return value-59;
}
uint32_t test_func1726(uint32_t value){
	value *= value;
	value += 0x6497;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	return value-65;
}
uint32_t test_func1727(uint32_t value){
	value *= value;
	value += 0x118b;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	return value-50;
}
uint32_t test_func1728(uint32_t value){
	value *= value;
	value += 0x2a4d;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	return value-77;
}
uint32_t test_func1729(uint32_t value){
	value *= value;
	value += 0x816e;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-3;
}
uint32_t test_func1730(uint32_t value){
	value *= value;
	value += 0x6452;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-95;
}
uint32_t test_func1731(uint32_t value){
	value *= value;
	value += 0x13b4;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-25;
}
uint32_t test_func1732(uint32_t value){
	value *= value;
	value += 0x8c20;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	return value-37;
}
uint32_t test_func1733(uint32_t value){
	value *= value;
	value += 0x1e77;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-4;
}
uint32_t test_func1734(uint32_t value){
	value *= value;
	value += 0x586f;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	return value-44;
}
uint32_t test_func1735(uint32_t value){
	value *= value;
	value += 0x3d10;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	return value-9;
}
uint32_t test_func1736(uint32_t value){
	value *= value;
	value += 0x4d38;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-31;
}
uint32_t test_func1737(uint32_t value){
	value *= value;
	value += 0x6017;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	return value-81;
}
uint32_t test_func1738(uint32_t value){
	value *= value;
	value += 0x4bb4;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	return value-72;
}
uint32_t test_func1739(uint32_t value){
	value *= value;
	value += 0x5d66;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	return value-120;
}
uint32_t test_func1740(uint32_t value){
	value *= value;
	value += 0x225c;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	return value-66;
}
uint32_t test_func1741(uint32_t value){
	value *= value;
	value += 0x8016;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-61;
}
uint32_t test_func1742(uint32_t value){
	value *= value;
	value += 0x1cea;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	return value-24;
}
uint32_t test_func1743(uint32_t value){
	value *= value;
	value += 0x1880;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	return value-30;
}
uint32_t test_func1744(uint32_t value){
	value *= value;
	value += 0x1456;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	return value-93;
}
uint32_t test_func1745(uint32_t value){
	value *= value;
	value += 0x8c3c;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	return value-107;
}
uint32_t test_func1746(uint32_t value){
	value *= value;
	value += 0x7ed9;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	return value-80;
}
uint32_t test_func1747(uint32_t value){
	value *= value;
	value += 0x6624;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-126;
}
uint32_t test_func1748(uint32_t value){
	value *= value;
	value += 0x7fec;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	return value-2;
}
uint32_t test_func1749(uint32_t value){
	value *= value;
	value += 0x6651;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-67;
}
uint32_t test_func1750(uint32_t value){
	value *= value;
	value += 0x7848;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-106;
}
uint32_t test_func1751(uint32_t value){
	value *= value;
	value += 0x121b;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-100;
}
uint32_t test_func1752(uint32_t value){
	value *= value;
	value += 0x15e7;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	return value-16;
}
uint32_t test_func1753(uint32_t value){
	value *= value;
	value += 0x441c;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 2);
	return value-109;
}
uint32_t test_func1754(uint32_t value){
	value *= value;
	value += 0x6400;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	return value-35;
}
uint32_t test_func1755(uint32_t value){
	value *= value;
	value += 0x3c2d;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-99;
}
uint32_t test_func1756(uint32_t value){
	value *= value;
	value += 0x5b0e;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	return value-40;
}
uint32_t test_func1757(uint32_t value){
	value *= value;
	value += 0x2f66;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	return value-103;
}
uint32_t test_func1758(uint32_t value){
	value *= value;
	value += 0x70ca;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	return value-8;
}
uint32_t test_func1759(uint32_t value){
	value *= value;
	value += 0x5821;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 1);
	return value-87;
}
uint32_t test_func1760(uint32_t value){
	value *= value;
	value += 0x282b;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	return value-58;
}
uint32_t test_func1761(uint32_t value){
	value *= value;
	value += 0x85f7;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	return value-108;
}
uint32_t test_func1762(uint32_t value){
	value *= value;
	value += 0x216c;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	return value-100;
}
uint32_t test_func1763(uint32_t value){
	value *= value;
	value += 0x2dc1;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-94;
}
uint32_t test_func1764(uint32_t value){
	value *= value;
	value += 0x2a04;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 2);
	return value-122;
}
uint32_t test_func1765(uint32_t value){
	value *= value;
	value += 0x7997;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	return value-3;
}
uint32_t test_func1766(uint32_t value){
	value *= value;
	value += 0x4cae;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	return value-86;
}
uint32_t test_func1767(uint32_t value){
	value *= value;
	value += 0x58d3;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	return value-105;
}
uint32_t test_func1768(uint32_t value){
	value *= value;
	value += 0x6163;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	return value-101;
}
uint32_t test_func1769(uint32_t value){
	value *= value;
	value += 0x100e;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-122;
}
uint32_t test_func1770(uint32_t value){
	value *= value;
	value += 0x1d5a;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 9) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	return value-61;
}
uint32_t test_func1771(uint32_t value){
	value *= value;
	value += 0x4920;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	return value-38;
}
uint32_t test_func1772(uint32_t value){
	value *= value;
	value += 0x230e;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	return value-65;
}
uint32_t test_func1773(uint32_t value){
	value *= value;
	value += 0x2322;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	return value-107;
}
uint32_t test_func1774(uint32_t value){
	value *= value;
	value += 0x1236;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	return value-63;
}
uint32_t test_func1775(uint32_t value){
	value *= value;
	value += 0x4270;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-18;
}
uint32_t test_func1776(uint32_t value){
	value *= value;
	value += 0x17cd;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	return value-23;
}
uint32_t test_func1777(uint32_t value){
	value *= value;
	value += 0x60a0;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	return value-51;
}
uint32_t test_func1778(uint32_t value){
	value *= value;
	value += 0x7e0c;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	return value-81;
}
uint32_t test_func1779(uint32_t value){
	value *= value;
	value += 0x5c8b;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-109;
}
uint32_t test_func1780(uint32_t value){
	value *= value;
	value += 0x3c6a;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 8) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-64;
}
uint32_t test_func1781(uint32_t value){
	value *= value;
	value += 0x4a4b;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 5);
	return value-119;
}
uint32_t test_func1782(uint32_t value){
	value *= value;
	value += 0x87a2;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-40;
}
uint32_t test_func1783(uint32_t value){
	value *= value;
	value += 0x8338;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	return value-72;
}
uint32_t test_func1784(uint32_t value){
	value *= value;
	value += 0x61ab;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	return value-88;
}
uint32_t test_func1785(uint32_t value){
	value *= value;
	value += 0x35ec;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	return value-43;
}
uint32_t test_func1786(uint32_t value){
	value *= value;
	value += 0x29c0;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-72;
}
uint32_t test_func1787(uint32_t value){
	value *= value;
	value += 0x7641;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	return value-110;
}
uint32_t test_func1788(uint32_t value){
	value *= value;
	value += 0x2c5a;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	return value-66;
}
uint32_t test_func1789(uint32_t value){
	value *= value;
	value += 0x4d4c;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	return value-126;
}
uint32_t test_func1790(uint32_t value){
	value *= value;
	value += 0x3330;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	return value-120;
}
uint32_t test_func1791(uint32_t value){
	value *= value;
	value += 0x496c;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	return value-1;
}
uint32_t test_func1792(uint32_t value){
	value *= value;
	value += 0x153d;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-42;
}
uint32_t test_func1793(uint32_t value){
	value *= value;
	value += 0x8e35;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	return value-119;
}
uint32_t test_func1794(uint32_t value){
	value *= value;
	value += 0x46b9;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	return value-72;
}
uint32_t test_func1795(uint32_t value){
	value *= value;
	value += 0x6482;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-97;
}
uint32_t test_func1796(uint32_t value){
	value *= value;
	value += 0x691d;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	return value-10;
}
uint32_t test_func1797(uint32_t value){
	value *= value;
	value += 0x4a6b;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-87;
}
uint32_t test_func1798(uint32_t value){
	value *= value;
	value += 0x5b22;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	return value-20;
}
uint32_t test_func1799(uint32_t value){
	value *= value;
	value += 0x834a;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-54;
}
uint32_t test_func1800(uint32_t value){
	value *= value;
	value += 0x48c1;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	return value-26;
}
uint32_t test_func1801(uint32_t value){
	value *= value;
	value += 0x27b8;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 1) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	return value-48;
}
uint32_t test_func1802(uint32_t value){
	value *= value;
	value += 0x3b34;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	value = (value >> 5) + (value >> 1);
	return value-120;
}
uint32_t test_func1803(uint32_t value){
	value *= value;
	value += 0x358e;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	return value-118;
}
uint32_t test_func1804(uint32_t value){
	value *= value;
	value += 0x28f3;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	return value-95;
}
uint32_t test_func1805(uint32_t value){
	value *= value;
	value += 0x1fe4;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	return value-86;
}
uint32_t test_func1806(uint32_t value){
	value *= value;
	value += 0x85b7;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-98;
}
uint32_t test_func1807(uint32_t value){
	value *= value;
	value += 0x5f14;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-92;
}
uint32_t test_func1808(uint32_t value){
	value *= value;
	value += 0x5279;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	return value-38;
}
uint32_t test_func1809(uint32_t value){
	value *= value;
	value += 0x80b7;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	return value-107;
}
uint32_t test_func1810(uint32_t value){
	value *= value;
	value += 0x2d73;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	value = (value >> 4) + (value >> 8);
	return value-127;
}
uint32_t test_func1811(uint32_t value){
	value *= value;
	value += 0x37a5;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-105;
}
uint32_t test_func1812(uint32_t value){
	value *= value;
	value += 0x621c;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-9;
}
uint32_t test_func1813(uint32_t value){
	value *= value;
	value += 0x6bf9;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 8);
	return value-85;
}
uint32_t test_func1814(uint32_t value){
	value *= value;
	value += 0x792f;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	return value-74;
}
uint32_t test_func1815(uint32_t value){
	value *= value;
	value += 0x4b09;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	return value-104;
}
uint32_t test_func1816(uint32_t value){
	value *= value;
	value += 0x48a4;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-93;
}
uint32_t test_func1817(uint32_t value){
	value *= value;
	value += 0x5771;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	return value-64;
}
uint32_t test_func1818(uint32_t value){
	value *= value;
	value += 0x83b5;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	return value-4;
}
uint32_t test_func1819(uint32_t value){
	value *= value;
	value += 0x7908;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-111;
}
uint32_t test_func1820(uint32_t value){
	value *= value;
	value += 0x4ad9;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	return value-75;
}
uint32_t test_func1821(uint32_t value){
	value *= value;
	value += 0x8ce8;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	return value-38;
}
uint32_t test_func1822(uint32_t value){
	value *= value;
	value += 0x3bcb;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-51;
}
uint32_t test_func1823(uint32_t value){
	value *= value;
	value += 0x756a;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	value = (value >> 9) + (value >> 8);
	return value-84;
}
uint32_t test_func1824(uint32_t value){
	value *= value;
	value += 0x8183;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	return value-66;
}
uint32_t test_func1825(uint32_t value){
	value *= value;
	value += 0x2a26;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	return value-69;
}
uint32_t test_func1826(uint32_t value){
	value *= value;
	value += 0x643a;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	return value-41;
}
uint32_t test_func1827(uint32_t value){
	value *= value;
	value += 0x47f6;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-62;
}
uint32_t test_func1828(uint32_t value){
	value *= value;
	value += 0x5969;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-111;
}
uint32_t test_func1829(uint32_t value){
	value *= value;
	value += 0x20f3;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	return value-35;
}
uint32_t test_func1830(uint32_t value){
	value *= value;
	value += 0x13c9;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 1);
	return value-3;
}
uint32_t test_func1831(uint32_t value){
	value *= value;
	value += 0x4c75;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	return value-21;
}
uint32_t test_func1832(uint32_t value){
	value *= value;
	value += 0x1354;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	return value-89;
}
uint32_t test_func1833(uint32_t value){
	value *= value;
	value += 0x3717;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	value = (value >> 9) + (value >> 8);
	return value-15;
}
uint32_t test_func1834(uint32_t value){
	value *= value;
	value += 0x3542;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-28;
}
uint32_t test_func1835(uint32_t value){
	value *= value;
	value += 0x32b0;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	return value-13;
}
uint32_t test_func1836(uint32_t value){
	value *= value;
	value += 0x440c;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	return value-62;
}
uint32_t test_func1837(uint32_t value){
	value *= value;
	value += 0x8659;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	return value-33;
}
uint32_t test_func1838(uint32_t value){
	value *= value;
	value += 0x876b;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	return value-31;
}
uint32_t test_func1839(uint32_t value){
	value *= value;
	value += 0x7e6c;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	return value-31;
}
uint32_t test_func1840(uint32_t value){
	value *= value;
	value += 0x5459;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-43;
}
uint32_t test_func1841(uint32_t value){
	value *= value;
	value += 0x7c82;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-54;
}
uint32_t test_func1842(uint32_t value){
	value *= value;
	value += 0x1d0e;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	return value-125;
}
uint32_t test_func1843(uint32_t value){
	value *= value;
	value += 0x8774;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-16;
}
uint32_t test_func1844(uint32_t value){
	value *= value;
	value += 0x8103;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	return value-120;
}
uint32_t test_func1845(uint32_t value){
	value *= value;
	value += 0x5b5a;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-117;
}
uint32_t test_func1846(uint32_t value){
	value *= value;
	value += 0x5cf1;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	return value-110;
}
uint32_t test_func1847(uint32_t value){
	value *= value;
	value += 0x798f;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	return value-107;
}
uint32_t test_func1848(uint32_t value){
	value *= value;
	value += 0x5ad1;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	return value-63;
}
uint32_t test_func1849(uint32_t value){
	value *= value;
	value += 0x38a9;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-80;
}
uint32_t test_func1850(uint32_t value){
	value *= value;
	value += 0x81dd;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-117;
}
uint32_t test_func1851(uint32_t value){
	value *= value;
	value += 0x5484;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-2;
}
uint32_t test_func1852(uint32_t value){
	value *= value;
	value += 0x468c;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	return value-102;
}
uint32_t test_func1853(uint32_t value){
	value *= value;
	value += 0x7e37;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	return value-120;
}
uint32_t test_func1854(uint32_t value){
	value *= value;
	value += 0x1a99;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	return value-88;
}
uint32_t test_func1855(uint32_t value){
	value *= value;
	value += 0x6c1c;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	return value-111;
}
uint32_t test_func1856(uint32_t value){
	value *= value;
	value += 0x7cfc;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	return value-28;
}
uint32_t test_func1857(uint32_t value){
	value *= value;
	value += 0x69cc;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	return value-114;
}
uint32_t test_func1858(uint32_t value){
	value *= value;
	value += 0x89ef;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	return value-42;
}
uint32_t test_func1859(uint32_t value){
	value *= value;
	value += 0x681f;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-22;
}
uint32_t test_func1860(uint32_t value){
	value *= value;
	value += 0x8ae9;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-80;
}
uint32_t test_func1861(uint32_t value){
	value *= value;
	value += 0x8d2f;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	return value-3;
}
uint32_t test_func1862(uint32_t value){
	value *= value;
	value += 0x86a5;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 1);
	return value-68;
}
uint32_t test_func1863(uint32_t value){
	value *= value;
	value += 0x4455;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	return value-33;
}
uint32_t test_func1864(uint32_t value){
	value *= value;
	value += 0x511b;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	return value-68;
}
uint32_t test_func1865(uint32_t value){
	value *= value;
	value += 0x4e29;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	return value-56;
}
uint32_t test_func1866(uint32_t value){
	value *= value;
	value += 0x1b84;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 1);
	return value-69;
}
uint32_t test_func1867(uint32_t value){
	value *= value;
	value += 0x5085;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	return value-4;
}
uint32_t test_func1868(uint32_t value){
	value *= value;
	value += 0x8459;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-124;
}
uint32_t test_func1869(uint32_t value){
	value *= value;
	value += 0x6682;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	return value-102;
}
uint32_t test_func1870(uint32_t value){
	value *= value;
	value += 0x2754;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	value = (value >> 4) + (value >> 2);
	return value-22;
}
uint32_t test_func1871(uint32_t value){
	value *= value;
	value += 0x3079;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-121;
}
uint32_t test_func1872(uint32_t value){
	value *= value;
	value += 0x2d6d;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	return value-67;
}
uint32_t test_func1873(uint32_t value){
	value *= value;
	value += 0x6402;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	return value-48;
}
uint32_t test_func1874(uint32_t value){
	value *= value;
	value += 0x5cdd;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	return value-103;
}
uint32_t test_func1875(uint32_t value){
	value *= value;
	value += 0x5bf7;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-4;
}
uint32_t test_func1876(uint32_t value){
	value *= value;
	value += 0x291d;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	return value-49;
}
uint32_t test_func1877(uint32_t value){
	value *= value;
	value += 0x2870;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	return value-123;
}
uint32_t test_func1878(uint32_t value){
	value *= value;
	value += 0x42e6;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 4);
	return value-52;
}
uint32_t test_func1879(uint32_t value){
	value *= value;
	value += 0x1ec8;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-108;
}
uint32_t test_func1880(uint32_t value){
	value *= value;
	value += 0x2832;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	return value-29;
}
uint32_t test_func1881(uint32_t value){
	value *= value;
	value += 0x6996;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-120;
}
uint32_t test_func1882(uint32_t value){
	value *= value;
	value += 0x3439;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	return value-60;
}
uint32_t test_func1883(uint32_t value){
	value *= value;
	value += 0x18b4;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-72;
}
uint32_t test_func1884(uint32_t value){
	value *= value;
	value += 0x2f74;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	return value-51;
}
uint32_t test_func1885(uint32_t value){
	value *= value;
	value += 0x313a;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	return value-27;
}
uint32_t test_func1886(uint32_t value){
	value *= value;
	value += 0x5f9c;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	return value-8;
}
uint32_t test_func1887(uint32_t value){
	value *= value;
	value += 0x3d82;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	return value-112;
}
uint32_t test_func1888(uint32_t value){
	value *= value;
	value += 0x17aa;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	return value-89;
}
uint32_t test_func1889(uint32_t value){
	value *= value;
	value += 0x5d25;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	return value-35;
}
uint32_t test_func1890(uint32_t value){
	value *= value;
	value += 0x47d8;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	return value-105;
}
uint32_t test_func1891(uint32_t value){
	value *= value;
	value += 0x54fc;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-11;
}
uint32_t test_func1892(uint32_t value){
	value *= value;
	value += 0x8d9e;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-73;
}
uint32_t test_func1893(uint32_t value){
	value *= value;
	value += 0x1f1e;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-24;
}
uint32_t test_func1894(uint32_t value){
	value *= value;
	value += 0x43b5;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-120;
}
uint32_t test_func1895(uint32_t value){
	value *= value;
	value += 0x7ae8;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-126;
}
uint32_t test_func1896(uint32_t value){
	value *= value;
	value += 0x1216;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	return value-126;
}
uint32_t test_func1897(uint32_t value){
	value *= value;
	value += 0x7cf0;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	return value-73;
}
uint32_t test_func1898(uint32_t value){
	value *= value;
	value += 0x7dfa;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	return value-19;
}
uint32_t test_func1899(uint32_t value){
	value *= value;
	value += 0x1f0f;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	return value-127;
}
uint32_t test_func1900(uint32_t value){
	value *= value;
	value += 0x79db;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	return value-60;
}
uint32_t test_func1901(uint32_t value){
	value *= value;
	value += 0x505f;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	return value-75;
}
uint32_t test_func1902(uint32_t value){
	value *= value;
	value += 0x7571;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-103;
}
uint32_t test_func1903(uint32_t value){
	value *= value;
	value += 0x8539;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-10;
}
uint32_t test_func1904(uint32_t value){
	value *= value;
	value += 0x6db5;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	return value-18;
}
uint32_t test_func1905(uint32_t value){
	value *= value;
	value += 0x4735;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	return value-126;
}
uint32_t test_func1906(uint32_t value){
	value *= value;
	value += 0x7ce0;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	return value-98;
}
uint32_t test_func1907(uint32_t value){
	value *= value;
	value += 0x452d;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-95;
}
uint32_t test_func1908(uint32_t value){
	value *= value;
	value += 0x6a6b;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	return value-81;
}
uint32_t test_func1909(uint32_t value){
	value *= value;
	value += 0x633a;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 2);
	return value-9;
}
uint32_t test_func1910(uint32_t value){
	value *= value;
	value += 0x3b10;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-62;
}
uint32_t test_func1911(uint32_t value){
	value *= value;
	value += 0x4ab5;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	return value-12;
}
uint32_t test_func1912(uint32_t value){
	value *= value;
	value += 0x40c7;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-26;
}
uint32_t test_func1913(uint32_t value){
	value *= value;
	value += 0x7a36;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	return value-90;
}
uint32_t test_func1914(uint32_t value){
	value *= value;
	value += 0x2ac9;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	return value-124;
}
uint32_t test_func1915(uint32_t value){
	value *= value;
	value += 0x5597;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-97;
}
uint32_t test_func1916(uint32_t value){
	value *= value;
	value += 0x158f;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	return value-78;
}
uint32_t test_func1917(uint32_t value){
	value *= value;
	value += 0x35f1;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 3);
	return value-42;
}
uint32_t test_func1918(uint32_t value){
	value *= value;
	value += 0x1ad2;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-99;
}
uint32_t test_func1919(uint32_t value){
	value *= value;
	value += 0x799c;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	return value-122;
}
uint32_t test_func1920(uint32_t value){
	value *= value;
	value += 0x618c;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 8);
	return value-29;
}
uint32_t test_func1921(uint32_t value){
	value *= value;
	value += 0x1432;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-117;
}
uint32_t test_func1922(uint32_t value){
	value *= value;
	value += 0x2df5;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	return value-8;
}
uint32_t test_func1923(uint32_t value){
	value *= value;
	value += 0x1e8c;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-58;
}
uint32_t test_func1924(uint32_t value){
	value *= value;
	value += 0x7186;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-123;
}
uint32_t test_func1925(uint32_t value){
	value *= value;
	value += 0x66c3;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	return value-4;
}
uint32_t test_func1926(uint32_t value){
	value *= value;
	value += 0x5af8;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	return value-61;
}
uint32_t test_func1927(uint32_t value){
	value *= value;
	value += 0x802f;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	return value-75;
}
uint32_t test_func1928(uint32_t value){
	value *= value;
	value += 0x6645;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 4);
	return value-36;
}
uint32_t test_func1929(uint32_t value){
	value *= value;
	value += 0x536a;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	return value-99;
}
uint32_t test_func1930(uint32_t value){
	value *= value;
	value += 0x6ca4;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	return value-42;
}
uint32_t test_func1931(uint32_t value){
	value *= value;
	value += 0x2e4d;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	return value-32;
}
uint32_t test_func1932(uint32_t value){
	value *= value;
	value += 0x3490;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-30;
}
uint32_t test_func1933(uint32_t value){
	value *= value;
	value += 0x53f0;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	return value-108;
}
uint32_t test_func1934(uint32_t value){
	value *= value;
	value += 0x81c1;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	return value-51;
}
uint32_t test_func1935(uint32_t value){
	value *= value;
	value += 0x8cad;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-115;
}
uint32_t test_func1936(uint32_t value){
	value *= value;
	value += 0x2530;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-50;
}
uint32_t test_func1937(uint32_t value){
	value *= value;
	value += 0x361d;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	return value-61;
}
uint32_t test_func1938(uint32_t value){
	value *= value;
	value += 0x8d17;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	return value-11;
}
uint32_t test_func1939(uint32_t value){
	value *= value;
	value += 0x5318;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-74;
}
uint32_t test_func1940(uint32_t value){
	value *= value;
	value += 0x54ee;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	return value-121;
}
uint32_t test_func1941(uint32_t value){
	value *= value;
	value += 0x1bb8;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	return value-58;
}
uint32_t test_func1942(uint32_t value){
	value *= value;
	value += 0x556d;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-43;
}
uint32_t test_func1943(uint32_t value){
	value *= value;
	value += 0x8d56;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	value = (value >> 4) + (value >> 8);
	return value-109;
}
uint32_t test_func1944(uint32_t value){
	value *= value;
	value += 0x3490;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	return value-81;
}
uint32_t test_func1945(uint32_t value){
	value *= value;
	value += 0x7a8b;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	return value-23;
}
uint32_t test_func1946(uint32_t value){
	value *= value;
	value += 0x758d;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	return value-81;
}
uint32_t test_func1947(uint32_t value){
	value *= value;
	value += 0x1b2f;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-110;
}
uint32_t test_func1948(uint32_t value){
	value *= value;
	value += 0x88de;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	return value-91;
}
uint32_t test_func1949(uint32_t value){
	value *= value;
	value += 0x1c5c;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-70;
}
uint32_t test_func1950(uint32_t value){
	value *= value;
	value += 0x5c3d;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	return value-9;
}
uint32_t test_func1951(uint32_t value){
	value *= value;
	value += 0x306b;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-44;
}
uint32_t test_func1952(uint32_t value){
	value *= value;
	value += 0x6aa2;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	return value-6;
}
uint32_t test_func1953(uint32_t value){
	value *= value;
	value += 0x1ef4;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	return value-10;
}
uint32_t test_func1954(uint32_t value){
	value *= value;
	value += 0x4c46;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 1);
	return value-36;
}
uint32_t test_func1955(uint32_t value){
	value *= value;
	value += 0x54d1;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-68;
}
uint32_t test_func1956(uint32_t value){
	value *= value;
	value += 0x46a2;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-5;
}
uint32_t test_func1957(uint32_t value){
	value *= value;
	value += 0x741b;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	return value-99;
}
uint32_t test_func1958(uint32_t value){
	value *= value;
	value += 0x5c70;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-55;
}
uint32_t test_func1959(uint32_t value){
	value *= value;
	value += 0x642a;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 6);
	return value-39;
}
uint32_t test_func1960(uint32_t value){
	value *= value;
	value += 0x5da7;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	return value-85;
}
uint32_t test_func1961(uint32_t value){
	value *= value;
	value += 0x6198;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-40;
}
uint32_t test_func1962(uint32_t value){
	value *= value;
	value += 0x7782;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	return value-38;
}
uint32_t test_func1963(uint32_t value){
	value *= value;
	value += 0x8e3e;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-3;
}
uint32_t test_func1964(uint32_t value){
	value *= value;
	value += 0x4479;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	return value-60;
}
uint32_t test_func1965(uint32_t value){
	value *= value;
	value += 0x8135;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	return value-108;
}
uint32_t test_func1966(uint32_t value){
	value *= value;
	value += 0x5c46;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	return value-27;
}
uint32_t test_func1967(uint32_t value){
	value *= value;
	value += 0x56d5;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	return value-84;
}
uint32_t test_func1968(uint32_t value){
	value *= value;
	value += 0x63e0;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	return value-72;
}
uint32_t test_func1969(uint32_t value){
	value *= value;
	value += 0x40b8;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	return value-13;
}
uint32_t test_func1970(uint32_t value){
	value *= value;
	value += 0x1d82;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	return value-3;
}
uint32_t test_func1971(uint32_t value){
	value *= value;
	value += 0x15b7;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-94;
}
uint32_t test_func1972(uint32_t value){
	value *= value;
	value += 0x78a4;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	return value-75;
}
uint32_t test_func1973(uint32_t value){
	value *= value;
	value += 0x61ea;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 5);
	return value-51;
}
uint32_t test_func1974(uint32_t value){
	value *= value;
	value += 0x21ff;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 2);
	return value-26;
}
uint32_t test_func1975(uint32_t value){
	value *= value;
	value += 0x76ab;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 3);
	value = (value >> 2) + (value >> 8);
	return value-45;
}
uint32_t test_func1976(uint32_t value){
	value *= value;
	value += 0x138c;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-101;
}
uint32_t test_func1977(uint32_t value){
	value *= value;
	value += 0x7a93;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	return value-75;
}
uint32_t test_func1978(uint32_t value){
	value *= value;
	value += 0x2485;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 3);
	return value-92;
}
uint32_t test_func1979(uint32_t value){
	value *= value;
	value += 0x797b;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-16;
}
uint32_t test_func1980(uint32_t value){
	value *= value;
	value += 0x1962;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	return value-120;
}
uint32_t test_func1981(uint32_t value){
	value *= value;
	value += 0x747b;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	return value-17;
}
uint32_t test_func1982(uint32_t value){
	value *= value;
	value += 0x33dc;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	return value-26;
}
uint32_t test_func1983(uint32_t value){
	value *= value;
	value += 0x71ed;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	return value-36;
}
uint32_t test_func1984(uint32_t value){
	value *= value;
	value += 0x42ec;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-49;
}
uint32_t test_func1985(uint32_t value){
	value *= value;
	value += 0x8d69;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-124;
}
uint32_t test_func1986(uint32_t value){
	value *= value;
	value += 0x32cb;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	return value-94;
}
uint32_t test_func1987(uint32_t value){
	value *= value;
	value += 0x87ca;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-76;
}
uint32_t test_func1988(uint32_t value){
	value *= value;
	value += 0x1cf3;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-8;
}
uint32_t test_func1989(uint32_t value){
	value *= value;
	value += 0x5727;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-90;
}
uint32_t test_func1990(uint32_t value){
	value *= value;
	value += 0x581b;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	return value-2;
}
uint32_t test_func1991(uint32_t value){
	value *= value;
	value += 0x36d9;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	return value-49;
}
uint32_t test_func1992(uint32_t value){
	value *= value;
	value += 0x883e;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	return value-52;
}
uint32_t test_func1993(uint32_t value){
	value *= value;
	value += 0x377b;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	return value-54;
}
uint32_t test_func1994(uint32_t value){
	value *= value;
	value += 0x2e94;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 3);
	return value-42;
}
uint32_t test_func1995(uint32_t value){
	value *= value;
	value += 0x4ee4;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	return value-73;
}
uint32_t test_func1996(uint32_t value){
	value *= value;
	value += 0x3997;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-62;
}
uint32_t test_func1997(uint32_t value){
	value *= value;
	value += 0x682e;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-104;
}
uint32_t test_func1998(uint32_t value){
	value *= value;
	value += 0x14fe;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-60;
}
uint32_t test_func1999(uint32_t value){
	value *= value;
	value += 0x73b1;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	return value-76;
}
uint32_t test_func2000(uint32_t value){
	value *= value;
	value += 0x39c4;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-116;
}
uint32_t test_func2001(uint32_t value){
	value *= value;
	value += 0x7708;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	return value-13;
}
uint32_t test_func2002(uint32_t value){
	value *= value;
	value += 0x3e21;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-103;
}
uint32_t test_func2003(uint32_t value){
	value *= value;
	value += 0x1d0a;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-63;
}
uint32_t test_func2004(uint32_t value){
	value *= value;
	value += 0x658e;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	return value-102;
}
uint32_t test_func2005(uint32_t value){
	value *= value;
	value += 0x45d0;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	value = (value >> 9) + (value >> 8);
	return value-15;
}
uint32_t test_func2006(uint32_t value){
	value *= value;
	value += 0x30c5;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	return value-41;
}
uint32_t test_func2007(uint32_t value){
	value *= value;
	value += 0x16b5;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-106;
}
uint32_t test_func2008(uint32_t value){
	value *= value;
	value += 0x6dbd;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-118;
}
uint32_t test_func2009(uint32_t value){
	value *= value;
	value += 0x8a50;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	return value-27;
}
uint32_t test_func2010(uint32_t value){
	value *= value;
	value += 0x47b1;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-63;
}
uint32_t test_func2011(uint32_t value){
	value *= value;
	value += 0x807a;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-100;
}
uint32_t test_func2012(uint32_t value){
	value *= value;
	value += 0x5719;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	return value-69;
}
uint32_t test_func2013(uint32_t value){
	value *= value;
	value += 0x4e4f;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	return value-39;
}
uint32_t test_func2014(uint32_t value){
	value *= value;
	value += 0x31ae;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-52;
}
uint32_t test_func2015(uint32_t value){
	value *= value;
	value += 0x4e23;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	return value-3;
}
uint32_t test_func2016(uint32_t value){
	value *= value;
	value += 0x7a69;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	return value-66;
}
uint32_t test_func2017(uint32_t value){
	value *= value;
	value += 0x6f93;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	return value-115;
}
uint32_t test_func2018(uint32_t value){
	value *= value;
	value += 0x7184;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 8);
	return value-87;
}
uint32_t test_func2019(uint32_t value){
	value *= value;
	value += 0x4776;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-110;
}
uint32_t test_func2020(uint32_t value){
	value *= value;
	value += 0x8477;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	return value-34;
}
uint32_t test_func2021(uint32_t value){
	value *= value;
	value += 0x1fe7;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	return value-6;
}
uint32_t test_func2022(uint32_t value){
	value *= value;
	value += 0x5dfb;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-64;
}
uint32_t test_func2023(uint32_t value){
	value *= value;
	value += 0x883d;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-14;
}
uint32_t test_func2024(uint32_t value){
	value *= value;
	value += 0x7609;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	return value-94;
}
uint32_t test_func2025(uint32_t value){
	value *= value;
	value += 0x6511;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-45;
}
uint32_t test_func2026(uint32_t value){
	value *= value;
	value += 0x21da;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	return value-84;
}
uint32_t test_func2027(uint32_t value){
	value *= value;
	value += 0x803e;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	return value-21;
}
uint32_t test_func2028(uint32_t value){
	value *= value;
	value += 0x23e8;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	return value-64;
}
uint32_t test_func2029(uint32_t value){
	value *= value;
	value += 0x18db;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-2;
}
uint32_t test_func2030(uint32_t value){
	value *= value;
	value += 0x3beb;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	return value-54;
}
uint32_t test_func2031(uint32_t value){
	value *= value;
	value += 0x7342;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	return value-124;
}
uint32_t test_func2032(uint32_t value){
	value *= value;
	value += 0x36dc;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-82;
}
uint32_t test_func2033(uint32_t value){
	value *= value;
	value += 0x690b;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	return value-96;
}
uint32_t test_func2034(uint32_t value){
	value *= value;
	value += 0x7ef4;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-93;
}
uint32_t test_func2035(uint32_t value){
	value *= value;
	value += 0x7910;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-11;
}
uint32_t test_func2036(uint32_t value){
	value *= value;
	value += 0x2bad;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 1);
	return value-106;
}
uint32_t test_func2037(uint32_t value){
	value *= value;
	value += 0x576a;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	return value-114;
}
uint32_t test_func2038(uint32_t value){
	value *= value;
	value += 0x11be;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	return value-125;
}
uint32_t test_func2039(uint32_t value){
	value *= value;
	value += 0x7d72;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 5);
	return value-73;
}
uint32_t test_func2040(uint32_t value){
	value *= value;
	value += 0x5322;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-36;
}
uint32_t test_func2041(uint32_t value){
	value *= value;
	value += 0x39c0;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	value = (value >> 6) + (value >> 2);
	return value-35;
}
uint32_t test_func2042(uint32_t value){
	value *= value;
	value += 0x6f11;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	return value-26;
}
uint32_t test_func2043(uint32_t value){
	value *= value;
	value += 0x402e;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	return value-11;
}
uint32_t test_func2044(uint32_t value){
	value *= value;
	value += 0x5204;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	return value-99;
}
uint32_t test_func2045(uint32_t value){
	value *= value;
	value += 0x39d5;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	return value-44;
}
uint32_t test_func2046(uint32_t value){
	value *= value;
	value += 0x65b5;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	return value-120;
}
uint32_t test_func2047(uint32_t value){
	value *= value;
	value += 0x550d;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-108;
}
uint32_t test_func2048(uint32_t value){
	value *= value;
	value += 0x211b;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	return value-87;
}
uint32_t test_func2049(uint32_t value){
	value *= value;
	value += 0x5570;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	value = (value >> 1) + (value >> 4);
	return value-12;
}
uint32_t test_func2050(uint32_t value){
	value *= value;
	value += 0x1871;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 5);
	return value-46;
}
uint32_t test_func2051(uint32_t value){
	value *= value;
	value += 0x23d7;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-76;
}
uint32_t test_func2052(uint32_t value){
	value *= value;
	value += 0x8d2f;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	return value-116;
}
uint32_t test_func2053(uint32_t value){
	value *= value;
	value += 0x5e5b;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 2);
	return value-7;
}
uint32_t test_func2054(uint32_t value){
	value *= value;
	value += 0x7e0e;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-19;
}
uint32_t test_func2055(uint32_t value){
	value *= value;
	value += 0x6854;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 1);
	return value-86;
}
uint32_t test_func2056(uint32_t value){
	value *= value;
	value += 0x3708;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-118;
}
uint32_t test_func2057(uint32_t value){
	value *= value;
	value += 0x7a5c;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-48;
}
uint32_t test_func2058(uint32_t value){
	value *= value;
	value += 0x6155;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-67;
}
uint32_t test_func2059(uint32_t value){
	value *= value;
	value += 0x324b;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	return value-2;
}
uint32_t test_func2060(uint32_t value){
	value *= value;
	value += 0x136d;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 7);
	return value-99;
}
uint32_t test_func2061(uint32_t value){
	value *= value;
	value += 0x233c;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-89;
}
uint32_t test_func2062(uint32_t value){
	value *= value;
	value += 0x610b;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	return value-46;
}
uint32_t test_func2063(uint32_t value){
	value *= value;
	value += 0x6586;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	return value-4;
}
uint32_t test_func2064(uint32_t value){
	value *= value;
	value += 0x6b28;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	return value-7;
}
uint32_t test_func2065(uint32_t value){
	value *= value;
	value += 0x26c2;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	return value-38;
}
uint32_t test_func2066(uint32_t value){
	value *= value;
	value += 0x6ffb;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 4);
	return value-126;
}
uint32_t test_func2067(uint32_t value){
	value *= value;
	value += 0x39cb;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-98;
}
uint32_t test_func2068(uint32_t value){
	value *= value;
	value += 0x5aff;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	return value-118;
}
uint32_t test_func2069(uint32_t value){
	value *= value;
	value += 0x26b8;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	return value-121;
}
uint32_t test_func2070(uint32_t value){
	value *= value;
	value += 0x54ec;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	return value-51;
}
uint32_t test_func2071(uint32_t value){
	value *= value;
	value += 0x3ae3;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	return value-105;
}
uint32_t test_func2072(uint32_t value){
	value *= value;
	value += 0x53bb;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-15;
}
uint32_t test_func2073(uint32_t value){
	value *= value;
	value += 0x18e4;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 8);
	return value-6;
}
uint32_t test_func2074(uint32_t value){
	value *= value;
	value += 0x2aa5;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-9;
}
uint32_t test_func2075(uint32_t value){
	value *= value;
	value += 0x4896;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-38;
}
uint32_t test_func2076(uint32_t value){
	value *= value;
	value += 0x1a24;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 5) + (value >> 8);
	value = (value >> 3) + (value >> 5);
	return value-114;
}
uint32_t test_func2077(uint32_t value){
	value *= value;
	value += 0x4710;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	return value-63;
}
uint32_t test_func2078(uint32_t value){
	value *= value;
	value += 0x5fef;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	return value-9;
}
uint32_t test_func2079(uint32_t value){
	value *= value;
	value += 0x16ab;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-122;
}
uint32_t test_func2080(uint32_t value){
	value *= value;
	value += 0x4701;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	return value-19;
}
uint32_t test_func2081(uint32_t value){
	value *= value;
	value += 0x4f02;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-100;
}
uint32_t test_func2082(uint32_t value){
	value *= value;
	value += 0x3792;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-4;
}
uint32_t test_func2083(uint32_t value){
	value *= value;
	value += 0x2cec;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-5;
}
uint32_t test_func2084(uint32_t value){
	value *= value;
	value += 0x471c;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	return value-32;
}
uint32_t test_func2085(uint32_t value){
	value *= value;
	value += 0x2283;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	return value-126;
}
uint32_t test_func2086(uint32_t value){
	value *= value;
	value += 0x4856;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-21;
}
uint32_t test_func2087(uint32_t value){
	value *= value;
	value += 0x671f;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	return value-49;
}
uint32_t test_func2088(uint32_t value){
	value *= value;
	value += 0x5b3b;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	return value-26;
}
uint32_t test_func2089(uint32_t value){
	value *= value;
	value += 0x875a;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	return value-90;
}
uint32_t test_func2090(uint32_t value){
	value *= value;
	value += 0x7d03;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	return value-26;
}
uint32_t test_func2091(uint32_t value){
	value *= value;
	value += 0x750d;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	return value-51;
}
uint32_t test_func2092(uint32_t value){
	value *= value;
	value += 0x1827;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	return value-69;
}
uint32_t test_func2093(uint32_t value){
	value *= value;
	value += 0x1751;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	return value-15;
}
uint32_t test_func2094(uint32_t value){
	value *= value;
	value += 0x1460;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-61;
}
uint32_t test_func2095(uint32_t value){
	value *= value;
	value += 0x5a7e;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	return value-3;
}
uint32_t test_func2096(uint32_t value){
	value *= value;
	value += 0x66a8;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 4);
	return value-47;
}
uint32_t test_func2097(uint32_t value){
	value *= value;
	value += 0x402e;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	return value-123;
}
uint32_t test_func2098(uint32_t value){
	value *= value;
	value += 0x2136;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	return value-112;
}
uint32_t test_func2099(uint32_t value){
	value *= value;
	value += 0x6f3a;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-102;
}
uint32_t test_func2100(uint32_t value){
	value *= value;
	value += 0x8385;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-42;
}
uint32_t test_func2101(uint32_t value){
	value *= value;
	value += 0x43ba;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	return value-72;
}
uint32_t test_func2102(uint32_t value){
	value *= value;
	value += 0x8a4d;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-106;
}
uint32_t test_func2103(uint32_t value){
	value *= value;
	value += 0x5f08;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-102;
}
uint32_t test_func2104(uint32_t value){
	value *= value;
	value += 0x7f88;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	return value-84;
}
uint32_t test_func2105(uint32_t value){
	value *= value;
	value += 0x37bd;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-97;
}
uint32_t test_func2106(uint32_t value){
	value *= value;
	value += 0x8a6d;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 1) + (value >> 5);
	return value-47;
}
uint32_t test_func2107(uint32_t value){
	value *= value;
	value += 0x29b1;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-86;
}
uint32_t test_func2108(uint32_t value){
	value *= value;
	value += 0x3f77;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	return value-18;
}
uint32_t test_func2109(uint32_t value){
	value *= value;
	value += 0x85ff;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	return value-127;
}
uint32_t test_func2110(uint32_t value){
	value *= value;
	value += 0x305e;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 8);
	return value-2;
}
uint32_t test_func2111(uint32_t value){
	value *= value;
	value += 0x22fe;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	return value-81;
}
uint32_t test_func2112(uint32_t value){
	value *= value;
	value += 0x7c1b;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	return value-16;
}
uint32_t test_func2113(uint32_t value){
	value *= value;
	value += 0x6c47;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	return value-31;
}
uint32_t test_func2114(uint32_t value){
	value *= value;
	value += 0x5ee7;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-121;
}
uint32_t test_func2115(uint32_t value){
	value *= value;
	value += 0x72b4;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-58;
}
uint32_t test_func2116(uint32_t value){
	value *= value;
	value += 0x423c;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	return value-69;
}
uint32_t test_func2117(uint32_t value){
	value *= value;
	value += 0x7c5e;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	return value-11;
}
uint32_t test_func2118(uint32_t value){
	value *= value;
	value += 0x4cd2;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	return value-106;
}
uint32_t test_func2119(uint32_t value){
	value *= value;
	value += 0x149e;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	value = (value >> 5) + (value >> 2);
	return value-58;
}
uint32_t test_func2120(uint32_t value){
	value *= value;
	value += 0x72a2;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	return value-107;
}
uint32_t test_func2121(uint32_t value){
	value *= value;
	value += 0x1c0d;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	return value-79;
}
uint32_t test_func2122(uint32_t value){
	value *= value;
	value += 0x84e5;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	return value-120;
}
uint32_t test_func2123(uint32_t value){
	value *= value;
	value += 0x5883;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	return value-71;
}
uint32_t test_func2124(uint32_t value){
	value *= value;
	value += 0x4214;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	return value-9;
}
uint32_t test_func2125(uint32_t value){
	value *= value;
	value += 0x851a;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	return value-65;
}
uint32_t test_func2126(uint32_t value){
	value *= value;
	value += 0x65e9;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 1);
	return value-10;
}
uint32_t test_func2127(uint32_t value){
	value *= value;
	value += 0x622a;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 4);
	return value-26;
}
uint32_t test_func2128(uint32_t value){
	value *= value;
	value += 0x395b;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	return value-107;
}
uint32_t test_func2129(uint32_t value){
	value *= value;
	value += 0x454d;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	return value-5;
}
uint32_t test_func2130(uint32_t value){
	value *= value;
	value += 0x22a5;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	return value-80;
}
uint32_t test_func2131(uint32_t value){
	value *= value;
	value += 0x295c;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-52;
}
uint32_t test_func2132(uint32_t value){
	value *= value;
	value += 0x353f;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	return value-38;
}
uint32_t test_func2133(uint32_t value){
	value *= value;
	value += 0x3e70;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 3);
	value = (value >> 1) + (value >> 5);
	return value-123;
}
uint32_t test_func2134(uint32_t value){
	value *= value;
	value += 0x41e3;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	return value-69;
}
uint32_t test_func2135(uint32_t value){
	value *= value;
	value += 0x79e1;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-98;
}
uint32_t test_func2136(uint32_t value){
	value *= value;
	value += 0x6688;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-23;
}
uint32_t test_func2137(uint32_t value){
	value *= value;
	value += 0x2649;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	value = (value >> 9) + (value >> 8);
	return value-87;
}
uint32_t test_func2138(uint32_t value){
	value *= value;
	value += 0x1e69;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	return value-42;
}
uint32_t test_func2139(uint32_t value){
	value *= value;
	value += 0x7381;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-57;
}
uint32_t test_func2140(uint32_t value){
	value *= value;
	value += 0x51fe;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	return value-98;
}
uint32_t test_func2141(uint32_t value){
	value *= value;
	value += 0x86a2;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	return value-13;
}
uint32_t test_func2142(uint32_t value){
	value *= value;
	value += 0x6700;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	return value-8;
}
uint32_t test_func2143(uint32_t value){
	value *= value;
	value += 0x8a04;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	return value-14;
}
uint32_t test_func2144(uint32_t value){
	value *= value;
	value += 0x5069;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-115;
}
uint32_t test_func2145(uint32_t value){
	value *= value;
	value += 0x3d41;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 8);
	return value-92;
}
uint32_t test_func2146(uint32_t value){
	value *= value;
	value += 0x1e70;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-44;
}
uint32_t test_func2147(uint32_t value){
	value *= value;
	value += 0x8531;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-10;
}
uint32_t test_func2148(uint32_t value){
	value *= value;
	value += 0x8e90;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	return value-1;
}
uint32_t test_func2149(uint32_t value){
	value *= value;
	value += 0x7bee;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-76;
}
uint32_t test_func2150(uint32_t value){
	value *= value;
	value += 0x1b81;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	return value-51;
}
uint32_t test_func2151(uint32_t value){
	value *= value;
	value += 0x80d1;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-19;
}
uint32_t test_func2152(uint32_t value){
	value *= value;
	value += 0x8d3c;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-9;
}
uint32_t test_func2153(uint32_t value){
	value *= value;
	value += 0x4873;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	return value-44;
}
uint32_t test_func2154(uint32_t value){
	value *= value;
	value += 0x88fb;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	return value-123;
}
uint32_t test_func2155(uint32_t value){
	value *= value;
	value += 0x6cac;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	return value-95;
}
uint32_t test_func2156(uint32_t value){
	value *= value;
	value += 0x2135;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-77;
}
uint32_t test_func2157(uint32_t value){
	value *= value;
	value += 0x7c97;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	return value-18;
}
uint32_t test_func2158(uint32_t value){
	value *= value;
	value += 0x65a5;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-47;
}
uint32_t test_func2159(uint32_t value){
	value *= value;
	value += 0x8c8a;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	return value-102;
}
uint32_t test_func2160(uint32_t value){
	value *= value;
	value += 0x7343;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-92;
}
uint32_t test_func2161(uint32_t value){
	value *= value;
	value += 0x4621;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	return value-92;
}
uint32_t test_func2162(uint32_t value){
	value *= value;
	value += 0x8448;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	return value-63;
}
uint32_t test_func2163(uint32_t value){
	value *= value;
	value += 0x7833;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-109;
}
uint32_t test_func2164(uint32_t value){
	value *= value;
	value += 0x802e;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	return value-12;
}
uint32_t test_func2165(uint32_t value){
	value *= value;
	value += 0x26da;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	return value-52;
}
uint32_t test_func2166(uint32_t value){
	value *= value;
	value += 0x8bac;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	return value-99;
}
uint32_t test_func2167(uint32_t value){
	value *= value;
	value += 0x1b6e;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	return value-126;
}
uint32_t test_func2168(uint32_t value){
	value *= value;
	value += 0x18bd;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-118;
}
uint32_t test_func2169(uint32_t value){
	value *= value;
	value += 0x748a;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	return value-5;
}
uint32_t test_func2170(uint32_t value){
	value *= value;
	value += 0x7699;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	return value-29;
}
uint32_t test_func2171(uint32_t value){
	value *= value;
	value += 0x3605;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-110;
}
uint32_t test_func2172(uint32_t value){
	value *= value;
	value += 0x61ba;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	return value-2;
}
uint32_t test_func2173(uint32_t value){
	value *= value;
	value += 0x58f9;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	return value-8;
}
uint32_t test_func2174(uint32_t value){
	value *= value;
	value += 0x13d7;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-54;
}
uint32_t test_func2175(uint32_t value){
	value *= value;
	value += 0x5bbe;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	return value-84;
}
uint32_t test_func2176(uint32_t value){
	value *= value;
	value += 0x53eb;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	return value-91;
}
uint32_t test_func2177(uint32_t value){
	value *= value;
	value += 0x51ee;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-58;
}
uint32_t test_func2178(uint32_t value){
	value *= value;
	value += 0x862d;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-61;
}
uint32_t test_func2179(uint32_t value){
	value *= value;
	value += 0x7462;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-22;
}
uint32_t test_func2180(uint32_t value){
	value *= value;
	value += 0x3c18;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 1);
	return value-119;
}
uint32_t test_func2181(uint32_t value){
	value *= value;
	value += 0x3132;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 7);
	return value-100;
}
uint32_t test_func2182(uint32_t value){
	value *= value;
	value += 0x4465;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	return value-14;
}
uint32_t test_func2183(uint32_t value){
	value *= value;
	value += 0x3bb9;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	return value-91;
}
uint32_t test_func2184(uint32_t value){
	value *= value;
	value += 0x3b0b;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	return value-18;
}
uint32_t test_func2185(uint32_t value){
	value *= value;
	value += 0x1c8e;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-20;
}
uint32_t test_func2186(uint32_t value){
	value *= value;
	value += 0x1945;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	return value-70;
}
uint32_t test_func2187(uint32_t value){
	value *= value;
	value += 0x418a;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	return value-26;
}
uint32_t test_func2188(uint32_t value){
	value *= value;
	value += 0x458b;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	return value-50;
}
uint32_t test_func2189(uint32_t value){
	value *= value;
	value += 0x8dc7;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	return value-32;
}
uint32_t test_func2190(uint32_t value){
	value *= value;
	value += 0x2396;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	return value-79;
}
uint32_t test_func2191(uint32_t value){
	value *= value;
	value += 0x699f;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-13;
}
uint32_t test_func2192(uint32_t value){
	value *= value;
	value += 0x245f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-35;
}
uint32_t test_func2193(uint32_t value){
	value *= value;
	value += 0x52a8;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-40;
}
uint32_t test_func2194(uint32_t value){
	value *= value;
	value += 0x561f;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	return value-93;
}
uint32_t test_func2195(uint32_t value){
	value *= value;
	value += 0x6bbe;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-52;
}
uint32_t test_func2196(uint32_t value){
	value *= value;
	value += 0x7450;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	return value-120;
}
uint32_t test_func2197(uint32_t value){
	value *= value;
	value += 0x8cf8;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	return value-19;
}
uint32_t test_func2198(uint32_t value){
	value *= value;
	value += 0x77aa;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	return value-100;
}
uint32_t test_func2199(uint32_t value){
	value *= value;
	value += 0x53b0;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	return value-93;
}
uint32_t test_func2200(uint32_t value){
	value *= value;
	value += 0x2627;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	return value-19;
}
uint32_t test_func2201(uint32_t value){
	value *= value;
	value += 0x327e;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 7);
	return value-13;
}
uint32_t test_func2202(uint32_t value){
	value *= value;
	value += 0x22fd;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	return value-40;
}
uint32_t test_func2203(uint32_t value){
	value *= value;
	value += 0x813c;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-24;
}
uint32_t test_func2204(uint32_t value){
	value *= value;
	value += 0x7ea9;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-19;
}
uint32_t test_func2205(uint32_t value){
	value *= value;
	value += 0x8d03;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-16;
}
uint32_t test_func2206(uint32_t value){
	value *= value;
	value += 0x46e2;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	return value-47;
}
uint32_t test_func2207(uint32_t value){
	value *= value;
	value += 0x282c;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-66;
}
uint32_t test_func2208(uint32_t value){
	value *= value;
	value += 0x16a0;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	return value-103;
}
uint32_t test_func2209(uint32_t value){
	value *= value;
	value += 0x3a4f;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 2);
	value = (value >> 6) + (value >> 2);
	return value-89;
}
uint32_t test_func2210(uint32_t value){
	value *= value;
	value += 0x261e;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-78;
}
uint32_t test_func2211(uint32_t value){
	value *= value;
	value += 0x5047;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-125;
}
uint32_t test_func2212(uint32_t value){
	value *= value;
	value += 0x5ad5;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 4);
	return value-69;
}
uint32_t test_func2213(uint32_t value){
	value *= value;
	value += 0x2c2a;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	return value-112;
}
uint32_t test_func2214(uint32_t value){
	value *= value;
	value += 0x577c;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	return value-26;
}
uint32_t test_func2215(uint32_t value){
	value *= value;
	value += 0x5554;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	return value-51;
}
uint32_t test_func2216(uint32_t value){
	value *= value;
	value += 0x8c0e;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	return value-41;
}
uint32_t test_func2217(uint32_t value){
	value *= value;
	value += 0x285c;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	return value-36;
}
uint32_t test_func2218(uint32_t value){
	value *= value;
	value += 0x45c3;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	return value-118;
}
uint32_t test_func2219(uint32_t value){
	value *= value;
	value += 0x671c;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-26;
}
uint32_t test_func2220(uint32_t value){
	value *= value;
	value += 0x3f14;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-88;
}
uint32_t test_func2221(uint32_t value){
	value *= value;
	value += 0x48ac;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 5);
	return value-11;
}
uint32_t test_func2222(uint32_t value){
	value *= value;
	value += 0x2fba;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	return value-10;
}
uint32_t test_func2223(uint32_t value){
	value *= value;
	value += 0x8967;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	return value-42;
}
uint32_t test_func2224(uint32_t value){
	value *= value;
	value += 0x5caf;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 5);
	return value-94;
}
uint32_t test_func2225(uint32_t value){
	value *= value;
	value += 0x7ae4;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	return value-3;
}
uint32_t test_func2226(uint32_t value){
	value *= value;
	value += 0x282b;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-71;
}
uint32_t test_func2227(uint32_t value){
	value *= value;
	value += 0x13fc;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	return value-38;
}
uint32_t test_func2228(uint32_t value){
	value *= value;
	value += 0x21a6;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 1);
	return value-15;
}
uint32_t test_func2229(uint32_t value){
	value *= value;
	value += 0x80ca;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-53;
}
uint32_t test_func2230(uint32_t value){
	value *= value;
	value += 0x15dc;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 5) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	return value-102;
}
uint32_t test_func2231(uint32_t value){
	value *= value;
	value += 0x32a5;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-24;
}
uint32_t test_func2232(uint32_t value){
	value *= value;
	value += 0x1ec3;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-11;
}
uint32_t test_func2233(uint32_t value){
	value *= value;
	value += 0x7027;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	return value-15;
}
uint32_t test_func2234(uint32_t value){
	value *= value;
	value += 0x3395;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-103;
}
uint32_t test_func2235(uint32_t value){
	value *= value;
	value += 0x6528;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-85;
}
uint32_t test_func2236(uint32_t value){
	value *= value;
	value += 0x38cc;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	return value-53;
}
uint32_t test_func2237(uint32_t value){
	value *= value;
	value += 0x32c2;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-70;
}
uint32_t test_func2238(uint32_t value){
	value *= value;
	value += 0x1020;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	return value-20;
}
uint32_t test_func2239(uint32_t value){
	value *= value;
	value += 0x7f4e;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	return value-117;
}
uint32_t test_func2240(uint32_t value){
	value *= value;
	value += 0x288a;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	return value-56;
}
uint32_t test_func2241(uint32_t value){
	value *= value;
	value += 0x8665;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	return value-89;
}
uint32_t test_func2242(uint32_t value){
	value *= value;
	value += 0x8e44;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	return value-125;
}
uint32_t test_func2243(uint32_t value){
	value *= value;
	value += 0x28df;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-95;
}
uint32_t test_func2244(uint32_t value){
	value *= value;
	value += 0x7ac5;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	return value-13;
}
uint32_t test_func2245(uint32_t value){
	value *= value;
	value += 0x7cd6;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-20;
}
uint32_t test_func2246(uint32_t value){
	value *= value;
	value += 0x64c8;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	return value-122;
}
uint32_t test_func2247(uint32_t value){
	value *= value;
	value += 0x5da3;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	return value-60;
}
uint32_t test_func2248(uint32_t value){
	value *= value;
	value += 0x1045;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	return value-107;
}
uint32_t test_func2249(uint32_t value){
	value *= value;
	value += 0x7bde;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 2) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	return value-127;
}
uint32_t test_func2250(uint32_t value){
	value *= value;
	value += 0x1e75;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	return value-45;
}
uint32_t test_func2251(uint32_t value){
	value *= value;
	value += 0x6d62;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	return value-125;
}
uint32_t test_func2252(uint32_t value){
	value *= value;
	value += 0x1dd1;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	return value-93;
}
uint32_t test_func2253(uint32_t value){
	value *= value;
	value += 0x3d45;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-115;
}
uint32_t test_func2254(uint32_t value){
	value *= value;
	value += 0x1a13;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	return value-127;
}
uint32_t test_func2255(uint32_t value){
	value *= value;
	value += 0x7be3;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	return value-94;
}
uint32_t test_func2256(uint32_t value){
	value *= value;
	value += 0x2c33;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	return value-44;
}
uint32_t test_func2257(uint32_t value){
	value *= value;
	value += 0x4ed3;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-18;
}
uint32_t test_func2258(uint32_t value){
	value *= value;
	value += 0x8a6a;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	return value-34;
}
uint32_t test_func2259(uint32_t value){
	value *= value;
	value += 0x80ef;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-98;
}
uint32_t test_func2260(uint32_t value){
	value *= value;
	value += 0x1831;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 1);
	return value-109;
}
uint32_t test_func2261(uint32_t value){
	value *= value;
	value += 0x1250;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-62;
}
uint32_t test_func2262(uint32_t value){
	value *= value;
	value += 0x7641;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	return value-11;
}
uint32_t test_func2263(uint32_t value){
	value *= value;
	value += 0x484e;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-82;
}
uint32_t test_func2264(uint32_t value){
	value *= value;
	value += 0x1294;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 4);
	return value-127;
}
uint32_t test_func2265(uint32_t value){
	value *= value;
	value += 0x3d83;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-42;
}
uint32_t test_func2266(uint32_t value){
	value *= value;
	value += 0x3861;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 3);
	return value-126;
}
uint32_t test_func2267(uint32_t value){
	value *= value;
	value += 0x71c8;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-70;
}
uint32_t test_func2268(uint32_t value){
	value *= value;
	value += 0x2023;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-5;
}
uint32_t test_func2269(uint32_t value){
	value *= value;
	value += 0x5a35;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	return value-74;
}
uint32_t test_func2270(uint32_t value){
	value *= value;
	value += 0x7f93;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	return value-2;
}
uint32_t test_func2271(uint32_t value){
	value *= value;
	value += 0x7124;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 1);
	return value-18;
}
uint32_t test_func2272(uint32_t value){
	value *= value;
	value += 0x19a8;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	return value-108;
}
uint32_t test_func2273(uint32_t value){
	value *= value;
	value += 0x462e;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	return value-93;
}
uint32_t test_func2274(uint32_t value){
	value *= value;
	value += 0x4e9d;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	return value-105;
}
uint32_t test_func2275(uint32_t value){
	value *= value;
	value += 0x8e2c;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-94;
}
uint32_t test_func2276(uint32_t value){
	value *= value;
	value += 0x2be9;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 5);
	return value-107;
}
uint32_t test_func2277(uint32_t value){
	value *= value;
	value += 0x3336;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	return value-107;
}
uint32_t test_func2278(uint32_t value){
	value *= value;
	value += 0x7c47;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 4);
	return value-78;
}
uint32_t test_func2279(uint32_t value){
	value *= value;
	value += 0x64a6;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	return value-20;
}
uint32_t test_func2280(uint32_t value){
	value *= value;
	value += 0x57b0;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	return value-122;
}
uint32_t test_func2281(uint32_t value){
	value *= value;
	value += 0x2715;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	return value-66;
}
uint32_t test_func2282(uint32_t value){
	value *= value;
	value += 0x335b;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-13;
}
uint32_t test_func2283(uint32_t value){
	value *= value;
	value += 0x645b;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	return value-100;
}
uint32_t test_func2284(uint32_t value){
	value *= value;
	value += 0x71c3;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-99;
}
uint32_t test_func2285(uint32_t value){
	value *= value;
	value += 0x7b92;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-121;
}
uint32_t test_func2286(uint32_t value){
	value *= value;
	value += 0x729f;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-80;
}
uint32_t test_func2287(uint32_t value){
	value *= value;
	value += 0x5113;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 6);
	return value-74;
}
uint32_t test_func2288(uint32_t value){
	value *= value;
	value += 0x22ea;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	return value-48;
}
uint32_t test_func2289(uint32_t value){
	value *= value;
	value += 0x5e77;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	return value-112;
}
uint32_t test_func2290(uint32_t value){
	value *= value;
	value += 0x8cdd;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	return value-10;
}
uint32_t test_func2291(uint32_t value){
	value *= value;
	value += 0x4296;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	return value-11;
}
uint32_t test_func2292(uint32_t value){
	value *= value;
	value += 0x67ef;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	return value-53;
}
uint32_t test_func2293(uint32_t value){
	value *= value;
	value += 0x518a;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	return value-77;
}
uint32_t test_func2294(uint32_t value){
	value *= value;
	value += 0x28db;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-114;
}
uint32_t test_func2295(uint32_t value){
	value *= value;
	value += 0x24ab;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	return value-47;
}
uint32_t test_func2296(uint32_t value){
	value *= value;
	value += 0x1199;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 3);
	return value-18;
}
uint32_t test_func2297(uint32_t value){
	value *= value;
	value += 0x2a94;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	return value-125;
}
uint32_t test_func2298(uint32_t value){
	value *= value;
	value += 0x4162;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-12;
}
uint32_t test_func2299(uint32_t value){
	value *= value;
	value += 0x371c;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	return value-10;
}
uint32_t test_func2300(uint32_t value){
	value *= value;
	value += 0x44af;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	return value-39;
}
uint32_t test_func2301(uint32_t value){
	value *= value;
	value += 0x135c;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	return value-59;
}
uint32_t test_func2302(uint32_t value){
	value *= value;
	value += 0x2539;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	return value-28;
}
uint32_t test_func2303(uint32_t value){
	value *= value;
	value += 0x8daf;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	return value-55;
}
uint32_t test_func2304(uint32_t value){
	value *= value;
	value += 0x79fa;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-40;
}
uint32_t test_func2305(uint32_t value){
	value *= value;
	value += 0x89ac;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	return value-1;
}
uint32_t test_func2306(uint32_t value){
	value *= value;
	value += 0x772a;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-53;
}
uint32_t test_func2307(uint32_t value){
	value *= value;
	value += 0x102d;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-25;
}
uint32_t test_func2308(uint32_t value){
	value *= value;
	value += 0x7e42;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	return value-3;
}
uint32_t test_func2309(uint32_t value){
	value *= value;
	value += 0x5f4a;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-25;
}
uint32_t test_func2310(uint32_t value){
	value *= value;
	value += 0x2dfb;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	return value-50;
}
uint32_t test_func2311(uint32_t value){
	value *= value;
	value += 0x7a5d;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-90;
}
uint32_t test_func2312(uint32_t value){
	value *= value;
	value += 0x724e;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	return value-119;
}
uint32_t test_func2313(uint32_t value){
	value *= value;
	value += 0x39ff;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-17;
}
uint32_t test_func2314(uint32_t value){
	value *= value;
	value += 0x1475;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	return value-48;
}
uint32_t test_func2315(uint32_t value){
	value *= value;
	value += 0x5c09;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	return value-108;
}
uint32_t test_func2316(uint32_t value){
	value *= value;
	value += 0x4ae8;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	return value-10;
}
uint32_t test_func2317(uint32_t value){
	value *= value;
	value += 0x1393;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-62;
}
uint32_t test_func2318(uint32_t value){
	value *= value;
	value += 0x4960;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	return value-27;
}
uint32_t test_func2319(uint32_t value){
	value *= value;
	value += 0x18f7;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-13;
}
uint32_t test_func2320(uint32_t value){
	value *= value;
	value += 0x50d6;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 3);
	return value-9;
}
uint32_t test_func2321(uint32_t value){
	value *= value;
	value += 0x39ce;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	return value-66;
}
uint32_t test_func2322(uint32_t value){
	value *= value;
	value += 0x3f84;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	return value-33;
}
uint32_t test_func2323(uint32_t value){
	value *= value;
	value += 0x68f0;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-61;
}
uint32_t test_func2324(uint32_t value){
	value *= value;
	value += 0x20e1;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	return value-5;
}
uint32_t test_func2325(uint32_t value){
	value *= value;
	value += 0x4e78;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	return value-2;
}
uint32_t test_func2326(uint32_t value){
	value *= value;
	value += 0x3da8;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	return value-61;
}
uint32_t test_func2327(uint32_t value){
	value *= value;
	value += 0x57bc;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	return value-73;
}
uint32_t test_func2328(uint32_t value){
	value *= value;
	value += 0x2bd1;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-95;
}
uint32_t test_func2329(uint32_t value){
	value *= value;
	value += 0x4758;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-45;
}
uint32_t test_func2330(uint32_t value){
	value *= value;
	value += 0x5e96;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	return value-47;
}
uint32_t test_func2331(uint32_t value){
	value *= value;
	value += 0x4523;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-64;
}
uint32_t test_func2332(uint32_t value){
	value *= value;
	value += 0x366e;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	return value-58;
}
uint32_t test_func2333(uint32_t value){
	value *= value;
	value += 0x6e37;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	return value-58;
}
uint32_t test_func2334(uint32_t value){
	value *= value;
	value += 0x1114;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	return value-127;
}
uint32_t test_func2335(uint32_t value){
	value *= value;
	value += 0x64ed;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	return value-3;
}
uint32_t test_func2336(uint32_t value){
	value *= value;
	value += 0x5980;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	return value-6;
}
uint32_t test_func2337(uint32_t value){
	value *= value;
	value += 0x60dd;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-102;
}
uint32_t test_func2338(uint32_t value){
	value *= value;
	value += 0x17eb;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	return value-1;
}
uint32_t test_func2339(uint32_t value){
	value *= value;
	value += 0x3ee1;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-46;
}
uint32_t test_func2340(uint32_t value){
	value *= value;
	value += 0x81ce;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-115;
}
uint32_t test_func2341(uint32_t value){
	value *= value;
	value += 0x1112;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	return value-59;
}
uint32_t test_func2342(uint32_t value){
	value *= value;
	value += 0x89e3;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	return value-74;
}
uint32_t test_func2343(uint32_t value){
	value *= value;
	value += 0x2ec9;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	return value-47;
}
uint32_t test_func2344(uint32_t value){
	value *= value;
	value += 0x7021;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	return value-126;
}
uint32_t test_func2345(uint32_t value){
	value *= value;
	value += 0x449e;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	return value-7;
}
uint32_t test_func2346(uint32_t value){
	value *= value;
	value += 0x51c3;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	return value-59;
}
uint32_t test_func2347(uint32_t value){
	value *= value;
	value += 0x646b;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	return value-59;
}
uint32_t test_func2348(uint32_t value){
	value *= value;
	value += 0x3941;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	return value-112;
}
uint32_t test_func2349(uint32_t value){
	value *= value;
	value += 0x1548;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 6);
	return value-96;
}
uint32_t test_func2350(uint32_t value){
	value *= value;
	value += 0x2e55;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	return value-127;
}
uint32_t test_func2351(uint32_t value){
	value *= value;
	value += 0x638f;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	return value-72;
}
uint32_t test_func2352(uint32_t value){
	value *= value;
	value += 0x45f6;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-83;
}
uint32_t test_func2353(uint32_t value){
	value *= value;
	value += 0x70d9;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	return value-36;
}
uint32_t test_func2354(uint32_t value){
	value *= value;
	value += 0x325f;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	return value-7;
}
uint32_t test_func2355(uint32_t value){
	value *= value;
	value += 0x83ff;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	return value-29;
}
uint32_t test_func2356(uint32_t value){
	value *= value;
	value += 0x5308;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	return value-125;
}
uint32_t test_func2357(uint32_t value){
	value *= value;
	value += 0x191a;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 4);
	value = (value >> 3) + (value >> 4);
	return value-124;
}
uint32_t test_func2358(uint32_t value){
	value *= value;
	value += 0x44aa;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	return value-10;
}
uint32_t test_func2359(uint32_t value){
	value *= value;
	value += 0x7182;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-67;
}
uint32_t test_func2360(uint32_t value){
	value *= value;
	value += 0x713e;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	return value-10;
}
uint32_t test_func2361(uint32_t value){
	value *= value;
	value += 0x23d0;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	return value-83;
}
uint32_t test_func2362(uint32_t value){
	value *= value;
	value += 0x1ffe;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	return value-10;
}
uint32_t test_func2363(uint32_t value){
	value *= value;
	value += 0x2bdf;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-13;
}
uint32_t test_func2364(uint32_t value){
	value *= value;
	value += 0x8561;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 3);
	return value-95;
}
uint32_t test_func2365(uint32_t value){
	value *= value;
	value += 0x7ac6;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 3);
	return value-102;
}
uint32_t test_func2366(uint32_t value){
	value *= value;
	value += 0x5322;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	return value-79;
}
uint32_t test_func2367(uint32_t value){
	value *= value;
	value += 0x86df;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	return value-21;
}
uint32_t test_func2368(uint32_t value){
	value *= value;
	value += 0x4839;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	return value-40;
}
uint32_t test_func2369(uint32_t value){
	value *= value;
	value += 0x5bc3;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	return value-46;
}
uint32_t test_func2370(uint32_t value){
	value *= value;
	value += 0x40e0;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	return value-104;
}
uint32_t test_func2371(uint32_t value){
	value *= value;
	value += 0x2a4a;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-62;
}
uint32_t test_func2372(uint32_t value){
	value *= value;
	value += 0x468e;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	return value-91;
}
uint32_t test_func2373(uint32_t value){
	value *= value;
	value += 0x588e;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	return value-115;
}
uint32_t test_func2374(uint32_t value){
	value *= value;
	value += 0x1ffe;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	return value-52;
}
uint32_t test_func2375(uint32_t value){
	value *= value;
	value += 0x11e8;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	return value-54;
}
uint32_t test_func2376(uint32_t value){
	value *= value;
	value += 0x6128;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	return value-52;
}
uint32_t test_func2377(uint32_t value){
	value *= value;
	value += 0x56f0;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	return value-71;
}
uint32_t test_func2378(uint32_t value){
	value *= value;
	value += 0x7b45;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	return value-77;
}
uint32_t test_func2379(uint32_t value){
	value *= value;
	value += 0x8d80;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	return value-106;
}
uint32_t test_func2380(uint32_t value){
	value *= value;
	value += 0x4ccf;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	return value-57;
}
uint32_t test_func2381(uint32_t value){
	value *= value;
	value += 0x10b1;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	return value-127;
}
uint32_t test_func2382(uint32_t value){
	value *= value;
	value += 0x317d;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-32;
}
uint32_t test_func2383(uint32_t value){
	value *= value;
	value += 0x40dc;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-26;
}
uint32_t test_func2384(uint32_t value){
	value *= value;
	value += 0x124a;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	return value-53;
}
uint32_t test_func2385(uint32_t value){
	value *= value;
	value += 0x1399;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	return value-57;
}
uint32_t test_func2386(uint32_t value){
	value *= value;
	value += 0x756e;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 2);
	return value-91;
}
uint32_t test_func2387(uint32_t value){
	value *= value;
	value += 0x23c2;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-72;
}
uint32_t test_func2388(uint32_t value){
	value *= value;
	value += 0x8e62;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-63;
}
uint32_t test_func2389(uint32_t value){
	value *= value;
	value += 0x416f;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-91;
}
uint32_t test_func2390(uint32_t value){
	value *= value;
	value += 0x4ddf;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 3);
	return value-120;
}
uint32_t test_func2391(uint32_t value){
	value *= value;
	value += 0x81fb;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-60;
}
uint32_t test_func2392(uint32_t value){
	value *= value;
	value += 0x71df;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	return value-49;
}
uint32_t test_func2393(uint32_t value){
	value *= value;
	value += 0x4ffd;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-22;
}
uint32_t test_func2394(uint32_t value){
	value *= value;
	value += 0x159a;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	return value-58;
}
uint32_t test_func2395(uint32_t value){
	value *= value;
	value += 0x7b4f;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-12;
}
uint32_t test_func2396(uint32_t value){
	value *= value;
	value += 0x4189;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	return value-50;
}
uint32_t test_func2397(uint32_t value){
	value *= value;
	value += 0x4909;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 3);
	return value-95;
}
uint32_t test_func2398(uint32_t value){
	value *= value;
	value += 0x7b65;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	return value-40;
}
uint32_t test_func2399(uint32_t value){
	value *= value;
	value += 0x8385;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	return value-16;
}
uint32_t test_func2400(uint32_t value){
	value *= value;
	value += 0x5627;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	return value-47;
}
uint32_t test_func2401(uint32_t value){
	value *= value;
	value += 0x8a5c;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	return value-118;
}
uint32_t test_func2402(uint32_t value){
	value *= value;
	value += 0x8209;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 1);
	return value-16;
}
uint32_t test_func2403(uint32_t value){
	value *= value;
	value += 0x6267;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-106;
}
uint32_t test_func2404(uint32_t value){
	value *= value;
	value += 0x5c83;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	return value-92;
}
uint32_t test_func2405(uint32_t value){
	value *= value;
	value += 0x45be;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	return value-97;
}
uint32_t test_func2406(uint32_t value){
	value *= value;
	value += 0x804e;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-15;
}
uint32_t test_func2407(uint32_t value){
	value *= value;
	value += 0x33bb;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-11;
}
uint32_t test_func2408(uint32_t value){
	value *= value;
	value += 0x5563;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	return value-53;
}
uint32_t test_func2409(uint32_t value){
	value *= value;
	value += 0x80f7;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 8);
	return value-113;
}
uint32_t test_func2410(uint32_t value){
	value *= value;
	value += 0x20fb;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	return value-4;
}
uint32_t test_func2411(uint32_t value){
	value *= value;
	value += 0x674a;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	return value-32;
}
uint32_t test_func2412(uint32_t value){
	value *= value;
	value += 0x1590;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	return value-1;
}
uint32_t test_func2413(uint32_t value){
	value *= value;
	value += 0x15ce;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	return value-59;
}
uint32_t test_func2414(uint32_t value){
	value *= value;
	value += 0x62da;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	return value-26;
}
uint32_t test_func2415(uint32_t value){
	value *= value;
	value += 0x40dc;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 4);
	return value-38;
}
uint32_t test_func2416(uint32_t value){
	value *= value;
	value += 0x45d2;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	return value-75;
}
uint32_t test_func2417(uint32_t value){
	value *= value;
	value += 0x320c;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 4);
	return value-29;
}
uint32_t test_func2418(uint32_t value){
	value *= value;
	value += 0x18b1;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	return value-61;
}
uint32_t test_func2419(uint32_t value){
	value *= value;
	value += 0x5839;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	return value-94;
}
uint32_t test_func2420(uint32_t value){
	value *= value;
	value += 0x62f0;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-104;
}
uint32_t test_func2421(uint32_t value){
	value *= value;
	value += 0x5779;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-63;
}
uint32_t test_func2422(uint32_t value){
	value *= value;
	value += 0x6949;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	return value-43;
}
uint32_t test_func2423(uint32_t value){
	value *= value;
	value += 0x1928;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	return value-86;
}
uint32_t test_func2424(uint32_t value){
	value *= value;
	value += 0x3db4;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	return value-117;
}
uint32_t test_func2425(uint32_t value){
	value *= value;
	value += 0x5bdd;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 8);
	return value-16;
}
uint32_t test_func2426(uint32_t value){
	value *= value;
	value += 0x4f6a;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	return value-96;
}
uint32_t test_func2427(uint32_t value){
	value *= value;
	value += 0x4372;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-94;
}
uint32_t test_func2428(uint32_t value){
	value *= value;
	value += 0x7ae4;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	return value-87;
}
uint32_t test_func2429(uint32_t value){
	value *= value;
	value += 0x6900;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	return value-70;
}
uint32_t test_func2430(uint32_t value){
	value *= value;
	value += 0x19db;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	return value-42;
}
uint32_t test_func2431(uint32_t value){
	value *= value;
	value += 0x6adf;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	return value-17;
}
uint32_t test_func2432(uint32_t value){
	value *= value;
	value += 0x1349;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	return value-60;
}
uint32_t test_func2433(uint32_t value){
	value *= value;
	value += 0x7caa;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-95;
}
uint32_t test_func2434(uint32_t value){
	value *= value;
	value += 0x6b66;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	return value-23;
}
uint32_t test_func2435(uint32_t value){
	value *= value;
	value += 0x7737;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-83;
}
uint32_t test_func2436(uint32_t value){
	value *= value;
	value += 0x53ab;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-22;
}
uint32_t test_func2437(uint32_t value){
	value *= value;
	value += 0x68a2;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	return value-38;
}
uint32_t test_func2438(uint32_t value){
	value *= value;
	value += 0x3ad1;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	return value-125;
}
uint32_t test_func2439(uint32_t value){
	value *= value;
	value += 0x2442;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	return value-79;
}
uint32_t test_func2440(uint32_t value){
	value *= value;
	value += 0x5cd2;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	return value-37;
}
uint32_t test_func2441(uint32_t value){
	value *= value;
	value += 0x52b1;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	return value-37;
}
uint32_t test_func2442(uint32_t value){
	value *= value;
	value += 0x52e5;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 1);
	return value-4;
}
uint32_t test_func2443(uint32_t value){
	value *= value;
	value += 0x81c8;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	return value-120;
}
uint32_t test_func2444(uint32_t value){
	value *= value;
	value += 0x2385;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-106;
}
uint32_t test_func2445(uint32_t value){
	value *= value;
	value += 0x349f;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	return value-54;
}
uint32_t test_func2446(uint32_t value){
	value *= value;
	value += 0x526a;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-15;
}
uint32_t test_func2447(uint32_t value){
	value *= value;
	value += 0x7390;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-8;
}
uint32_t test_func2448(uint32_t value){
	value *= value;
	value += 0x708e;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	return value-52;
}
uint32_t test_func2449(uint32_t value){
	value *= value;
	value += 0x5c34;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-116;
}
uint32_t test_func2450(uint32_t value){
	value *= value;
	value += 0x2c28;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-79;
}
uint32_t test_func2451(uint32_t value){
	value *= value;
	value += 0x3163;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-127;
}
uint32_t test_func2452(uint32_t value){
	value *= value;
	value += 0x60b3;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	return value-27;
}
uint32_t test_func2453(uint32_t value){
	value *= value;
	value += 0x6b37;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 2);
	return value-73;
}
uint32_t test_func2454(uint32_t value){
	value *= value;
	value += 0x26e7;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-63;
}
uint32_t test_func2455(uint32_t value){
	value *= value;
	value += 0x4709;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 8);
	return value-47;
}
uint32_t test_func2456(uint32_t value){
	value *= value;
	value += 0x64bd;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-116;
}
uint32_t test_func2457(uint32_t value){
	value *= value;
	value += 0x5772;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	return value-100;
}
uint32_t test_func2458(uint32_t value){
	value *= value;
	value += 0x5d6e;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-32;
}
uint32_t test_func2459(uint32_t value){
	value *= value;
	value += 0x144a;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-35;
}
uint32_t test_func2460(uint32_t value){
	value *= value;
	value += 0x4173;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-108;
}
uint32_t test_func2461(uint32_t value){
	value *= value;
	value += 0x6aab;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 8);
	return value-60;
}
uint32_t test_func2462(uint32_t value){
	value *= value;
	value += 0x3e86;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	return value-120;
}
uint32_t test_func2463(uint32_t value){
	value *= value;
	value += 0x4cee;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	return value-58;
}
uint32_t test_func2464(uint32_t value){
	value *= value;
	value += 0x8f9f;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-107;
}
uint32_t test_func2465(uint32_t value){
	value *= value;
	value += 0x42ab;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	return value-12;
}
uint32_t test_func2466(uint32_t value){
	value *= value;
	value += 0x8cf7;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	return value-26;
}
uint32_t test_func2467(uint32_t value){
	value *= value;
	value += 0x78bc;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-24;
}
uint32_t test_func2468(uint32_t value){
	value *= value;
	value += 0x3c07;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-40;
}
uint32_t test_func2469(uint32_t value){
	value *= value;
	value += 0x513a;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	return value-94;
}
uint32_t test_func2470(uint32_t value){
	value *= value;
	value += 0x5f89;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	return value-32;
}
uint32_t test_func2471(uint32_t value){
	value *= value;
	value += 0x737d;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 6);
	return value-35;
}
uint32_t test_func2472(uint32_t value){
	value *= value;
	value += 0x8774;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-31;
}
uint32_t test_func2473(uint32_t value){
	value *= value;
	value += 0x5c1f;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	return value-4;
}
uint32_t test_func2474(uint32_t value){
	value *= value;
	value += 0x2103;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	return value-105;
}
uint32_t test_func2475(uint32_t value){
	value *= value;
	value += 0x6cf9;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-19;
}
uint32_t test_func2476(uint32_t value){
	value *= value;
	value += 0x86af;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	return value-20;
}
uint32_t test_func2477(uint32_t value){
	value *= value;
	value += 0x7d24;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	return value-14;
}
uint32_t test_func2478(uint32_t value){
	value *= value;
	value += 0x102f;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	return value-30;
}
uint32_t test_func2479(uint32_t value){
	value *= value;
	value += 0x68f8;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	return value-95;
}
uint32_t test_func2480(uint32_t value){
	value *= value;
	value += 0x227d;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 6);
	return value-20;
}
uint32_t test_func2481(uint32_t value){
	value *= value;
	value += 0x220f;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 1);
	return value-93;
}
uint32_t test_func2482(uint32_t value){
	value *= value;
	value += 0x3fd3;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	return value-48;
}
uint32_t test_func2483(uint32_t value){
	value *= value;
	value += 0x3f42;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	return value-77;
}
uint32_t test_func2484(uint32_t value){
	value *= value;
	value += 0x17a9;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 6);
	return value-117;
}
uint32_t test_func2485(uint32_t value){
	value *= value;
	value += 0x8ca9;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	return value-27;
}
uint32_t test_func2486(uint32_t value){
	value *= value;
	value += 0x16b8;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-86;
}
uint32_t test_func2487(uint32_t value){
	value *= value;
	value += 0x1b9e;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-102;
}
uint32_t test_func2488(uint32_t value){
	value *= value;
	value += 0x76f9;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	return value-83;
}
uint32_t test_func2489(uint32_t value){
	value *= value;
	value += 0x52ba;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	return value-51;
}
uint32_t test_func2490(uint32_t value){
	value *= value;
	value += 0x4fa6;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	return value-21;
}
uint32_t test_func2491(uint32_t value){
	value *= value;
	value += 0x7dd6;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-124;
}
uint32_t test_func2492(uint32_t value){
	value *= value;
	value += 0x2537;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-19;
}
uint32_t test_func2493(uint32_t value){
	value *= value;
	value += 0x5e0a;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-94;
}
uint32_t test_func2494(uint32_t value){
	value *= value;
	value += 0x7965;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	return value-49;
}
uint32_t test_func2495(uint32_t value){
	value *= value;
	value += 0x39b0;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	return value-43;
}
uint32_t test_func2496(uint32_t value){
	value *= value;
	value += 0x5b29;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	return value-97;
}
uint32_t test_func2497(uint32_t value){
	value *= value;
	value += 0x6c60;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	return value-26;
}
uint32_t test_func2498(uint32_t value){
	value *= value;
	value += 0x76bc;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	return value-62;
}
uint32_t test_func2499(uint32_t value){
	value *= value;
	value += 0x76f5;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-87;
}
uint32_t test_func2500(uint32_t value){
	value *= value;
	value += 0x2598;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	return value-50;
}
uint32_t test_func2501(uint32_t value){
	value *= value;
	value += 0x8f86;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	return value-46;
}
uint32_t test_func2502(uint32_t value){
	value *= value;
	value += 0x7e74;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	return value-20;
}
uint32_t test_func2503(uint32_t value){
	value *= value;
	value += 0x316d;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	return value-40;
}
uint32_t test_func2504(uint32_t value){
	value *= value;
	value += 0x654b;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	return value-69;
}
uint32_t test_func2505(uint32_t value){
	value *= value;
	value += 0x2d42;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	return value-40;
}
uint32_t test_func2506(uint32_t value){
	value *= value;
	value += 0x1b55;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-83;
}
uint32_t test_func2507(uint32_t value){
	value *= value;
	value += 0x38df;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	return value-18;
}
uint32_t test_func2508(uint32_t value){
	value *= value;
	value += 0x4f0c;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-30;
}
uint32_t test_func2509(uint32_t value){
	value *= value;
	value += 0x7f5d;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	return value-97;
}
uint32_t test_func2510(uint32_t value){
	value *= value;
	value += 0x2c27;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-102;
}
uint32_t test_func2511(uint32_t value){
	value *= value;
	value += 0x3114;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	return value-80;
}
uint32_t test_func2512(uint32_t value){
	value *= value;
	value += 0x6ba1;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-6;
}
uint32_t test_func2513(uint32_t value){
	value *= value;
	value += 0x139f;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	return value-118;
}
uint32_t test_func2514(uint32_t value){
	value *= value;
	value += 0x63b2;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-125;
}
uint32_t test_func2515(uint32_t value){
	value *= value;
	value += 0x11d5;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-103;
}
uint32_t test_func2516(uint32_t value){
	value *= value;
	value += 0x17d3;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	return value-24;
}
uint32_t test_func2517(uint32_t value){
	value *= value;
	value += 0x4bcf;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-79;
}
uint32_t test_func2518(uint32_t value){
	value *= value;
	value += 0x48be;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	return value-16;
}
uint32_t test_func2519(uint32_t value){
	value *= value;
	value += 0x26e8;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	return value-30;
}
uint32_t test_func2520(uint32_t value){
	value *= value;
	value += 0x846a;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	return value-43;
}
uint32_t test_func2521(uint32_t value){
	value *= value;
	value += 0x5db7;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 5);
	return value-27;
}
uint32_t test_func2522(uint32_t value){
	value *= value;
	value += 0x3612;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-95;
}
uint32_t test_func2523(uint32_t value){
	value *= value;
	value += 0x1015;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-10;
}
uint32_t test_func2524(uint32_t value){
	value *= value;
	value += 0x362e;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	return value-105;
}
uint32_t test_func2525(uint32_t value){
	value *= value;
	value += 0x531d;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	return value-78;
}
uint32_t test_func2526(uint32_t value){
	value *= value;
	value += 0x5a77;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	return value-114;
}
uint32_t test_func2527(uint32_t value){
	value *= value;
	value += 0x4126;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	return value-4;
}
uint32_t test_func2528(uint32_t value){
	value *= value;
	value += 0x85e7;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	return value-57;
}
uint32_t test_func2529(uint32_t value){
	value *= value;
	value += 0x89ca;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-40;
}
uint32_t test_func2530(uint32_t value){
	value *= value;
	value += 0x38b5;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-32;
}
uint32_t test_func2531(uint32_t value){
	value *= value;
	value += 0x81e1;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-48;
}
uint32_t test_func2532(uint32_t value){
	value *= value;
	value += 0x205c;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-85;
}
uint32_t test_func2533(uint32_t value){
	value *= value;
	value += 0x3386;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	return value-50;
}
uint32_t test_func2534(uint32_t value){
	value *= value;
	value += 0x2794;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	return value-122;
}
uint32_t test_func2535(uint32_t value){
	value *= value;
	value += 0x6e10;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-123;
}
uint32_t test_func2536(uint32_t value){
	value *= value;
	value += 0x8656;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	return value-56;
}
uint32_t test_func2537(uint32_t value){
	value *= value;
	value += 0x5618;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-57;
}
uint32_t test_func2538(uint32_t value){
	value *= value;
	value += 0x51dc;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	return value-102;
}
uint32_t test_func2539(uint32_t value){
	value *= value;
	value += 0x7579;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	return value-22;
}
uint32_t test_func2540(uint32_t value){
	value *= value;
	value += 0x8c9d;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	return value-40;
}
uint32_t test_func2541(uint32_t value){
	value *= value;
	value += 0x4b4a;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	return value-84;
}
uint32_t test_func2542(uint32_t value){
	value *= value;
	value += 0x3654;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	return value-12;
}
uint32_t test_func2543(uint32_t value){
	value *= value;
	value += 0x5be5;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	return value-120;
}
uint32_t test_func2544(uint32_t value){
	value *= value;
	value += 0x5bf9;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	return value-46;
}
uint32_t test_func2545(uint32_t value){
	value *= value;
	value += 0x40e2;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-97;
}
uint32_t test_func2546(uint32_t value){
	value *= value;
	value += 0x27c5;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	return value-89;
}
uint32_t test_func2547(uint32_t value){
	value *= value;
	value += 0x391b;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-107;
}
uint32_t test_func2548(uint32_t value){
	value *= value;
	value += 0x7132;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	return value-34;
}
uint32_t test_func2549(uint32_t value){
	value *= value;
	value += 0x38a9;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 4);
	return value-10;
}
uint32_t test_func2550(uint32_t value){
	value *= value;
	value += 0x4cf7;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	return value-11;
}
uint32_t test_func2551(uint32_t value){
	value *= value;
	value += 0x78e5;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	return value-117;
}
uint32_t test_func2552(uint32_t value){
	value *= value;
	value += 0x1d0f;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	return value-32;
}
uint32_t test_func2553(uint32_t value){
	value *= value;
	value += 0x8867;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	return value-59;
}
uint32_t test_func2554(uint32_t value){
	value *= value;
	value += 0x20b2;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-33;
}
uint32_t test_func2555(uint32_t value){
	value *= value;
	value += 0x5b09;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	value = (value >> 9) + (value >> 8);
	return value-105;
}
uint32_t test_func2556(uint32_t value){
	value *= value;
	value += 0x8459;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	return value-16;
}
uint32_t test_func2557(uint32_t value){
	value *= value;
	value += 0x59e4;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	return value-43;
}
uint32_t test_func2558(uint32_t value){
	value *= value;
	value += 0x71be;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	return value-96;
}
uint32_t test_func2559(uint32_t value){
	value *= value;
	value += 0x7350;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-99;
}
uint32_t test_func2560(uint32_t value){
	value *= value;
	value += 0x1fd8;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	return value-24;
}
uint32_t test_func2561(uint32_t value){
	value *= value;
	value += 0x2ae7;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 1);
	return value-89;
}
uint32_t test_func2562(uint32_t value){
	value *= value;
	value += 0x62e2;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-95;
}
uint32_t test_func2563(uint32_t value){
	value *= value;
	value += 0x2982;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-71;
}
uint32_t test_func2564(uint32_t value){
	value *= value;
	value += 0x3c54;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-49;
}
uint32_t test_func2565(uint32_t value){
	value *= value;
	value += 0x4d3a;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-12;
}
uint32_t test_func2566(uint32_t value){
	value *= value;
	value += 0x6ae7;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 3);
	return value-116;
}
uint32_t test_func2567(uint32_t value){
	value *= value;
	value += 0x3967;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	return value-62;
}
uint32_t test_func2568(uint32_t value){
	value *= value;
	value += 0x7a95;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	return value-25;
}
uint32_t test_func2569(uint32_t value){
	value *= value;
	value += 0x66a3;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	return value-82;
}
uint32_t test_func2570(uint32_t value){
	value *= value;
	value += 0x5496;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-63;
}
uint32_t test_func2571(uint32_t value){
	value *= value;
	value += 0x32c6;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	return value-60;
}
uint32_t test_func2572(uint32_t value){
	value *= value;
	value += 0x4f62;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-82;
}
uint32_t test_func2573(uint32_t value){
	value *= value;
	value += 0x70eb;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-4;
}
uint32_t test_func2574(uint32_t value){
	value *= value;
	value += 0x3eb5;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	return value-42;
}
uint32_t test_func2575(uint32_t value){
	value *= value;
	value += 0x7969;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-121;
}
uint32_t test_func2576(uint32_t value){
	value *= value;
	value += 0x8385;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	return value-43;
}
uint32_t test_func2577(uint32_t value){
	value *= value;
	value += 0x39da;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	return value-63;
}
uint32_t test_func2578(uint32_t value){
	value *= value;
	value += 0x1c0c;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-100;
}
uint32_t test_func2579(uint32_t value){
	value *= value;
	value += 0x4516;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-121;
}
uint32_t test_func2580(uint32_t value){
	value *= value;
	value += 0x33c4;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 4);
	return value-55;
}
uint32_t test_func2581(uint32_t value){
	value *= value;
	value += 0x6337;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	return value-107;
}
uint32_t test_func2582(uint32_t value){
	value *= value;
	value += 0x3365;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	return value-104;
}
uint32_t test_func2583(uint32_t value){
	value *= value;
	value += 0x2196;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	return value-11;
}
uint32_t test_func2584(uint32_t value){
	value *= value;
	value += 0x50e8;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-84;
}
uint32_t test_func2585(uint32_t value){
	value *= value;
	value += 0x62cc;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-53;
}
uint32_t test_func2586(uint32_t value){
	value *= value;
	value += 0x1f86;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	return value-119;
}
uint32_t test_func2587(uint32_t value){
	value *= value;
	value += 0x6eb1;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-61;
}
uint32_t test_func2588(uint32_t value){
	value *= value;
	value += 0x1fb9;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 7);
	return value-38;
}
uint32_t test_func2589(uint32_t value){
	value *= value;
	value += 0x825f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	return value-22;
}
uint32_t test_func2590(uint32_t value){
	value *= value;
	value += 0x4f38;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	return value-25;
}
uint32_t test_func2591(uint32_t value){
	value *= value;
	value += 0x602e;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	return value-108;
}
uint32_t test_func2592(uint32_t value){
	value *= value;
	value += 0x38fe;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	return value-27;
}
uint32_t test_func2593(uint32_t value){
	value *= value;
	value += 0x5fb9;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-75;
}
uint32_t test_func2594(uint32_t value){
	value *= value;
	value += 0x8543;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-30;
}
uint32_t test_func2595(uint32_t value){
	value *= value;
	value += 0x7dd7;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-57;
}
uint32_t test_func2596(uint32_t value){
	value *= value;
	value += 0x8981;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-102;
}
uint32_t test_func2597(uint32_t value){
	value *= value;
	value += 0x6ca2;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 4);
	return value-90;
}
uint32_t test_func2598(uint32_t value){
	value *= value;
	value += 0x586f;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	return value-31;
}
uint32_t test_func2599(uint32_t value){
	value *= value;
	value += 0x2372;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	return value-18;
}
uint32_t test_func2600(uint32_t value){
	value *= value;
	value += 0x5208;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	return value-7;
}
uint32_t test_func2601(uint32_t value){
	value *= value;
	value += 0x6ee1;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	return value-23;
}
uint32_t test_func2602(uint32_t value){
	value *= value;
	value += 0x3384;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-125;
}
uint32_t test_func2603(uint32_t value){
	value *= value;
	value += 0x80c8;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	return value-37;
}
uint32_t test_func2604(uint32_t value){
	value *= value;
	value += 0x275c;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	return value-62;
}
uint32_t test_func2605(uint32_t value){
	value *= value;
	value += 0x8040;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-19;
}
uint32_t test_func2606(uint32_t value){
	value *= value;
	value += 0x5549;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-100;
}
uint32_t test_func2607(uint32_t value){
	value *= value;
	value += 0x19a1;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	return value-111;
}
uint32_t test_func2608(uint32_t value){
	value *= value;
	value += 0x7245;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	return value-28;
}
uint32_t test_func2609(uint32_t value){
	value *= value;
	value += 0x8e85;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 4);
	return value-45;
}
uint32_t test_func2610(uint32_t value){
	value *= value;
	value += 0x5087;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	value = (value >> 4) + (value >> 6);
	return value-62;
}
uint32_t test_func2611(uint32_t value){
	value *= value;
	value += 0x45c5;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-55;
}
uint32_t test_func2612(uint32_t value){
	value *= value;
	value += 0x6f8a;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	return value-115;
}
uint32_t test_func2613(uint32_t value){
	value *= value;
	value += 0x5b79;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	return value-18;
}
uint32_t test_func2614(uint32_t value){
	value *= value;
	value += 0x8c06;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	return value-75;
}
uint32_t test_func2615(uint32_t value){
	value *= value;
	value += 0x30fb;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-2;
}
uint32_t test_func2616(uint32_t value){
	value *= value;
	value += 0x2ff5;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	return value-97;
}
uint32_t test_func2617(uint32_t value){
	value *= value;
	value += 0x7ce4;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-42;
}
uint32_t test_func2618(uint32_t value){
	value *= value;
	value += 0x428e;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 4);
	return value-6;
}
uint32_t test_func2619(uint32_t value){
	value *= value;
	value += 0x5b0c;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-37;
}
uint32_t test_func2620(uint32_t value){
	value *= value;
	value += 0x184c;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	return value-77;
}
uint32_t test_func2621(uint32_t value){
	value *= value;
	value += 0x5c8e;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	return value-46;
}
uint32_t test_func2622(uint32_t value){
	value *= value;
	value += 0x82e7;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-61;
}
uint32_t test_func2623(uint32_t value){
	value *= value;
	value += 0x17c1;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	return value-58;
}
uint32_t test_func2624(uint32_t value){
	value *= value;
	value += 0x6158;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-96;
}
uint32_t test_func2625(uint32_t value){
	value *= value;
	value += 0x383e;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	return value-31;
}
uint32_t test_func2626(uint32_t value){
	value *= value;
	value += 0x2fd8;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-122;
}
uint32_t test_func2627(uint32_t value){
	value *= value;
	value += 0x8ee0;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-39;
}
uint32_t test_func2628(uint32_t value){
	value *= value;
	value += 0x17e1;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 2);
	return value-19;
}
uint32_t test_func2629(uint32_t value){
	value *= value;
	value += 0x21be;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	return value-63;
}
uint32_t test_func2630(uint32_t value){
	value *= value;
	value += 0x802b;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	return value-29;
}
uint32_t test_func2631(uint32_t value){
	value *= value;
	value += 0x3c31;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	return value-20;
}
uint32_t test_func2632(uint32_t value){
	value *= value;
	value += 0x1caf;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 2);
	return value-31;
}
uint32_t test_func2633(uint32_t value){
	value *= value;
	value += 0x7ed4;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	return value-34;
}
uint32_t test_func2634(uint32_t value){
	value *= value;
	value += 0x7ea6;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	return value-69;
}
uint32_t test_func2635(uint32_t value){
	value *= value;
	value += 0x6f7e;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	return value-113;
}
uint32_t test_func2636(uint32_t value){
	value *= value;
	value += 0x2489;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	return value-10;
}
uint32_t test_func2637(uint32_t value){
	value *= value;
	value += 0x8949;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	return value-29;
}
uint32_t test_func2638(uint32_t value){
	value *= value;
	value += 0x8a12;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 8);
	return value-87;
}
uint32_t test_func2639(uint32_t value){
	value *= value;
	value += 0x4c8d;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	return value-1;
}
uint32_t test_func2640(uint32_t value){
	value *= value;
	value += 0x3839;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	return value-34;
}
uint32_t test_func2641(uint32_t value){
	value *= value;
	value += 0x4ee4;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 5);
	return value-78;
}
uint32_t test_func2642(uint32_t value){
	value *= value;
	value += 0x5536;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	return value-9;
}
uint32_t test_func2643(uint32_t value){
	value *= value;
	value += 0x4b27;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-62;
}
uint32_t test_func2644(uint32_t value){
	value *= value;
	value += 0x3485;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	return value-120;
}
uint32_t test_func2645(uint32_t value){
	value *= value;
	value += 0x316f;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	return value-28;
}
uint32_t test_func2646(uint32_t value){
	value *= value;
	value += 0x66dc;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-78;
}
uint32_t test_func2647(uint32_t value){
	value *= value;
	value += 0x3714;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	return value-119;
}
uint32_t test_func2648(uint32_t value){
	value *= value;
	value += 0x4a35;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-110;
}
uint32_t test_func2649(uint32_t value){
	value *= value;
	value += 0x66b0;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-55;
}
uint32_t test_func2650(uint32_t value){
	value *= value;
	value += 0x19ca;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	return value-108;
}
uint32_t test_func2651(uint32_t value){
	value *= value;
	value += 0x301c;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-64;
}
uint32_t test_func2652(uint32_t value){
	value *= value;
	value += 0x7e13;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	return value-38;
}
uint32_t test_func2653(uint32_t value){
	value *= value;
	value += 0x7871;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	return value-21;
}
uint32_t test_func2654(uint32_t value){
	value *= value;
	value += 0x1cc9;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	return value-105;
}
uint32_t test_func2655(uint32_t value){
	value *= value;
	value += 0x2a07;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	return value-114;
}
uint32_t test_func2656(uint32_t value){
	value *= value;
	value += 0x28e6;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 8);
	return value-13;
}
uint32_t test_func2657(uint32_t value){
	value *= value;
	value += 0x4478;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	return value-115;
}
uint32_t test_func2658(uint32_t value){
	value *= value;
	value += 0x72a1;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-23;
}
uint32_t test_func2659(uint32_t value){
	value *= value;
	value += 0x6c9c;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-47;
}
uint32_t test_func2660(uint32_t value){
	value *= value;
	value += 0x7775;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	return value-89;
}
uint32_t test_func2661(uint32_t value){
	value *= value;
	value += 0x7c8d;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-89;
}
uint32_t test_func2662(uint32_t value){
	value *= value;
	value += 0x721a;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	return value-14;
}
uint32_t test_func2663(uint32_t value){
	value *= value;
	value += 0x13a4;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-100;
}
uint32_t test_func2664(uint32_t value){
	value *= value;
	value += 0x6a89;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	return value-4;
}
uint32_t test_func2665(uint32_t value){
	value *= value;
	value += 0x267a;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	return value-25;
}
uint32_t test_func2666(uint32_t value){
	value *= value;
	value += 0x45fc;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	return value-48;
}
uint32_t test_func2667(uint32_t value){
	value *= value;
	value += 0x8ee8;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	return value-66;
}
uint32_t test_func2668(uint32_t value){
	value *= value;
	value += 0x56ea;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	return value-86;
}
uint32_t test_func2669(uint32_t value){
	value *= value;
	value += 0x1c06;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 1);
	return value-69;
}
uint32_t test_func2670(uint32_t value){
	value *= value;
	value += 0x6d0e;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	return value-38;
}
uint32_t test_func2671(uint32_t value){
	value *= value;
	value += 0x222d;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	return value-70;
}
uint32_t test_func2672(uint32_t value){
	value *= value;
	value += 0x6560;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-90;
}
uint32_t test_func2673(uint32_t value){
	value *= value;
	value += 0x8af8;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	return value-64;
}
uint32_t test_func2674(uint32_t value){
	value *= value;
	value += 0x3a19;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	return value-94;
}
uint32_t test_func2675(uint32_t value){
	value *= value;
	value += 0x653e;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-48;
}
uint32_t test_func2676(uint32_t value){
	value *= value;
	value += 0x12b3;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	return value-101;
}
uint32_t test_func2677(uint32_t value){
	value *= value;
	value += 0x7519;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-45;
}
uint32_t test_func2678(uint32_t value){
	value *= value;
	value += 0x53e5;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-20;
}
uint32_t test_func2679(uint32_t value){
	value *= value;
	value += 0x43e2;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	return value-13;
}
uint32_t test_func2680(uint32_t value){
	value *= value;
	value += 0x2faa;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	return value-23;
}
uint32_t test_func2681(uint32_t value){
	value *= value;
	value += 0x3031;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	return value-125;
}
uint32_t test_func2682(uint32_t value){
	value *= value;
	value += 0x353a;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	return value-71;
}
uint32_t test_func2683(uint32_t value){
	value *= value;
	value += 0x7de0;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-47;
}
uint32_t test_func2684(uint32_t value){
	value *= value;
	value += 0x610f;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	return value-79;
}
uint32_t test_func2685(uint32_t value){
	value *= value;
	value += 0x6608;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	return value-103;
}
uint32_t test_func2686(uint32_t value){
	value *= value;
	value += 0x2ce0;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	return value-65;
}
uint32_t test_func2687(uint32_t value){
	value *= value;
	value += 0x2701;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-47;
}
uint32_t test_func2688(uint32_t value){
	value *= value;
	value += 0x1fa8;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	return value-61;
}
uint32_t test_func2689(uint32_t value){
	value *= value;
	value += 0x1465;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-106;
}
uint32_t test_func2690(uint32_t value){
	value *= value;
	value += 0x5d9e;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	return value-17;
}
uint32_t test_func2691(uint32_t value){
	value *= value;
	value += 0x270d;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-116;
}
uint32_t test_func2692(uint32_t value){
	value *= value;
	value += 0x383e;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 4);
	return value-86;
}
uint32_t test_func2693(uint32_t value){
	value *= value;
	value += 0x8d11;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 4);
	return value-74;
}
uint32_t test_func2694(uint32_t value){
	value *= value;
	value += 0x3e3f;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	return value-17;
}
uint32_t test_func2695(uint32_t value){
	value *= value;
	value += 0x39cc;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-37;
}
uint32_t test_func2696(uint32_t value){
	value *= value;
	value += 0x4b98;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	return value-87;
}
uint32_t test_func2697(uint32_t value){
	value *= value;
	value += 0x75d5;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	return value-25;
}
uint32_t test_func2698(uint32_t value){
	value *= value;
	value += 0x1986;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	return value-98;
}
uint32_t test_func2699(uint32_t value){
	value *= value;
	value += 0x6f05;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 1);
	return value-56;
}
uint32_t test_func2700(uint32_t value){
	value *= value;
	value += 0x4e80;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	return value-67;
}
uint32_t test_func2701(uint32_t value){
	value *= value;
	value += 0x4877;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	return value-45;
}
uint32_t test_func2702(uint32_t value){
	value *= value;
	value += 0x8e3f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-109;
}
uint32_t test_func2703(uint32_t value){
	value *= value;
	value += 0x2a82;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	return value-100;
}
uint32_t test_func2704(uint32_t value){
	value *= value;
	value += 0x89bc;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	return value-105;
}
uint32_t test_func2705(uint32_t value){
	value *= value;
	value += 0x52bf;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-36;
}
uint32_t test_func2706(uint32_t value){
	value *= value;
	value += 0x8f31;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-100;
}
uint32_t test_func2707(uint32_t value){
	value *= value;
	value += 0x2409;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-46;
}
uint32_t test_func2708(uint32_t value){
	value *= value;
	value += 0x1a15;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	return value-93;
}
uint32_t test_func2709(uint32_t value){
	value *= value;
	value += 0x3677;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	return value-100;
}
uint32_t test_func2710(uint32_t value){
	value *= value;
	value += 0x6323;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	return value-61;
}
uint32_t test_func2711(uint32_t value){
	value *= value;
	value += 0x6763;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	return value-98;
}
uint32_t test_func2712(uint32_t value){
	value *= value;
	value += 0x7053;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 4);
	return value-122;
}
uint32_t test_func2713(uint32_t value){
	value *= value;
	value += 0x6965;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	return value-31;
}
uint32_t test_func2714(uint32_t value){
	value *= value;
	value += 0x24de;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	return value-57;
}
uint32_t test_func2715(uint32_t value){
	value *= value;
	value += 0x5458;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-17;
}
uint32_t test_func2716(uint32_t value){
	value *= value;
	value += 0x513e;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	return value-104;
}
uint32_t test_func2717(uint32_t value){
	value *= value;
	value += 0x3553;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	return value-73;
}
uint32_t test_func2718(uint32_t value){
	value *= value;
	value += 0x432b;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	return value-99;
}
uint32_t test_func2719(uint32_t value){
	value *= value;
	value += 0x1eaf;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	return value-22;
}
uint32_t test_func2720(uint32_t value){
	value *= value;
	value += 0x559d;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	return value-19;
}
uint32_t test_func2721(uint32_t value){
	value *= value;
	value += 0x3807;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	return value-33;
}
uint32_t test_func2722(uint32_t value){
	value *= value;
	value += 0x80d0;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 3);
	return value-9;
}
uint32_t test_func2723(uint32_t value){
	value *= value;
	value += 0x4e32;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-20;
}
uint32_t test_func2724(uint32_t value){
	value *= value;
	value += 0x6a3a;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	return value-45;
}
uint32_t test_func2725(uint32_t value){
	value *= value;
	value += 0x6349;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	return value-47;
}
uint32_t test_func2726(uint32_t value){
	value *= value;
	value += 0x7495;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	return value-72;
}
uint32_t test_func2727(uint32_t value){
	value *= value;
	value += 0x3ea7;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	return value-117;
}
uint32_t test_func2728(uint32_t value){
	value *= value;
	value += 0x4fdb;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	return value-53;
}
uint32_t test_func2729(uint32_t value){
	value *= value;
	value += 0x7ce3;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	return value-67;
}
uint32_t test_func2730(uint32_t value){
	value *= value;
	value += 0x8944;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-125;
}
uint32_t test_func2731(uint32_t value){
	value *= value;
	value += 0x1fd7;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 2);
	return value-109;
}
uint32_t test_func2732(uint32_t value){
	value *= value;
	value += 0x1b49;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	value = (value >> 9) + (value >> 8);
	return value-113;
}
uint32_t test_func2733(uint32_t value){
	value *= value;
	value += 0x1e9b;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	value = (value >> 7) + (value >> 2);
	return value-111;
}
uint32_t test_func2734(uint32_t value){
	value *= value;
	value += 0x7da3;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	return value-81;
}
uint32_t test_func2735(uint32_t value){
	value *= value;
	value += 0x758a;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	return value-120;
}
uint32_t test_func2736(uint32_t value){
	value *= value;
	value += 0x354c;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	return value-107;
}
uint32_t test_func2737(uint32_t value){
	value *= value;
	value += 0x363b;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	return value-23;
}
uint32_t test_func2738(uint32_t value){
	value *= value;
	value += 0x647c;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	return value-57;
}
uint32_t test_func2739(uint32_t value){
	value *= value;
	value += 0x1787;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-88;
}
uint32_t test_func2740(uint32_t value){
	value *= value;
	value += 0x5aab;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	return value-123;
}
uint32_t test_func2741(uint32_t value){
	value *= value;
	value += 0x8589;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	return value-97;
}
uint32_t test_func2742(uint32_t value){
	value *= value;
	value += 0x2495;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	return value-103;
}
uint32_t test_func2743(uint32_t value){
	value *= value;
	value += 0x3198;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-21;
}
uint32_t test_func2744(uint32_t value){
	value *= value;
	value += 0x1c30;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-60;
}
uint32_t test_func2745(uint32_t value){
	value *= value;
	value += 0x224e;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 6) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	return value-56;
}
uint32_t test_func2746(uint32_t value){
	value *= value;
	value += 0x78b6;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-98;
}
uint32_t test_func2747(uint32_t value){
	value *= value;
	value += 0x4383;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-6;
}
uint32_t test_func2748(uint32_t value){
	value *= value;
	value += 0x5ea1;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 7);
	return value-19;
}
uint32_t test_func2749(uint32_t value){
	value *= value;
	value += 0x7651;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-87;
}
uint32_t test_func2750(uint32_t value){
	value *= value;
	value += 0x6fa9;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-111;
}
uint32_t test_func2751(uint32_t value){
	value *= value;
	value += 0x2111;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	return value-66;
}
uint32_t test_func2752(uint32_t value){
	value *= value;
	value += 0x5ac7;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	return value-43;
}
uint32_t test_func2753(uint32_t value){
	value *= value;
	value += 0x3f5c;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	return value-60;
}
uint32_t test_func2754(uint32_t value){
	value *= value;
	value += 0x6c35;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	return value-34;
}
uint32_t test_func2755(uint32_t value){
	value *= value;
	value += 0x720a;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-48;
}
uint32_t test_func2756(uint32_t value){
	value *= value;
	value += 0x1d6a;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	return value-123;
}
uint32_t test_func2757(uint32_t value){
	value *= value;
	value += 0x8f35;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	return value-43;
}
uint32_t test_func2758(uint32_t value){
	value *= value;
	value += 0x2521;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-81;
}
uint32_t test_func2759(uint32_t value){
	value *= value;
	value += 0x3236;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-117;
}
uint32_t test_func2760(uint32_t value){
	value *= value;
	value += 0x8752;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	return value-66;
}
uint32_t test_func2761(uint32_t value){
	value *= value;
	value += 0x4ba5;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	return value-53;
}
uint32_t test_func2762(uint32_t value){
	value *= value;
	value += 0x2536;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-30;
}
uint32_t test_func2763(uint32_t value){
	value *= value;
	value += 0x315d;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	return value-10;
}
uint32_t test_func2764(uint32_t value){
	value *= value;
	value += 0x4d46;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 4);
	return value-126;
}
uint32_t test_func2765(uint32_t value){
	value *= value;
	value += 0x2e74;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	return value-50;
}
uint32_t test_func2766(uint32_t value){
	value *= value;
	value += 0x4b3c;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	return value-110;
}
uint32_t test_func2767(uint32_t value){
	value *= value;
	value += 0x1346;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	return value-39;
}
uint32_t test_func2768(uint32_t value){
	value *= value;
	value += 0x7810;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	return value-4;
}
uint32_t test_func2769(uint32_t value){
	value *= value;
	value += 0x456a;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	return value-62;
}
uint32_t test_func2770(uint32_t value){
	value *= value;
	value += 0x49fb;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	return value-122;
}
uint32_t test_func2771(uint32_t value){
	value *= value;
	value += 0x4fba;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-76;
}
uint32_t test_func2772(uint32_t value){
	value *= value;
	value += 0x6476;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-99;
}
uint32_t test_func2773(uint32_t value){
	value *= value;
	value += 0x724f;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	return value-67;
}
uint32_t test_func2774(uint32_t value){
	value *= value;
	value += 0x283a;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	return value-52;
}
uint32_t test_func2775(uint32_t value){
	value *= value;
	value += 0x3281;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-74;
}
uint32_t test_func2776(uint32_t value){
	value *= value;
	value += 0x4341;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	return value-120;
}
uint32_t test_func2777(uint32_t value){
	value *= value;
	value += 0x6aea;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	return value-108;
}
uint32_t test_func2778(uint32_t value){
	value *= value;
	value += 0x40c3;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	return value-97;
}
uint32_t test_func2779(uint32_t value){
	value *= value;
	value += 0x5b63;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-47;
}
uint32_t test_func2780(uint32_t value){
	value *= value;
	value += 0x1939;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-109;
}
uint32_t test_func2781(uint32_t value){
	value *= value;
	value += 0x3904;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-51;
}
uint32_t test_func2782(uint32_t value){
	value *= value;
	value += 0x425c;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	return value-7;
}
uint32_t test_func2783(uint32_t value){
	value *= value;
	value += 0x3e28;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	return value-88;
}
uint32_t test_func2784(uint32_t value){
	value *= value;
	value += 0x3f25;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	return value-40;
}
uint32_t test_func2785(uint32_t value){
	value *= value;
	value += 0x3a65;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	return value-85;
}
uint32_t test_func2786(uint32_t value){
	value *= value;
	value += 0x2fce;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 2);
	return value-118;
}
uint32_t test_func2787(uint32_t value){
	value *= value;
	value += 0x2297;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-101;
}
uint32_t test_func2788(uint32_t value){
	value *= value;
	value += 0x61ce;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	return value-99;
}
uint32_t test_func2789(uint32_t value){
	value *= value;
	value += 0x20d5;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	return value-91;
}
uint32_t test_func2790(uint32_t value){
	value *= value;
	value += 0x5fe0;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	return value-74;
}
uint32_t test_func2791(uint32_t value){
	value *= value;
	value += 0x2479;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	return value-69;
}
uint32_t test_func2792(uint32_t value){
	value *= value;
	value += 0x81fd;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 8);
	value = (value >> 5) + (value >> 3);
	return value-24;
}
uint32_t test_func2793(uint32_t value){
	value *= value;
	value += 0x721c;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-18;
}
uint32_t test_func2794(uint32_t value){
	value *= value;
	value += 0x7d5c;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-99;
}
uint32_t test_func2795(uint32_t value){
	value *= value;
	value += 0x3396;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	return value-41;
}
uint32_t test_func2796(uint32_t value){
	value *= value;
	value += 0x7478;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-14;
}
uint32_t test_func2797(uint32_t value){
	value *= value;
	value += 0x8801;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-16;
}
uint32_t test_func2798(uint32_t value){
	value *= value;
	value += 0x8708;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-105;
}
uint32_t test_func2799(uint32_t value){
	value *= value;
	value += 0x13b6;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 6);
	return value-11;
}
uint32_t test_func2800(uint32_t value){
	value *= value;
	value += 0x6207;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	return value-79;
}
uint32_t test_func2801(uint32_t value){
	value *= value;
	value += 0x104e;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-53;
}
uint32_t test_func2802(uint32_t value){
	value *= value;
	value += 0x4fae;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	return value-76;
}
uint32_t test_func2803(uint32_t value){
	value *= value;
	value += 0x5ca1;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-46;
}
uint32_t test_func2804(uint32_t value){
	value *= value;
	value += 0x4774;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 8);
	return value-50;
}
uint32_t test_func2805(uint32_t value){
	value *= value;
	value += 0x8cc9;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	return value-41;
}
uint32_t test_func2806(uint32_t value){
	value *= value;
	value += 0x7e14;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	return value-68;
}
uint32_t test_func2807(uint32_t value){
	value *= value;
	value += 0x7a1e;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	return value-30;
}
uint32_t test_func2808(uint32_t value){
	value *= value;
	value += 0x7586;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	return value-83;
}
uint32_t test_func2809(uint32_t value){
	value *= value;
	value += 0x533b;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-89;
}
uint32_t test_func2810(uint32_t value){
	value *= value;
	value += 0x8d03;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-87;
}
uint32_t test_func2811(uint32_t value){
	value *= value;
	value += 0x2bf7;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 6);
	value = (value >> 9) + (value >> 8);
	return value-43;
}
uint32_t test_func2812(uint32_t value){
	value *= value;
	value += 0x1104;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-24;
}
uint32_t test_func2813(uint32_t value){
	value *= value;
	value += 0x8d6b;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	return value-125;
}
uint32_t test_func2814(uint32_t value){
	value *= value;
	value += 0x4b42;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	return value-73;
}
uint32_t test_func2815(uint32_t value){
	value *= value;
	value += 0x85f2;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	return value-115;
}
uint32_t test_func2816(uint32_t value){
	value *= value;
	value += 0x12b7;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-44;
}
uint32_t test_func2817(uint32_t value){
	value *= value;
	value += 0x3923;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	return value-20;
}
uint32_t test_func2818(uint32_t value){
	value *= value;
	value += 0x5b9b;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	return value-43;
}
uint32_t test_func2819(uint32_t value){
	value *= value;
	value += 0x6fd8;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-87;
}
uint32_t test_func2820(uint32_t value){
	value *= value;
	value += 0x4767;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 6);
	return value-4;
}
uint32_t test_func2821(uint32_t value){
	value *= value;
	value += 0x2829;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-97;
}
uint32_t test_func2822(uint32_t value){
	value *= value;
	value += 0x34d4;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	return value-88;
}
uint32_t test_func2823(uint32_t value){
	value *= value;
	value += 0x2570;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	return value-4;
}
uint32_t test_func2824(uint32_t value){
	value *= value;
	value += 0x4fdb;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	return value-92;
}
uint32_t test_func2825(uint32_t value){
	value *= value;
	value += 0x8046;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	return value-118;
}
uint32_t test_func2826(uint32_t value){
	value *= value;
	value += 0x21b6;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	return value-111;
}
uint32_t test_func2827(uint32_t value){
	value *= value;
	value += 0x3684;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	return value-106;
}
uint32_t test_func2828(uint32_t value){
	value *= value;
	value += 0x20dd;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	return value-62;
}
uint32_t test_func2829(uint32_t value){
	value *= value;
	value += 0x3b42;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-44;
}
uint32_t test_func2830(uint32_t value){
	value *= value;
	value += 0x4109;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	return value-91;
}
uint32_t test_func2831(uint32_t value){
	value *= value;
	value += 0x86da;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-70;
}
uint32_t test_func2832(uint32_t value){
	value *= value;
	value += 0x8333;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-111;
}
uint32_t test_func2833(uint32_t value){
	value *= value;
	value += 0x26e5;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	return value-31;
}
uint32_t test_func2834(uint32_t value){
	value *= value;
	value += 0x8595;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	return value-76;
}
uint32_t test_func2835(uint32_t value){
	value *= value;
	value += 0x4e3c;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-27;
}
uint32_t test_func2836(uint32_t value){
	value *= value;
	value += 0x13a6;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	return value-10;
}
uint32_t test_func2837(uint32_t value){
	value *= value;
	value += 0x64f7;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-54;
}
uint32_t test_func2838(uint32_t value){
	value *= value;
	value += 0x3621;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-56;
}
uint32_t test_func2839(uint32_t value){
	value *= value;
	value += 0x1870;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	return value-48;
}
uint32_t test_func2840(uint32_t value){
	value *= value;
	value += 0x42fe;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	return value-105;
}
uint32_t test_func2841(uint32_t value){
	value *= value;
	value += 0x6b3f;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-32;
}
uint32_t test_func2842(uint32_t value){
	value *= value;
	value += 0x6d77;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	return value-98;
}
uint32_t test_func2843(uint32_t value){
	value *= value;
	value += 0x453e;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-29;
}
uint32_t test_func2844(uint32_t value){
	value *= value;
	value += 0x5603;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	return value-51;
}
uint32_t test_func2845(uint32_t value){
	value *= value;
	value += 0x8386;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	return value-84;
}
uint32_t test_func2846(uint32_t value){
	value *= value;
	value += 0x1a5d;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	return value-84;
}
uint32_t test_func2847(uint32_t value){
	value *= value;
	value += 0x8870;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	return value-56;
}
uint32_t test_func2848(uint32_t value){
	value *= value;
	value += 0x657d;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	return value-82;
}
uint32_t test_func2849(uint32_t value){
	value *= value;
	value += 0x4b94;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	return value-17;
}
uint32_t test_func2850(uint32_t value){
	value *= value;
	value += 0x7f9c;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	return value-94;
}
uint32_t test_func2851(uint32_t value){
	value *= value;
	value += 0x69cc;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-38;
}
uint32_t test_func2852(uint32_t value){
	value *= value;
	value += 0x5e33;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-123;
}
uint32_t test_func2853(uint32_t value){
	value *= value;
	value += 0x3531;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	return value-92;
}
uint32_t test_func2854(uint32_t value){
	value *= value;
	value += 0x33fc;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	return value-25;
}
uint32_t test_func2855(uint32_t value){
	value *= value;
	value += 0x451c;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	return value-83;
}
uint32_t test_func2856(uint32_t value){
	value *= value;
	value += 0x80ee;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 2);
	return value-46;
}
uint32_t test_func2857(uint32_t value){
	value *= value;
	value += 0x8625;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	return value-7;
}
uint32_t test_func2858(uint32_t value){
	value *= value;
	value += 0x2244;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	return value-99;
}
uint32_t test_func2859(uint32_t value){
	value *= value;
	value += 0x4a26;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	return value-113;
}
uint32_t test_func2860(uint32_t value){
	value *= value;
	value += 0x6276;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-45;
}
uint32_t test_func2861(uint32_t value){
	value *= value;
	value += 0x5837;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-38;
}
uint32_t test_func2862(uint32_t value){
	value *= value;
	value += 0x893e;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	return value-104;
}
uint32_t test_func2863(uint32_t value){
	value *= value;
	value += 0x7cb3;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	return value-122;
}
uint32_t test_func2864(uint32_t value){
	value *= value;
	value += 0x6b93;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-5;
}
uint32_t test_func2865(uint32_t value){
	value *= value;
	value += 0x1931;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	return value-26;
}
uint32_t test_func2866(uint32_t value){
	value *= value;
	value += 0x7bb0;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	return value-25;
}
uint32_t test_func2867(uint32_t value){
	value *= value;
	value += 0x348a;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-49;
}
uint32_t test_func2868(uint32_t value){
	value *= value;
	value += 0x590d;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	return value-12;
}
uint32_t test_func2869(uint32_t value){
	value *= value;
	value += 0x8ad9;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 1);
	return value-8;
}
uint32_t test_func2870(uint32_t value){
	value *= value;
	value += 0x6063;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 8);
	return value-45;
}
uint32_t test_func2871(uint32_t value){
	value *= value;
	value += 0x1d75;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-34;
}
uint32_t test_func2872(uint32_t value){
	value *= value;
	value += 0x3bab;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	return value-93;
}
uint32_t test_func2873(uint32_t value){
	value *= value;
	value += 0x42f8;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-96;
}
uint32_t test_func2874(uint32_t value){
	value *= value;
	value += 0x721f;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	return value-37;
}
uint32_t test_func2875(uint32_t value){
	value *= value;
	value += 0x373a;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-31;
}
uint32_t test_func2876(uint32_t value){
	value *= value;
	value += 0x7836;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	return value-93;
}
uint32_t test_func2877(uint32_t value){
	value *= value;
	value += 0x2b55;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	return value-88;
}
uint32_t test_func2878(uint32_t value){
	value *= value;
	value += 0x3fab;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	return value-76;
}
uint32_t test_func2879(uint32_t value){
	value *= value;
	value += 0x55a2;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	return value-68;
}
uint32_t test_func2880(uint32_t value){
	value *= value;
	value += 0x4777;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 1);
	return value-62;
}
uint32_t test_func2881(uint32_t value){
	value *= value;
	value += 0x81ba;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 8);
	return value-113;
}
uint32_t test_func2882(uint32_t value){
	value *= value;
	value += 0x2bd1;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	return value-49;
}
uint32_t test_func2883(uint32_t value){
	value *= value;
	value += 0x2075;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-112;
}
uint32_t test_func2884(uint32_t value){
	value *= value;
	value += 0x3633;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 8);
	return value-108;
}
uint32_t test_func2885(uint32_t value){
	value *= value;
	value += 0x57ed;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	return value-109;
}
uint32_t test_func2886(uint32_t value){
	value *= value;
	value += 0x6d57;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-43;
}
uint32_t test_func2887(uint32_t value){
	value *= value;
	value += 0x137b;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	return value-81;
}
uint32_t test_func2888(uint32_t value){
	value *= value;
	value += 0x2535;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	return value-44;
}
uint32_t test_func2889(uint32_t value){
	value *= value;
	value += 0x13b7;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-95;
}
uint32_t test_func2890(uint32_t value){
	value *= value;
	value += 0x8f06;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	return value-94;
}
uint32_t test_func2891(uint32_t value){
	value *= value;
	value += 0x7e7b;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-90;
}
uint32_t test_func2892(uint32_t value){
	value *= value;
	value += 0x4944;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	return value-124;
}
uint32_t test_func2893(uint32_t value){
	value *= value;
	value += 0x6ee0;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	return value-31;
}
uint32_t test_func2894(uint32_t value){
	value *= value;
	value += 0x6fa6;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-50;
}
uint32_t test_func2895(uint32_t value){
	value *= value;
	value += 0x853f;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 1);
	return value-70;
}
uint32_t test_func2896(uint32_t value){
	value *= value;
	value += 0x2b27;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	return value-47;
}
uint32_t test_func2897(uint32_t value){
	value *= value;
	value += 0x7730;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	return value-70;
}
uint32_t test_func2898(uint32_t value){
	value *= value;
	value += 0x41ff;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-85;
}
uint32_t test_func2899(uint32_t value){
	value *= value;
	value += 0x1f8d;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-22;
}
uint32_t test_func2900(uint32_t value){
	value *= value;
	value += 0x27a7;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-84;
}
uint32_t test_func2901(uint32_t value){
	value *= value;
	value += 0x8e6f;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 4);
	return value-65;
}
uint32_t test_func2902(uint32_t value){
	value *= value;
	value += 0x8cd8;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 2);
	return value-69;
}
uint32_t test_func2903(uint32_t value){
	value *= value;
	value += 0x192e;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 4);
	return value-22;
}
uint32_t test_func2904(uint32_t value){
	value *= value;
	value += 0x6f8c;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	return value-77;
}
uint32_t test_func2905(uint32_t value){
	value *= value;
	value += 0x6a64;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	return value-59;
}
uint32_t test_func2906(uint32_t value){
	value *= value;
	value += 0x2afb;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	return value-62;
}
uint32_t test_func2907(uint32_t value){
	value *= value;
	value += 0x11ea;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	return value-86;
}
uint32_t test_func2908(uint32_t value){
	value *= value;
	value += 0x879e;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	return value-58;
}
uint32_t test_func2909(uint32_t value){
	value *= value;
	value += 0x14d8;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-43;
}
uint32_t test_func2910(uint32_t value){
	value *= value;
	value += 0x4b2e;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	return value-76;
}
uint32_t test_func2911(uint32_t value){
	value *= value;
	value += 0x7d88;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	value = (value >> 3) + (value >> 8);
	return value-53;
}
uint32_t test_func2912(uint32_t value){
	value *= value;
	value += 0x48a4;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 1);
	return value-13;
}
uint32_t test_func2913(uint32_t value){
	value *= value;
	value += 0x6b93;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	return value-81;
}
uint32_t test_func2914(uint32_t value){
	value *= value;
	value += 0x703a;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	return value-63;
}
uint32_t test_func2915(uint32_t value){
	value *= value;
	value += 0x23d2;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-86;
}
uint32_t test_func2916(uint32_t value){
	value *= value;
	value += 0x5f68;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	return value-119;
}
uint32_t test_func2917(uint32_t value){
	value *= value;
	value += 0x205d;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-53;
}
uint32_t test_func2918(uint32_t value){
	value *= value;
	value += 0x70e7;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	return value-48;
}
uint32_t test_func2919(uint32_t value){
	value *= value;
	value += 0x208e;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	return value-32;
}
uint32_t test_func2920(uint32_t value){
	value *= value;
	value += 0x4cb0;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	return value-116;
}
uint32_t test_func2921(uint32_t value){
	value *= value;
	value += 0x38fe;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	return value-36;
}
uint32_t test_func2922(uint32_t value){
	value *= value;
	value += 0x77fc;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-126;
}
uint32_t test_func2923(uint32_t value){
	value *= value;
	value += 0x6385;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-72;
}
uint32_t test_func2924(uint32_t value){
	value *= value;
	value += 0x6545;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	return value-78;
}
uint32_t test_func2925(uint32_t value){
	value *= value;
	value += 0x8f3d;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	return value-52;
}
uint32_t test_func2926(uint32_t value){
	value *= value;
	value += 0x8443;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	return value-83;
}
uint32_t test_func2927(uint32_t value){
	value *= value;
	value += 0x307f;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 4);
	return value-72;
}
uint32_t test_func2928(uint32_t value){
	value *= value;
	value += 0x51ef;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	return value-12;
}
uint32_t test_func2929(uint32_t value){
	value *= value;
	value += 0x50e3;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-69;
}
uint32_t test_func2930(uint32_t value){
	value *= value;
	value += 0x6882;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-34;
}
uint32_t test_func2931(uint32_t value){
	value *= value;
	value += 0x1f44;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-99;
}
uint32_t test_func2932(uint32_t value){
	value *= value;
	value += 0x8f75;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-7;
}
uint32_t test_func2933(uint32_t value){
	value *= value;
	value += 0x7fb8;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-125;
}
uint32_t test_func2934(uint32_t value){
	value *= value;
	value += 0x4b82;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	return value-32;
}
uint32_t test_func2935(uint32_t value){
	value *= value;
	value += 0x1b9b;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	return value-39;
}
uint32_t test_func2936(uint32_t value){
	value *= value;
	value += 0x6ea1;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	return value-88;
}
uint32_t test_func2937(uint32_t value){
	value *= value;
	value += 0x7184;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	return value-77;
}
uint32_t test_func2938(uint32_t value){
	value *= value;
	value += 0x280b;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 4);
	return value-80;
}
uint32_t test_func2939(uint32_t value){
	value *= value;
	value += 0x654d;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	return value-97;
}
uint32_t test_func2940(uint32_t value){
	value *= value;
	value += 0x1439;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	return value-103;
}
uint32_t test_func2941(uint32_t value){
	value *= value;
	value += 0x500f;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	return value-107;
}
uint32_t test_func2942(uint32_t value){
	value *= value;
	value += 0x4ce5;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 8);
	return value-121;
}
uint32_t test_func2943(uint32_t value){
	value *= value;
	value += 0x1023;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-49;
}
uint32_t test_func2944(uint32_t value){
	value *= value;
	value += 0x7906;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 5);
	return value-96;
}
uint32_t test_func2945(uint32_t value){
	value *= value;
	value += 0x1921;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-85;
}
uint32_t test_func2946(uint32_t value){
	value *= value;
	value += 0x5cd7;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	return value-46;
}
uint32_t test_func2947(uint32_t value){
	value *= value;
	value += 0x83e2;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-117;
}
uint32_t test_func2948(uint32_t value){
	value *= value;
	value += 0x69d0;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 1);
	return value-58;
}
uint32_t test_func2949(uint32_t value){
	value *= value;
	value += 0x1e81;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	return value-80;
}
uint32_t test_func2950(uint32_t value){
	value *= value;
	value += 0x4eaa;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-72;
}
uint32_t test_func2951(uint32_t value){
	value *= value;
	value += 0x7c55;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 8);
	return value-93;
}
uint32_t test_func2952(uint32_t value){
	value *= value;
	value += 0x875f;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	return value-44;
}
uint32_t test_func2953(uint32_t value){
	value *= value;
	value += 0x85f8;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	return value-111;
}
uint32_t test_func2954(uint32_t value){
	value *= value;
	value += 0x6d26;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-100;
}
uint32_t test_func2955(uint32_t value){
	value *= value;
	value += 0x8943;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-87;
}
uint32_t test_func2956(uint32_t value){
	value *= value;
	value += 0x467a;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	return value-62;
}
uint32_t test_func2957(uint32_t value){
	value *= value;
	value += 0x494e;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	return value-5;
}
uint32_t test_func2958(uint32_t value){
	value *= value;
	value += 0x5713;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	return value-111;
}
uint32_t test_func2959(uint32_t value){
	value *= value;
	value += 0x8e73;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-35;
}
uint32_t test_func2960(uint32_t value){
	value *= value;
	value += 0x6feb;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	return value-64;
}
uint32_t test_func2961(uint32_t value){
	value *= value;
	value += 0x364b;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	return value-52;
}
uint32_t test_func2962(uint32_t value){
	value *= value;
	value += 0x7f39;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-27;
}
uint32_t test_func2963(uint32_t value){
	value *= value;
	value += 0x43ae;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-63;
}
uint32_t test_func2964(uint32_t value){
	value *= value;
	value += 0x2078;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-64;
}
uint32_t test_func2965(uint32_t value){
	value *= value;
	value += 0x6eb6;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	return value-96;
}
uint32_t test_func2966(uint32_t value){
	value *= value;
	value += 0x2c60;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-92;
}
uint32_t test_func2967(uint32_t value){
	value *= value;
	value += 0x34bc;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 1);
	return value-119;
}
uint32_t test_func2968(uint32_t value){
	value *= value;
	value += 0x48ea;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-34;
}
uint32_t test_func2969(uint32_t value){
	value *= value;
	value += 0x6859;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	return value-58;
}
uint32_t test_func2970(uint32_t value){
	value *= value;
	value += 0x794f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	return value-117;
}
uint32_t test_func2971(uint32_t value){
	value *= value;
	value += 0x4165;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 3);
	return value-95;
}
uint32_t test_func2972(uint32_t value){
	value *= value;
	value += 0x2e08;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	return value-5;
}
uint32_t test_func2973(uint32_t value){
	value *= value;
	value += 0x6cfa;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	return value-55;
}
uint32_t test_func2974(uint32_t value){
	value *= value;
	value += 0x54cf;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	return value-111;
}
uint32_t test_func2975(uint32_t value){
	value *= value;
	value += 0x1d71;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	return value-81;
}
uint32_t test_func2976(uint32_t value){
	value *= value;
	value += 0x689c;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-89;
}
uint32_t test_func2977(uint32_t value){
	value *= value;
	value += 0x1a62;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	return value-25;
}
uint32_t test_func2978(uint32_t value){
	value *= value;
	value += 0x81a8;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	return value-28;
}
uint32_t test_func2979(uint32_t value){
	value *= value;
	value += 0x50a7;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-113;
}
uint32_t test_func2980(uint32_t value){
	value *= value;
	value += 0x656c;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	return value-83;
}
uint32_t test_func2981(uint32_t value){
	value *= value;
	value += 0x6259;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	return value-99;
}
uint32_t test_func2982(uint32_t value){
	value *= value;
	value += 0x16a2;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	return value-17;
}
uint32_t test_func2983(uint32_t value){
	value *= value;
	value += 0x36d0;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	return value-41;
}
uint32_t test_func2984(uint32_t value){
	value *= value;
	value += 0x6542;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-111;
}
uint32_t test_func2985(uint32_t value){
	value *= value;
	value += 0x8aa7;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 1);
	return value-101;
}
uint32_t test_func2986(uint32_t value){
	value *= value;
	value += 0x7e84;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	return value-51;
}
uint32_t test_func2987(uint32_t value){
	value *= value;
	value += 0x7fb4;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-45;
}
uint32_t test_func2988(uint32_t value){
	value *= value;
	value += 0x7ce4;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-113;
}
uint32_t test_func2989(uint32_t value){
	value *= value;
	value += 0x2d13;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	return value-54;
}
uint32_t test_func2990(uint32_t value){
	value *= value;
	value += 0x7818;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-40;
}
uint32_t test_func2991(uint32_t value){
	value *= value;
	value += 0x2f1b;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	return value-115;
}
uint32_t test_func2992(uint32_t value){
	value *= value;
	value += 0x151a;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-101;
}
uint32_t test_func2993(uint32_t value){
	value *= value;
	value += 0x3766;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 6);
	return value-54;
}
uint32_t test_func2994(uint32_t value){
	value *= value;
	value += 0x1624;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	return value-99;
}
uint32_t test_func2995(uint32_t value){
	value *= value;
	value += 0x1ccd;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-67;
}
uint32_t test_func2996(uint32_t value){
	value *= value;
	value += 0x6aae;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 8);
	return value-36;
}
uint32_t test_func2997(uint32_t value){
	value *= value;
	value += 0x6b68;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	return value-9;
}
uint32_t test_func2998(uint32_t value){
	value *= value;
	value += 0x3f71;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	return value-28;
}
uint32_t test_func2999(uint32_t value){
	value *= value;
	value += 0x7491;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-39;
}
uint32_t test_func3000(uint32_t value){
	value *= value;
	value += 0x8e66;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	return value-71;
}
uint32_t test_func3001(uint32_t value){
	value *= value;
	value += 0x5ee1;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	return value-33;
}
uint32_t test_func3002(uint32_t value){
	value *= value;
	value += 0x2ec7;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	return value-81;
}
uint32_t test_func3003(uint32_t value){
	value *= value;
	value += 0x3631;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	return value-113;
}
uint32_t test_func3004(uint32_t value){
	value *= value;
	value += 0x650c;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	return value-51;
}
uint32_t test_func3005(uint32_t value){
	value *= value;
	value += 0x7b99;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	return value-51;
}
uint32_t test_func3006(uint32_t value){
	value *= value;
	value += 0x72ee;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	return value-80;
}
uint32_t test_func3007(uint32_t value){
	value *= value;
	value += 0x3573;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-60;
}
uint32_t test_func3008(uint32_t value){
	value *= value;
	value += 0x2766;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	return value-23;
}
uint32_t test_func3009(uint32_t value){
	value *= value;
	value += 0x7f58;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	return value-63;
}
uint32_t test_func3010(uint32_t value){
	value *= value;
	value += 0x6ead;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-39;
}
uint32_t test_func3011(uint32_t value){
	value *= value;
	value += 0x1a20;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-106;
}
uint32_t test_func3012(uint32_t value){
	value *= value;
	value += 0x623d;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-101;
}
uint32_t test_func3013(uint32_t value){
	value *= value;
	value += 0x7be5;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	return value-10;
}
uint32_t test_func3014(uint32_t value){
	value *= value;
	value += 0x58cd;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	return value-46;
}
uint32_t test_func3015(uint32_t value){
	value *= value;
	value += 0x6000;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	return value-37;
}
uint32_t test_func3016(uint32_t value){
	value *= value;
	value += 0x7658;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 7);
	return value-94;
}
uint32_t test_func3017(uint32_t value){
	value *= value;
	value += 0x5709;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 4);
	return value-35;
}
uint32_t test_func3018(uint32_t value){
	value *= value;
	value += 0x3c17;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	value = (value >> 9) + (value >> 8);
	return value-7;
}
uint32_t test_func3019(uint32_t value){
	value *= value;
	value += 0x56da;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-99;
}
uint32_t test_func3020(uint32_t value){
	value *= value;
	value += 0x1881;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-4;
}
uint32_t test_func3021(uint32_t value){
	value *= value;
	value += 0x4a8c;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	return value-99;
}
uint32_t test_func3022(uint32_t value){
	value *= value;
	value += 0x7750;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-27;
}
uint32_t test_func3023(uint32_t value){
	value *= value;
	value += 0x2277;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	return value-94;
}
uint32_t test_func3024(uint32_t value){
	value *= value;
	value += 0x517e;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-34;
}
uint32_t test_func3025(uint32_t value){
	value *= value;
	value += 0x6436;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-104;
}
uint32_t test_func3026(uint32_t value){
	value *= value;
	value += 0x3d43;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	return value-25;
}
uint32_t test_func3027(uint32_t value){
	value *= value;
	value += 0x3aa0;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-21;
}
uint32_t test_func3028(uint32_t value){
	value *= value;
	value += 0x7e18;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	return value-79;
}
uint32_t test_func3029(uint32_t value){
	value *= value;
	value += 0x85ce;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	return value-24;
}
uint32_t test_func3030(uint32_t value){
	value *= value;
	value += 0x14b7;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	return value-125;
}
uint32_t test_func3031(uint32_t value){
	value *= value;
	value += 0x6b1b;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	return value-87;
}
uint32_t test_func3032(uint32_t value){
	value *= value;
	value += 0x4f17;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	return value-104;
}
uint32_t test_func3033(uint32_t value){
	value *= value;
	value += 0x651e;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	return value-33;
}
uint32_t test_func3034(uint32_t value){
	value *= value;
	value += 0x5873;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-6;
}
uint32_t test_func3035(uint32_t value){
	value *= value;
	value += 0x53b0;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	return value-54;
}
uint32_t test_func3036(uint32_t value){
	value *= value;
	value += 0x4943;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	return value-18;
}
uint32_t test_func3037(uint32_t value){
	value *= value;
	value += 0x8bec;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	return value-122;
}
uint32_t test_func3038(uint32_t value){
	value *= value;
	value += 0x3740;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	return value-61;
}
uint32_t test_func3039(uint32_t value){
	value *= value;
	value += 0x6829;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	return value-13;
}
uint32_t test_func3040(uint32_t value){
	value *= value;
	value += 0x4564;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-58;
}
uint32_t test_func3041(uint32_t value){
	value *= value;
	value += 0x5801;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-101;
}
uint32_t test_func3042(uint32_t value){
	value *= value;
	value += 0x33e6;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-112;
}
uint32_t test_func3043(uint32_t value){
	value *= value;
	value += 0x704d;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-125;
}
uint32_t test_func3044(uint32_t value){
	value *= value;
	value += 0x7041;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-18;
}
uint32_t test_func3045(uint32_t value){
	value *= value;
	value += 0x7b25;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 2);
	return value-102;
}
uint32_t test_func3046(uint32_t value){
	value *= value;
	value += 0x252d;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	return value-61;
}
uint32_t test_func3047(uint32_t value){
	value *= value;
	value += 0x87e3;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	return value-112;
}
uint32_t test_func3048(uint32_t value){
	value *= value;
	value += 0x4aa3;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	return value-26;
}
uint32_t test_func3049(uint32_t value){
	value *= value;
	value += 0x7b1f;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-77;
}
uint32_t test_func3050(uint32_t value){
	value *= value;
	value += 0x35dd;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 9) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	return value-2;
}
uint32_t test_func3051(uint32_t value){
	value *= value;
	value += 0x1eb4;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	return value-30;
}
uint32_t test_func3052(uint32_t value){
	value *= value;
	value += 0x2952;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 1);
	return value-22;
}
uint32_t test_func3053(uint32_t value){
	value *= value;
	value += 0x31b9;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	return value-46;
}
uint32_t test_func3054(uint32_t value){
	value *= value;
	value += 0x64bd;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 3);
	value = (value >> 8) + (value >> 4);
	return value-103;
}
uint32_t test_func3055(uint32_t value){
	value *= value;
	value += 0x7888;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	return value-126;
}
uint32_t test_func3056(uint32_t value){
	value *= value;
	value += 0x3516;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	return value-18;
}
uint32_t test_func3057(uint32_t value){
	value *= value;
	value += 0x4cb9;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-108;
}
uint32_t test_func3058(uint32_t value){
	value *= value;
	value += 0x8496;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 1);
	return value-94;
}
uint32_t test_func3059(uint32_t value){
	value *= value;
	value += 0x2d26;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-82;
}
uint32_t test_func3060(uint32_t value){
	value *= value;
	value += 0x6ab7;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	return value-99;
}
uint32_t test_func3061(uint32_t value){
	value *= value;
	value += 0x4de8;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	return value-43;
}
uint32_t test_func3062(uint32_t value){
	value *= value;
	value += 0x3c30;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	return value-34;
}
uint32_t test_func3063(uint32_t value){
	value *= value;
	value += 0x2858;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	return value-40;
}
uint32_t test_func3064(uint32_t value){
	value *= value;
	value += 0x1afc;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-40;
}
uint32_t test_func3065(uint32_t value){
	value *= value;
	value += 0x8b0e;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-91;
}
uint32_t test_func3066(uint32_t value){
	value *= value;
	value += 0x8653;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	return value-47;
}
uint32_t test_func3067(uint32_t value){
	value *= value;
	value += 0x29e4;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-80;
}
uint32_t test_func3068(uint32_t value){
	value *= value;
	value += 0x6aae;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-66;
}
uint32_t test_func3069(uint32_t value){
	value *= value;
	value += 0x2df3;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	return value-49;
}
uint32_t test_func3070(uint32_t value){
	value *= value;
	value += 0x31c7;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	return value-82;
}
uint32_t test_func3071(uint32_t value){
	value *= value;
	value += 0x4593;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	return value-101;
}
uint32_t test_func3072(uint32_t value){
	value *= value;
	value += 0x5295;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	return value-96;
}
uint32_t test_func3073(uint32_t value){
	value *= value;
	value += 0x345e;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	return value-47;
}
uint32_t test_func3074(uint32_t value){
	value *= value;
	value += 0x6153;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-24;
}
uint32_t test_func3075(uint32_t value){
	value *= value;
	value += 0x632d;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-75;
}
uint32_t test_func3076(uint32_t value){
	value *= value;
	value += 0x1f79;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-118;
}
uint32_t test_func3077(uint32_t value){
	value *= value;
	value += 0x7019;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-25;
}
uint32_t test_func3078(uint32_t value){
	value *= value;
	value += 0x8bc1;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	return value-95;
}
uint32_t test_func3079(uint32_t value){
	value *= value;
	value += 0x3e7a;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	return value-46;
}
uint32_t test_func3080(uint32_t value){
	value *= value;
	value += 0x7222;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	return value-66;
}
uint32_t test_func3081(uint32_t value){
	value *= value;
	value += 0x86ea;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	return value-125;
}
uint32_t test_func3082(uint32_t value){
	value *= value;
	value += 0x7bd7;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	return value-67;
}
uint32_t test_func3083(uint32_t value){
	value *= value;
	value += 0x6742;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	return value-124;
}
uint32_t test_func3084(uint32_t value){
	value *= value;
	value += 0x3f58;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-73;
}
uint32_t test_func3085(uint32_t value){
	value *= value;
	value += 0x729a;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	return value-55;
}
uint32_t test_func3086(uint32_t value){
	value *= value;
	value += 0x505e;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	return value-46;
}
uint32_t test_func3087(uint32_t value){
	value *= value;
	value += 0x414c;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-118;
}
uint32_t test_func3088(uint32_t value){
	value *= value;
	value += 0x4fe2;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	return value-86;
}
uint32_t test_func3089(uint32_t value){
	value *= value;
	value += 0x80f1;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	return value-97;
}
uint32_t test_func3090(uint32_t value){
	value *= value;
	value += 0x7c1d;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 1);
	return value-82;
}
uint32_t test_func3091(uint32_t value){
	value *= value;
	value += 0x8461;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-27;
}
uint32_t test_func3092(uint32_t value){
	value *= value;
	value += 0x4089;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	return value-127;
}
uint32_t test_func3093(uint32_t value){
	value *= value;
	value += 0x53b6;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-99;
}
uint32_t test_func3094(uint32_t value){
	value *= value;
	value += 0x45de;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	return value-40;
}
uint32_t test_func3095(uint32_t value){
	value *= value;
	value += 0x3c49;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	return value-55;
}
uint32_t test_func3096(uint32_t value){
	value *= value;
	value += 0x8215;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	return value-35;
}
uint32_t test_func3097(uint32_t value){
	value *= value;
	value += 0x60b3;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-109;
}
uint32_t test_func3098(uint32_t value){
	value *= value;
	value += 0x4867;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	return value-112;
}
uint32_t test_func3099(uint32_t value){
	value *= value;
	value += 0x48cc;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	return value-92;
}
uint32_t test_func3100(uint32_t value){
	value *= value;
	value += 0x594e;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	return value-97;
}
uint32_t test_func3101(uint32_t value){
	value *= value;
	value += 0x71ae;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 5) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	return value-115;
}
uint32_t test_func3102(uint32_t value){
	value *= value;
	value += 0x7281;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-51;
}
uint32_t test_func3103(uint32_t value){
	value *= value;
	value += 0x5db1;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	return value-101;
}
uint32_t test_func3104(uint32_t value){
	value *= value;
	value += 0x5efb;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 6);
	return value-42;
}
uint32_t test_func3105(uint32_t value){
	value *= value;
	value += 0x2470;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-57;
}
uint32_t test_func3106(uint32_t value){
	value *= value;
	value += 0x86f4;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-64;
}
uint32_t test_func3107(uint32_t value){
	value *= value;
	value += 0x82c2;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-118;
}
uint32_t test_func3108(uint32_t value){
	value *= value;
	value += 0x7fe6;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-51;
}
uint32_t test_func3109(uint32_t value){
	value *= value;
	value += 0x6ac1;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	return value-64;
}
uint32_t test_func3110(uint32_t value){
	value *= value;
	value += 0x1c88;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-50;
}
uint32_t test_func3111(uint32_t value){
	value *= value;
	value += 0x13c5;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-120;
}
uint32_t test_func3112(uint32_t value){
	value *= value;
	value += 0x7cd5;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	return value-119;
}
uint32_t test_func3113(uint32_t value){
	value *= value;
	value += 0x8a68;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	return value-91;
}
uint32_t test_func3114(uint32_t value){
	value *= value;
	value += 0x1e05;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	return value-107;
}
uint32_t test_func3115(uint32_t value){
	value *= value;
	value += 0x4083;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-31;
}
uint32_t test_func3116(uint32_t value){
	value *= value;
	value += 0x6a91;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 4);
	return value-61;
}
uint32_t test_func3117(uint32_t value){
	value *= value;
	value += 0x1d2f;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	return value-30;
}
uint32_t test_func3118(uint32_t value){
	value *= value;
	value += 0x4a32;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	return value-16;
}
uint32_t test_func3119(uint32_t value){
	value *= value;
	value += 0x8cc4;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-102;
}
uint32_t test_func3120(uint32_t value){
	value *= value;
	value += 0x31e2;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	return value-17;
}
uint32_t test_func3121(uint32_t value){
	value *= value;
	value += 0x10dc;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 1);
	return value-104;
}
uint32_t test_func3122(uint32_t value){
	value *= value;
	value += 0x33d8;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	return value-21;
}
uint32_t test_func3123(uint32_t value){
	value *= value;
	value += 0x5051;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-16;
}
uint32_t test_func3124(uint32_t value){
	value *= value;
	value += 0x8f8e;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	return value-69;
}
uint32_t test_func3125(uint32_t value){
	value *= value;
	value += 0x2738;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	return value-98;
}
uint32_t test_func3126(uint32_t value){
	value *= value;
	value += 0x41bf;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	return value-50;
}
uint32_t test_func3127(uint32_t value){
	value *= value;
	value += 0x36ee;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-39;
}
uint32_t test_func3128(uint32_t value){
	value *= value;
	value += 0x1462;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	return value-122;
}
uint32_t test_func3129(uint32_t value){
	value *= value;
	value += 0x760b;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	return value-122;
}
uint32_t test_func3130(uint32_t value){
	value *= value;
	value += 0x2eaf;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	return value-103;
}
uint32_t test_func3131(uint32_t value){
	value *= value;
	value += 0x4068;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	return value-123;
}
uint32_t test_func3132(uint32_t value){
	value *= value;
	value += 0x2521;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	return value-19;
}
uint32_t test_func3133(uint32_t value){
	value *= value;
	value += 0x671d;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	return value-101;
}
uint32_t test_func3134(uint32_t value){
	value *= value;
	value += 0x8970;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	return value-124;
}
uint32_t test_func3135(uint32_t value){
	value *= value;
	value += 0x4084;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-45;
}
uint32_t test_func3136(uint32_t value){
	value *= value;
	value += 0x7a95;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-59;
}
uint32_t test_func3137(uint32_t value){
	value *= value;
	value += 0x3835;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-37;
}
uint32_t test_func3138(uint32_t value){
	value *= value;
	value += 0x34c9;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	return value-6;
}
uint32_t test_func3139(uint32_t value){
	value *= value;
	value += 0x5f0b;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-28;
}
uint32_t test_func3140(uint32_t value){
	value *= value;
	value += 0x2186;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-104;
}
uint32_t test_func3141(uint32_t value){
	value *= value;
	value += 0x7b1d;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 2);
	return value-125;
}
uint32_t test_func3142(uint32_t value){
	value *= value;
	value += 0x6784;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	value = (value >> 7) + (value >> 5);
	return value-88;
}
uint32_t test_func3143(uint32_t value){
	value *= value;
	value += 0x17c4;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-114;
}
uint32_t test_func3144(uint32_t value){
	value *= value;
	value += 0x7abc;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	return value-89;
}
uint32_t test_func3145(uint32_t value){
	value *= value;
	value += 0x159b;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	return value-127;
}
uint32_t test_func3146(uint32_t value){
	value *= value;
	value += 0x2c67;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	return value-25;
}
uint32_t test_func3147(uint32_t value){
	value *= value;
	value += 0x3a79;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-37;
}
uint32_t test_func3148(uint32_t value){
	value *= value;
	value += 0x3afe;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	return value-19;
}
uint32_t test_func3149(uint32_t value){
	value *= value;
	value += 0x4178;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 3);
	return value-2;
}
uint32_t test_func3150(uint32_t value){
	value *= value;
	value += 0x623b;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	return value-44;
}
uint32_t test_func3151(uint32_t value){
	value *= value;
	value += 0x6af0;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	return value-109;
}
uint32_t test_func3152(uint32_t value){
	value *= value;
	value += 0x6b15;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	return value-94;
}
uint32_t test_func3153(uint32_t value){
	value *= value;
	value += 0x8c7b;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-33;
}
uint32_t test_func3154(uint32_t value){
	value *= value;
	value += 0x3bc7;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 4);
	return value-69;
}
uint32_t test_func3155(uint32_t value){
	value *= value;
	value += 0x20f2;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-79;
}
uint32_t test_func3156(uint32_t value){
	value *= value;
	value += 0x67ca;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	return value-82;
}
uint32_t test_func3157(uint32_t value){
	value *= value;
	value += 0x586e;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	return value-71;
}
uint32_t test_func3158(uint32_t value){
	value *= value;
	value += 0x3fd5;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-93;
}
uint32_t test_func3159(uint32_t value){
	value *= value;
	value += 0x2847;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	return value-21;
}
uint32_t test_func3160(uint32_t value){
	value *= value;
	value += 0x61e3;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-78;
}
uint32_t test_func3161(uint32_t value){
	value *= value;
	value += 0x5b17;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	return value-32;
}
uint32_t test_func3162(uint32_t value){
	value *= value;
	value += 0x492b;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 7);
	return value-53;
}
uint32_t test_func3163(uint32_t value){
	value *= value;
	value += 0x20b7;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	return value-78;
}
uint32_t test_func3164(uint32_t value){
	value *= value;
	value += 0x5e28;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	return value-115;
}
uint32_t test_func3165(uint32_t value){
	value *= value;
	value += 0x1e40;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	return value-36;
}
uint32_t test_func3166(uint32_t value){
	value *= value;
	value += 0x8692;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	return value-82;
}
uint32_t test_func3167(uint32_t value){
	value *= value;
	value += 0x7e0a;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 4);
	return value-91;
}
uint32_t test_func3168(uint32_t value){
	value *= value;
	value += 0x3563;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	return value-47;
}
uint32_t test_func3169(uint32_t value){
	value *= value;
	value += 0x7faf;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	return value-18;
}
uint32_t test_func3170(uint32_t value){
	value *= value;
	value += 0x7ad2;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	return value-11;
}
uint32_t test_func3171(uint32_t value){
	value *= value;
	value += 0x8807;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-92;
}
uint32_t test_func3172(uint32_t value){
	value *= value;
	value += 0x145a;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	return value-54;
}
uint32_t test_func3173(uint32_t value){
	value *= value;
	value += 0x312d;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	return value-112;
}
uint32_t test_func3174(uint32_t value){
	value *= value;
	value += 0x7cb3;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	return value-114;
}
uint32_t test_func3175(uint32_t value){
	value *= value;
	value += 0x5a78;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	value = (value >> 1) + (value >> 2);
	return value-61;
}
uint32_t test_func3176(uint32_t value){
	value *= value;
	value += 0x7bd6;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	return value-9;
}
uint32_t test_func3177(uint32_t value){
	value *= value;
	value += 0x3881;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	return value-14;
}
uint32_t test_func3178(uint32_t value){
	value *= value;
	value += 0x36fd;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	return value-110;
}
uint32_t test_func3179(uint32_t value){
	value *= value;
	value += 0x6523;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-46;
}
uint32_t test_func3180(uint32_t value){
	value *= value;
	value += 0x409f;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 6) + (value >> 7);
	return value-102;
}
uint32_t test_func3181(uint32_t value){
	value *= value;
	value += 0x6f75;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	return value-2;
}
uint32_t test_func3182(uint32_t value){
	value *= value;
	value += 0x2877;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	return value-36;
}
uint32_t test_func3183(uint32_t value){
	value *= value;
	value += 0x6bd0;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	return value-44;
}
uint32_t test_func3184(uint32_t value){
	value *= value;
	value += 0x8b7d;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-95;
}
uint32_t test_func3185(uint32_t value){
	value *= value;
	value += 0x83cf;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	return value-44;
}
uint32_t test_func3186(uint32_t value){
	value *= value;
	value += 0x23eb;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	return value-6;
}
uint32_t test_func3187(uint32_t value){
	value *= value;
	value += 0x8649;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-122;
}
uint32_t test_func3188(uint32_t value){
	value *= value;
	value += 0x5938;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	value = (value >> 4) + (value >> 8);
	return value-72;
}
uint32_t test_func3189(uint32_t value){
	value *= value;
	value += 0x7758;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	return value-47;
}
uint32_t test_func3190(uint32_t value){
	value *= value;
	value += 0x501f;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-75;
}
uint32_t test_func3191(uint32_t value){
	value *= value;
	value += 0x2055;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	return value-33;
}
uint32_t test_func3192(uint32_t value){
	value *= value;
	value += 0x7a97;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-62;
}
uint32_t test_func3193(uint32_t value){
	value *= value;
	value += 0x1fd8;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 3);
	return value-126;
}
uint32_t test_func3194(uint32_t value){
	value *= value;
	value += 0x27db;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	return value-121;
}
uint32_t test_func3195(uint32_t value){
	value *= value;
	value += 0x79bb;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	return value-117;
}
uint32_t test_func3196(uint32_t value){
	value *= value;
	value += 0x1464;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	return value-36;
}
uint32_t test_func3197(uint32_t value){
	value *= value;
	value += 0x2717;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	return value-80;
}
uint32_t test_func3198(uint32_t value){
	value *= value;
	value += 0x79e9;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	return value-83;
}
uint32_t test_func3199(uint32_t value){
	value *= value;
	value += 0x2644;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-19;
}
uint32_t test_func3200(uint32_t value){
	value *= value;
	value += 0x1f65;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 6);
	return value-39;
}
uint32_t test_func3201(uint32_t value){
	value *= value;
	value += 0x8adc;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	value = (value >> 9) + (value >> 8);
	return value-33;
}
uint32_t test_func3202(uint32_t value){
	value *= value;
	value += 0x6910;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 8);
	return value-108;
}
uint32_t test_func3203(uint32_t value){
	value *= value;
	value += 0x8db8;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-90;
}
uint32_t test_func3204(uint32_t value){
	value *= value;
	value += 0x6863;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	return value-61;
}
uint32_t test_func3205(uint32_t value){
	value *= value;
	value += 0x1cf0;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	return value-58;
}
uint32_t test_func3206(uint32_t value){
	value *= value;
	value += 0x6c17;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	return value-30;
}
uint32_t test_func3207(uint32_t value){
	value *= value;
	value += 0x6bdf;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	return value-118;
}
uint32_t test_func3208(uint32_t value){
	value *= value;
	value += 0x1025;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	return value-35;
}
uint32_t test_func3209(uint32_t value){
	value *= value;
	value += 0x831c;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 7);
	return value-39;
}
uint32_t test_func3210(uint32_t value){
	value *= value;
	value += 0x4dc7;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	return value-9;
}
uint32_t test_func3211(uint32_t value){
	value *= value;
	value += 0x5080;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-90;
}
uint32_t test_func3212(uint32_t value){
	value *= value;
	value += 0x8b75;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	return value-91;
}
uint32_t test_func3213(uint32_t value){
	value *= value;
	value += 0x3726;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	return value-65;
}
uint32_t test_func3214(uint32_t value){
	value *= value;
	value += 0x2ce8;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-21;
}
uint32_t test_func3215(uint32_t value){
	value *= value;
	value += 0x1f65;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 9) + (value >> 8);
	return value-67;
}
uint32_t test_func3216(uint32_t value){
	value *= value;
	value += 0x2319;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	return value-56;
}
uint32_t test_func3217(uint32_t value){
	value *= value;
	value += 0x86d6;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	return value-39;
}
uint32_t test_func3218(uint32_t value){
	value *= value;
	value += 0x7c42;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	return value-114;
}
uint32_t test_func3219(uint32_t value){
	value *= value;
	value += 0x1054;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-48;
}
uint32_t test_func3220(uint32_t value){
	value *= value;
	value += 0x73da;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	return value-71;
}
uint32_t test_func3221(uint32_t value){
	value *= value;
	value += 0x13f6;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	return value-63;
}
uint32_t test_func3222(uint32_t value){
	value *= value;
	value += 0x829c;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 1);
	return value-29;
}
uint32_t test_func3223(uint32_t value){
	value *= value;
	value += 0x2f16;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	return value-110;
}
uint32_t test_func3224(uint32_t value){
	value *= value;
	value += 0x6e80;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-106;
}
uint32_t test_func3225(uint32_t value){
	value *= value;
	value += 0x544c;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	return value-56;
}
uint32_t test_func3226(uint32_t value){
	value *= value;
	value += 0x5abf;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	return value-83;
}
uint32_t test_func3227(uint32_t value){
	value *= value;
	value += 0x5b73;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 3);
	return value-18;
}
uint32_t test_func3228(uint32_t value){
	value *= value;
	value += 0x57d3;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-69;
}
uint32_t test_func3229(uint32_t value){
	value *= value;
	value += 0x11a2;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	value = (value >> 5) + (value >> 7);
	return value-10;
}
uint32_t test_func3230(uint32_t value){
	value *= value;
	value += 0x7374;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-30;
}
uint32_t test_func3231(uint32_t value){
	value *= value;
	value += 0x4932;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	return value-113;
}
uint32_t test_func3232(uint32_t value){
	value *= value;
	value += 0x489b;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	return value-68;
}
uint32_t test_func3233(uint32_t value){
	value *= value;
	value += 0x69be;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	return value-113;
}
uint32_t test_func3234(uint32_t value){
	value *= value;
	value += 0x8f81;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	return value-79;
}
uint32_t test_func3235(uint32_t value){
	value *= value;
	value += 0x801d;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-49;
}
uint32_t test_func3236(uint32_t value){
	value *= value;
	value += 0x2d9f;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 1);
	return value-29;
}
uint32_t test_func3237(uint32_t value){
	value *= value;
	value += 0x4e68;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-119;
}
uint32_t test_func3238(uint32_t value){
	value *= value;
	value += 0x45ae;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	return value-124;
}
uint32_t test_func3239(uint32_t value){
	value *= value;
	value += 0x5bfa;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	return value-64;
}
uint32_t test_func3240(uint32_t value){
	value *= value;
	value += 0x47a8;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 8);
	return value-74;
}
uint32_t test_func3241(uint32_t value){
	value *= value;
	value += 0x856a;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	return value-104;
}
uint32_t test_func3242(uint32_t value){
	value *= value;
	value += 0x80c5;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-10;
}
uint32_t test_func3243(uint32_t value){
	value *= value;
	value += 0x8c92;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-75;
}
uint32_t test_func3244(uint32_t value){
	value *= value;
	value += 0x2b7e;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 3);
	return value-18;
}
uint32_t test_func3245(uint32_t value){
	value *= value;
	value += 0x288b;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	return value-93;
}
uint32_t test_func3246(uint32_t value){
	value *= value;
	value += 0x7f8c;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 5);
	return value-33;
}
uint32_t test_func3247(uint32_t value){
	value *= value;
	value += 0x15ad;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-81;
}
uint32_t test_func3248(uint32_t value){
	value *= value;
	value += 0x41e9;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 2);
	return value-2;
}
uint32_t test_func3249(uint32_t value){
	value *= value;
	value += 0x2592;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	return value-53;
}
uint32_t test_func3250(uint32_t value){
	value *= value;
	value += 0x54cd;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	return value-49;
}
uint32_t test_func3251(uint32_t value){
	value *= value;
	value += 0x4f13;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-19;
}
uint32_t test_func3252(uint32_t value){
	value *= value;
	value += 0x47b1;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	return value-110;
}
uint32_t test_func3253(uint32_t value){
	value *= value;
	value += 0x3e48;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-19;
}
uint32_t test_func3254(uint32_t value){
	value *= value;
	value += 0x674e;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	return value-111;
}
uint32_t test_func3255(uint32_t value){
	value *= value;
	value += 0x648b;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-28;
}
uint32_t test_func3256(uint32_t value){
	value *= value;
	value += 0x4d9d;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	return value-116;
}
uint32_t test_func3257(uint32_t value){
	value *= value;
	value += 0x8875;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	return value-107;
}
uint32_t test_func3258(uint32_t value){
	value *= value;
	value += 0x71d8;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-99;
}
uint32_t test_func3259(uint32_t value){
	value *= value;
	value += 0x55de;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	return value-64;
}
uint32_t test_func3260(uint32_t value){
	value *= value;
	value += 0x3876;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	return value-119;
}
uint32_t test_func3261(uint32_t value){
	value *= value;
	value += 0x6de1;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	return value-111;
}
uint32_t test_func3262(uint32_t value){
	value *= value;
	value += 0x8332;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	return value-83;
}
uint32_t test_func3263(uint32_t value){
	value *= value;
	value += 0x76d4;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	return value-23;
}
uint32_t test_func3264(uint32_t value){
	value *= value;
	value += 0x4104;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	return value-37;
}
uint32_t test_func3265(uint32_t value){
	value *= value;
	value += 0x2c53;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 2);
	return value-35;
}
uint32_t test_func3266(uint32_t value){
	value *= value;
	value += 0x7e26;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	return value-77;
}
uint32_t test_func3267(uint32_t value){
	value *= value;
	value += 0x6f35;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-7;
}
uint32_t test_func3268(uint32_t value){
	value *= value;
	value += 0x740f;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-116;
}
uint32_t test_func3269(uint32_t value){
	value *= value;
	value += 0x5594;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	return value-74;
}
uint32_t test_func3270(uint32_t value){
	value *= value;
	value += 0x197a;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	return value-46;
}
uint32_t test_func3271(uint32_t value){
	value *= value;
	value += 0x3ac9;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-56;
}
uint32_t test_func3272(uint32_t value){
	value *= value;
	value += 0x325f;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	return value-31;
}
uint32_t test_func3273(uint32_t value){
	value *= value;
	value += 0x4f6d;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	return value-116;
}
uint32_t test_func3274(uint32_t value){
	value *= value;
	value += 0x5ff7;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	return value-19;
}
uint32_t test_func3275(uint32_t value){
	value *= value;
	value += 0x2958;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-32;
}
uint32_t test_func3276(uint32_t value){
	value *= value;
	value += 0x30bb;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	return value-41;
}
uint32_t test_func3277(uint32_t value){
	value *= value;
	value += 0x53a3;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	return value-119;
}
uint32_t test_func3278(uint32_t value){
	value *= value;
	value += 0x3065;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	return value-103;
}
uint32_t test_func3279(uint32_t value){
	value *= value;
	value += 0x5ea9;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	return value-117;
}
uint32_t test_func3280(uint32_t value){
	value *= value;
	value += 0x77ed;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 8);
	return value-99;
}
uint32_t test_func3281(uint32_t value){
	value *= value;
	value += 0x7001;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-115;
}
uint32_t test_func3282(uint32_t value){
	value *= value;
	value += 0x3d8c;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 1);
	return value-91;
}
uint32_t test_func3283(uint32_t value){
	value *= value;
	value += 0x5285;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-63;
}
uint32_t test_func3284(uint32_t value){
	value *= value;
	value += 0x64bb;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-95;
}
uint32_t test_func3285(uint32_t value){
	value *= value;
	value += 0x864e;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 3);
	return value-77;
}
uint32_t test_func3286(uint32_t value){
	value *= value;
	value += 0x8e33;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 1);
	return value-103;
}
uint32_t test_func3287(uint32_t value){
	value *= value;
	value += 0x50b4;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-72;
}
uint32_t test_func3288(uint32_t value){
	value *= value;
	value += 0x27ee;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-123;
}
uint32_t test_func3289(uint32_t value){
	value *= value;
	value += 0x4c51;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	return value-54;
}
uint32_t test_func3290(uint32_t value){
	value *= value;
	value += 0x7d24;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 8);
	return value-76;
}
uint32_t test_func3291(uint32_t value){
	value *= value;
	value += 0x78fe;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	return value-33;
}
uint32_t test_func3292(uint32_t value){
	value *= value;
	value += 0x464e;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 8);
	return value-90;
}
uint32_t test_func3293(uint32_t value){
	value *= value;
	value += 0x4bd3;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-37;
}
uint32_t test_func3294(uint32_t value){
	value *= value;
	value += 0x3925;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	return value-20;
}
uint32_t test_func3295(uint32_t value){
	value *= value;
	value += 0x3f2b;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 3);
	return value-35;
}
uint32_t test_func3296(uint32_t value){
	value *= value;
	value += 0x18a2;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-109;
}
uint32_t test_func3297(uint32_t value){
	value *= value;
	value += 0x629c;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	return value-87;
}
uint32_t test_func3298(uint32_t value){
	value *= value;
	value += 0x44ff;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 8);
	return value-12;
}
uint32_t test_func3299(uint32_t value){
	value *= value;
	value += 0x6b02;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-118;
}
uint32_t test_func3300(uint32_t value){
	value *= value;
	value += 0x4bb4;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 2);
	return value-98;
}
uint32_t test_func3301(uint32_t value){
	value *= value;
	value += 0x4274;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	return value-83;
}
uint32_t test_func3302(uint32_t value){
	value *= value;
	value += 0x777a;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-81;
}
uint32_t test_func3303(uint32_t value){
	value *= value;
	value += 0x184c;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	return value-1;
}
uint32_t test_func3304(uint32_t value){
	value *= value;
	value += 0x604a;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-62;
}
uint32_t test_func3305(uint32_t value){
	value *= value;
	value += 0x7123;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-105;
}
uint32_t test_func3306(uint32_t value){
	value *= value;
	value += 0x7b5d;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	return value-66;
}
uint32_t test_func3307(uint32_t value){
	value *= value;
	value += 0x36d1;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	return value-118;
}
uint32_t test_func3308(uint32_t value){
	value *= value;
	value += 0x2b2d;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-64;
}
uint32_t test_func3309(uint32_t value){
	value *= value;
	value += 0x4870;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 7);
	return value-47;
}
uint32_t test_func3310(uint32_t value){
	value *= value;
	value += 0x4f72;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	return value-9;
}
uint32_t test_func3311(uint32_t value){
	value *= value;
	value += 0x8a59;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	return value-82;
}
uint32_t test_func3312(uint32_t value){
	value *= value;
	value += 0x5525;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	return value-118;
}
uint32_t test_func3313(uint32_t value){
	value *= value;
	value += 0x7625;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-4;
}
uint32_t test_func3314(uint32_t value){
	value *= value;
	value += 0x467f;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 5);
	return value-20;
}
uint32_t test_func3315(uint32_t value){
	value *= value;
	value += 0x2aac;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-90;
}
uint32_t test_func3316(uint32_t value){
	value *= value;
	value += 0x5af9;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	return value-55;
}
uint32_t test_func3317(uint32_t value){
	value *= value;
	value += 0x7c08;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	return value-14;
}
uint32_t test_func3318(uint32_t value){
	value *= value;
	value += 0x874d;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-32;
}
uint32_t test_func3319(uint32_t value){
	value *= value;
	value += 0x8391;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	return value-20;
}
uint32_t test_func3320(uint32_t value){
	value *= value;
	value += 0x8d73;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	return value-29;
}
uint32_t test_func3321(uint32_t value){
	value *= value;
	value += 0x2fe2;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-61;
}
uint32_t test_func3322(uint32_t value){
	value *= value;
	value += 0x8ca4;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	return value-42;
}
uint32_t test_func3323(uint32_t value){
	value *= value;
	value += 0x54d2;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-85;
}
uint32_t test_func3324(uint32_t value){
	value *= value;
	value += 0x1159;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	return value-15;
}
uint32_t test_func3325(uint32_t value){
	value *= value;
	value += 0x3b7a;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	return value-71;
}
uint32_t test_func3326(uint32_t value){
	value *= value;
	value += 0x254b;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	return value-124;
}
uint32_t test_func3327(uint32_t value){
	value *= value;
	value += 0x3235;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	return value-57;
}
uint32_t test_func3328(uint32_t value){
	value *= value;
	value += 0x5f74;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	return value-55;
}
uint32_t test_func3329(uint32_t value){
	value *= value;
	value += 0x1c9a;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	return value-45;
}
uint32_t test_func3330(uint32_t value){
	value *= value;
	value += 0x740c;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-41;
}
uint32_t test_func3331(uint32_t value){
	value *= value;
	value += 0x8382;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-34;
}
uint32_t test_func3332(uint32_t value){
	value *= value;
	value += 0x448c;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	return value-12;
}
uint32_t test_func3333(uint32_t value){
	value *= value;
	value += 0x2508;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-50;
}
uint32_t test_func3334(uint32_t value){
	value *= value;
	value += 0x6fad;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 1);
	return value-6;
}
uint32_t test_func3335(uint32_t value){
	value *= value;
	value += 0x8483;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-55;
}
uint32_t test_func3336(uint32_t value){
	value *= value;
	value += 0x6169;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	return value-75;
}
uint32_t test_func3337(uint32_t value){
	value *= value;
	value += 0x7a8d;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	return value-104;
}
uint32_t test_func3338(uint32_t value){
	value *= value;
	value += 0x62f7;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 4);
	return value-56;
}
uint32_t test_func3339(uint32_t value){
	value *= value;
	value += 0x44ff;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	return value-112;
}
uint32_t test_func3340(uint32_t value){
	value *= value;
	value += 0x2ad2;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	return value-120;
}
uint32_t test_func3341(uint32_t value){
	value *= value;
	value += 0x16f1;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-35;
}
uint32_t test_func3342(uint32_t value){
	value *= value;
	value += 0x6cb2;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-36;
}
uint32_t test_func3343(uint32_t value){
	value *= value;
	value += 0x28bd;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	return value-7;
}
uint32_t test_func3344(uint32_t value){
	value *= value;
	value += 0x6990;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	value = (value >> 1) + (value >> 8);
	return value-95;
}
uint32_t test_func3345(uint32_t value){
	value *= value;
	value += 0x47fc;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	return value-5;
}
uint32_t test_func3346(uint32_t value){
	value *= value;
	value += 0x7fa6;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	return value-125;
}
uint32_t test_func3347(uint32_t value){
	value *= value;
	value += 0x6787;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-126;
}
uint32_t test_func3348(uint32_t value){
	value *= value;
	value += 0x3a6c;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	value = (value >> 2) + (value >> 4);
	return value-25;
}
uint32_t test_func3349(uint32_t value){
	value *= value;
	value += 0x2f76;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-115;
}
uint32_t test_func3350(uint32_t value){
	value *= value;
	value += 0x629a;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	return value-59;
}
uint32_t test_func3351(uint32_t value){
	value *= value;
	value += 0x8d23;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	return value-32;
}
uint32_t test_func3352(uint32_t value){
	value *= value;
	value += 0x8e2b;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 3);
	return value-124;
}
uint32_t test_func3353(uint32_t value){
	value *= value;
	value += 0x4326;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	return value-28;
}
uint32_t test_func3354(uint32_t value){
	value *= value;
	value += 0x3058;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-32;
}
uint32_t test_func3355(uint32_t value){
	value *= value;
	value += 0x7959;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	return value-125;
}
uint32_t test_func3356(uint32_t value){
	value *= value;
	value += 0x2998;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-50;
}
uint32_t test_func3357(uint32_t value){
	value *= value;
	value += 0x4cd5;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 8);
	return value-119;
}
uint32_t test_func3358(uint32_t value){
	value *= value;
	value += 0x57a6;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	return value-49;
}
uint32_t test_func3359(uint32_t value){
	value *= value;
	value += 0x5ff3;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	return value-117;
}
uint32_t test_func3360(uint32_t value){
	value *= value;
	value += 0x257a;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	return value-39;
}
uint32_t test_func3361(uint32_t value){
	value *= value;
	value += 0x6a4b;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	return value-67;
}
uint32_t test_func3362(uint32_t value){
	value *= value;
	value += 0x1b4d;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	return value-67;
}
uint32_t test_func3363(uint32_t value){
	value *= value;
	value += 0x48b7;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-39;
}
uint32_t test_func3364(uint32_t value){
	value *= value;
	value += 0x6e98;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	return value-13;
}
uint32_t test_func3365(uint32_t value){
	value *= value;
	value += 0x8d50;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 3);
	return value-6;
}
uint32_t test_func3366(uint32_t value){
	value *= value;
	value += 0x1215;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	return value-111;
}
uint32_t test_func3367(uint32_t value){
	value *= value;
	value += 0x8f6f;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	return value-127;
}
uint32_t test_func3368(uint32_t value){
	value *= value;
	value += 0x45bb;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	return value-101;
}
uint32_t test_func3369(uint32_t value){
	value *= value;
	value += 0x7bac;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	return value-15;
}
uint32_t test_func3370(uint32_t value){
	value *= value;
	value += 0x26c5;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	return value-20;
}
uint32_t test_func3371(uint32_t value){
	value *= value;
	value += 0x63e1;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-48;
}
uint32_t test_func3372(uint32_t value){
	value *= value;
	value += 0x3fab;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	return value-111;
}
uint32_t test_func3373(uint32_t value){
	value *= value;
	value += 0x4f26;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-116;
}
uint32_t test_func3374(uint32_t value){
	value *= value;
	value += 0x1827;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	return value-90;
}
uint32_t test_func3375(uint32_t value){
	value *= value;
	value += 0x49d6;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-53;
}
uint32_t test_func3376(uint32_t value){
	value *= value;
	value += 0x4530;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-62;
}
uint32_t test_func3377(uint32_t value){
	value *= value;
	value += 0x7588;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	return value-24;
}
uint32_t test_func3378(uint32_t value){
	value *= value;
	value += 0x7901;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	return value-51;
}
uint32_t test_func3379(uint32_t value){
	value *= value;
	value += 0x1915;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-79;
}
uint32_t test_func3380(uint32_t value){
	value *= value;
	value += 0x1312;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	return value-34;
}
uint32_t test_func3381(uint32_t value){
	value *= value;
	value += 0x3098;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	return value-30;
}
uint32_t test_func3382(uint32_t value){
	value *= value;
	value += 0x301c;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 6);
	return value-88;
}
uint32_t test_func3383(uint32_t value){
	value *= value;
	value += 0x7d68;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	return value-11;
}
uint32_t test_func3384(uint32_t value){
	value *= value;
	value += 0x3a18;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-57;
}
uint32_t test_func3385(uint32_t value){
	value *= value;
	value += 0x161f;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-117;
}
uint32_t test_func3386(uint32_t value){
	value *= value;
	value += 0x7840;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	return value-74;
}
uint32_t test_func3387(uint32_t value){
	value *= value;
	value += 0x7695;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	return value-59;
}
uint32_t test_func3388(uint32_t value){
	value *= value;
	value += 0x1f0c;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	return value-103;
}
uint32_t test_func3389(uint32_t value){
	value *= value;
	value += 0x8fe4;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	return value-83;
}
uint32_t test_func3390(uint32_t value){
	value *= value;
	value += 0x6034;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	return value-80;
}
uint32_t test_func3391(uint32_t value){
	value *= value;
	value += 0x5865;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	return value-121;
}
uint32_t test_func3392(uint32_t value){
	value *= value;
	value += 0x7ab4;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	return value-90;
}
uint32_t test_func3393(uint32_t value){
	value *= value;
	value += 0x5bb1;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-59;
}
uint32_t test_func3394(uint32_t value){
	value *= value;
	value += 0x4ac2;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	return value-125;
}
uint32_t test_func3395(uint32_t value){
	value *= value;
	value += 0x4aa0;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-41;
}
uint32_t test_func3396(uint32_t value){
	value *= value;
	value += 0x59d8;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	value = (value >> 7) + (value >> 2);
	return value-7;
}
uint32_t test_func3397(uint32_t value){
	value *= value;
	value += 0x8b4c;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	return value-111;
}
uint32_t test_func3398(uint32_t value){
	value *= value;
	value += 0x6eb0;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	return value-42;
}
uint32_t test_func3399(uint32_t value){
	value *= value;
	value += 0x490e;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-117;
}
uint32_t test_func3400(uint32_t value){
	value *= value;
	value += 0x1d42;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-43;
}
uint32_t test_func3401(uint32_t value){
	value *= value;
	value += 0x847e;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	return value-2;
}
uint32_t test_func3402(uint32_t value){
	value *= value;
	value += 0x56c7;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-118;
}
uint32_t test_func3403(uint32_t value){
	value *= value;
	value += 0x2376;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-82;
}
uint32_t test_func3404(uint32_t value){
	value *= value;
	value += 0x79b9;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	return value-74;
}
uint32_t test_func3405(uint32_t value){
	value *= value;
	value += 0x810f;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-69;
}
uint32_t test_func3406(uint32_t value){
	value *= value;
	value += 0x61cf;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-75;
}
uint32_t test_func3407(uint32_t value){
	value *= value;
	value += 0x7da2;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	return value-120;
}
uint32_t test_func3408(uint32_t value){
	value *= value;
	value += 0x7804;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-48;
}
uint32_t test_func3409(uint32_t value){
	value *= value;
	value += 0x8ec7;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	return value-92;
}
uint32_t test_func3410(uint32_t value){
	value *= value;
	value += 0x4290;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-88;
}
uint32_t test_func3411(uint32_t value){
	value *= value;
	value += 0x4f58;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-106;
}
uint32_t test_func3412(uint32_t value){
	value *= value;
	value += 0x74ec;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	return value-115;
}
uint32_t test_func3413(uint32_t value){
	value *= value;
	value += 0x8f6e;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-46;
}
uint32_t test_func3414(uint32_t value){
	value *= value;
	value += 0x7fd2;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 8) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	return value-25;
}
uint32_t test_func3415(uint32_t value){
	value *= value;
	value += 0x6461;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	return value-117;
}
uint32_t test_func3416(uint32_t value){
	value *= value;
	value += 0x2139;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	return value-111;
}
uint32_t test_func3417(uint32_t value){
	value *= value;
	value += 0x38cb;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	return value-103;
}
uint32_t test_func3418(uint32_t value){
	value *= value;
	value += 0x745c;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-75;
}
uint32_t test_func3419(uint32_t value){
	value *= value;
	value += 0x5c85;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	return value-43;
}
uint32_t test_func3420(uint32_t value){
	value *= value;
	value += 0x81b3;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	return value-76;
}
uint32_t test_func3421(uint32_t value){
	value *= value;
	value += 0x14a7;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 4);
	return value-125;
}
uint32_t test_func3422(uint32_t value){
	value *= value;
	value += 0x4ef7;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-121;
}
uint32_t test_func3423(uint32_t value){
	value *= value;
	value += 0x2b8b;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	return value-99;
}
uint32_t test_func3424(uint32_t value){
	value *= value;
	value += 0x6f21;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	return value-113;
}
uint32_t test_func3425(uint32_t value){
	value *= value;
	value += 0x80ca;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	return value-52;
}
uint32_t test_func3426(uint32_t value){
	value *= value;
	value += 0x126b;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	return value-118;
}
uint32_t test_func3427(uint32_t value){
	value *= value;
	value += 0x193d;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-70;
}
uint32_t test_func3428(uint32_t value){
	value *= value;
	value += 0x164d;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	return value-25;
}
uint32_t test_func3429(uint32_t value){
	value *= value;
	value += 0x2efc;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	return value-15;
}
uint32_t test_func3430(uint32_t value){
	value *= value;
	value += 0x1580;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	value = (value >> 7) + (value >> 1);
	return value-87;
}
uint32_t test_func3431(uint32_t value){
	value *= value;
	value += 0x4161;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	return value-61;
}
uint32_t test_func3432(uint32_t value){
	value *= value;
	value += 0x77fd;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	return value-60;
}
uint32_t test_func3433(uint32_t value){
	value *= value;
	value += 0x2505;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	return value-92;
}
uint32_t test_func3434(uint32_t value){
	value *= value;
	value += 0x82fd;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	return value-127;
}
uint32_t test_func3435(uint32_t value){
	value *= value;
	value += 0x13c0;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-119;
}
uint32_t test_func3436(uint32_t value){
	value *= value;
	value += 0x68fa;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-34;
}
uint32_t test_func3437(uint32_t value){
	value *= value;
	value += 0x3cac;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 8);
	return value-50;
}
uint32_t test_func3438(uint32_t value){
	value *= value;
	value += 0x59ac;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	return value-22;
}
uint32_t test_func3439(uint32_t value){
	value *= value;
	value += 0x5422;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	return value-113;
}
uint32_t test_func3440(uint32_t value){
	value *= value;
	value += 0x120c;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	return value-86;
}
uint32_t test_func3441(uint32_t value){
	value *= value;
	value += 0x23ba;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 5);
	return value-115;
}
uint32_t test_func3442(uint32_t value){
	value *= value;
	value += 0x6c53;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-13;
}
uint32_t test_func3443(uint32_t value){
	value *= value;
	value += 0x1a4f;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-113;
}
uint32_t test_func3444(uint32_t value){
	value *= value;
	value += 0x6ffa;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 6);
	return value-44;
}
uint32_t test_func3445(uint32_t value){
	value *= value;
	value += 0x5bf8;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 8);
	return value-67;
}
uint32_t test_func3446(uint32_t value){
	value *= value;
	value += 0x61bb;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 6);
	return value-28;
}
uint32_t test_func3447(uint32_t value){
	value *= value;
	value += 0x520e;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	return value-126;
}
uint32_t test_func3448(uint32_t value){
	value *= value;
	value += 0x538e;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	return value-69;
}
uint32_t test_func3449(uint32_t value){
	value *= value;
	value += 0x3b2b;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	return value-19;
}
uint32_t test_func3450(uint32_t value){
	value *= value;
	value += 0x34ac;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 2);
	return value-68;
}
uint32_t test_func3451(uint32_t value){
	value *= value;
	value += 0x3b28;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	return value-109;
}
uint32_t test_func3452(uint32_t value){
	value *= value;
	value += 0x618e;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	return value-2;
}
uint32_t test_func3453(uint32_t value){
	value *= value;
	value += 0x6b1e;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 1);
	return value-22;
}
uint32_t test_func3454(uint32_t value){
	value *= value;
	value += 0x33ee;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 7);
	return value-79;
}
uint32_t test_func3455(uint32_t value){
	value *= value;
	value += 0x6966;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-86;
}
uint32_t test_func3456(uint32_t value){
	value *= value;
	value += 0x12c3;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	value = (value >> 9) + (value >> 8);
	return value-15;
}
uint32_t test_func3457(uint32_t value){
	value *= value;
	value += 0x6998;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	return value-79;
}
uint32_t test_func3458(uint32_t value){
	value *= value;
	value += 0x8248;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	return value-78;
}
uint32_t test_func3459(uint32_t value){
	value *= value;
	value += 0x448e;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 2);
	return value-32;
}
uint32_t test_func3460(uint32_t value){
	value *= value;
	value += 0x33f5;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	return value-100;
}
uint32_t test_func3461(uint32_t value){
	value *= value;
	value += 0x8860;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	return value-3;
}
uint32_t test_func3462(uint32_t value){
	value *= value;
	value += 0x1683;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	return value-25;
}
uint32_t test_func3463(uint32_t value){
	value *= value;
	value += 0x8868;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	return value-113;
}
uint32_t test_func3464(uint32_t value){
	value *= value;
	value += 0x65ec;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 4);
	return value-60;
}
uint32_t test_func3465(uint32_t value){
	value *= value;
	value += 0x6d3f;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	return value-64;
}
uint32_t test_func3466(uint32_t value){
	value *= value;
	value += 0x3b67;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-79;
}
uint32_t test_func3467(uint32_t value){
	value *= value;
	value += 0x44be;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-63;
}
uint32_t test_func3468(uint32_t value){
	value *= value;
	value += 0x1d6f;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	return value-28;
}
uint32_t test_func3469(uint32_t value){
	value *= value;
	value += 0x11fd;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	return value-94;
}
uint32_t test_func3470(uint32_t value){
	value *= value;
	value += 0x8fbc;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	return value-92;
}
uint32_t test_func3471(uint32_t value){
	value *= value;
	value += 0x5d56;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	return value-70;
}
uint32_t test_func3472(uint32_t value){
	value *= value;
	value += 0x2348;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	return value-82;
}
uint32_t test_func3473(uint32_t value){
	value *= value;
	value += 0x4462;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	return value-122;
}
uint32_t test_func3474(uint32_t value){
	value *= value;
	value += 0x864a;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	return value-110;
}
uint32_t test_func3475(uint32_t value){
	value *= value;
	value += 0x89f9;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-5;
}
uint32_t test_func3476(uint32_t value){
	value *= value;
	value += 0x143d;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-112;
}
uint32_t test_func3477(uint32_t value){
	value *= value;
	value += 0x2635;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	return value-126;
}
uint32_t test_func3478(uint32_t value){
	value *= value;
	value += 0x65d9;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	return value-2;
}
uint32_t test_func3479(uint32_t value){
	value *= value;
	value += 0x566f;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-71;
}
uint32_t test_func3480(uint32_t value){
	value *= value;
	value += 0x6117;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	value = (value >> 9) + (value >> 8);
	return value-85;
}
uint32_t test_func3481(uint32_t value){
	value *= value;
	value += 0x2d40;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	return value-25;
}
uint32_t test_func3482(uint32_t value){
	value *= value;
	value += 0x4930;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-83;
}
uint32_t test_func3483(uint32_t value){
	value *= value;
	value += 0x2280;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	return value-36;
}
uint32_t test_func3484(uint32_t value){
	value *= value;
	value += 0x4e9d;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	return value-38;
}
uint32_t test_func3485(uint32_t value){
	value *= value;
	value += 0x2349;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 1);
	return value-61;
}
uint32_t test_func3486(uint32_t value){
	value *= value;
	value += 0x1f18;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	return value-110;
}
uint32_t test_func3487(uint32_t value){
	value *= value;
	value += 0x21f4;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	return value-114;
}
uint32_t test_func3488(uint32_t value){
	value *= value;
	value += 0x7599;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-81;
}
uint32_t test_func3489(uint32_t value){
	value *= value;
	value += 0x2619;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	return value-44;
}
uint32_t test_func3490(uint32_t value){
	value *= value;
	value += 0x2a59;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-36;
}
uint32_t test_func3491(uint32_t value){
	value *= value;
	value += 0x5c92;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-84;
}
uint32_t test_func3492(uint32_t value){
	value *= value;
	value += 0x42d1;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	return value-7;
}
uint32_t test_func3493(uint32_t value){
	value *= value;
	value += 0x2778;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	return value-108;
}
uint32_t test_func3494(uint32_t value){
	value *= value;
	value += 0x81bb;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	return value-10;
}
uint32_t test_func3495(uint32_t value){
	value *= value;
	value += 0x2e23;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	return value-55;
}
uint32_t test_func3496(uint32_t value){
	value *= value;
	value += 0x770f;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	return value-72;
}
uint32_t test_func3497(uint32_t value){
	value *= value;
	value += 0x6d2e;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	return value-78;
}
uint32_t test_func3498(uint32_t value){
	value *= value;
	value += 0x1006;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 3);
	value = (value >> 8) + (value >> 4);
	return value-4;
}
uint32_t test_func3499(uint32_t value){
	value *= value;
	value += 0x466f;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-77;
}
uint32_t test_func3500(uint32_t value){
	value *= value;
	value += 0x2719;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	return value-86;
}
uint32_t test_func3501(uint32_t value){
	value *= value;
	value += 0x1102;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 1);
	return value-103;
}
uint32_t test_func3502(uint32_t value){
	value *= value;
	value += 0x1401;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-60;
}
uint32_t test_func3503(uint32_t value){
	value *= value;
	value += 0x293e;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	return value-16;
}
uint32_t test_func3504(uint32_t value){
	value *= value;
	value += 0x3bb7;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-64;
}
uint32_t test_func3505(uint32_t value){
	value *= value;
	value += 0x80bd;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 2);
	return value-21;
}
uint32_t test_func3506(uint32_t value){
	value *= value;
	value += 0x2075;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	return value-32;
}
uint32_t test_func3507(uint32_t value){
	value *= value;
	value += 0x2e58;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-67;
}
uint32_t test_func3508(uint32_t value){
	value *= value;
	value += 0x71b3;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-91;
}
uint32_t test_func3509(uint32_t value){
	value *= value;
	value += 0x7e27;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-127;
}
uint32_t test_func3510(uint32_t value){
	value *= value;
	value += 0x1c2a;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-105;
}
uint32_t test_func3511(uint32_t value){
	value *= value;
	value += 0x8185;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-113;
}
uint32_t test_func3512(uint32_t value){
	value *= value;
	value += 0x59d4;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	return value-68;
}
uint32_t test_func3513(uint32_t value){
	value *= value;
	value += 0x1f08;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-23;
}
uint32_t test_func3514(uint32_t value){
	value *= value;
	value += 0x41e8;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	return value-25;
}
uint32_t test_func3515(uint32_t value){
	value *= value;
	value += 0x228c;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	return value-110;
}
uint32_t test_func3516(uint32_t value){
	value *= value;
	value += 0x58e1;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	return value-94;
}
uint32_t test_func3517(uint32_t value){
	value *= value;
	value += 0x4d28;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	return value-17;
}
uint32_t test_func3518(uint32_t value){
	value *= value;
	value += 0x2077;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	return value-119;
}
uint32_t test_func3519(uint32_t value){
	value *= value;
	value += 0x6536;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-83;
}
uint32_t test_func3520(uint32_t value){
	value *= value;
	value += 0x27a3;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	return value-86;
}
uint32_t test_func3521(uint32_t value){
	value *= value;
	value += 0x464f;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 8);
	return value-107;
}
uint32_t test_func3522(uint32_t value){
	value *= value;
	value += 0x1a9e;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-23;
}
uint32_t test_func3523(uint32_t value){
	value *= value;
	value += 0x714b;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-5;
}
uint32_t test_func3524(uint32_t value){
	value *= value;
	value += 0x52e2;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-35;
}
uint32_t test_func3525(uint32_t value){
	value *= value;
	value += 0x1c44;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	return value-109;
}
uint32_t test_func3526(uint32_t value){
	value *= value;
	value += 0x6726;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	return value-79;
}
uint32_t test_func3527(uint32_t value){
	value *= value;
	value += 0x4293;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-43;
}
uint32_t test_func3528(uint32_t value){
	value *= value;
	value += 0x3b65;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	return value-127;
}
uint32_t test_func3529(uint32_t value){
	value *= value;
	value += 0x34d0;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-38;
}
uint32_t test_func3530(uint32_t value){
	value *= value;
	value += 0x10d8;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 7);
	return value-66;
}
uint32_t test_func3531(uint32_t value){
	value *= value;
	value += 0x28d5;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 9) + (value >> 8);
	return value-61;
}
uint32_t test_func3532(uint32_t value){
	value *= value;
	value += 0x15f6;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	return value-112;
}
uint32_t test_func3533(uint32_t value){
	value *= value;
	value += 0x49bb;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	return value-109;
}
uint32_t test_func3534(uint32_t value){
	value *= value;
	value += 0x767a;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	return value-87;
}
uint32_t test_func3535(uint32_t value){
	value *= value;
	value += 0x47db;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	return value-112;
}
uint32_t test_func3536(uint32_t value){
	value *= value;
	value += 0x6b5b;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	return value-70;
}
uint32_t test_func3537(uint32_t value){
	value *= value;
	value += 0x68cd;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	return value-95;
}
uint32_t test_func3538(uint32_t value){
	value *= value;
	value += 0x4ad4;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	return value-62;
}
uint32_t test_func3539(uint32_t value){
	value *= value;
	value += 0x176b;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-78;
}
uint32_t test_func3540(uint32_t value){
	value *= value;
	value += 0x185d;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-16;
}
uint32_t test_func3541(uint32_t value){
	value *= value;
	value += 0x73cd;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 6);
	return value-103;
}
uint32_t test_func3542(uint32_t value){
	value *= value;
	value += 0x14b0;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-115;
}
uint32_t test_func3543(uint32_t value){
	value *= value;
	value += 0x634e;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	return value-27;
}
uint32_t test_func3544(uint32_t value){
	value *= value;
	value += 0x4dc4;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	value = (value >> 7) + (value >> 2);
	return value-46;
}
uint32_t test_func3545(uint32_t value){
	value *= value;
	value += 0x2085;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 6);
	return value-48;
}
uint32_t test_func3546(uint32_t value){
	value *= value;
	value += 0x2ed4;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 3);
	return value-52;
}
uint32_t test_func3547(uint32_t value){
	value *= value;
	value += 0x4b4c;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	return value-108;
}
uint32_t test_func3548(uint32_t value){
	value *= value;
	value += 0x1058;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	return value-69;
}
uint32_t test_func3549(uint32_t value){
	value *= value;
	value += 0x78bb;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-49;
}
uint32_t test_func3550(uint32_t value){
	value *= value;
	value += 0x4809;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	return value-12;
}
uint32_t test_func3551(uint32_t value){
	value *= value;
	value += 0x432c;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	return value-29;
}
uint32_t test_func3552(uint32_t value){
	value *= value;
	value += 0x38e1;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	return value-65;
}
uint32_t test_func3553(uint32_t value){
	value *= value;
	value += 0x5a38;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-43;
}
uint32_t test_func3554(uint32_t value){
	value *= value;
	value += 0x6317;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	return value-74;
}
uint32_t test_func3555(uint32_t value){
	value *= value;
	value += 0x12b8;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	return value-81;
}
uint32_t test_func3556(uint32_t value){
	value *= value;
	value += 0x7426;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-88;
}
uint32_t test_func3557(uint32_t value){
	value *= value;
	value += 0x76c4;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	return value-35;
}
uint32_t test_func3558(uint32_t value){
	value *= value;
	value += 0x56c6;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	return value-7;
}
uint32_t test_func3559(uint32_t value){
	value *= value;
	value += 0x55b6;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	return value-113;
}
uint32_t test_func3560(uint32_t value){
	value *= value;
	value += 0x42f0;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 7);
	return value-5;
}
uint32_t test_func3561(uint32_t value){
	value *= value;
	value += 0x5426;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	return value-102;
}
uint32_t test_func3562(uint32_t value){
	value *= value;
	value += 0x4dde;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 3) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	return value-37;
}
uint32_t test_func3563(uint32_t value){
	value *= value;
	value += 0x7bef;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-47;
}
uint32_t test_func3564(uint32_t value){
	value *= value;
	value += 0x7a07;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	return value-13;
}
uint32_t test_func3565(uint32_t value){
	value *= value;
	value += 0x4c28;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	return value-18;
}
uint32_t test_func3566(uint32_t value){
	value *= value;
	value += 0x4726;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	return value-75;
}
uint32_t test_func3567(uint32_t value){
	value *= value;
	value += 0x492b;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	return value-10;
}
uint32_t test_func3568(uint32_t value){
	value *= value;
	value += 0x4233;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 4);
	return value-125;
}
uint32_t test_func3569(uint32_t value){
	value *= value;
	value += 0x8c90;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-125;
}
uint32_t test_func3570(uint32_t value){
	value *= value;
	value += 0x1567;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	return value-108;
}
uint32_t test_func3571(uint32_t value){
	value *= value;
	value += 0x5531;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-66;
}
uint32_t test_func3572(uint32_t value){
	value *= value;
	value += 0x183c;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	return value-45;
}
uint32_t test_func3573(uint32_t value){
	value *= value;
	value += 0x1727;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	return value-83;
}
uint32_t test_func3574(uint32_t value){
	value *= value;
	value += 0x5f69;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	return value-63;
}
uint32_t test_func3575(uint32_t value){
	value *= value;
	value += 0x8bcb;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	return value-97;
}
uint32_t test_func3576(uint32_t value){
	value *= value;
	value += 0x4ce9;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	return value-52;
}
uint32_t test_func3577(uint32_t value){
	value *= value;
	value += 0x41b5;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-2;
}
uint32_t test_func3578(uint32_t value){
	value *= value;
	value += 0x1ff4;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	return value-70;
}
uint32_t test_func3579(uint32_t value){
	value *= value;
	value += 0x2cbf;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	return value-60;
}
uint32_t test_func3580(uint32_t value){
	value *= value;
	value += 0x8503;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	return value-123;
}
uint32_t test_func3581(uint32_t value){
	value *= value;
	value += 0x3602;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	return value-63;
}
uint32_t test_func3582(uint32_t value){
	value *= value;
	value += 0x25d0;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 2);
	return value-74;
}
uint32_t test_func3583(uint32_t value){
	value *= value;
	value += 0x4bd6;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	return value-110;
}
uint32_t test_func3584(uint32_t value){
	value *= value;
	value += 0x3952;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	return value-48;
}
uint32_t test_func3585(uint32_t value){
	value *= value;
	value += 0x71d5;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	return value-12;
}
uint32_t test_func3586(uint32_t value){
	value *= value;
	value += 0x13c4;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	return value-90;
}
uint32_t test_func3587(uint32_t value){
	value *= value;
	value += 0x50d8;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	return value-87;
}
uint32_t test_func3588(uint32_t value){
	value *= value;
	value += 0x369e;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-68;
}
uint32_t test_func3589(uint32_t value){
	value *= value;
	value += 0x46f8;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	value = (value >> 9) + (value >> 8);
	return value-46;
}
uint32_t test_func3590(uint32_t value){
	value *= value;
	value += 0x609a;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	return value-82;
}
uint32_t test_func3591(uint32_t value){
	value *= value;
	value += 0x778d;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 3);
	return value-36;
}
uint32_t test_func3592(uint32_t value){
	value *= value;
	value += 0x1daf;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 2) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	return value-117;
}
uint32_t test_func3593(uint32_t value){
	value *= value;
	value += 0x5b31;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	return value-51;
}
uint32_t test_func3594(uint32_t value){
	value *= value;
	value += 0x5718;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	return value-78;
}
uint32_t test_func3595(uint32_t value){
	value *= value;
	value += 0x4fbd;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-70;
}
uint32_t test_func3596(uint32_t value){
	value *= value;
	value += 0x634d;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-72;
}
uint32_t test_func3597(uint32_t value){
	value *= value;
	value += 0x2849;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-114;
}
uint32_t test_func3598(uint32_t value){
	value *= value;
	value += 0x1607;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	return value-59;
}
uint32_t test_func3599(uint32_t value){
	value *= value;
	value += 0x3d2f;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-123;
}
uint32_t test_func3600(uint32_t value){
	value *= value;
	value += 0x503f;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	return value-12;
}
uint32_t test_func3601(uint32_t value){
	value *= value;
	value += 0x7c08;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	return value-11;
}
uint32_t test_func3602(uint32_t value){
	value *= value;
	value += 0x102e;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	return value-72;
}
uint32_t test_func3603(uint32_t value){
	value *= value;
	value += 0x77ac;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-68;
}
uint32_t test_func3604(uint32_t value){
	value *= value;
	value += 0x814e;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	return value-82;
}
uint32_t test_func3605(uint32_t value){
	value *= value;
	value += 0x7835;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	return value-100;
}
uint32_t test_func3606(uint32_t value){
	value *= value;
	value += 0x8c57;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	value = (value >> 4) + (value >> 8);
	return value-111;
}
uint32_t test_func3607(uint32_t value){
	value *= value;
	value += 0x8afc;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	return value-107;
}
uint32_t test_func3608(uint32_t value){
	value *= value;
	value += 0x6742;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	return value-120;
}
uint32_t test_func3609(uint32_t value){
	value *= value;
	value += 0x129a;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-45;
}
uint32_t test_func3610(uint32_t value){
	value *= value;
	value += 0x2548;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	value = (value >> 6) + (value >> 8);
	return value-112;
}
uint32_t test_func3611(uint32_t value){
	value *= value;
	value += 0x56e7;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	return value-3;
}
uint32_t test_func3612(uint32_t value){
	value *= value;
	value += 0x46e3;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	return value-37;
}
uint32_t test_func3613(uint32_t value){
	value *= value;
	value += 0x14fd;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	return value-91;
}
uint32_t test_func3614(uint32_t value){
	value *= value;
	value += 0x49ca;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	return value-82;
}
uint32_t test_func3615(uint32_t value){
	value *= value;
	value += 0x8f35;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 6);
	return value-102;
}
uint32_t test_func3616(uint32_t value){
	value *= value;
	value += 0x38f8;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	return value-67;
}
uint32_t test_func3617(uint32_t value){
	value *= value;
	value += 0x1d27;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	return value-47;
}
uint32_t test_func3618(uint32_t value){
	value *= value;
	value += 0x3ca5;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 3);
	return value-105;
}
uint32_t test_func3619(uint32_t value){
	value *= value;
	value += 0x3bad;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	return value-57;
}
uint32_t test_func3620(uint32_t value){
	value *= value;
	value += 0x2a4b;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	return value-9;
}
uint32_t test_func3621(uint32_t value){
	value *= value;
	value += 0x1ce0;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	return value-46;
}
uint32_t test_func3622(uint32_t value){
	value *= value;
	value += 0x14a1;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 4);
	return value-79;
}
uint32_t test_func3623(uint32_t value){
	value *= value;
	value += 0x3818;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 1);
	return value-104;
}
uint32_t test_func3624(uint32_t value){
	value *= value;
	value += 0x5ba2;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-115;
}
uint32_t test_func3625(uint32_t value){
	value *= value;
	value += 0x59ef;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	return value-39;
}
uint32_t test_func3626(uint32_t value){
	value *= value;
	value += 0x3c86;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	return value-95;
}
uint32_t test_func3627(uint32_t value){
	value *= value;
	value += 0x343e;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-35;
}
uint32_t test_func3628(uint32_t value){
	value *= value;
	value += 0x61c6;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	return value-68;
}
uint32_t test_func3629(uint32_t value){
	value *= value;
	value += 0x6e1e;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-49;
}
uint32_t test_func3630(uint32_t value){
	value *= value;
	value += 0x731b;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	return value-70;
}
uint32_t test_func3631(uint32_t value){
	value *= value;
	value += 0x33e7;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-99;
}
uint32_t test_func3632(uint32_t value){
	value *= value;
	value += 0x257f;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	return value-14;
}
uint32_t test_func3633(uint32_t value){
	value *= value;
	value += 0x4733;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 5);
	return value-42;
}
uint32_t test_func3634(uint32_t value){
	value *= value;
	value += 0x4b29;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 3);
	return value-115;
}
uint32_t test_func3635(uint32_t value){
	value *= value;
	value += 0x8edb;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-112;
}
uint32_t test_func3636(uint32_t value){
	value *= value;
	value += 0x6394;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 6);
	return value-31;
}
uint32_t test_func3637(uint32_t value){
	value *= value;
	value += 0x26f7;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-60;
}
uint32_t test_func3638(uint32_t value){
	value *= value;
	value += 0x2b78;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 6);
	return value-34;
}
uint32_t test_func3639(uint32_t value){
	value *= value;
	value += 0x70e1;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-82;
}
uint32_t test_func3640(uint32_t value){
	value *= value;
	value += 0x2ccf;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	return value-24;
}
uint32_t test_func3641(uint32_t value){
	value *= value;
	value += 0x2332;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	return value-81;
}
uint32_t test_func3642(uint32_t value){
	value *= value;
	value += 0x4ed0;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	return value-79;
}
uint32_t test_func3643(uint32_t value){
	value *= value;
	value += 0x59c3;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-90;
}
uint32_t test_func3644(uint32_t value){
	value *= value;
	value += 0x65f6;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-94;
}
uint32_t test_func3645(uint32_t value){
	value *= value;
	value += 0x25ac;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	return value-37;
}
uint32_t test_func3646(uint32_t value){
	value *= value;
	value += 0x43f9;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 4);
	return value-71;
}
uint32_t test_func3647(uint32_t value){
	value *= value;
	value += 0x1d47;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	value = (value >> 3) + (value >> 4);
	return value-38;
}
uint32_t test_func3648(uint32_t value){
	value *= value;
	value += 0x47d2;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	return value-28;
}
uint32_t test_func3649(uint32_t value){
	value *= value;
	value += 0x6c2c;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	return value-50;
}
uint32_t test_func3650(uint32_t value){
	value *= value;
	value += 0x6dba;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-25;
}
uint32_t test_func3651(uint32_t value){
	value *= value;
	value += 0x6336;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	return value-24;
}
uint32_t test_func3652(uint32_t value){
	value *= value;
	value += 0x5f2b;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-71;
}
uint32_t test_func3653(uint32_t value){
	value *= value;
	value += 0x887c;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-68;
}
uint32_t test_func3654(uint32_t value){
	value *= value;
	value += 0x82dd;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-30;
}
uint32_t test_func3655(uint32_t value){
	value *= value;
	value += 0x2757;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-90;
}
uint32_t test_func3656(uint32_t value){
	value *= value;
	value += 0x8cc9;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	return value-30;
}
uint32_t test_func3657(uint32_t value){
	value *= value;
	value += 0x6062;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	return value-99;
}
uint32_t test_func3658(uint32_t value){
	value *= value;
	value += 0x8e28;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	value = (value >> 5) + (value >> 8);
	return value-118;
}
uint32_t test_func3659(uint32_t value){
	value *= value;
	value += 0x3974;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-96;
}
uint32_t test_func3660(uint32_t value){
	value *= value;
	value += 0x8573;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	return value-34;
}
uint32_t test_func3661(uint32_t value){
	value *= value;
	value += 0x2da7;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 8);
	return value-108;
}
uint32_t test_func3662(uint32_t value){
	value *= value;
	value += 0x6e64;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	return value-10;
}
uint32_t test_func3663(uint32_t value){
	value *= value;
	value += 0x3d53;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	value = (value >> 8) + (value >> 6);
	return value-99;
}
uint32_t test_func3664(uint32_t value){
	value *= value;
	value += 0x51f3;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 9) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-36;
}
uint32_t test_func3665(uint32_t value){
	value *= value;
	value += 0x7e13;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-122;
}
uint32_t test_func3666(uint32_t value){
	value *= value;
	value += 0x5659;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	return value-13;
}
uint32_t test_func3667(uint32_t value){
	value *= value;
	value += 0x2abd;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-104;
}
uint32_t test_func3668(uint32_t value){
	value *= value;
	value += 0x4f0f;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	return value-54;
}
uint32_t test_func3669(uint32_t value){
	value *= value;
	value += 0x336d;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	return value-119;
}
uint32_t test_func3670(uint32_t value){
	value *= value;
	value += 0x4cce;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-117;
}
uint32_t test_func3671(uint32_t value){
	value *= value;
	value += 0x4d7a;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	return value-56;
}
uint32_t test_func3672(uint32_t value){
	value *= value;
	value += 0x2d90;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	return value-53;
}
uint32_t test_func3673(uint32_t value){
	value *= value;
	value += 0x837f;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	return value-17;
}
uint32_t test_func3674(uint32_t value){
	value *= value;
	value += 0x2c8c;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	return value-5;
}
uint32_t test_func3675(uint32_t value){
	value *= value;
	value += 0x4552;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	return value-102;
}
uint32_t test_func3676(uint32_t value){
	value *= value;
	value += 0x723d;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 1) + (value >> 4);
	return value-71;
}
uint32_t test_func3677(uint32_t value){
	value *= value;
	value += 0x780f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	return value-61;
}
uint32_t test_func3678(uint32_t value){
	value *= value;
	value += 0x245c;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	return value-69;
}
uint32_t test_func3679(uint32_t value){
	value *= value;
	value += 0x860d;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 5);
	return value-77;
}
uint32_t test_func3680(uint32_t value){
	value *= value;
	value += 0x75e0;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 5);
	return value-88;
}
uint32_t test_func3681(uint32_t value){
	value *= value;
	value += 0x6ee6;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	return value-58;
}
uint32_t test_func3682(uint32_t value){
	value *= value;
	value += 0x3704;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	value = (value >> 7) + (value >> 1);
	return value-5;
}
uint32_t test_func3683(uint32_t value){
	value *= value;
	value += 0x5772;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	return value-18;
}
uint32_t test_func3684(uint32_t value){
	value *= value;
	value += 0x653f;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-30;
}
uint32_t test_func3685(uint32_t value){
	value *= value;
	value += 0x19cc;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	return value-14;
}
uint32_t test_func3686(uint32_t value){
	value *= value;
	value += 0x3b4c;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	return value-95;
}
uint32_t test_func3687(uint32_t value){
	value *= value;
	value += 0x554b;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	return value-30;
}
uint32_t test_func3688(uint32_t value){
	value *= value;
	value += 0x4124;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	return value-20;
}
uint32_t test_func3689(uint32_t value){
	value *= value;
	value += 0x7e88;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 8);
	return value-12;
}
uint32_t test_func3690(uint32_t value){
	value *= value;
	value += 0x5bfe;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-50;
}
uint32_t test_func3691(uint32_t value){
	value *= value;
	value += 0x6f5e;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-34;
}
uint32_t test_func3692(uint32_t value){
	value *= value;
	value += 0x5e55;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 2);
	return value-1;
}
uint32_t test_func3693(uint32_t value){
	value *= value;
	value += 0x76e4;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	return value-70;
}
uint32_t test_func3694(uint32_t value){
	value *= value;
	value += 0x17e0;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	return value-42;
}
uint32_t test_func3695(uint32_t value){
	value *= value;
	value += 0x6974;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	return value-27;
}
uint32_t test_func3696(uint32_t value){
	value *= value;
	value += 0x659a;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 4);
	return value-110;
}
uint32_t test_func3697(uint32_t value){
	value *= value;
	value += 0x30a6;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	return value-30;
}
uint32_t test_func3698(uint32_t value){
	value *= value;
	value += 0x41bc;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	return value-53;
}
uint32_t test_func3699(uint32_t value){
	value *= value;
	value += 0x5b54;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-76;
}
uint32_t test_func3700(uint32_t value){
	value *= value;
	value += 0x53bd;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 8);
	value = (value >> 6) + (value >> 3);
	return value-53;
}
uint32_t test_func3701(uint32_t value){
	value *= value;
	value += 0x2d97;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	return value-58;
}
uint32_t test_func3702(uint32_t value){
	value *= value;
	value += 0x8058;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-13;
}
uint32_t test_func3703(uint32_t value){
	value *= value;
	value += 0x30c8;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	return value-62;
}
uint32_t test_func3704(uint32_t value){
	value *= value;
	value += 0x7984;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-109;
}
uint32_t test_func3705(uint32_t value){
	value *= value;
	value += 0x437f;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 4) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-8;
}
uint32_t test_func3706(uint32_t value){
	value *= value;
	value += 0x4e7c;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-50;
}
uint32_t test_func3707(uint32_t value){
	value *= value;
	value += 0x2996;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	return value-69;
}
uint32_t test_func3708(uint32_t value){
	value *= value;
	value += 0x7bb9;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	return value-1;
}
uint32_t test_func3709(uint32_t value){
	value *= value;
	value += 0x1c26;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	return value-65;
}
uint32_t test_func3710(uint32_t value){
	value *= value;
	value += 0x7af2;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 6);
	return value-109;
}
uint32_t test_func3711(uint32_t value){
	value *= value;
	value += 0x5987;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	return value-126;
}
uint32_t test_func3712(uint32_t value){
	value *= value;
	value += 0x5322;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 1);
	return value-25;
}
uint32_t test_func3713(uint32_t value){
	value *= value;
	value += 0x3553;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	return value-96;
}
uint32_t test_func3714(uint32_t value){
	value *= value;
	value += 0x2881;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	return value-79;
}
uint32_t test_func3715(uint32_t value){
	value *= value;
	value += 0x2863;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	return value-72;
}
uint32_t test_func3716(uint32_t value){
	value *= value;
	value += 0x4c88;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	return value-44;
}
uint32_t test_func3717(uint32_t value){
	value *= value;
	value += 0x60d0;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 5);
	return value-48;
}
uint32_t test_func3718(uint32_t value){
	value *= value;
	value += 0x4df0;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	return value-51;
}
uint32_t test_func3719(uint32_t value){
	value *= value;
	value += 0x51f2;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 5);
	return value-80;
}
uint32_t test_func3720(uint32_t value){
	value *= value;
	value += 0x88b2;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	return value-119;
}
uint32_t test_func3721(uint32_t value){
	value *= value;
	value += 0x4463;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	return value-61;
}
uint32_t test_func3722(uint32_t value){
	value *= value;
	value += 0x3608;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 3);
	value = (value >> 5) + (value >> 1);
	return value-55;
}
uint32_t test_func3723(uint32_t value){
	value *= value;
	value += 0x65fb;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-8;
}
uint32_t test_func3724(uint32_t value){
	value *= value;
	value += 0x7c6a;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-125;
}
uint32_t test_func3725(uint32_t value){
	value *= value;
	value += 0x59d5;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	return value-93;
}
uint32_t test_func3726(uint32_t value){
	value *= value;
	value += 0x7f91;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	return value-68;
}
uint32_t test_func3727(uint32_t value){
	value *= value;
	value += 0x4849;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	return value-42;
}
uint32_t test_func3728(uint32_t value){
	value *= value;
	value += 0x7076;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	return value-13;
}
uint32_t test_func3729(uint32_t value){
	value *= value;
	value += 0x6eed;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 7) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	return value-52;
}
uint32_t test_func3730(uint32_t value){
	value *= value;
	value += 0x1d53;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 5);
	return value-13;
}
uint32_t test_func3731(uint32_t value){
	value *= value;
	value += 0x309f;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-59;
}
uint32_t test_func3732(uint32_t value){
	value *= value;
	value += 0x819f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	return value-59;
}
uint32_t test_func3733(uint32_t value){
	value *= value;
	value += 0x2575;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	return value-34;
}
uint32_t test_func3734(uint32_t value){
	value *= value;
	value += 0x5615;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 7);
	return value-7;
}
uint32_t test_func3735(uint32_t value){
	value *= value;
	value += 0x2ac9;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	return value-5;
}
uint32_t test_func3736(uint32_t value){
	value *= value;
	value += 0x20ad;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	return value-98;
}
uint32_t test_func3737(uint32_t value){
	value *= value;
	value += 0x7333;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	return value-91;
}
uint32_t test_func3738(uint32_t value){
	value *= value;
	value += 0x44a1;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	return value-117;
}
uint32_t test_func3739(uint32_t value){
	value *= value;
	value += 0x168e;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	return value-26;
}
uint32_t test_func3740(uint32_t value){
	value *= value;
	value += 0x1268;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 5) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-44;
}
uint32_t test_func3741(uint32_t value){
	value *= value;
	value += 0x21f1;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 3);
	return value-82;
}
uint32_t test_func3742(uint32_t value){
	value *= value;
	value += 0x57bd;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	return value-96;
}
uint32_t test_func3743(uint32_t value){
	value *= value;
	value += 0x27b5;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	return value-85;
}
uint32_t test_func3744(uint32_t value){
	value *= value;
	value += 0x6f98;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	return value-126;
}
uint32_t test_func3745(uint32_t value){
	value *= value;
	value += 0x4f75;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	return value-74;
}
uint32_t test_func3746(uint32_t value){
	value *= value;
	value += 0x5232;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 8);
	return value-26;
}
uint32_t test_func3747(uint32_t value){
	value *= value;
	value += 0x6608;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	return value-88;
}
uint32_t test_func3748(uint32_t value){
	value *= value;
	value += 0x2504;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	return value-21;
}
uint32_t test_func3749(uint32_t value){
	value *= value;
	value += 0x6d87;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-70;
}
uint32_t test_func3750(uint32_t value){
	value *= value;
	value += 0x4ac7;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	return value-58;
}
uint32_t test_func3751(uint32_t value){
	value *= value;
	value += 0x2d4d;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 4);
	return value-16;
}
uint32_t test_func3752(uint32_t value){
	value *= value;
	value += 0x7375;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 2);
	return value-103;
}
uint32_t test_func3753(uint32_t value){
	value *= value;
	value += 0x41f1;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	return value-23;
}
uint32_t test_func3754(uint32_t value){
	value *= value;
	value += 0x2c46;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	value = (value >> 7) + (value >> 8);
	return value-34;
}
uint32_t test_func3755(uint32_t value){
	value *= value;
	value += 0x2d4d;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-47;
}
uint32_t test_func3756(uint32_t value){
	value *= value;
	value += 0x6fb3;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	return value-60;
}
uint32_t test_func3757(uint32_t value){
	value *= value;
	value += 0x667a;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 3);
	return value-83;
}
uint32_t test_func3758(uint32_t value){
	value *= value;
	value += 0x3575;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	return value-120;
}
uint32_t test_func3759(uint32_t value){
	value *= value;
	value += 0x69d0;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-48;
}
uint32_t test_func3760(uint32_t value){
	value *= value;
	value += 0x8286;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	return value-33;
}
uint32_t test_func3761(uint32_t value){
	value *= value;
	value += 0x48e9;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-89;
}
uint32_t test_func3762(uint32_t value){
	value *= value;
	value += 0x791e;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-48;
}
uint32_t test_func3763(uint32_t value){
	value *= value;
	value += 0x3a9e;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-85;
}
uint32_t test_func3764(uint32_t value){
	value *= value;
	value += 0x68b6;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	return value-106;
}
uint32_t test_func3765(uint32_t value){
	value *= value;
	value += 0x2b07;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-80;
}
uint32_t test_func3766(uint32_t value){
	value *= value;
	value += 0x5e07;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	value = (value >> 1) + (value >> 5);
	return value-2;
}
uint32_t test_func3767(uint32_t value){
	value *= value;
	value += 0x4b7e;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 6);
	return value-41;
}
uint32_t test_func3768(uint32_t value){
	value *= value;
	value += 0x330a;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	return value-52;
}
uint32_t test_func3769(uint32_t value){
	value *= value;
	value += 0x229c;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	value = (value >> 1) + (value >> 7);
	return value-37;
}
uint32_t test_func3770(uint32_t value){
	value *= value;
	value += 0x1ef9;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	return value-109;
}
uint32_t test_func3771(uint32_t value){
	value *= value;
	value += 0x1c39;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 3) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	return value-1;
}
uint32_t test_func3772(uint32_t value){
	value *= value;
	value += 0x464b;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-102;
}
uint32_t test_func3773(uint32_t value){
	value *= value;
	value += 0x1970;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 7);
	return value-18;
}
uint32_t test_func3774(uint32_t value){
	value *= value;
	value += 0x4abb;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	return value-63;
}
uint32_t test_func3775(uint32_t value){
	value *= value;
	value += 0x8097;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	return value-113;
}
uint32_t test_func3776(uint32_t value){
	value *= value;
	value += 0x5b41;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-41;
}
uint32_t test_func3777(uint32_t value){
	value *= value;
	value += 0x4d4a;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 6);
	return value-19;
}
uint32_t test_func3778(uint32_t value){
	value *= value;
	value += 0x4417;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	value = (value >> 2) + (value >> 6);
	return value-3;
}
uint32_t test_func3779(uint32_t value){
	value *= value;
	value += 0x2060;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	return value-100;
}
uint32_t test_func3780(uint32_t value){
	value *= value;
	value += 0x7eb4;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	return value-115;
}
uint32_t test_func3781(uint32_t value){
	value *= value;
	value += 0x4ff3;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	value = (value >> 1) + (value >> 4);
	return value-113;
}
uint32_t test_func3782(uint32_t value){
	value *= value;
	value += 0x41d3;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 1) + (value >> 6);
	value = (value >> 2) + (value >> 4);
	return value-20;
}
uint32_t test_func3783(uint32_t value){
	value *= value;
	value += 0x775c;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-3;
}
uint32_t test_func3784(uint32_t value){
	value *= value;
	value += 0x116c;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	return value-3;
}
uint32_t test_func3785(uint32_t value){
	value *= value;
	value += 0x8734;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	return value-58;
}
uint32_t test_func3786(uint32_t value){
	value *= value;
	value += 0x4eb8;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	return value-19;
}
uint32_t test_func3787(uint32_t value){
	value *= value;
	value += 0x5553;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	value = (value >> 9) + (value >> 8);
	return value-60;
}
uint32_t test_func3788(uint32_t value){
	value *= value;
	value += 0x4830;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 4) + (value >> 1);
	return value-90;
}
uint32_t test_func3789(uint32_t value){
	value *= value;
	value += 0x2cd3;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	return value-69;
}
uint32_t test_func3790(uint32_t value){
	value *= value;
	value += 0x498e;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 1);
	return value-102;
}
uint32_t test_func3791(uint32_t value){
	value *= value;
	value += 0x5e0c;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	return value-79;
}
uint32_t test_func3792(uint32_t value){
	value *= value;
	value += 0x2bca;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 3);
	return value-73;
}
uint32_t test_func3793(uint32_t value){
	value *= value;
	value += 0x4e98;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	return value-49;
}
uint32_t test_func3794(uint32_t value){
	value *= value;
	value += 0x651d;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	return value-68;
}
uint32_t test_func3795(uint32_t value){
	value *= value;
	value += 0x8950;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-60;
}
uint32_t test_func3796(uint32_t value){
	value *= value;
	value += 0x1900;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	return value-98;
}
uint32_t test_func3797(uint32_t value){
	value *= value;
	value += 0x4e4d;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	return value-97;
}
uint32_t test_func3798(uint32_t value){
	value *= value;
	value += 0x282c;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-33;
}
uint32_t test_func3799(uint32_t value){
	value *= value;
	value += 0x22e7;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 3);
	return value-79;
}
uint32_t test_func3800(uint32_t value){
	value *= value;
	value += 0x409b;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-5;
}
uint32_t test_func3801(uint32_t value){
	value *= value;
	value += 0x61b8;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-10;
}
uint32_t test_func3802(uint32_t value){
	value *= value;
	value += 0x6d85;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	return value-63;
}
uint32_t test_func3803(uint32_t value){
	value *= value;
	value += 0x4a99;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	return value-27;
}
uint32_t test_func3804(uint32_t value){
	value *= value;
	value += 0x2763;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	return value-80;
}
uint32_t test_func3805(uint32_t value){
	value *= value;
	value += 0x12a3;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 8);
	return value-31;
}
uint32_t test_func3806(uint32_t value){
	value *= value;
	value += 0x63ee;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 7);
	return value-39;
}
uint32_t test_func3807(uint32_t value){
	value *= value;
	value += 0x742e;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 3);
	return value-120;
}
uint32_t test_func3808(uint32_t value){
	value *= value;
	value += 0x261f;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-55;
}
uint32_t test_func3809(uint32_t value){
	value *= value;
	value += 0x3ed4;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-95;
}
uint32_t test_func3810(uint32_t value){
	value *= value;
	value += 0x8e30;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 7);
	return value-40;
}
uint32_t test_func3811(uint32_t value){
	value *= value;
	value += 0x676d;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	return value-14;
}
uint32_t test_func3812(uint32_t value){
	value *= value;
	value += 0x6999;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	value = (value >> 7) + (value >> 5);
	return value-109;
}
uint32_t test_func3813(uint32_t value){
	value *= value;
	value += 0x1813;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 2) + (value >> 8);
	value = (value >> 3) + (value >> 1);
	return value-83;
}
uint32_t test_func3814(uint32_t value){
	value *= value;
	value += 0x4313;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	value = (value >> 9) + (value >> 8);
	return value-96;
}
uint32_t test_func3815(uint32_t value){
	value *= value;
	value += 0x401f;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	return value-66;
}
uint32_t test_func3816(uint32_t value){
	value *= value;
	value += 0x7297;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	value = (value >> 9) + (value >> 8);
	return value-108;
}
uint32_t test_func3817(uint32_t value){
	value *= value;
	value += 0x242a;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 7);
	return value-72;
}
uint32_t test_func3818(uint32_t value){
	value *= value;
	value += 0x2d5e;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	return value-41;
}
uint32_t test_func3819(uint32_t value){
	value *= value;
	value += 0x6e0c;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-76;
}
uint32_t test_func3820(uint32_t value){
	value *= value;
	value += 0x15e2;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 1);
	return value-123;
}
uint32_t test_func3821(uint32_t value){
	value *= value;
	value += 0x3cdf;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-84;
}
uint32_t test_func3822(uint32_t value){
	value *= value;
	value += 0x4bdb;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	return value-49;
}
uint32_t test_func3823(uint32_t value){
	value *= value;
	value += 0x34fc;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 7);
	return value-36;
}
uint32_t test_func3824(uint32_t value){
	value *= value;
	value += 0x7c42;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	return value-39;
}
uint32_t test_func3825(uint32_t value){
	value *= value;
	value += 0x8ffc;
	value += value;
	value = (value >> 5) + (value >> 7);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 6);
	return value-88;
}
uint32_t test_func3826(uint32_t value){
	value *= value;
	value += 0x7150;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	return value-101;
}
uint32_t test_func3827(uint32_t value){
	value *= value;
	value += 0x2cb7;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-14;
}
uint32_t test_func3828(uint32_t value){
	value *= value;
	value += 0x227e;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 7);
	value = (value >> 2) + (value >> 6);
	return value-67;
}
uint32_t test_func3829(uint32_t value){
	value *= value;
	value += 0x1f47;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	return value-122;
}
uint32_t test_func3830(uint32_t value){
	value *= value;
	value += 0x4486;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	return value-2;
}
uint32_t test_func3831(uint32_t value){
	value *= value;
	value += 0x4104;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	return value-19;
}
uint32_t test_func3832(uint32_t value){
	value *= value;
	value += 0x5960;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	value = (value >> 6) + (value >> 3);
	return value-111;
}
uint32_t test_func3833(uint32_t value){
	value *= value;
	value += 0x4089;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-41;
}
uint32_t test_func3834(uint32_t value){
	value *= value;
	value += 0x4045;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 7);
	return value-7;
}
uint32_t test_func3835(uint32_t value){
	value *= value;
	value += 0x31ad;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	return value-8;
}
uint32_t test_func3836(uint32_t value){
	value *= value;
	value += 0x45ae;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 8) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	return value-13;
}
uint32_t test_func3837(uint32_t value){
	value *= value;
	value += 0x1d89;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	return value-27;
}
uint32_t test_func3838(uint32_t value){
	value *= value;
	value += 0x3354;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	return value-57;
}
uint32_t test_func3839(uint32_t value){
	value *= value;
	value += 0x1278;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	return value-7;
}
uint32_t test_func3840(uint32_t value){
	value *= value;
	value += 0x6031;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	value = (value >> 8) + (value >> 1);
	return value-75;
}
uint32_t test_func3841(uint32_t value){
	value *= value;
	value += 0x3411;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 8);
	return value-77;
}
uint32_t test_func3842(uint32_t value){
	value *= value;
	value += 0x407d;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 8) + (value >> 4);
	return value-47;
}
uint32_t test_func3843(uint32_t value){
	value *= value;
	value += 0x4b2e;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	return value-112;
}
uint32_t test_func3844(uint32_t value){
	value *= value;
	value += 0x75b1;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	value = (value >> 7) + (value >> 3);
	return value-30;
}
uint32_t test_func3845(uint32_t value){
	value *= value;
	value += 0x55e7;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 8);
	value = (value >> 1) + (value >> 2);
	return value-11;
}
uint32_t test_func3846(uint32_t value){
	value *= value;
	value += 0x5e86;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	return value-61;
}
uint32_t test_func3847(uint32_t value){
	value *= value;
	value += 0x1797;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-114;
}
uint32_t test_func3848(uint32_t value){
	value *= value;
	value += 0x26f6;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 4);
	value = (value >> 4) + (value >> 2);
	return value-66;
}
uint32_t test_func3849(uint32_t value){
	value *= value;
	value += 0x28d4;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	value = (value >> 1) + (value >> 3);
	return value-94;
}
uint32_t test_func3850(uint32_t value){
	value *= value;
	value += 0x5838;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	value = (value >> 5) + (value >> 3);
	return value-8;
}
uint32_t test_func3851(uint32_t value){
	value *= value;
	value += 0x877a;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-127;
}
uint32_t test_func3852(uint32_t value){
	value *= value;
	value += 0x68c7;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 4);
	return value-58;
}
uint32_t test_func3853(uint32_t value){
	value *= value;
	value += 0x26a0;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	return value-34;
}
uint32_t test_func3854(uint32_t value){
	value *= value;
	value += 0x4c5b;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	return value-115;
}
uint32_t test_func3855(uint32_t value){
	value *= value;
	value += 0x7ea0;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	return value-81;
}
uint32_t test_func3856(uint32_t value){
	value *= value;
	value += 0x83ed;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 3);
	return value-89;
}
uint32_t test_func3857(uint32_t value){
	value *= value;
	value += 0x1d13;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	return value-114;
}
uint32_t test_func3858(uint32_t value){
	value *= value;
	value += 0x2db7;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	return value-54;
}
uint32_t test_func3859(uint32_t value){
	value *= value;
	value += 0x34d2;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-105;
}
uint32_t test_func3860(uint32_t value){
	value *= value;
	value += 0x1531;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	value = (value >> 4) + (value >> 6);
	return value-46;
}
uint32_t test_func3861(uint32_t value){
	value *= value;
	value += 0x2df5;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-57;
}
uint32_t test_func3862(uint32_t value){
	value *= value;
	value += 0x4313;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-69;
}
uint32_t test_func3863(uint32_t value){
	value *= value;
	value += 0x35d6;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	value = (value >> 1) + (value >> 8);
	return value-24;
}
uint32_t test_func3864(uint32_t value){
	value *= value;
	value += 0x8d59;
	value += value;
	value = (value >> 5) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 6);
	return value-24;
}
uint32_t test_func3865(uint32_t value){
	value *= value;
	value += 0x4f0d;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	return value-32;
}
uint32_t test_func3866(uint32_t value){
	value *= value;
	value += 0x2739;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-98;
}
uint32_t test_func3867(uint32_t value){
	value *= value;
	value += 0x6174;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	return value-103;
}
uint32_t test_func3868(uint32_t value){
	value *= value;
	value += 0x312d;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-58;
}
uint32_t test_func3869(uint32_t value){
	value *= value;
	value += 0x4a24;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 4);
	return value-35;
}
uint32_t test_func3870(uint32_t value){
	value *= value;
	value += 0x48ef;
	value += value;
	value = (value >> 3) + (value >> 6);
	value = (value >> 8) + (value >> 1);
	value = (value >> 6) + (value >> 1);
	return value-23;
}
uint32_t test_func3871(uint32_t value){
	value *= value;
	value += 0x6b76;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	return value-59;
}
uint32_t test_func3872(uint32_t value){
	value *= value;
	value += 0x1977;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	return value-4;
}
uint32_t test_func3873(uint32_t value){
	value *= value;
	value += 0x3d02;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	return value-125;
}
uint32_t test_func3874(uint32_t value){
	value *= value;
	value += 0x6afe;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	return value-50;
}
uint32_t test_func3875(uint32_t value){
	value *= value;
	value += 0x5ba2;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 7);
	return value-48;
}
uint32_t test_func3876(uint32_t value){
	value *= value;
	value += 0x32fd;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	return value-40;
}
uint32_t test_func3877(uint32_t value){
	value *= value;
	value += 0x196f;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	return value-55;
}
uint32_t test_func3878(uint32_t value){
	value *= value;
	value += 0x242e;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	return value-78;
}
uint32_t test_func3879(uint32_t value){
	value *= value;
	value += 0x8dc2;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	return value-51;
}
uint32_t test_func3880(uint32_t value){
	value *= value;
	value += 0x3e88;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 2) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	return value-34;
}
uint32_t test_func3881(uint32_t value){
	value *= value;
	value += 0x2533;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 3);
	return value-32;
}
uint32_t test_func3882(uint32_t value){
	value *= value;
	value += 0x5f46;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	value = (value >> 6) + (value >> 1);
	return value-76;
}
uint32_t test_func3883(uint32_t value){
	value *= value;
	value += 0x319c;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 7);
	return value-117;
}
uint32_t test_func3884(uint32_t value){
	value *= value;
	value += 0x50e0;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-59;
}
uint32_t test_func3885(uint32_t value){
	value *= value;
	value += 0x7a15;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-77;
}
uint32_t test_func3886(uint32_t value){
	value *= value;
	value += 0x5b10;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 8);
	value = (value >> 1) + (value >> 7);
	return value-83;
}
uint32_t test_func3887(uint32_t value){
	value *= value;
	value += 0x4af9;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-117;
}
uint32_t test_func3888(uint32_t value){
	value *= value;
	value += 0x52cd;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	return value-125;
}
uint32_t test_func3889(uint32_t value){
	value *= value;
	value += 0x85df;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	return value-31;
}
uint32_t test_func3890(uint32_t value){
	value *= value;
	value += 0x2a52;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	value = (value >> 7) + (value >> 6);
	return value-85;
}
uint32_t test_func3891(uint32_t value){
	value *= value;
	value += 0x31a0;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-115;
}
uint32_t test_func3892(uint32_t value){
	value *= value;
	value += 0x8117;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	value = (value >> 1) + (value >> 3);
	return value-62;
}
uint32_t test_func3893(uint32_t value){
	value *= value;
	value += 0x8a57;
	value += value;
	value = (value >> 4) + (value >> 7);
	value = (value >> 5) + (value >> 8);
	value = (value >> 6) + (value >> 2);
	return value-60;
}
uint32_t test_func3894(uint32_t value){
	value *= value;
	value += 0x33d5;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-11;
}
uint32_t test_func3895(uint32_t value){
	value *= value;
	value += 0x115b;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 1);
	return value-121;
}
uint32_t test_func3896(uint32_t value){
	value *= value;
	value += 0x6c85;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	value = (value >> 6) + (value >> 5);
	return value-27;
}
uint32_t test_func3897(uint32_t value){
	value *= value;
	value += 0x1d46;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	value = (value >> 4) + (value >> 6);
	return value-18;
}
uint32_t test_func3898(uint32_t value){
	value *= value;
	value += 0x3261;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	return value-119;
}
uint32_t test_func3899(uint32_t value){
	value *= value;
	value += 0x69f0;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 4) + (value >> 1);
	value = (value >> 1) + (value >> 3);
	return value-93;
}
uint32_t test_func3900(uint32_t value){
	value *= value;
	value += 0x79e1;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 3);
	return value-117;
}
uint32_t test_func3901(uint32_t value){
	value *= value;
	value += 0x2873;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 1);
	return value-88;
}
uint32_t test_func3902(uint32_t value){
	value *= value;
	value += 0x34be;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	return value-94;
}
uint32_t test_func3903(uint32_t value){
	value *= value;
	value += 0x8f28;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 8);
	return value-54;
}
uint32_t test_func3904(uint32_t value){
	value *= value;
	value += 0x61f1;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	return value-127;
}
uint32_t test_func3905(uint32_t value){
	value *= value;
	value += 0x69a8;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	return value-14;
}
uint32_t test_func3906(uint32_t value){
	value *= value;
	value += 0x1db3;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	return value-85;
}
uint32_t test_func3907(uint32_t value){
	value *= value;
	value += 0x28cb;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 7);
	return value-106;
}
uint32_t test_func3908(uint32_t value){
	value *= value;
	value += 0x317e;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 6) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	return value-40;
}
uint32_t test_func3909(uint32_t value){
	value *= value;
	value += 0x72ab;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	return value-121;
}
uint32_t test_func3910(uint32_t value){
	value *= value;
	value += 0x2409;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 3);
	return value-49;
}
uint32_t test_func3911(uint32_t value){
	value *= value;
	value += 0x32a1;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	return value-34;
}
uint32_t test_func3912(uint32_t value){
	value *= value;
	value += 0x494f;
	value += value;
	value = (value >> 7) + (value >> 1);
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	return value-50;
}
uint32_t test_func3913(uint32_t value){
	value *= value;
	value += 0x2945;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	value = (value >> 2) + (value >> 6);
	return value-42;
}
uint32_t test_func3914(uint32_t value){
	value *= value;
	value += 0x5288;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	return value-23;
}
uint32_t test_func3915(uint32_t value){
	value *= value;
	value += 0x7c71;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 5) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-80;
}
uint32_t test_func3916(uint32_t value){
	value *= value;
	value += 0x5e2e;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 8);
	return value-30;
}
uint32_t test_func3917(uint32_t value){
	value *= value;
	value += 0x473e;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	return value-117;
}
uint32_t test_func3918(uint32_t value){
	value *= value;
	value += 0x87f8;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	return value-108;
}
uint32_t test_func3919(uint32_t value){
	value *= value;
	value += 0x2a05;
	value += value;
	value = (value >> 5) + (value >> 2);
	value = (value >> 9) + (value >> 8);
	value = (value >> 4) + (value >> 2);
	return value-50;
}
uint32_t test_func3920(uint32_t value){
	value *= value;
	value += 0x78e1;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 8) + (value >> 1);
	value = (value >> 8) + (value >> 3);
	return value-56;
}
uint32_t test_func3921(uint32_t value){
	value *= value;
	value += 0x5a5e;
	value += value;
	value = (value >> 2) + (value >> 4);
	value = (value >> 5) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-124;
}
uint32_t test_func3922(uint32_t value){
	value *= value;
	value += 0x7721;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-99;
}
uint32_t test_func3923(uint32_t value){
	value *= value;
	value += 0x3323;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-71;
}
uint32_t test_func3924(uint32_t value){
	value *= value;
	value += 0x7631;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	return value-25;
}
uint32_t test_func3925(uint32_t value){
	value *= value;
	value += 0x446d;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 7) + (value >> 5);
	return value-37;
}
uint32_t test_func3926(uint32_t value){
	value *= value;
	value += 0x26cb;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	return value-116;
}
uint32_t test_func3927(uint32_t value){
	value *= value;
	value += 0x6394;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 5);
	return value-92;
}
uint32_t test_func3928(uint32_t value){
	value *= value;
	value += 0x86e6;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	return value-27;
}
uint32_t test_func3929(uint32_t value){
	value *= value;
	value += 0x3b32;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	return value-28;
}
uint32_t test_func3930(uint32_t value){
	value *= value;
	value += 0x71bd;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	return value-96;
}
uint32_t test_func3931(uint32_t value){
	value *= value;
	value += 0x5b20;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 9) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	return value-6;
}
uint32_t test_func3932(uint32_t value){
	value *= value;
	value += 0x2fc8;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	return value-100;
}
uint32_t test_func3933(uint32_t value){
	value *= value;
	value += 0x4876;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 1) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	return value-90;
}
uint32_t test_func3934(uint32_t value){
	value *= value;
	value += 0x86c0;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-49;
}
uint32_t test_func3935(uint32_t value){
	value *= value;
	value += 0x8d8e;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 2);
	value = (value >> 3) + (value >> 1);
	return value-27;
}
uint32_t test_func3936(uint32_t value){
	value *= value;
	value += 0x499e;
	value += value;
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 6);
	return value-96;
}
uint32_t test_func3937(uint32_t value){
	value *= value;
	value += 0x4a01;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 7);
	value = (value >> 8) + (value >> 4);
	return value-31;
}
uint32_t test_func3938(uint32_t value){
	value *= value;
	value += 0x689c;
	value += value;
	value = (value >> 4) + (value >> 1);
	value = (value >> 3) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	return value-54;
}
uint32_t test_func3939(uint32_t value){
	value *= value;
	value += 0x42a8;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	return value-63;
}
uint32_t test_func3940(uint32_t value){
	value *= value;
	value += 0x8132;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 6) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	return value-67;
}
uint32_t test_func3941(uint32_t value){
	value *= value;
	value += 0x719b;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-111;
}
uint32_t test_func3942(uint32_t value){
	value *= value;
	value += 0x6e19;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 8) + (value >> 6);
	value = (value >> 5) + (value >> 7);
	return value-9;
}
uint32_t test_func3943(uint32_t value){
	value *= value;
	value += 0x1634;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 1);
	value = (value >> 5) + (value >> 7);
	return value-96;
}
uint32_t test_func3944(uint32_t value){
	value *= value;
	value += 0x574a;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 7) + (value >> 5);
	return value-12;
}
uint32_t test_func3945(uint32_t value){
	value *= value;
	value += 0x450c;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	return value-28;
}
uint32_t test_func3946(uint32_t value){
	value *= value;
	value += 0x41fe;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 2);
	return value-8;
}
uint32_t test_func3947(uint32_t value){
	value *= value;
	value += 0x77fb;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	value = (value >> 6) + (value >> 5);
	return value-47;
}
uint32_t test_func3948(uint32_t value){
	value *= value;
	value += 0x20af;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	return value-127;
}
uint32_t test_func3949(uint32_t value){
	value *= value;
	value += 0x1e1b;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	value = (value >> 6) + (value >> 5);
	return value-60;
}
uint32_t test_func3950(uint32_t value){
	value *= value;
	value += 0x6315;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	return value-96;
}
uint32_t test_func3951(uint32_t value){
	value *= value;
	value += 0x2bc5;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 6);
	return value-39;
}
uint32_t test_func3952(uint32_t value){
	value *= value;
	value += 0x8629;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	value = (value >> 8) + (value >> 6);
	return value-41;
}
uint32_t test_func3953(uint32_t value){
	value *= value;
	value += 0x2a92;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	return value-43;
}
uint32_t test_func3954(uint32_t value){
	value *= value;
	value += 0x2425;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 1);
	return value-126;
}
uint32_t test_func3955(uint32_t value){
	value *= value;
	value += 0x495a;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 8);
	return value-8;
}
uint32_t test_func3956(uint32_t value){
	value *= value;
	value += 0x8480;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 8);
	return value-93;
}
uint32_t test_func3957(uint32_t value){
	value *= value;
	value += 0x6c37;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	return value-19;
}
uint32_t test_func3958(uint32_t value){
	value *= value;
	value += 0x2bf4;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 5) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	return value-32;
}
uint32_t test_func3959(uint32_t value){
	value *= value;
	value += 0x3c81;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 6);
	value = (value >> 1) + (value >> 6);
	return value-96;
}
uint32_t test_func3960(uint32_t value){
	value *= value;
	value += 0x6c7b;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 7);
	return value-56;
}
uint32_t test_func3961(uint32_t value){
	value *= value;
	value += 0x38d3;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 6);
	return value-95;
}
uint32_t test_func3962(uint32_t value){
	value *= value;
	value += 0x754d;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 1);
	return value-65;
}
uint32_t test_func3963(uint32_t value){
	value *= value;
	value += 0x4504;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	return value-2;
}
uint32_t test_func3964(uint32_t value){
	value *= value;
	value += 0x62e3;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 2) + (value >> 5);
	value = (value >> 8) + (value >> 2);
	return value-34;
}
uint32_t test_func3965(uint32_t value){
	value *= value;
	value += 0x3a2d;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 1) + (value >> 2);
	value = (value >> 1) + (value >> 5);
	return value-76;
}
uint32_t test_func3966(uint32_t value){
	value *= value;
	value += 0x4ef7;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 5);
	return value-45;
}
uint32_t test_func3967(uint32_t value){
	value *= value;
	value += 0x76a9;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	return value-6;
}
uint32_t test_func3968(uint32_t value){
	value *= value;
	value += 0x6080;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 6) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	return value-69;
}
uint32_t test_func3969(uint32_t value){
	value *= value;
	value += 0x6e0f;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 6) + (value >> 7);
	value = (value >> 2) + (value >> 3);
	return value-82;
}
uint32_t test_func3970(uint32_t value){
	value *= value;
	value += 0x5bb9;
	value += value;
	value = (value >> 1) + (value >> 7);
	value = (value >> 7) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-118;
}
uint32_t test_func3971(uint32_t value){
	value *= value;
	value += 0x3938;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 7);
	value = (value >> 5) + (value >> 3);
	return value-82;
}
uint32_t test_func3972(uint32_t value){
	value *= value;
	value += 0x321a;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	return value-22;
}
uint32_t test_func3973(uint32_t value){
	value *= value;
	value += 0x263f;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 7);
	return value-62;
}
uint32_t test_func3974(uint32_t value){
	value *= value;
	value += 0x125c;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 7);
	return value-112;
}
uint32_t test_func3975(uint32_t value){
	value *= value;
	value += 0x487b;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 7) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	return value-15;
}
uint32_t test_func3976(uint32_t value){
	value *= value;
	value += 0x7879;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	value = (value >> 2) + (value >> 6);
	return value-84;
}
uint32_t test_func3977(uint32_t value){
	value *= value;
	value += 0x8886;
	value += value;
	value = (value >> 8) + (value >> 3);
	value = (value >> 6) + (value >> 2);
	value = (value >> 4) + (value >> 2);
	return value-27;
}
uint32_t test_func3978(uint32_t value){
	value *= value;
	value += 0x3da9;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	value = (value >> 4) + (value >> 5);
	return value-64;
}
uint32_t test_func3979(uint32_t value){
	value *= value;
	value += 0x3439;
	value += value;
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 4);
	value = (value >> 3) + (value >> 2);
	return value-48;
}
uint32_t test_func3980(uint32_t value){
	value *= value;
	value += 0x2864;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 1) + (value >> 3);
	value = (value >> 8) + (value >> 3);
	return value-2;
}
uint32_t test_func3981(uint32_t value){
	value *= value;
	value += 0x8eac;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 3) + (value >> 7);
	value = (value >> 6) + (value >> 3);
	return value-64;
}
uint32_t test_func3982(uint32_t value){
	value *= value;
	value += 0x7c65;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 6);
	value = (value >> 4) + (value >> 2);
	return value-79;
}
uint32_t test_func3983(uint32_t value){
	value *= value;
	value += 0x6039;
	value += value;
	value = (value >> 8) + (value >> 2);
	value = (value >> 2) + (value >> 3);
	value = (value >> 3) + (value >> 5);
	return value-113;
}
uint32_t test_func3984(uint32_t value){
	value *= value;
	value += 0x8aa5;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	value = (value >> 5) + (value >> 4);
	return value-107;
}
uint32_t test_func3985(uint32_t value){
	value *= value;
	value += 0x8679;
	value += value;
	value = (value >> 1) + (value >> 6);
	value = (value >> 8) + (value >> 3);
	value = (value >> 8) + (value >> 2);
	return value-75;
}
uint32_t test_func3986(uint32_t value){
	value *= value;
	value += 0x415b;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	return value-74;
}
uint32_t test_func3987(uint32_t value){
	value *= value;
	value += 0x8444;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	value = (value >> 1) + (value >> 2);
	return value-83;
}
uint32_t test_func3988(uint32_t value){
	value *= value;
	value += 0x3c02;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	value = (value >> 8) + (value >> 1);
	return value-41;
}
uint32_t test_func3989(uint32_t value){
	value *= value;
	value += 0x11b5;
	value += value;
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	return value-39;
}
uint32_t test_func3990(uint32_t value){
	value *= value;
	value += 0x5352;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	return value-45;
}
uint32_t test_func3991(uint32_t value){
	value *= value;
	value += 0x2c22;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-35;
}
uint32_t test_func3992(uint32_t value){
	value *= value;
	value += 0x2d44;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 2);
	return value-18;
}
uint32_t test_func3993(uint32_t value){
	value *= value;
	value += 0x2627;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	return value-125;
}
uint32_t test_func3994(uint32_t value){
	value *= value;
	value += 0x4d11;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-57;
}
uint32_t test_func3995(uint32_t value){
	value *= value;
	value += 0x379b;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 2);
	value = (value >> 2) + (value >> 4);
	return value-111;
}
uint32_t test_func3996(uint32_t value){
	value *= value;
	value += 0x2333;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 8) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	return value-81;
}
uint32_t test_func3997(uint32_t value){
	value *= value;
	value += 0x8d98;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 6) + (value >> 8);
	value = (value >> 3) + (value >> 5);
	return value-73;
}
uint32_t test_func3998(uint32_t value){
	value *= value;
	value += 0x1d61;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 8);
	value = (value >> 7) + (value >> 4);
	return value-117;
}
uint32_t test_func3999(uint32_t value){
	value *= value;
	value += 0x5a77;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 1);
	value = (value >> 5) + (value >> 8);
	return value-26;
}
uint32_t test_func4000(uint32_t value){
	value *= value;
	value += 0x3696;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	return value-78;
}
uint32_t test_func4001(uint32_t value){
	value *= value;
	value += 0x65d0;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-73;
}
uint32_t test_func4002(uint32_t value){
	value *= value;
	value += 0x870a;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	value = (value >> 4) + (value >> 3);
	return value-51;
}
uint32_t test_func4003(uint32_t value){
	value *= value;
	value += 0x1c7d;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	value = (value >> 5) + (value >> 7);
	return value-63;
}
uint32_t test_func4004(uint32_t value){
	value *= value;
	value += 0x5436;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 1) + (value >> 2);
	value = (value >> 6) + (value >> 1);
	return value-67;
}
uint32_t test_func4005(uint32_t value){
	value *= value;
	value += 0x2097;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 9) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	return value-1;
}
uint32_t test_func4006(uint32_t value){
	value *= value;
	value += 0x20d4;
	value += value;
	value = (value >> 5) + (value >> 6);
	value = (value >> 3) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	return value-12;
}
uint32_t test_func4007(uint32_t value){
	value *= value;
	value += 0x5976;
	value += value;
	value = (value >> 3) + (value >> 7);
	value = (value >> 4) + (value >> 2);
	value = (value >> 2) + (value >> 8);
	return value-76;
}
uint32_t test_func4008(uint32_t value){
	value *= value;
	value += 0x3cdc;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 2) + (value >> 3);
	return value-41;
}
uint32_t test_func4009(uint32_t value){
	value *= value;
	value += 0x83b5;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 2);
	return value-64;
}
uint32_t test_func4010(uint32_t value){
	value *= value;
	value += 0x5587;
	value += value;
	value = (value >> 6) + (value >> 2);
	value = (value >> 2) + (value >> 1);
	value = (value >> 6) + (value >> 3);
	return value-96;
}
uint32_t test_func4011(uint32_t value){
	value *= value;
	value += 0x412b;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	return value-116;
}
uint32_t test_func4012(uint32_t value){
	value *= value;
	value += 0x854e;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 6);
	value = (value >> 5) + (value >> 2);
	return value-69;
}
uint32_t test_func4013(uint32_t value){
	value *= value;
	value += 0x28f1;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 5);
	return value-33;
}
uint32_t test_func4014(uint32_t value){
	value *= value;
	value += 0x63ea;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-86;
}
uint32_t test_func4015(uint32_t value){
	value *= value;
	value += 0x5761;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-52;
}
uint32_t test_func4016(uint32_t value){
	value *= value;
	value += 0x1655;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 6);
	return value-37;
}
uint32_t test_func4017(uint32_t value){
	value *= value;
	value += 0x7e14;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 7) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-124;
}
uint32_t test_func4018(uint32_t value){
	value *= value;
	value += 0x5ec6;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 7) + (value >> 8);
	value = (value >> 2) + (value >> 4);
	return value-99;
}
uint32_t test_func4019(uint32_t value){
	value *= value;
	value += 0x73e3;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 1) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	return value-73;
}
uint32_t test_func4020(uint32_t value){
	value *= value;
	value += 0x2cb8;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 2) + (value >> 8);
	value = (value >> 5) + (value >> 6);
	return value-29;
}
uint32_t test_func4021(uint32_t value){
	value *= value;
	value += 0x44e6;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 7);
	return value-1;
}
uint32_t test_func4022(uint32_t value){
	value *= value;
	value += 0x2ce3;
	value += value;
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 2);
	value = (value >> 5) + (value >> 4);
	return value-61;
}
uint32_t test_func4023(uint32_t value){
	value *= value;
	value += 0x4278;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 3);
	return value-68;
}
uint32_t test_func4024(uint32_t value){
	value *= value;
	value += 0x5941;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	return value-73;
}
uint32_t test_func4025(uint32_t value){
	value *= value;
	value += 0x132f;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 5);
	return value-22;
}
uint32_t test_func4026(uint32_t value){
	value *= value;
	value += 0x8909;
	value += value;
	value = (value >> 8) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	value = (value >> 8) + (value >> 6);
	return value-102;
}
uint32_t test_func4027(uint32_t value){
	value *= value;
	value += 0x42e7;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 7);
	return value-114;
}
uint32_t test_func4028(uint32_t value){
	value *= value;
	value += 0x80b6;
	value += value;
	value = (value >> 2) + (value >> 6);
	value = (value >> 3) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	return value-16;
}
uint32_t test_func4029(uint32_t value){
	value *= value;
	value += 0x52b7;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 2);
	value = (value >> 8) + (value >> 2);
	return value-118;
}
uint32_t test_func4030(uint32_t value){
	value *= value;
	value += 0x8200;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 4);
	value = (value >> 8) + (value >> 7);
	return value-40;
}
uint32_t test_func4031(uint32_t value){
	value *= value;
	value += 0x48f9;
	value += value;
	value = (value >> 7) + (value >> 4);
	value = (value >> 1) + (value >> 2);
	value = (value >> 5) + (value >> 6);
	return value-115;
}
uint32_t test_func4032(uint32_t value){
	value *= value;
	value += 0x5be0;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 6);
	return value-30;
}
uint32_t test_func4033(uint32_t value){
	value *= value;
	value += 0x4146;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 5);
	value = (value >> 1) + (value >> 5);
	return value-31;
}
uint32_t test_func4034(uint32_t value){
	value *= value;
	value += 0x7a8f;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	value = (value >> 2) + (value >> 1);
	return value-17;
}
uint32_t test_func4035(uint32_t value){
	value *= value;
	value += 0x7c76;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	return value-40;
}
uint32_t test_func4036(uint32_t value){
	value *= value;
	value += 0x7787;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 5) + (value >> 7);
	return value-102;
}
uint32_t test_func4037(uint32_t value){
	value *= value;
	value += 0x70a3;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 7);
	value = (value >> 3) + (value >> 6);
	return value-88;
}
uint32_t test_func4038(uint32_t value){
	value *= value;
	value += 0x2980;
	value += value;
	value = (value >> 7) + (value >> 6);
	value = (value >> 7) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	return value-120;
}
uint32_t test_func4039(uint32_t value){
	value *= value;
	value += 0x5926;
	value += value;
	value = (value >> 2) + (value >> 8);
	value = (value >> 6) + (value >> 1);
	value = (value >> 3) + (value >> 2);
	return value-59;
}
uint32_t test_func4040(uint32_t value){
	value *= value;
	value += 0x3473;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 6) + (value >> 1);
	value = (value >> 6) + (value >> 5);
	return value-40;
}
uint32_t test_func4041(uint32_t value){
	value *= value;
	value += 0x4697;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	value = (value >> 5) + (value >> 6);
	return value-49;
}
uint32_t test_func4042(uint32_t value){
	value *= value;
	value += 0x1999;
	value += value;
	value = (value >> 3) + (value >> 5);
	value = (value >> 6) + (value >> 8);
	value = (value >> 4) + (value >> 5);
	return value-5;
}
uint32_t test_func4043(uint32_t value){
	value *= value;
	value += 0x2ed0;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 7) + (value >> 2);
	value = (value >> 9) + (value >> 8);
	return value-29;
}
uint32_t test_func4044(uint32_t value){
	value *= value;
	value += 0x476b;
	value += value;
	value = (value >> 4) + (value >> 8);
	value = (value >> 6) + (value >> 4);
	value = (value >> 5) + (value >> 6);
	return value-103;
}
uint32_t test_func4045(uint32_t value){
	value *= value;
	value += 0x7cea;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 3);
	value = (value >> 8) + (value >> 3);
	return value-127;
}
uint32_t test_func4046(uint32_t value){
	value *= value;
	value += 0x29a3;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 8) + (value >> 5);
	value = (value >> 5) + (value >> 8);
	return value-27;
}
uint32_t test_func4047(uint32_t value){
	value *= value;
	value += 0x213e;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 3) + (value >> 6);
	value = (value >> 2) + (value >> 8);
	return value-14;
}
uint32_t test_func4048(uint32_t value){
	value *= value;
	value += 0x3938;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 3) + (value >> 5);
	value = (value >> 2) + (value >> 4);
	return value-112;
}
uint32_t test_func4049(uint32_t value){
	value *= value;
	value += 0x2164;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	return value-98;
}
uint32_t test_func4050(uint32_t value){
	value *= value;
	value += 0x8c65;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 3);
	return value-107;
}
uint32_t test_func4051(uint32_t value){
	value *= value;
	value += 0x2836;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	return value-12;
}
uint32_t test_func4052(uint32_t value){
	value *= value;
	value += 0x66a2;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 7) + (value >> 4);
	value = (value >> 7) + (value >> 6);
	return value-87;
}
uint32_t test_func4053(uint32_t value){
	value *= value;
	value += 0x15cc;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 6);
	value = (value >> 8) + (value >> 2);
	return value-63;
}
uint32_t test_func4054(uint32_t value){
	value *= value;
	value += 0x48a9;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 2) + (value >> 5);
	value = (value >> 7) + (value >> 6);
	return value-113;
}
uint32_t test_func4055(uint32_t value){
	value *= value;
	value += 0x8f81;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	value = (value >> 4) + (value >> 7);
	return value-99;
}
uint32_t test_func4056(uint32_t value){
	value *= value;
	value += 0x8071;
	value += value;
	value = (value >> 3) + (value >> 1);
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 5);
	return value-123;
}
uint32_t test_func4057(uint32_t value){
	value *= value;
	value += 0x8fec;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 5) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	return value-71;
}
uint32_t test_func4058(uint32_t value){
	value *= value;
	value += 0x3935;
	value += value;
	value = (value >> 8) + (value >> 1);
	value = (value >> 2) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	return value-107;
}
uint32_t test_func4059(uint32_t value){
	value *= value;
	value += 0x76e7;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	return value-41;
}
uint32_t test_func4060(uint32_t value){
	value *= value;
	value += 0x8b6d;
	value += value;
	value = (value >> 9) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	return value-1;
}
uint32_t test_func4061(uint32_t value){
	value *= value;
	value += 0x198a;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	return value-111;
}
uint32_t test_func4062(uint32_t value){
	value *= value;
	value += 0x8cd2;
	value += value;
	value = (value >> 1) + (value >> 5);
	value = (value >> 5) + (value >> 4);
	value = (value >> 4) + (value >> 6);
	return value-99;
}
uint32_t test_func4063(uint32_t value){
	value *= value;
	value += 0x522f;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 6) + (value >> 8);
	value = (value >> 8) + (value >> 7);
	return value-55;
}
uint32_t test_func4064(uint32_t value){
	value *= value;
	value += 0x605e;
	value += value;
	value = (value >> 7) + (value >> 2);
	value = (value >> 7) + (value >> 3);
	value = (value >> 2) + (value >> 7);
	return value-79;
}
uint32_t test_func4065(uint32_t value){
	value *= value;
	value += 0x106f;
	value += value;
	value = (value >> 2) + (value >> 1);
	value = (value >> 1) + (value >> 2);
	value = (value >> 8) + (value >> 7);
	return value-118;
}
uint32_t test_func4066(uint32_t value){
	value *= value;
	value += 0x4648;
	value += value;
	value = (value >> 7) + (value >> 8);
	value = (value >> 8) + (value >> 2);
	value = (value >> 3) + (value >> 2);
	return value-43;
}
uint32_t test_func4067(uint32_t value){
	value *= value;
	value += 0x6923;
	value += value;
	value = (value >> 6) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	value = (value >> 1) + (value >> 3);
	return value-44;
}
uint32_t test_func4068(uint32_t value){
	value *= value;
	value += 0x2c0b;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	value = (value >> 8) + (value >> 2);
	return value-35;
}
uint32_t test_func4069(uint32_t value){
	value *= value;
	value += 0x2663;
	value += value;
	value = (value >> 6) + (value >> 1);
	value = (value >> 7) + (value >> 2);
	value = (value >> 5) + (value >> 3);
	return value-102;
}
uint32_t test_func4070(uint32_t value){
	value *= value;
	value += 0x3c5f;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 6) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	return value-90;
}
uint32_t test_func4071(uint32_t value){
	value *= value;
	value += 0x5789;
	value += value;
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 1);
	return value-118;
}
uint32_t test_func4072(uint32_t value){
	value *= value;
	value += 0x6f3d;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 2);
	return value-117;
}
uint32_t test_func4073(uint32_t value){
	value *= value;
	value += 0x612e;
	value += value;
	value = (value >> 6) + (value >> 5);
	value = (value >> 5) + (value >> 3);
	value = (value >> 4) + (value >> 5);
	return value-11;
}
uint32_t test_func4074(uint32_t value){
	value *= value;
	value += 0x19df;
	value += value;
	value = (value >> 5) + (value >> 3);
	value = (value >> 7) + (value >> 4);
	value = (value >> 6) + (value >> 4);
	return value-80;
}
uint32_t test_func4075(uint32_t value){
	value *= value;
	value += 0x8d2a;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 5) + (value >> 3);
	value = (value >> 2) + (value >> 1);
	return value-74;
}
uint32_t test_func4076(uint32_t value){
	value *= value;
	value += 0x7ebc;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 6) + (value >> 7);
	value = (value >> 1) + (value >> 6);
	return value-12;
}
uint32_t test_func4077(uint32_t value){
	value *= value;
	value += 0x1a97;
	value += value;
	value = (value >> 3) + (value >> 8);
	value = (value >> 4) + (value >> 3);
	value = (value >> 3) + (value >> 6);
	return value-123;
}
uint32_t test_func4078(uint32_t value){
	value *= value;
	value += 0x5d8f;
	value += value;
	value = (value >> 5) + (value >> 4);
	value = (value >> 1) + (value >> 7);
	value = (value >> 3) + (value >> 1);
	return value-56;
}
uint32_t test_func4079(uint32_t value){
	value *= value;
	value += 0x4dce;
	value += value;
	value = (value >> 6) + (value >> 3);
	value = (value >> 2) + (value >> 6);
	value = (value >> 8) + (value >> 4);
	return value-31;
}
uint32_t test_func4080(uint32_t value){
	value *= value;
	value += 0x8350;
	value += value;
	value = (value >> 2) + (value >> 3);
	value = (value >> 4) + (value >> 6);
	value = (value >> 3) + (value >> 6);
	return value-112;
}
uint32_t test_func4081(uint32_t value){
	value *= value;
	value += 0x8067;
	value += value;
	value = (value >> 2) + (value >> 7);
	value = (value >> 1) + (value >> 3);
	value = (value >> 3) + (value >> 4);
	return value-22;
}
uint32_t test_func4082(uint32_t value){
	value *= value;
	value += 0x5a38;
	value += value;
	value = (value >> 1) + (value >> 4);
	value = (value >> 6) + (value >> 5);
	value = (value >> 4) + (value >> 6);
	return value-3;
}
uint32_t test_func4083(uint32_t value){
	value *= value;
	value += 0x313c;
	value += value;
	value = (value >> 3) + (value >> 4);
	value = (value >> 3) + (value >> 5);
	value = (value >> 3) + (value >> 1);
	return value-58;
}
uint32_t test_func4084(uint32_t value){
	value *= value;
	value += 0x79c1;
	value += value;
	value = (value >> 8) + (value >> 6);
	value = (value >> 1) + (value >> 4);
	value = (value >> 4) + (value >> 3);
	return value-125;
}
uint32_t test_func4085(uint32_t value){
	value *= value;
	value += 0x1466;
	value += value;
	value = (value >> 6) + (value >> 4);
	value = (value >> 7) + (value >> 3);
	value = (value >> 4) + (value >> 1);
	return value-4;
}
uint32_t test_func4086(uint32_t value){
	value *= value;
	value += 0x36a2;
	value += value;
	value = (value >> 4) + (value >> 3);
	value = (value >> 5) + (value >> 4);
	value = (value >> 7) + (value >> 4);
	return value-101;
}
uint32_t test_func4087(uint32_t value){
	value *= value;
	value += 0x233e;
	value += value;
	value = (value >> 8) + (value >> 7);
	value = (value >> 1) + (value >> 8);
	value = (value >> 3) + (value >> 8);
	return value-37;
}
uint32_t test_func4088(uint32_t value){
	value *= value;
	value += 0x32d6;
	value += value;
	value = (value >> 8) + (value >> 4);
	value = (value >> 3) + (value >> 7);
	value = (value >> 3) + (value >> 4);
	return value-75;
}
uint32_t test_func4089(uint32_t value){
	value *= value;
	value += 0x2c5c;
	value += value;
	value = (value >> 4) + (value >> 6);
	value = (value >> 5) + (value >> 3);
	value = (value >> 6) + (value >> 5);
	return value-49;
}
uint32_t test_func4090(uint32_t value){
	value *= value;
	value += 0x6d95;
	value += value;
	value = (value >> 4) + (value >> 2);
	value = (value >> 4) + (value >> 5);
	value = (value >> 4) + (value >> 2);
	return value-103;
}
uint32_t test_func4091(uint32_t value){
	value *= value;
	value += 0x639a;
	value += value;
	value = (value >> 3) + (value >> 2);
	value = (value >> 2) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	return value-52;
}
uint32_t test_func4092(uint32_t value){
	value *= value;
	value += 0x5358;
	value += value;
	value = (value >> 2) + (value >> 5);
	value = (value >> 4) + (value >> 8);
	value = (value >> 8) + (value >> 1);
	return value-62;
}
uint32_t test_func4093(uint32_t value){
	value *= value;
	value += 0x7211;
	value += value;
	value = (value >> 7) + (value >> 5);
	value = (value >> 4) + (value >> 3);
	value = (value >> 7) + (value >> 6);
	return value-85;
}
uint32_t test_func4094(uint32_t value){
	value *= value;
	value += 0x4dd9;
	value += value;
	value = (value >> 1) + (value >> 8);
	value = (value >> 7) + (value >> 8);
	value = (value >> 4) + (value >> 1);
	return value-75;
}
uint32_t test_func4095(uint32_t value){
	value *= value;
	value += 0x8619;
	value += value;
	value = (value >> 6) + (value >> 7);
	value = (value >> 7) + (value >> 1);
	value = (value >> 8) + (value >> 5);
	return value-127;
}
const test_func_t func_array[FUNC_NUM] = {
	test_func0,
	test_func1,
	test_func2,
	test_func3,
	test_func4,
	test_func5,
	test_func6,
	test_func7,
	test_func8,
	test_func9,
	test_func10,
	test_func11,
	test_func12,
	test_func13,
	test_func14,
	test_func15,
	test_func16,
	test_func17,
	test_func18,
	test_func19,
	test_func20,
	test_func21,
	test_func22,
	test_func23,
	test_func24,
	test_func25,
	test_func26,
	test_func27,
	test_func28,
	test_func29,
	test_func30,
	test_func31,
	test_func32,
	test_func33,
	test_func34,
	test_func35,
	test_func36,
	test_func37,
	test_func38,
	test_func39,
	test_func40,
	test_func41,
	test_func42,
	test_func43,
	test_func44,
	test_func45,
	test_func46,
	test_func47,
	test_func48,
	test_func49,
	test_func50,
	test_func51,
	test_func52,
	test_func53,
	test_func54,
	test_func55,
	test_func56,
	test_func57,
	test_func58,
	test_func59,
	test_func60,
	test_func61,
	test_func62,
	test_func63,
	test_func64,
	test_func65,
	test_func66,
	test_func67,
	test_func68,
	test_func69,
	test_func70,
	test_func71,
	test_func72,
	test_func73,
	test_func74,
	test_func75,
	test_func76,
	test_func77,
	test_func78,
	test_func79,
	test_func80,
	test_func81,
	test_func82,
	test_func83,
	test_func84,
	test_func85,
	test_func86,
	test_func87,
	test_func88,
	test_func89,
	test_func90,
	test_func91,
	test_func92,
	test_func93,
	test_func94,
	test_func95,
	test_func96,
	test_func97,
	test_func98,
	test_func99,
	test_func100,
	test_func101,
	test_func102,
	test_func103,
	test_func104,
	test_func105,
	test_func106,
	test_func107,
	test_func108,
	test_func109,
	test_func110,
	test_func111,
	test_func112,
	test_func113,
	test_func114,
	test_func115,
	test_func116,
	test_func117,
	test_func118,
	test_func119,
	test_func120,
	test_func121,
	test_func122,
	test_func123,
	test_func124,
	test_func125,
	test_func126,
	test_func127,
	test_func128,
	test_func129,
	test_func130,
	test_func131,
	test_func132,
	test_func133,
	test_func134,
	test_func135,
	test_func136,
	test_func137,
	test_func138,
	test_func139,
	test_func140,
	test_func141,
	test_func142,
	test_func143,
	test_func144,
	test_func145,
	test_func146,
	test_func147,
	test_func148,
	test_func149,
	test_func150,
	test_func151,
	test_func152,
	test_func153,
	test_func154,
	test_func155,
	test_func156,
	test_func157,
	test_func158,
	test_func159,
	test_func160,
	test_func161,
	test_func162,
	test_func163,
	test_func164,
	test_func165,
	test_func166,
	test_func167,
	test_func168,
	test_func169,
	test_func170,
	test_func171,
	test_func172,
	test_func173,
	test_func174,
	test_func175,
	test_func176,
	test_func177,
	test_func178,
	test_func179,
	test_func180,
	test_func181,
	test_func182,
	test_func183,
	test_func184,
	test_func185,
	test_func186,
	test_func187,
	test_func188,
	test_func189,
	test_func190,
	test_func191,
	test_func192,
	test_func193,
	test_func194,
	test_func195,
	test_func196,
	test_func197,
	test_func198,
	test_func199,
	test_func200,
	test_func201,
	test_func202,
	test_func203,
	test_func204,
	test_func205,
	test_func206,
	test_func207,
	test_func208,
	test_func209,
	test_func210,
	test_func211,
	test_func212,
	test_func213,
	test_func214,
	test_func215,
	test_func216,
	test_func217,
	test_func218,
	test_func219,
	test_func220,
	test_func221,
	test_func222,
	test_func223,
	test_func224,
	test_func225,
	test_func226,
	test_func227,
	test_func228,
	test_func229,
	test_func230,
	test_func231,
	test_func232,
	test_func233,
	test_func234,
	test_func235,
	test_func236,
	test_func237,
	test_func238,
	test_func239,
	test_func240,
	test_func241,
	test_func242,
	test_func243,
	test_func244,
	test_func245,
	test_func246,
	test_func247,
	test_func248,
	test_func249,
	test_func250,
	test_func251,
	test_func252,
	test_func253,
	test_func254,
	test_func255,
	test_func256,
	test_func257,
	test_func258,
	test_func259,
	test_func260,
	test_func261,
	test_func262,
	test_func263,
	test_func264,
	test_func265,
	test_func266,
	test_func267,
	test_func268,
	test_func269,
	test_func270,
	test_func271,
	test_func272,
	test_func273,
	test_func274,
	test_func275,
	test_func276,
	test_func277,
	test_func278,
	test_func279,
	test_func280,
	test_func281,
	test_func282,
	test_func283,
	test_func284,
	test_func285,
	test_func286,
	test_func287,
	test_func288,
	test_func289,
	test_func290,
	test_func291,
	test_func292,
	test_func293,
	test_func294,
	test_func295,
	test_func296,
	test_func297,
	test_func298,
	test_func299,
	test_func300,
	test_func301,
	test_func302,
	test_func303,
	test_func304,
	test_func305,
	test_func306,
	test_func307,
	test_func308,
	test_func309,
	test_func310,
	test_func311,
	test_func312,
	test_func313,
	test_func314,
	test_func315,
	test_func316,
	test_func317,
	test_func318,
	test_func319,
	test_func320,
	test_func321,
	test_func322,
	test_func323,
	test_func324,
	test_func325,
	test_func326,
	test_func327,
	test_func328,
	test_func329,
	test_func330,
	test_func331,
	test_func332,
	test_func333,
	test_func334,
	test_func335,
	test_func336,
	test_func337,
	test_func338,
	test_func339,
	test_func340,
	test_func341,
	test_func342,
	test_func343,
	test_func344,
	test_func345,
	test_func346,
	test_func347,
	test_func348,
	test_func349,
	test_func350,
	test_func351,
	test_func352,
	test_func353,
	test_func354,
	test_func355,
	test_func356,
	test_func357,
	test_func358,
	test_func359,
	test_func360,
	test_func361,
	test_func362,
	test_func363,
	test_func364,
	test_func365,
	test_func366,
	test_func367,
	test_func368,
	test_func369,
	test_func370,
	test_func371,
	test_func372,
	test_func373,
	test_func374,
	test_func375,
	test_func376,
	test_func377,
	test_func378,
	test_func379,
	test_func380,
	test_func381,
	test_func382,
	test_func383,
	test_func384,
	test_func385,
	test_func386,
	test_func387,
	test_func388,
	test_func389,
	test_func390,
	test_func391,
	test_func392,
	test_func393,
	test_func394,
	test_func395,
	test_func396,
	test_func397,
	test_func398,
	test_func399,
	test_func400,
	test_func401,
	test_func402,
	test_func403,
	test_func404,
	test_func405,
	test_func406,
	test_func407,
	test_func408,
	test_func409,
	test_func410,
	test_func411,
	test_func412,
	test_func413,
	test_func414,
	test_func415,
	test_func416,
	test_func417,
	test_func418,
	test_func419,
	test_func420,
	test_func421,
	test_func422,
	test_func423,
	test_func424,
	test_func425,
	test_func426,
	test_func427,
	test_func428,
	test_func429,
	test_func430,
	test_func431,
	test_func432,
	test_func433,
	test_func434,
	test_func435,
	test_func436,
	test_func437,
	test_func438,
	test_func439,
	test_func440,
	test_func441,
	test_func442,
	test_func443,
	test_func444,
	test_func445,
	test_func446,
	test_func447,
	test_func448,
	test_func449,
	test_func450,
	test_func451,
	test_func452,
	test_func453,
	test_func454,
	test_func455,
	test_func456,
	test_func457,
	test_func458,
	test_func459,
	test_func460,
	test_func461,
	test_func462,
	test_func463,
	test_func464,
	test_func465,
	test_func466,
	test_func467,
	test_func468,
	test_func469,
	test_func470,
	test_func471,
	test_func472,
	test_func473,
	test_func474,
	test_func475,
	test_func476,
	test_func477,
	test_func478,
	test_func479,
	test_func480,
	test_func481,
	test_func482,
	test_func483,
	test_func484,
	test_func485,
	test_func486,
	test_func487,
	test_func488,
	test_func489,
	test_func490,
	test_func491,
	test_func492,
	test_func493,
	test_func494,
	test_func495,
	test_func496,
	test_func497,
	test_func498,
	test_func499,
	test_func500,
	test_func501,
	test_func502,
	test_func503,
	test_func504,
	test_func505,
	test_func506,
	test_func507,
	test_func508,
	test_func509,
	test_func510,
	test_func511,
	test_func512,
	test_func513,
	test_func514,
	test_func515,
	test_func516,
	test_func517,
	test_func518,
	test_func519,
	test_func520,
	test_func521,
	test_func522,
	test_func523,
	test_func524,
	test_func525,
	test_func526,
	test_func527,
	test_func528,
	test_func529,
	test_func530,
	test_func531,
	test_func532,
	test_func533,
	test_func534,
	test_func535,
	test_func536,
	test_func537,
	test_func538,
	test_func539,
	test_func540,
	test_func541,
	test_func542,
	test_func543,
	test_func544,
	test_func545,
	test_func546,
	test_func547,
	test_func548,
	test_func549,
	test_func550,
	test_func551,
	test_func552,
	test_func553,
	test_func554,
	test_func555,
	test_func556,
	test_func557,
	test_func558,
	test_func559,
	test_func560,
	test_func561,
	test_func562,
	test_func563,
	test_func564,
	test_func565,
	test_func566,
	test_func567,
	test_func568,
	test_func569,
	test_func570,
	test_func571,
	test_func572,
	test_func573,
	test_func574,
	test_func575,
	test_func576,
	test_func577,
	test_func578,
	test_func579,
	test_func580,
	test_func581,
	test_func582,
	test_func583,
	test_func584,
	test_func585,
	test_func586,
	test_func587,
	test_func588,
	test_func589,
	test_func590,
	test_func591,
	test_func592,
	test_func593,
	test_func594,
	test_func595,
	test_func596,
	test_func597,
	test_func598,
	test_func599,
	test_func600,
	test_func601,
	test_func602,
	test_func603,
	test_func604,
	test_func605,
	test_func606,
	test_func607,
	test_func608,
	test_func609,
	test_func610,
	test_func611,
	test_func612,
	test_func613,
	test_func614,
	test_func615,
	test_func616,
	test_func617,
	test_func618,
	test_func619,
	test_func620,
	test_func621,
	test_func622,
	test_func623,
	test_func624,
	test_func625,
	test_func626,
	test_func627,
	test_func628,
	test_func629,
	test_func630,
	test_func631,
	test_func632,
	test_func633,
	test_func634,
	test_func635,
	test_func636,
	test_func637,
	test_func638,
	test_func639,
	test_func640,
	test_func641,
	test_func642,
	test_func643,
	test_func644,
	test_func645,
	test_func646,
	test_func647,
	test_func648,
	test_func649,
	test_func650,
	test_func651,
	test_func652,
	test_func653,
	test_func654,
	test_func655,
	test_func656,
	test_func657,
	test_func658,
	test_func659,
	test_func660,
	test_func661,
	test_func662,
	test_func663,
	test_func664,
	test_func665,
	test_func666,
	test_func667,
	test_func668,
	test_func669,
	test_func670,
	test_func671,
	test_func672,
	test_func673,
	test_func674,
	test_func675,
	test_func676,
	test_func677,
	test_func678,
	test_func679,
	test_func680,
	test_func681,
	test_func682,
	test_func683,
	test_func684,
	test_func685,
	test_func686,
	test_func687,
	test_func688,
	test_func689,
	test_func690,
	test_func691,
	test_func692,
	test_func693,
	test_func694,
	test_func695,
	test_func696,
	test_func697,
	test_func698,
	test_func699,
	test_func700,
	test_func701,
	test_func702,
	test_func703,
	test_func704,
	test_func705,
	test_func706,
	test_func707,
	test_func708,
	test_func709,
	test_func710,
	test_func711,
	test_func712,
	test_func713,
	test_func714,
	test_func715,
	test_func716,
	test_func717,
	test_func718,
	test_func719,
	test_func720,
	test_func721,
	test_func722,
	test_func723,
	test_func724,
	test_func725,
	test_func726,
	test_func727,
	test_func728,
	test_func729,
	test_func730,
	test_func731,
	test_func732,
	test_func733,
	test_func734,
	test_func735,
	test_func736,
	test_func737,
	test_func738,
	test_func739,
	test_func740,
	test_func741,
	test_func742,
	test_func743,
	test_func744,
	test_func745,
	test_func746,
	test_func747,
	test_func748,
	test_func749,
	test_func750,
	test_func751,
	test_func752,
	test_func753,
	test_func754,
	test_func755,
	test_func756,
	test_func757,
	test_func758,
	test_func759,
	test_func760,
	test_func761,
	test_func762,
	test_func763,
	test_func764,
	test_func765,
	test_func766,
	test_func767,
	test_func768,
	test_func769,
	test_func770,
	test_func771,
	test_func772,
	test_func773,
	test_func774,
	test_func775,
	test_func776,
	test_func777,
	test_func778,
	test_func779,
	test_func780,
	test_func781,
	test_func782,
	test_func783,
	test_func784,
	test_func785,
	test_func786,
	test_func787,
	test_func788,
	test_func789,
	test_func790,
	test_func791,
	test_func792,
	test_func793,
	test_func794,
	test_func795,
	test_func796,
	test_func797,
	test_func798,
	test_func799,
	test_func800,
	test_func801,
	test_func802,
	test_func803,
	test_func804,
	test_func805,
	test_func806,
	test_func807,
	test_func808,
	test_func809,
	test_func810,
	test_func811,
	test_func812,
	test_func813,
	test_func814,
	test_func815,
	test_func816,
	test_func817,
	test_func818,
	test_func819,
	test_func820,
	test_func821,
	test_func822,
	test_func823,
	test_func824,
	test_func825,
	test_func826,
	test_func827,
	test_func828,
	test_func829,
	test_func830,
	test_func831,
	test_func832,
	test_func833,
	test_func834,
	test_func835,
	test_func836,
	test_func837,
	test_func838,
	test_func839,
	test_func840,
	test_func841,
	test_func842,
	test_func843,
	test_func844,
	test_func845,
	test_func846,
	test_func847,
	test_func848,
	test_func849,
	test_func850,
	test_func851,
	test_func852,
	test_func853,
	test_func854,
	test_func855,
	test_func856,
	test_func857,
	test_func858,
	test_func859,
	test_func860,
	test_func861,
	test_func862,
	test_func863,
	test_func864,
	test_func865,
	test_func866,
	test_func867,
	test_func868,
	test_func869,
	test_func870,
	test_func871,
	test_func872,
	test_func873,
	test_func874,
	test_func875,
	test_func876,
	test_func877,
	test_func878,
	test_func879,
	test_func880,
	test_func881,
	test_func882,
	test_func883,
	test_func884,
	test_func885,
	test_func886,
	test_func887,
	test_func888,
	test_func889,
	test_func890,
	test_func891,
	test_func892,
	test_func893,
	test_func894,
	test_func895,
	test_func896,
	test_func897,
	test_func898,
	test_func899,
	test_func900,
	test_func901,
	test_func902,
	test_func903,
	test_func904,
	test_func905,
	test_func906,
	test_func907,
	test_func908,
	test_func909,
	test_func910,
	test_func911,
	test_func912,
	test_func913,
	test_func914,
	test_func915,
	test_func916,
	test_func917,
	test_func918,
	test_func919,
	test_func920,
	test_func921,
	test_func922,
	test_func923,
	test_func924,
	test_func925,
	test_func926,
	test_func927,
	test_func928,
	test_func929,
	test_func930,
	test_func931,
	test_func932,
	test_func933,
	test_func934,
	test_func935,
	test_func936,
	test_func937,
	test_func938,
	test_func939,
	test_func940,
	test_func941,
	test_func942,
	test_func943,
	test_func944,
	test_func945,
	test_func946,
	test_func947,
	test_func948,
	test_func949,
	test_func950,
	test_func951,
	test_func952,
	test_func953,
	test_func954,
	test_func955,
	test_func956,
	test_func957,
	test_func958,
	test_func959,
	test_func960,
	test_func961,
	test_func962,
	test_func963,
	test_func964,
	test_func965,
	test_func966,
	test_func967,
	test_func968,
	test_func969,
	test_func970,
	test_func971,
	test_func972,
	test_func973,
	test_func974,
	test_func975,
	test_func976,
	test_func977,
	test_func978,
	test_func979,
	test_func980,
	test_func981,
	test_func982,
	test_func983,
	test_func984,
	test_func985,
	test_func986,
	test_func987,
	test_func988,
	test_func989,
	test_func990,
	test_func991,
	test_func992,
	test_func993,
	test_func994,
	test_func995,
	test_func996,
	test_func997,
	test_func998,
	test_func999,
	test_func1000,
	test_func1001,
	test_func1002,
	test_func1003,
	test_func1004,
	test_func1005,
	test_func1006,
	test_func1007,
	test_func1008,
	test_func1009,
	test_func1010,
	test_func1011,
	test_func1012,
	test_func1013,
	test_func1014,
	test_func1015,
	test_func1016,
	test_func1017,
	test_func1018,
	test_func1019,
	test_func1020,
	test_func1021,
	test_func1022,
	test_func1023,
	test_func1024,
	test_func1025,
	test_func1026,
	test_func1027,
	test_func1028,
	test_func1029,
	test_func1030,
	test_func1031,
	test_func1032,
	test_func1033,
	test_func1034,
	test_func1035,
	test_func1036,
	test_func1037,
	test_func1038,
	test_func1039,
	test_func1040,
	test_func1041,
	test_func1042,
	test_func1043,
	test_func1044,
	test_func1045,
	test_func1046,
	test_func1047,
	test_func1048,
	test_func1049,
	test_func1050,
	test_func1051,
	test_func1052,
	test_func1053,
	test_func1054,
	test_func1055,
	test_func1056,
	test_func1057,
	test_func1058,
	test_func1059,
	test_func1060,
	test_func1061,
	test_func1062,
	test_func1063,
	test_func1064,
	test_func1065,
	test_func1066,
	test_func1067,
	test_func1068,
	test_func1069,
	test_func1070,
	test_func1071,
	test_func1072,
	test_func1073,
	test_func1074,
	test_func1075,
	test_func1076,
	test_func1077,
	test_func1078,
	test_func1079,
	test_func1080,
	test_func1081,
	test_func1082,
	test_func1083,
	test_func1084,
	test_func1085,
	test_func1086,
	test_func1087,
	test_func1088,
	test_func1089,
	test_func1090,
	test_func1091,
	test_func1092,
	test_func1093,
	test_func1094,
	test_func1095,
	test_func1096,
	test_func1097,
	test_func1098,
	test_func1099,
	test_func1100,
	test_func1101,
	test_func1102,
	test_func1103,
	test_func1104,
	test_func1105,
	test_func1106,
	test_func1107,
	test_func1108,
	test_func1109,
	test_func1110,
	test_func1111,
	test_func1112,
	test_func1113,
	test_func1114,
	test_func1115,
	test_func1116,
	test_func1117,
	test_func1118,
	test_func1119,
	test_func1120,
	test_func1121,
	test_func1122,
	test_func1123,
	test_func1124,
	test_func1125,
	test_func1126,
	test_func1127,
	test_func1128,
	test_func1129,
	test_func1130,
	test_func1131,
	test_func1132,
	test_func1133,
	test_func1134,
	test_func1135,
	test_func1136,
	test_func1137,
	test_func1138,
	test_func1139,
	test_func1140,
	test_func1141,
	test_func1142,
	test_func1143,
	test_func1144,
	test_func1145,
	test_func1146,
	test_func1147,
	test_func1148,
	test_func1149,
	test_func1150,
	test_func1151,
	test_func1152,
	test_func1153,
	test_func1154,
	test_func1155,
	test_func1156,
	test_func1157,
	test_func1158,
	test_func1159,
	test_func1160,
	test_func1161,
	test_func1162,
	test_func1163,
	test_func1164,
	test_func1165,
	test_func1166,
	test_func1167,
	test_func1168,
	test_func1169,
	test_func1170,
	test_func1171,
	test_func1172,
	test_func1173,
	test_func1174,
	test_func1175,
	test_func1176,
	test_func1177,
	test_func1178,
	test_func1179,
	test_func1180,
	test_func1181,
	test_func1182,
	test_func1183,
	test_func1184,
	test_func1185,
	test_func1186,
	test_func1187,
	test_func1188,
	test_func1189,
	test_func1190,
	test_func1191,
	test_func1192,
	test_func1193,
	test_func1194,
	test_func1195,
	test_func1196,
	test_func1197,
	test_func1198,
	test_func1199,
	test_func1200,
	test_func1201,
	test_func1202,
	test_func1203,
	test_func1204,
	test_func1205,
	test_func1206,
	test_func1207,
	test_func1208,
	test_func1209,
	test_func1210,
	test_func1211,
	test_func1212,
	test_func1213,
	test_func1214,
	test_func1215,
	test_func1216,
	test_func1217,
	test_func1218,
	test_func1219,
	test_func1220,
	test_func1221,
	test_func1222,
	test_func1223,
	test_func1224,
	test_func1225,
	test_func1226,
	test_func1227,
	test_func1228,
	test_func1229,
	test_func1230,
	test_func1231,
	test_func1232,
	test_func1233,
	test_func1234,
	test_func1235,
	test_func1236,
	test_func1237,
	test_func1238,
	test_func1239,
	test_func1240,
	test_func1241,
	test_func1242,
	test_func1243,
	test_func1244,
	test_func1245,
	test_func1246,
	test_func1247,
	test_func1248,
	test_func1249,
	test_func1250,
	test_func1251,
	test_func1252,
	test_func1253,
	test_func1254,
	test_func1255,
	test_func1256,
	test_func1257,
	test_func1258,
	test_func1259,
	test_func1260,
	test_func1261,
	test_func1262,
	test_func1263,
	test_func1264,
	test_func1265,
	test_func1266,
	test_func1267,
	test_func1268,
	test_func1269,
	test_func1270,
	test_func1271,
	test_func1272,
	test_func1273,
	test_func1274,
	test_func1275,
	test_func1276,
	test_func1277,
	test_func1278,
	test_func1279,
	test_func1280,
	test_func1281,
	test_func1282,
	test_func1283,
	test_func1284,
	test_func1285,
	test_func1286,
	test_func1287,
	test_func1288,
	test_func1289,
	test_func1290,
	test_func1291,
	test_func1292,
	test_func1293,
	test_func1294,
	test_func1295,
	test_func1296,
	test_func1297,
	test_func1298,
	test_func1299,
	test_func1300,
	test_func1301,
	test_func1302,
	test_func1303,
	test_func1304,
	test_func1305,
	test_func1306,
	test_func1307,
	test_func1308,
	test_func1309,
	test_func1310,
	test_func1311,
	test_func1312,
	test_func1313,
	test_func1314,
	test_func1315,
	test_func1316,
	test_func1317,
	test_func1318,
	test_func1319,
	test_func1320,
	test_func1321,
	test_func1322,
	test_func1323,
	test_func1324,
	test_func1325,
	test_func1326,
	test_func1327,
	test_func1328,
	test_func1329,
	test_func1330,
	test_func1331,
	test_func1332,
	test_func1333,
	test_func1334,
	test_func1335,
	test_func1336,
	test_func1337,
	test_func1338,
	test_func1339,
	test_func1340,
	test_func1341,
	test_func1342,
	test_func1343,
	test_func1344,
	test_func1345,
	test_func1346,
	test_func1347,
	test_func1348,
	test_func1349,
	test_func1350,
	test_func1351,
	test_func1352,
	test_func1353,
	test_func1354,
	test_func1355,
	test_func1356,
	test_func1357,
	test_func1358,
	test_func1359,
	test_func1360,
	test_func1361,
	test_func1362,
	test_func1363,
	test_func1364,
	test_func1365,
	test_func1366,
	test_func1367,
	test_func1368,
	test_func1369,
	test_func1370,
	test_func1371,
	test_func1372,
	test_func1373,
	test_func1374,
	test_func1375,
	test_func1376,
	test_func1377,
	test_func1378,
	test_func1379,
	test_func1380,
	test_func1381,
	test_func1382,
	test_func1383,
	test_func1384,
	test_func1385,
	test_func1386,
	test_func1387,
	test_func1388,
	test_func1389,
	test_func1390,
	test_func1391,
	test_func1392,
	test_func1393,
	test_func1394,
	test_func1395,
	test_func1396,
	test_func1397,
	test_func1398,
	test_func1399,
	test_func1400,
	test_func1401,
	test_func1402,
	test_func1403,
	test_func1404,
	test_func1405,
	test_func1406,
	test_func1407,
	test_func1408,
	test_func1409,
	test_func1410,
	test_func1411,
	test_func1412,
	test_func1413,
	test_func1414,
	test_func1415,
	test_func1416,
	test_func1417,
	test_func1418,
	test_func1419,
	test_func1420,
	test_func1421,
	test_func1422,
	test_func1423,
	test_func1424,
	test_func1425,
	test_func1426,
	test_func1427,
	test_func1428,
	test_func1429,
	test_func1430,
	test_func1431,
	test_func1432,
	test_func1433,
	test_func1434,
	test_func1435,
	test_func1436,
	test_func1437,
	test_func1438,
	test_func1439,
	test_func1440,
	test_func1441,
	test_func1442,
	test_func1443,
	test_func1444,
	test_func1445,
	test_func1446,
	test_func1447,
	test_func1448,
	test_func1449,
	test_func1450,
	test_func1451,
	test_func1452,
	test_func1453,
	test_func1454,
	test_func1455,
	test_func1456,
	test_func1457,
	test_func1458,
	test_func1459,
	test_func1460,
	test_func1461,
	test_func1462,
	test_func1463,
	test_func1464,
	test_func1465,
	test_func1466,
	test_func1467,
	test_func1468,
	test_func1469,
	test_func1470,
	test_func1471,
	test_func1472,
	test_func1473,
	test_func1474,
	test_func1475,
	test_func1476,
	test_func1477,
	test_func1478,
	test_func1479,
	test_func1480,
	test_func1481,
	test_func1482,
	test_func1483,
	test_func1484,
	test_func1485,
	test_func1486,
	test_func1487,
	test_func1488,
	test_func1489,
	test_func1490,
	test_func1491,
	test_func1492,
	test_func1493,
	test_func1494,
	test_func1495,
	test_func1496,
	test_func1497,
	test_func1498,
	test_func1499,
	test_func1500,
	test_func1501,
	test_func1502,
	test_func1503,
	test_func1504,
	test_func1505,
	test_func1506,
	test_func1507,
	test_func1508,
	test_func1509,
	test_func1510,
	test_func1511,
	test_func1512,
	test_func1513,
	test_func1514,
	test_func1515,
	test_func1516,
	test_func1517,
	test_func1518,
	test_func1519,
	test_func1520,
	test_func1521,
	test_func1522,
	test_func1523,
	test_func1524,
	test_func1525,
	test_func1526,
	test_func1527,
	test_func1528,
	test_func1529,
	test_func1530,
	test_func1531,
	test_func1532,
	test_func1533,
	test_func1534,
	test_func1535,
	test_func1536,
	test_func1537,
	test_func1538,
	test_func1539,
	test_func1540,
	test_func1541,
	test_func1542,
	test_func1543,
	test_func1544,
	test_func1545,
	test_func1546,
	test_func1547,
	test_func1548,
	test_func1549,
	test_func1550,
	test_func1551,
	test_func1552,
	test_func1553,
	test_func1554,
	test_func1555,
	test_func1556,
	test_func1557,
	test_func1558,
	test_func1559,
	test_func1560,
	test_func1561,
	test_func1562,
	test_func1563,
	test_func1564,
	test_func1565,
	test_func1566,
	test_func1567,
	test_func1568,
	test_func1569,
	test_func1570,
	test_func1571,
	test_func1572,
	test_func1573,
	test_func1574,
	test_func1575,
	test_func1576,
	test_func1577,
	test_func1578,
	test_func1579,
	test_func1580,
	test_func1581,
	test_func1582,
	test_func1583,
	test_func1584,
	test_func1585,
	test_func1586,
	test_func1587,
	test_func1588,
	test_func1589,
	test_func1590,
	test_func1591,
	test_func1592,
	test_func1593,
	test_func1594,
	test_func1595,
	test_func1596,
	test_func1597,
	test_func1598,
	test_func1599,
	test_func1600,
	test_func1601,
	test_func1602,
	test_func1603,
	test_func1604,
	test_func1605,
	test_func1606,
	test_func1607,
	test_func1608,
	test_func1609,
	test_func1610,
	test_func1611,
	test_func1612,
	test_func1613,
	test_func1614,
	test_func1615,
	test_func1616,
	test_func1617,
	test_func1618,
	test_func1619,
	test_func1620,
	test_func1621,
	test_func1622,
	test_func1623,
	test_func1624,
	test_func1625,
	test_func1626,
	test_func1627,
	test_func1628,
	test_func1629,
	test_func1630,
	test_func1631,
	test_func1632,
	test_func1633,
	test_func1634,
	test_func1635,
	test_func1636,
	test_func1637,
	test_func1638,
	test_func1639,
	test_func1640,
	test_func1641,
	test_func1642,
	test_func1643,
	test_func1644,
	test_func1645,
	test_func1646,
	test_func1647,
	test_func1648,
	test_func1649,
	test_func1650,
	test_func1651,
	test_func1652,
	test_func1653,
	test_func1654,
	test_func1655,
	test_func1656,
	test_func1657,
	test_func1658,
	test_func1659,
	test_func1660,
	test_func1661,
	test_func1662,
	test_func1663,
	test_func1664,
	test_func1665,
	test_func1666,
	test_func1667,
	test_func1668,
	test_func1669,
	test_func1670,
	test_func1671,
	test_func1672,
	test_func1673,
	test_func1674,
	test_func1675,
	test_func1676,
	test_func1677,
	test_func1678,
	test_func1679,
	test_func1680,
	test_func1681,
	test_func1682,
	test_func1683,
	test_func1684,
	test_func1685,
	test_func1686,
	test_func1687,
	test_func1688,
	test_func1689,
	test_func1690,
	test_func1691,
	test_func1692,
	test_func1693,
	test_func1694,
	test_func1695,
	test_func1696,
	test_func1697,
	test_func1698,
	test_func1699,
	test_func1700,
	test_func1701,
	test_func1702,
	test_func1703,
	test_func1704,
	test_func1705,
	test_func1706,
	test_func1707,
	test_func1708,
	test_func1709,
	test_func1710,
	test_func1711,
	test_func1712,
	test_func1713,
	test_func1714,
	test_func1715,
	test_func1716,
	test_func1717,
	test_func1718,
	test_func1719,
	test_func1720,
	test_func1721,
	test_func1722,
	test_func1723,
	test_func1724,
	test_func1725,
	test_func1726,
	test_func1727,
	test_func1728,
	test_func1729,
	test_func1730,
	test_func1731,
	test_func1732,
	test_func1733,
	test_func1734,
	test_func1735,
	test_func1736,
	test_func1737,
	test_func1738,
	test_func1739,
	test_func1740,
	test_func1741,
	test_func1742,
	test_func1743,
	test_func1744,
	test_func1745,
	test_func1746,
	test_func1747,
	test_func1748,
	test_func1749,
	test_func1750,
	test_func1751,
	test_func1752,
	test_func1753,
	test_func1754,
	test_func1755,
	test_func1756,
	test_func1757,
	test_func1758,
	test_func1759,
	test_func1760,
	test_func1761,
	test_func1762,
	test_func1763,
	test_func1764,
	test_func1765,
	test_func1766,
	test_func1767,
	test_func1768,
	test_func1769,
	test_func1770,
	test_func1771,
	test_func1772,
	test_func1773,
	test_func1774,
	test_func1775,
	test_func1776,
	test_func1777,
	test_func1778,
	test_func1779,
	test_func1780,
	test_func1781,
	test_func1782,
	test_func1783,
	test_func1784,
	test_func1785,
	test_func1786,
	test_func1787,
	test_func1788,
	test_func1789,
	test_func1790,
	test_func1791,
	test_func1792,
	test_func1793,
	test_func1794,
	test_func1795,
	test_func1796,
	test_func1797,
	test_func1798,
	test_func1799,
	test_func1800,
	test_func1801,
	test_func1802,
	test_func1803,
	test_func1804,
	test_func1805,
	test_func1806,
	test_func1807,
	test_func1808,
	test_func1809,
	test_func1810,
	test_func1811,
	test_func1812,
	test_func1813,
	test_func1814,
	test_func1815,
	test_func1816,
	test_func1817,
	test_func1818,
	test_func1819,
	test_func1820,
	test_func1821,
	test_func1822,
	test_func1823,
	test_func1824,
	test_func1825,
	test_func1826,
	test_func1827,
	test_func1828,
	test_func1829,
	test_func1830,
	test_func1831,
	test_func1832,
	test_func1833,
	test_func1834,
	test_func1835,
	test_func1836,
	test_func1837,
	test_func1838,
	test_func1839,
	test_func1840,
	test_func1841,
	test_func1842,
	test_func1843,
	test_func1844,
	test_func1845,
	test_func1846,
	test_func1847,
	test_func1848,
	test_func1849,
	test_func1850,
	test_func1851,
	test_func1852,
	test_func1853,
	test_func1854,
	test_func1855,
	test_func1856,
	test_func1857,
	test_func1858,
	test_func1859,
	test_func1860,
	test_func1861,
	test_func1862,
	test_func1863,
	test_func1864,
	test_func1865,
	test_func1866,
	test_func1867,
	test_func1868,
	test_func1869,
	test_func1870,
	test_func1871,
	test_func1872,
	test_func1873,
	test_func1874,
	test_func1875,
	test_func1876,
	test_func1877,
	test_func1878,
	test_func1879,
	test_func1880,
	test_func1881,
	test_func1882,
	test_func1883,
	test_func1884,
	test_func1885,
	test_func1886,
	test_func1887,
	test_func1888,
	test_func1889,
	test_func1890,
	test_func1891,
	test_func1892,
	test_func1893,
	test_func1894,
	test_func1895,
	test_func1896,
	test_func1897,
	test_func1898,
	test_func1899,
	test_func1900,
	test_func1901,
	test_func1902,
	test_func1903,
	test_func1904,
	test_func1905,
	test_func1906,
	test_func1907,
	test_func1908,
	test_func1909,
	test_func1910,
	test_func1911,
	test_func1912,
	test_func1913,
	test_func1914,
	test_func1915,
	test_func1916,
	test_func1917,
	test_func1918,
	test_func1919,
	test_func1920,
	test_func1921,
	test_func1922,
	test_func1923,
	test_func1924,
	test_func1925,
	test_func1926,
	test_func1927,
	test_func1928,
	test_func1929,
	test_func1930,
	test_func1931,
	test_func1932,
	test_func1933,
	test_func1934,
	test_func1935,
	test_func1936,
	test_func1937,
	test_func1938,
	test_func1939,
	test_func1940,
	test_func1941,
	test_func1942,
	test_func1943,
	test_func1944,
	test_func1945,
	test_func1946,
	test_func1947,
	test_func1948,
	test_func1949,
	test_func1950,
	test_func1951,
	test_func1952,
	test_func1953,
	test_func1954,
	test_func1955,
	test_func1956,
	test_func1957,
	test_func1958,
	test_func1959,
	test_func1960,
	test_func1961,
	test_func1962,
	test_func1963,
	test_func1964,
	test_func1965,
	test_func1966,
	test_func1967,
	test_func1968,
	test_func1969,
	test_func1970,
	test_func1971,
	test_func1972,
	test_func1973,
	test_func1974,
	test_func1975,
	test_func1976,
	test_func1977,
	test_func1978,
	test_func1979,
	test_func1980,
	test_func1981,
	test_func1982,
	test_func1983,
	test_func1984,
	test_func1985,
	test_func1986,
	test_func1987,
	test_func1988,
	test_func1989,
	test_func1990,
	test_func1991,
	test_func1992,
	test_func1993,
	test_func1994,
	test_func1995,
	test_func1996,
	test_func1997,
	test_func1998,
	test_func1999,
	test_func2000,
	test_func2001,
	test_func2002,
	test_func2003,
	test_func2004,
	test_func2005,
	test_func2006,
	test_func2007,
	test_func2008,
	test_func2009,
	test_func2010,
	test_func2011,
	test_func2012,
	test_func2013,
	test_func2014,
	test_func2015,
	test_func2016,
	test_func2017,
	test_func2018,
	test_func2019,
	test_func2020,
	test_func2021,
	test_func2022,
	test_func2023,
	test_func2024,
	test_func2025,
	test_func2026,
	test_func2027,
	test_func2028,
	test_func2029,
	test_func2030,
	test_func2031,
	test_func2032,
	test_func2033,
	test_func2034,
	test_func2035,
	test_func2036,
	test_func2037,
	test_func2038,
	test_func2039,
	test_func2040,
	test_func2041,
	test_func2042,
	test_func2043,
	test_func2044,
	test_func2045,
	test_func2046,
	test_func2047,
	test_func2048,
	test_func2049,
	test_func2050,
	test_func2051,
	test_func2052,
	test_func2053,
	test_func2054,
	test_func2055,
	test_func2056,
	test_func2057,
	test_func2058,
	test_func2059,
	test_func2060,
	test_func2061,
	test_func2062,
	test_func2063,
	test_func2064,
	test_func2065,
	test_func2066,
	test_func2067,
	test_func2068,
	test_func2069,
	test_func2070,
	test_func2071,
	test_func2072,
	test_func2073,
	test_func2074,
	test_func2075,
	test_func2076,
	test_func2077,
	test_func2078,
	test_func2079,
	test_func2080,
	test_func2081,
	test_func2082,
	test_func2083,
	test_func2084,
	test_func2085,
	test_func2086,
	test_func2087,
	test_func2088,
	test_func2089,
	test_func2090,
	test_func2091,
	test_func2092,
	test_func2093,
	test_func2094,
	test_func2095,
	test_func2096,
	test_func2097,
	test_func2098,
	test_func2099,
	test_func2100,
	test_func2101,
	test_func2102,
	test_func2103,
	test_func2104,
	test_func2105,
	test_func2106,
	test_func2107,
	test_func2108,
	test_func2109,
	test_func2110,
	test_func2111,
	test_func2112,
	test_func2113,
	test_func2114,
	test_func2115,
	test_func2116,
	test_func2117,
	test_func2118,
	test_func2119,
	test_func2120,
	test_func2121,
	test_func2122,
	test_func2123,
	test_func2124,
	test_func2125,
	test_func2126,
	test_func2127,
	test_func2128,
	test_func2129,
	test_func2130,
	test_func2131,
	test_func2132,
	test_func2133,
	test_func2134,
	test_func2135,
	test_func2136,
	test_func2137,
	test_func2138,
	test_func2139,
	test_func2140,
	test_func2141,
	test_func2142,
	test_func2143,
	test_func2144,
	test_func2145,
	test_func2146,
	test_func2147,
	test_func2148,
	test_func2149,
	test_func2150,
	test_func2151,
	test_func2152,
	test_func2153,
	test_func2154,
	test_func2155,
	test_func2156,
	test_func2157,
	test_func2158,
	test_func2159,
	test_func2160,
	test_func2161,
	test_func2162,
	test_func2163,
	test_func2164,
	test_func2165,
	test_func2166,
	test_func2167,
	test_func2168,
	test_func2169,
	test_func2170,
	test_func2171,
	test_func2172,
	test_func2173,
	test_func2174,
	test_func2175,
	test_func2176,
	test_func2177,
	test_func2178,
	test_func2179,
	test_func2180,
	test_func2181,
	test_func2182,
	test_func2183,
	test_func2184,
	test_func2185,
	test_func2186,
	test_func2187,
	test_func2188,
	test_func2189,
	test_func2190,
	test_func2191,
	test_func2192,
	test_func2193,
	test_func2194,
	test_func2195,
	test_func2196,
	test_func2197,
	test_func2198,
	test_func2199,
	test_func2200,
	test_func2201,
	test_func2202,
	test_func2203,
	test_func2204,
	test_func2205,
	test_func2206,
	test_func2207,
	test_func2208,
	test_func2209,
	test_func2210,
	test_func2211,
	test_func2212,
	test_func2213,
	test_func2214,
	test_func2215,
	test_func2216,
	test_func2217,
	test_func2218,
	test_func2219,
	test_func2220,
	test_func2221,
	test_func2222,
	test_func2223,
	test_func2224,
	test_func2225,
	test_func2226,
	test_func2227,
	test_func2228,
	test_func2229,
	test_func2230,
	test_func2231,
	test_func2232,
	test_func2233,
	test_func2234,
	test_func2235,
	test_func2236,
	test_func2237,
	test_func2238,
	test_func2239,
	test_func2240,
	test_func2241,
	test_func2242,
	test_func2243,
	test_func2244,
	test_func2245,
	test_func2246,
	test_func2247,
	test_func2248,
	test_func2249,
	test_func2250,
	test_func2251,
	test_func2252,
	test_func2253,
	test_func2254,
	test_func2255,
	test_func2256,
	test_func2257,
	test_func2258,
	test_func2259,
	test_func2260,
	test_func2261,
	test_func2262,
	test_func2263,
	test_func2264,
	test_func2265,
	test_func2266,
	test_func2267,
	test_func2268,
	test_func2269,
	test_func2270,
	test_func2271,
	test_func2272,
	test_func2273,
	test_func2274,
	test_func2275,
	test_func2276,
	test_func2277,
	test_func2278,
	test_func2279,
	test_func2280,
	test_func2281,
	test_func2282,
	test_func2283,
	test_func2284,
	test_func2285,
	test_func2286,
	test_func2287,
	test_func2288,
	test_func2289,
	test_func2290,
	test_func2291,
	test_func2292,
	test_func2293,
	test_func2294,
	test_func2295,
	test_func2296,
	test_func2297,
	test_func2298,
	test_func2299,
	test_func2300,
	test_func2301,
	test_func2302,
	test_func2303,
	test_func2304,
	test_func2305,
	test_func2306,
	test_func2307,
	test_func2308,
	test_func2309,
	test_func2310,
	test_func2311,
	test_func2312,
	test_func2313,
	test_func2314,
	test_func2315,
	test_func2316,
	test_func2317,
	test_func2318,
	test_func2319,
	test_func2320,
	test_func2321,
	test_func2322,
	test_func2323,
	test_func2324,
	test_func2325,
	test_func2326,
	test_func2327,
	test_func2328,
	test_func2329,
	test_func2330,
	test_func2331,
	test_func2332,
	test_func2333,
	test_func2334,
	test_func2335,
	test_func2336,
	test_func2337,
	test_func2338,
	test_func2339,
	test_func2340,
	test_func2341,
	test_func2342,
	test_func2343,
	test_func2344,
	test_func2345,
	test_func2346,
	test_func2347,
	test_func2348,
	test_func2349,
	test_func2350,
	test_func2351,
	test_func2352,
	test_func2353,
	test_func2354,
	test_func2355,
	test_func2356,
	test_func2357,
	test_func2358,
	test_func2359,
	test_func2360,
	test_func2361,
	test_func2362,
	test_func2363,
	test_func2364,
	test_func2365,
	test_func2366,
	test_func2367,
	test_func2368,
	test_func2369,
	test_func2370,
	test_func2371,
	test_func2372,
	test_func2373,
	test_func2374,
	test_func2375,
	test_func2376,
	test_func2377,
	test_func2378,
	test_func2379,
	test_func2380,
	test_func2381,
	test_func2382,
	test_func2383,
	test_func2384,
	test_func2385,
	test_func2386,
	test_func2387,
	test_func2388,
	test_func2389,
	test_func2390,
	test_func2391,
	test_func2392,
	test_func2393,
	test_func2394,
	test_func2395,
	test_func2396,
	test_func2397,
	test_func2398,
	test_func2399,
	test_func2400,
	test_func2401,
	test_func2402,
	test_func2403,
	test_func2404,
	test_func2405,
	test_func2406,
	test_func2407,
	test_func2408,
	test_func2409,
	test_func2410,
	test_func2411,
	test_func2412,
	test_func2413,
	test_func2414,
	test_func2415,
	test_func2416,
	test_func2417,
	test_func2418,
	test_func2419,
	test_func2420,
	test_func2421,
	test_func2422,
	test_func2423,
	test_func2424,
	test_func2425,
	test_func2426,
	test_func2427,
	test_func2428,
	test_func2429,
	test_func2430,
	test_func2431,
	test_func2432,
	test_func2433,
	test_func2434,
	test_func2435,
	test_func2436,
	test_func2437,
	test_func2438,
	test_func2439,
	test_func2440,
	test_func2441,
	test_func2442,
	test_func2443,
	test_func2444,
	test_func2445,
	test_func2446,
	test_func2447,
	test_func2448,
	test_func2449,
	test_func2450,
	test_func2451,
	test_func2452,
	test_func2453,
	test_func2454,
	test_func2455,
	test_func2456,
	test_func2457,
	test_func2458,
	test_func2459,
	test_func2460,
	test_func2461,
	test_func2462,
	test_func2463,
	test_func2464,
	test_func2465,
	test_func2466,
	test_func2467,
	test_func2468,
	test_func2469,
	test_func2470,
	test_func2471,
	test_func2472,
	test_func2473,
	test_func2474,
	test_func2475,
	test_func2476,
	test_func2477,
	test_func2478,
	test_func2479,
	test_func2480,
	test_func2481,
	test_func2482,
	test_func2483,
	test_func2484,
	test_func2485,
	test_func2486,
	test_func2487,
	test_func2488,
	test_func2489,
	test_func2490,
	test_func2491,
	test_func2492,
	test_func2493,
	test_func2494,
	test_func2495,
	test_func2496,
	test_func2497,
	test_func2498,
	test_func2499,
	test_func2500,
	test_func2501,
	test_func2502,
	test_func2503,
	test_func2504,
	test_func2505,
	test_func2506,
	test_func2507,
	test_func2508,
	test_func2509,
	test_func2510,
	test_func2511,
	test_func2512,
	test_func2513,
	test_func2514,
	test_func2515,
	test_func2516,
	test_func2517,
	test_func2518,
	test_func2519,
	test_func2520,
	test_func2521,
	test_func2522,
	test_func2523,
	test_func2524,
	test_func2525,
	test_func2526,
	test_func2527,
	test_func2528,
	test_func2529,
	test_func2530,
	test_func2531,
	test_func2532,
	test_func2533,
	test_func2534,
	test_func2535,
	test_func2536,
	test_func2537,
	test_func2538,
	test_func2539,
	test_func2540,
	test_func2541,
	test_func2542,
	test_func2543,
	test_func2544,
	test_func2545,
	test_func2546,
	test_func2547,
	test_func2548,
	test_func2549,
	test_func2550,
	test_func2551,
	test_func2552,
	test_func2553,
	test_func2554,
	test_func2555,
	test_func2556,
	test_func2557,
	test_func2558,
	test_func2559,
	test_func2560,
	test_func2561,
	test_func2562,
	test_func2563,
	test_func2564,
	test_func2565,
	test_func2566,
	test_func2567,
	test_func2568,
	test_func2569,
	test_func2570,
	test_func2571,
	test_func2572,
	test_func2573,
	test_func2574,
	test_func2575,
	test_func2576,
	test_func2577,
	test_func2578,
	test_func2579,
	test_func2580,
	test_func2581,
	test_func2582,
	test_func2583,
	test_func2584,
	test_func2585,
	test_func2586,
	test_func2587,
	test_func2588,
	test_func2589,
	test_func2590,
	test_func2591,
	test_func2592,
	test_func2593,
	test_func2594,
	test_func2595,
	test_func2596,
	test_func2597,
	test_func2598,
	test_func2599,
	test_func2600,
	test_func2601,
	test_func2602,
	test_func2603,
	test_func2604,
	test_func2605,
	test_func2606,
	test_func2607,
	test_func2608,
	test_func2609,
	test_func2610,
	test_func2611,
	test_func2612,
	test_func2613,
	test_func2614,
	test_func2615,
	test_func2616,
	test_func2617,
	test_func2618,
	test_func2619,
	test_func2620,
	test_func2621,
	test_func2622,
	test_func2623,
	test_func2624,
	test_func2625,
	test_func2626,
	test_func2627,
	test_func2628,
	test_func2629,
	test_func2630,
	test_func2631,
	test_func2632,
	test_func2633,
	test_func2634,
	test_func2635,
	test_func2636,
	test_func2637,
	test_func2638,
	test_func2639,
	test_func2640,
	test_func2641,
	test_func2642,
	test_func2643,
	test_func2644,
	test_func2645,
	test_func2646,
	test_func2647,
	test_func2648,
	test_func2649,
	test_func2650,
	test_func2651,
	test_func2652,
	test_func2653,
	test_func2654,
	test_func2655,
	test_func2656,
	test_func2657,
	test_func2658,
	test_func2659,
	test_func2660,
	test_func2661,
	test_func2662,
	test_func2663,
	test_func2664,
	test_func2665,
	test_func2666,
	test_func2667,
	test_func2668,
	test_func2669,
	test_func2670,
	test_func2671,
	test_func2672,
	test_func2673,
	test_func2674,
	test_func2675,
	test_func2676,
	test_func2677,
	test_func2678,
	test_func2679,
	test_func2680,
	test_func2681,
	test_func2682,
	test_func2683,
	test_func2684,
	test_func2685,
	test_func2686,
	test_func2687,
	test_func2688,
	test_func2689,
	test_func2690,
	test_func2691,
	test_func2692,
	test_func2693,
	test_func2694,
	test_func2695,
	test_func2696,
	test_func2697,
	test_func2698,
	test_func2699,
	test_func2700,
	test_func2701,
	test_func2702,
	test_func2703,
	test_func2704,
	test_func2705,
	test_func2706,
	test_func2707,
	test_func2708,
	test_func2709,
	test_func2710,
	test_func2711,
	test_func2712,
	test_func2713,
	test_func2714,
	test_func2715,
	test_func2716,
	test_func2717,
	test_func2718,
	test_func2719,
	test_func2720,
	test_func2721,
	test_func2722,
	test_func2723,
	test_func2724,
	test_func2725,
	test_func2726,
	test_func2727,
	test_func2728,
	test_func2729,
	test_func2730,
	test_func2731,
	test_func2732,
	test_func2733,
	test_func2734,
	test_func2735,
	test_func2736,
	test_func2737,
	test_func2738,
	test_func2739,
	test_func2740,
	test_func2741,
	test_func2742,
	test_func2743,
	test_func2744,
	test_func2745,
	test_func2746,
	test_func2747,
	test_func2748,
	test_func2749,
	test_func2750,
	test_func2751,
	test_func2752,
	test_func2753,
	test_func2754,
	test_func2755,
	test_func2756,
	test_func2757,
	test_func2758,
	test_func2759,
	test_func2760,
	test_func2761,
	test_func2762,
	test_func2763,
	test_func2764,
	test_func2765,
	test_func2766,
	test_func2767,
	test_func2768,
	test_func2769,
	test_func2770,
	test_func2771,
	test_func2772,
	test_func2773,
	test_func2774,
	test_func2775,
	test_func2776,
	test_func2777,
	test_func2778,
	test_func2779,
	test_func2780,
	test_func2781,
	test_func2782,
	test_func2783,
	test_func2784,
	test_func2785,
	test_func2786,
	test_func2787,
	test_func2788,
	test_func2789,
	test_func2790,
	test_func2791,
	test_func2792,
	test_func2793,
	test_func2794,
	test_func2795,
	test_func2796,
	test_func2797,
	test_func2798,
	test_func2799,
	test_func2800,
	test_func2801,
	test_func2802,
	test_func2803,
	test_func2804,
	test_func2805,
	test_func2806,
	test_func2807,
	test_func2808,
	test_func2809,
	test_func2810,
	test_func2811,
	test_func2812,
	test_func2813,
	test_func2814,
	test_func2815,
	test_func2816,
	test_func2817,
	test_func2818,
	test_func2819,
	test_func2820,
	test_func2821,
	test_func2822,
	test_func2823,
	test_func2824,
	test_func2825,
	test_func2826,
	test_func2827,
	test_func2828,
	test_func2829,
	test_func2830,
	test_func2831,
	test_func2832,
	test_func2833,
	test_func2834,
	test_func2835,
	test_func2836,
	test_func2837,
	test_func2838,
	test_func2839,
	test_func2840,
	test_func2841,
	test_func2842,
	test_func2843,
	test_func2844,
	test_func2845,
	test_func2846,
	test_func2847,
	test_func2848,
	test_func2849,
	test_func2850,
	test_func2851,
	test_func2852,
	test_func2853,
	test_func2854,
	test_func2855,
	test_func2856,
	test_func2857,
	test_func2858,
	test_func2859,
	test_func2860,
	test_func2861,
	test_func2862,
	test_func2863,
	test_func2864,
	test_func2865,
	test_func2866,
	test_func2867,
	test_func2868,
	test_func2869,
	test_func2870,
	test_func2871,
	test_func2872,
	test_func2873,
	test_func2874,
	test_func2875,
	test_func2876,
	test_func2877,
	test_func2878,
	test_func2879,
	test_func2880,
	test_func2881,
	test_func2882,
	test_func2883,
	test_func2884,
	test_func2885,
	test_func2886,
	test_func2887,
	test_func2888,
	test_func2889,
	test_func2890,
	test_func2891,
	test_func2892,
	test_func2893,
	test_func2894,
	test_func2895,
	test_func2896,
	test_func2897,
	test_func2898,
	test_func2899,
	test_func2900,
	test_func2901,
	test_func2902,
	test_func2903,
	test_func2904,
	test_func2905,
	test_func2906,
	test_func2907,
	test_func2908,
	test_func2909,
	test_func2910,
	test_func2911,
	test_func2912,
	test_func2913,
	test_func2914,
	test_func2915,
	test_func2916,
	test_func2917,
	test_func2918,
	test_func2919,
	test_func2920,
	test_func2921,
	test_func2922,
	test_func2923,
	test_func2924,
	test_func2925,
	test_func2926,
	test_func2927,
	test_func2928,
	test_func2929,
	test_func2930,
	test_func2931,
	test_func2932,
	test_func2933,
	test_func2934,
	test_func2935,
	test_func2936,
	test_func2937,
	test_func2938,
	test_func2939,
	test_func2940,
	test_func2941,
	test_func2942,
	test_func2943,
	test_func2944,
	test_func2945,
	test_func2946,
	test_func2947,
	test_func2948,
	test_func2949,
	test_func2950,
	test_func2951,
	test_func2952,
	test_func2953,
	test_func2954,
	test_func2955,
	test_func2956,
	test_func2957,
	test_func2958,
	test_func2959,
	test_func2960,
	test_func2961,
	test_func2962,
	test_func2963,
	test_func2964,
	test_func2965,
	test_func2966,
	test_func2967,
	test_func2968,
	test_func2969,
	test_func2970,
	test_func2971,
	test_func2972,
	test_func2973,
	test_func2974,
	test_func2975,
	test_func2976,
	test_func2977,
	test_func2978,
	test_func2979,
	test_func2980,
	test_func2981,
	test_func2982,
	test_func2983,
	test_func2984,
	test_func2985,
	test_func2986,
	test_func2987,
	test_func2988,
	test_func2989,
	test_func2990,
	test_func2991,
	test_func2992,
	test_func2993,
	test_func2994,
	test_func2995,
	test_func2996,
	test_func2997,
	test_func2998,
	test_func2999,
	test_func3000,
	test_func3001,
	test_func3002,
	test_func3003,
	test_func3004,
	test_func3005,
	test_func3006,
	test_func3007,
	test_func3008,
	test_func3009,
	test_func3010,
	test_func3011,
	test_func3012,
	test_func3013,
	test_func3014,
	test_func3015,
	test_func3016,
	test_func3017,
	test_func3018,
	test_func3019,
	test_func3020,
	test_func3021,
	test_func3022,
	test_func3023,
	test_func3024,
	test_func3025,
	test_func3026,
	test_func3027,
	test_func3028,
	test_func3029,
	test_func3030,
	test_func3031,
	test_func3032,
	test_func3033,
	test_func3034,
	test_func3035,
	test_func3036,
	test_func3037,
	test_func3038,
	test_func3039,
	test_func3040,
	test_func3041,
	test_func3042,
	test_func3043,
	test_func3044,
	test_func3045,
	test_func3046,
	test_func3047,
	test_func3048,
	test_func3049,
	test_func3050,
	test_func3051,
	test_func3052,
	test_func3053,
	test_func3054,
	test_func3055,
	test_func3056,
	test_func3057,
	test_func3058,
	test_func3059,
	test_func3060,
	test_func3061,
	test_func3062,
	test_func3063,
	test_func3064,
	test_func3065,
	test_func3066,
	test_func3067,
	test_func3068,
	test_func3069,
	test_func3070,
	test_func3071,
	test_func3072,
	test_func3073,
	test_func3074,
	test_func3075,
	test_func3076,
	test_func3077,
	test_func3078,
	test_func3079,
	test_func3080,
	test_func3081,
	test_func3082,
	test_func3083,
	test_func3084,
	test_func3085,
	test_func3086,
	test_func3087,
	test_func3088,
	test_func3089,
	test_func3090,
	test_func3091,
	test_func3092,
	test_func3093,
	test_func3094,
	test_func3095,
	test_func3096,
	test_func3097,
	test_func3098,
	test_func3099,
	test_func3100,
	test_func3101,
	test_func3102,
	test_func3103,
	test_func3104,
	test_func3105,
	test_func3106,
	test_func3107,
	test_func3108,
	test_func3109,
	test_func3110,
	test_func3111,
	test_func3112,
	test_func3113,
	test_func3114,
	test_func3115,
	test_func3116,
	test_func3117,
	test_func3118,
	test_func3119,
	test_func3120,
	test_func3121,
	test_func3122,
	test_func3123,
	test_func3124,
	test_func3125,
	test_func3126,
	test_func3127,
	test_func3128,
	test_func3129,
	test_func3130,
	test_func3131,
	test_func3132,
	test_func3133,
	test_func3134,
	test_func3135,
	test_func3136,
	test_func3137,
	test_func3138,
	test_func3139,
	test_func3140,
	test_func3141,
	test_func3142,
	test_func3143,
	test_func3144,
	test_func3145,
	test_func3146,
	test_func3147,
	test_func3148,
	test_func3149,
	test_func3150,
	test_func3151,
	test_func3152,
	test_func3153,
	test_func3154,
	test_func3155,
	test_func3156,
	test_func3157,
	test_func3158,
	test_func3159,
	test_func3160,
	test_func3161,
	test_func3162,
	test_func3163,
	test_func3164,
	test_func3165,
	test_func3166,
	test_func3167,
	test_func3168,
	test_func3169,
	test_func3170,
	test_func3171,
	test_func3172,
	test_func3173,
	test_func3174,
	test_func3175,
	test_func3176,
	test_func3177,
	test_func3178,
	test_func3179,
	test_func3180,
	test_func3181,
	test_func3182,
	test_func3183,
	test_func3184,
	test_func3185,
	test_func3186,
	test_func3187,
	test_func3188,
	test_func3189,
	test_func3190,
	test_func3191,
	test_func3192,
	test_func3193,
	test_func3194,
	test_func3195,
	test_func3196,
	test_func3197,
	test_func3198,
	test_func3199,
	test_func3200,
	test_func3201,
	test_func3202,
	test_func3203,
	test_func3204,
	test_func3205,
	test_func3206,
	test_func3207,
	test_func3208,
	test_func3209,
	test_func3210,
	test_func3211,
	test_func3212,
	test_func3213,
	test_func3214,
	test_func3215,
	test_func3216,
	test_func3217,
	test_func3218,
	test_func3219,
	test_func3220,
	test_func3221,
	test_func3222,
	test_func3223,
	test_func3224,
	test_func3225,
	test_func3226,
	test_func3227,
	test_func3228,
	test_func3229,
	test_func3230,
	test_func3231,
	test_func3232,
	test_func3233,
	test_func3234,
	test_func3235,
	test_func3236,
	test_func3237,
	test_func3238,
	test_func3239,
	test_func3240,
	test_func3241,
	test_func3242,
	test_func3243,
	test_func3244,
	test_func3245,
	test_func3246,
	test_func3247,
	test_func3248,
	test_func3249,
	test_func3250,
	test_func3251,
	test_func3252,
	test_func3253,
	test_func3254,
	test_func3255,
	test_func3256,
	test_func3257,
	test_func3258,
	test_func3259,
	test_func3260,
	test_func3261,
	test_func3262,
	test_func3263,
	test_func3264,
	test_func3265,
	test_func3266,
	test_func3267,
	test_func3268,
	test_func3269,
	test_func3270,
	test_func3271,
	test_func3272,
	test_func3273,
	test_func3274,
	test_func3275,
	test_func3276,
	test_func3277,
	test_func3278,
	test_func3279,
	test_func3280,
	test_func3281,
	test_func3282,
	test_func3283,
	test_func3284,
	test_func3285,
	test_func3286,
	test_func3287,
	test_func3288,
	test_func3289,
	test_func3290,
	test_func3291,
	test_func3292,
	test_func3293,
	test_func3294,
	test_func3295,
	test_func3296,
	test_func3297,
	test_func3298,
	test_func3299,
	test_func3300,
	test_func3301,
	test_func3302,
	test_func3303,
	test_func3304,
	test_func3305,
	test_func3306,
	test_func3307,
	test_func3308,
	test_func3309,
	test_func3310,
	test_func3311,
	test_func3312,
	test_func3313,
	test_func3314,
	test_func3315,
	test_func3316,
	test_func3317,
	test_func3318,
	test_func3319,
	test_func3320,
	test_func3321,
	test_func3322,
	test_func3323,
	test_func3324,
	test_func3325,
	test_func3326,
	test_func3327,
	test_func3328,
	test_func3329,
	test_func3330,
	test_func3331,
	test_func3332,
	test_func3333,
	test_func3334,
	test_func3335,
	test_func3336,
	test_func3337,
	test_func3338,
	test_func3339,
	test_func3340,
	test_func3341,
	test_func3342,
	test_func3343,
	test_func3344,
	test_func3345,
	test_func3346,
	test_func3347,
	test_func3348,
	test_func3349,
	test_func3350,
	test_func3351,
	test_func3352,
	test_func3353,
	test_func3354,
	test_func3355,
	test_func3356,
	test_func3357,
	test_func3358,
	test_func3359,
	test_func3360,
	test_func3361,
	test_func3362,
	test_func3363,
	test_func3364,
	test_func3365,
	test_func3366,
	test_func3367,
	test_func3368,
	test_func3369,
	test_func3370,
	test_func3371,
	test_func3372,
	test_func3373,
	test_func3374,
	test_func3375,
	test_func3376,
	test_func3377,
	test_func3378,
	test_func3379,
	test_func3380,
	test_func3381,
	test_func3382,
	test_func3383,
	test_func3384,
	test_func3385,
	test_func3386,
	test_func3387,
	test_func3388,
	test_func3389,
	test_func3390,
	test_func3391,
	test_func3392,
	test_func3393,
	test_func3394,
	test_func3395,
	test_func3396,
	test_func3397,
	test_func3398,
	test_func3399,
	test_func3400,
	test_func3401,
	test_func3402,
	test_func3403,
	test_func3404,
	test_func3405,
	test_func3406,
	test_func3407,
	test_func3408,
	test_func3409,
	test_func3410,
	test_func3411,
	test_func3412,
	test_func3413,
	test_func3414,
	test_func3415,
	test_func3416,
	test_func3417,
	test_func3418,
	test_func3419,
	test_func3420,
	test_func3421,
	test_func3422,
	test_func3423,
	test_func3424,
	test_func3425,
	test_func3426,
	test_func3427,
	test_func3428,
	test_func3429,
	test_func3430,
	test_func3431,
	test_func3432,
	test_func3433,
	test_func3434,
	test_func3435,
	test_func3436,
	test_func3437,
	test_func3438,
	test_func3439,
	test_func3440,
	test_func3441,
	test_func3442,
	test_func3443,
	test_func3444,
	test_func3445,
	test_func3446,
	test_func3447,
	test_func3448,
	test_func3449,
	test_func3450,
	test_func3451,
	test_func3452,
	test_func3453,
	test_func3454,
	test_func3455,
	test_func3456,
	test_func3457,
	test_func3458,
	test_func3459,
	test_func3460,
	test_func3461,
	test_func3462,
	test_func3463,
	test_func3464,
	test_func3465,
	test_func3466,
	test_func3467,
	test_func3468,
	test_func3469,
	test_func3470,
	test_func3471,
	test_func3472,
	test_func3473,
	test_func3474,
	test_func3475,
	test_func3476,
	test_func3477,
	test_func3478,
	test_func3479,
	test_func3480,
	test_func3481,
	test_func3482,
	test_func3483,
	test_func3484,
	test_func3485,
	test_func3486,
	test_func3487,
	test_func3488,
	test_func3489,
	test_func3490,
	test_func3491,
	test_func3492,
	test_func3493,
	test_func3494,
	test_func3495,
	test_func3496,
	test_func3497,
	test_func3498,
	test_func3499,
	test_func3500,
	test_func3501,
	test_func3502,
	test_func3503,
	test_func3504,
	test_func3505,
	test_func3506,
	test_func3507,
	test_func3508,
	test_func3509,
	test_func3510,
	test_func3511,
	test_func3512,
	test_func3513,
	test_func3514,
	test_func3515,
	test_func3516,
	test_func3517,
	test_func3518,
	test_func3519,
	test_func3520,
	test_func3521,
	test_func3522,
	test_func3523,
	test_func3524,
	test_func3525,
	test_func3526,
	test_func3527,
	test_func3528,
	test_func3529,
	test_func3530,
	test_func3531,
	test_func3532,
	test_func3533,
	test_func3534,
	test_func3535,
	test_func3536,
	test_func3537,
	test_func3538,
	test_func3539,
	test_func3540,
	test_func3541,
	test_func3542,
	test_func3543,
	test_func3544,
	test_func3545,
	test_func3546,
	test_func3547,
	test_func3548,
	test_func3549,
	test_func3550,
	test_func3551,
	test_func3552,
	test_func3553,
	test_func3554,
	test_func3555,
	test_func3556,
	test_func3557,
	test_func3558,
	test_func3559,
	test_func3560,
	test_func3561,
	test_func3562,
	test_func3563,
	test_func3564,
	test_func3565,
	test_func3566,
	test_func3567,
	test_func3568,
	test_func3569,
	test_func3570,
	test_func3571,
	test_func3572,
	test_func3573,
	test_func3574,
	test_func3575,
	test_func3576,
	test_func3577,
	test_func3578,
	test_func3579,
	test_func3580,
	test_func3581,
	test_func3582,
	test_func3583,
	test_func3584,
	test_func3585,
	test_func3586,
	test_func3587,
	test_func3588,
	test_func3589,
	test_func3590,
	test_func3591,
	test_func3592,
	test_func3593,
	test_func3594,
	test_func3595,
	test_func3596,
	test_func3597,
	test_func3598,
	test_func3599,
	test_func3600,
	test_func3601,
	test_func3602,
	test_func3603,
	test_func3604,
	test_func3605,
	test_func3606,
	test_func3607,
	test_func3608,
	test_func3609,
	test_func3610,
	test_func3611,
	test_func3612,
	test_func3613,
	test_func3614,
	test_func3615,
	test_func3616,
	test_func3617,
	test_func3618,
	test_func3619,
	test_func3620,
	test_func3621,
	test_func3622,
	test_func3623,
	test_func3624,
	test_func3625,
	test_func3626,
	test_func3627,
	test_func3628,
	test_func3629,
	test_func3630,
	test_func3631,
	test_func3632,
	test_func3633,
	test_func3634,
	test_func3635,
	test_func3636,
	test_func3637,
	test_func3638,
	test_func3639,
	test_func3640,
	test_func3641,
	test_func3642,
	test_func3643,
	test_func3644,
	test_func3645,
	test_func3646,
	test_func3647,
	test_func3648,
	test_func3649,
	test_func3650,
	test_func3651,
	test_func3652,
	test_func3653,
	test_func3654,
	test_func3655,
	test_func3656,
	test_func3657,
	test_func3658,
	test_func3659,
	test_func3660,
	test_func3661,
	test_func3662,
	test_func3663,
	test_func3664,
	test_func3665,
	test_func3666,
	test_func3667,
	test_func3668,
	test_func3669,
	test_func3670,
	test_func3671,
	test_func3672,
	test_func3673,
	test_func3674,
	test_func3675,
	test_func3676,
	test_func3677,
	test_func3678,
	test_func3679,
	test_func3680,
	test_func3681,
	test_func3682,
	test_func3683,
	test_func3684,
	test_func3685,
	test_func3686,
	test_func3687,
	test_func3688,
	test_func3689,
	test_func3690,
	test_func3691,
	test_func3692,
	test_func3693,
	test_func3694,
	test_func3695,
	test_func3696,
	test_func3697,
	test_func3698,
	test_func3699,
	test_func3700,
	test_func3701,
	test_func3702,
	test_func3703,
	test_func3704,
	test_func3705,
	test_func3706,
	test_func3707,
	test_func3708,
	test_func3709,
	test_func3710,
	test_func3711,
	test_func3712,
	test_func3713,
	test_func3714,
	test_func3715,
	test_func3716,
	test_func3717,
	test_func3718,
	test_func3719,
	test_func3720,
	test_func3721,
	test_func3722,
	test_func3723,
	test_func3724,
	test_func3725,
	test_func3726,
	test_func3727,
	test_func3728,
	test_func3729,
	test_func3730,
	test_func3731,
	test_func3732,
	test_func3733,
	test_func3734,
	test_func3735,
	test_func3736,
	test_func3737,
	test_func3738,
	test_func3739,
	test_func3740,
	test_func3741,
	test_func3742,
	test_func3743,
	test_func3744,
	test_func3745,
	test_func3746,
	test_func3747,
	test_func3748,
	test_func3749,
	test_func3750,
	test_func3751,
	test_func3752,
	test_func3753,
	test_func3754,
	test_func3755,
	test_func3756,
	test_func3757,
	test_func3758,
	test_func3759,
	test_func3760,
	test_func3761,
	test_func3762,
	test_func3763,
	test_func3764,
	test_func3765,
	test_func3766,
	test_func3767,
	test_func3768,
	test_func3769,
	test_func3770,
	test_func3771,
	test_func3772,
	test_func3773,
	test_func3774,
	test_func3775,
	test_func3776,
	test_func3777,
	test_func3778,
	test_func3779,
	test_func3780,
	test_func3781,
	test_func3782,
	test_func3783,
	test_func3784,
	test_func3785,
	test_func3786,
	test_func3787,
	test_func3788,
	test_func3789,
	test_func3790,
	test_func3791,
	test_func3792,
	test_func3793,
	test_func3794,
	test_func3795,
	test_func3796,
	test_func3797,
	test_func3798,
	test_func3799,
	test_func3800,
	test_func3801,
	test_func3802,
	test_func3803,
	test_func3804,
	test_func3805,
	test_func3806,
	test_func3807,
	test_func3808,
	test_func3809,
	test_func3810,
	test_func3811,
	test_func3812,
	test_func3813,
	test_func3814,
	test_func3815,
	test_func3816,
	test_func3817,
	test_func3818,
	test_func3819,
	test_func3820,
	test_func3821,
	test_func3822,
	test_func3823,
	test_func3824,
	test_func3825,
	test_func3826,
	test_func3827,
	test_func3828,
	test_func3829,
	test_func3830,
	test_func3831,
	test_func3832,
	test_func3833,
	test_func3834,
	test_func3835,
	test_func3836,
	test_func3837,
	test_func3838,
	test_func3839,
	test_func3840,
	test_func3841,
	test_func3842,
	test_func3843,
	test_func3844,
	test_func3845,
	test_func3846,
	test_func3847,
	test_func3848,
	test_func3849,
	test_func3850,
	test_func3851,
	test_func3852,
	test_func3853,
	test_func3854,
	test_func3855,
	test_func3856,
	test_func3857,
	test_func3858,
	test_func3859,
	test_func3860,
	test_func3861,
	test_func3862,
	test_func3863,
	test_func3864,
	test_func3865,
	test_func3866,
	test_func3867,
	test_func3868,
	test_func3869,
	test_func3870,
	test_func3871,
	test_func3872,
	test_func3873,
	test_func3874,
	test_func3875,
	test_func3876,
	test_func3877,
	test_func3878,
	test_func3879,
	test_func3880,
	test_func3881,
	test_func3882,
	test_func3883,
	test_func3884,
	test_func3885,
	test_func3886,
	test_func3887,
	test_func3888,
	test_func3889,
	test_func3890,
	test_func3891,
	test_func3892,
	test_func3893,
	test_func3894,
	test_func3895,
	test_func3896,
	test_func3897,
	test_func3898,
	test_func3899,
	test_func3900,
	test_func3901,
	test_func3902,
	test_func3903,
	test_func3904,
	test_func3905,
	test_func3906,
	test_func3907,
	test_func3908,
	test_func3909,
	test_func3910,
	test_func3911,
	test_func3912,
	test_func3913,
	test_func3914,
	test_func3915,
	test_func3916,
	test_func3917,
	test_func3918,
	test_func3919,
	test_func3920,
	test_func3921,
	test_func3922,
	test_func3923,
	test_func3924,
	test_func3925,
	test_func3926,
	test_func3927,
	test_func3928,
	test_func3929,
	test_func3930,
	test_func3931,
	test_func3932,
	test_func3933,
	test_func3934,
	test_func3935,
	test_func3936,
	test_func3937,
	test_func3938,
	test_func3939,
	test_func3940,
	test_func3941,
	test_func3942,
	test_func3943,
	test_func3944,
	test_func3945,
	test_func3946,
	test_func3947,
	test_func3948,
	test_func3949,
	test_func3950,
	test_func3951,
	test_func3952,
	test_func3953,
	test_func3954,
	test_func3955,
	test_func3956,
	test_func3957,
	test_func3958,
	test_func3959,
	test_func3960,
	test_func3961,
	test_func3962,
	test_func3963,
	test_func3964,
	test_func3965,
	test_func3966,
	test_func3967,
	test_func3968,
	test_func3969,
	test_func3970,
	test_func3971,
	test_func3972,
	test_func3973,
	test_func3974,
	test_func3975,
	test_func3976,
	test_func3977,
	test_func3978,
	test_func3979,
	test_func3980,
	test_func3981,
	test_func3982,
	test_func3983,
	test_func3984,
	test_func3985,
	test_func3986,
	test_func3987,
	test_func3988,
	test_func3989,
	test_func3990,
	test_func3991,
	test_func3992,
	test_func3993,
	test_func3994,
	test_func3995,
	test_func3996,
	test_func3997,
	test_func3998,
	test_func3999,
	test_func4000,
	test_func4001,
	test_func4002,
	test_func4003,
	test_func4004,
	test_func4005,
	test_func4006,
	test_func4007,
	test_func4008,
	test_func4009,
	test_func4010,
	test_func4011,
	test_func4012,
	test_func4013,
	test_func4014,
	test_func4015,
	test_func4016,
	test_func4017,
	test_func4018,
	test_func4019,
	test_func4020,
	test_func4021,
	test_func4022,
	test_func4023,
	test_func4024,
	test_func4025,
	test_func4026,
	test_func4027,
	test_func4028,
	test_func4029,
	test_func4030,
	test_func4031,
	test_func4032,
	test_func4033,
	test_func4034,
	test_func4035,
	test_func4036,
	test_func4037,
	test_func4038,
	test_func4039,
	test_func4040,
	test_func4041,
	test_func4042,
	test_func4043,
	test_func4044,
	test_func4045,
	test_func4046,
	test_func4047,
	test_func4048,
	test_func4049,
	test_func4050,
	test_func4051,
	test_func4052,
	test_func4053,
	test_func4054,
	test_func4055,
	test_func4056,
	test_func4057,
	test_func4058,
	test_func4059,
	test_func4060,
	test_func4061,
	test_func4062,
	test_func4063,
	test_func4064,
	test_func4065,
	test_func4066,
	test_func4067,
	test_func4068,
	test_func4069,
	test_func4070,
	test_func4071,
	test_func4072,
	test_func4073,
	test_func4074,
	test_func4075,
	test_func4076,
	test_func4077,
	test_func4078,
	test_func4079,
	test_func4080,
	test_func4081,
	test_func4082,
	test_func4083,
	test_func4084,
	test_func4085,
	test_func4086,
	test_func4087,
	test_func4088,
	test_func4089,
	test_func4090,
	test_func4091,
	test_func4092,
	test_func4093,
	test_func4094,
	test_func4095,
};
