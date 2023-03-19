int __cdecl main(int argc, const char **argv, const char **envp)
{
  char s[8]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v5; // [rsp+8h] [rbp-78h]
  __int64 v6; // [rsp+10h] [rbp-70h]
  __int64 v7; // [rsp+18h] [rbp-68h]
  __int64 v8; // [rsp+20h] [rbp-60h]
  __int64 v9; // [rsp+28h] [rbp-58h]
  __int64 v10; // [rsp+30h] [rbp-50h]
  __int64 v11; // [rsp+38h] [rbp-48h]
  __int64 v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h]
  __int64 v18; // [rsp+70h] [rbp-10h]
  __int64 v19; // [rsp+78h] [rbp-8h]

  *(_QWORD *)s = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  printf("What route will you take out of the cave? ");
  fgets(s, 128, stdin);
  if ( !memcmp(s, "HTB{", 4uLL)
    && (_BYTE)v10 * BYTE5(v6) == 20
    && (_BYTE)v8 - BYTE4(v8) == 0xFA
    && BYTE5(v8) - BYTE2(v7) == 0xD6
    && (_BYTE)v6 - (_BYTE)v10 == 8
    && HIBYTE(v10) - (_BYTE)v5 == 0xD5
    && s[7] * BYTE2(v7) == 0xED
    && (_BYTE)v7 * s[4] == 0xC8
    && (BYTE4(v7) ^ BYTE2(v8)) == 85
    && BYTE6(v7) - HIBYTE(v10) == 52
    && BYTE2(v10) + BYTE3(v11) == 0x8F
    && BYTE3(v7) + BYTE4(v9) == 0xD6
    && (BYTE6(v5) ^ BYTE1(v6)) == 49
    && BYTE4(v6) * (_BYTE)v11 == 0xAC
    && BYTE2(v11) - BYTE2(v7) == 0xC2
    && (s[6] ^ BYTE2(v7)) == 47
    && (HIBYTE(v8) ^ BYTE6(v5)) == 90
    && (HIBYTE(v8) ^ BYTE4(v9)) == 64
    && (_BYTE)v9 == BYTE2(v7)
    && BYTE1(v10) + HIBYTE(v6) == 0x98
    && BYTE3(v11) * HIBYTE(v6) == 104
    && s[1] - BYTE4(v7) == 0xDB
    && (_BYTE)v7 - BYTE5(v7) == 0xD2
    && BYTE6(v8) - (_BYTE)v7 == 46
    && (BYTE6(v6) ^ (unsigned __int8)v8) == 26
    && s[4] * BYTE4(v9) == 0xA0
    && BYTE3(v7) * BYTE6(v8) == 94
    && HIBYTE(v5) - (_BYTE)v9 == 0xC8
    && (BYTE5(v10) ^ BYTE1(v10)) == 86
    && (BYTE5(v9) ^ BYTE2(v7)) == 43
    && (BYTE1(v5) ^ BYTE6(v10)) == 25
    && BYTE4(v7) - HIBYTE(v9) == 26
    && BYTE3(v6) + BYTE2(v10) == 0xA1
    && BYTE1(v11) + BYTE5(v8) == 86
    && (BYTE2(v6) ^ BYTE5(v7)) == 56
    && (BYTE4(v11) ^ BYTE4(v9)) == 9
    && BYTE6(v8) * HIBYTE(v5) == 121
    && (BYTE6(v7) ^ BYTE5(v8)) == 93
    && (_BYTE)v8 * s[2] == 92
    && BYTE2(v6) * BYTE2(v5) == 57
    && BYTE5(v7) == BYTE5(v6)
    && BYTE5(v6) * BYTE3(v8) == 47
    && BYTE5(v8) * (_BYTE)v5 == 0xAB
    && BYTE2(v7) + HIBYTE(v8) == 0x93
    && (BYTE2(v8) ^ BYTE2(v7)) == 115
    && (HIBYTE(v7) ^ BYTE4(v6)) == 64
    && (_BYTE)v6 + BYTE1(v7) == 0xA9
    && (BYTE3(v11) ^ HIBYTE(v8)) == 21
    && BYTE3(v11) + s[0] == 105
    && BYTE6(v9) + BYTE2(v8) == 0xA5
    && (BYTE4(v10) ^ BYTE6(v7)) == 55
    && BYTE4(v7) * s[0] == 8
    && BYTE2(v8) - (_BYTE)v11 == 0xC5
    && BYTE4(v11) + BYTE2(v6) == 0xE4
    && ((unsigned __int8)v9 ^ BYTE3(v8)) == 110
    && (_BYTE)v6 * (_BYTE)v11 == 0xAC
    && BYTE6(v10) - HIBYTE(v9) == 13
    && HIBYTE(v10) + BYTE6(v7) == 0x9C
    && BYTE1(v8) + s[6] == 0xD4
    && BYTE5(v7) * s[7] == 0xED
    && (BYTE5(v7) ^ (unsigned __int8)v11) == 56
    && BYTE5(v8) * s[1] == 100
    && (BYTE2(v11) ^ (unsigned __int8)v11) == 70
    && BYTE3(v6) * s[2] == 38
    && (BYTE6(v6) ^ BYTE2(v7)) == 43
    && s[7] + s[1] == 0x87
    && (s[0] ^ BYTE3(v7)) == 42
    && BYTE5(v6) - s[1] == 11
    && BYTE6(v10) + BYTE3(v7) == 0xCE
    && (BYTE5(v5) ^ BYTE1(v6)) == 59
    && BYTE3(v6) - BYTE2(v11) == 18
    && BYTE1(v6) == BYTE2(v5)
    && BYTE6(v5) - BYTE2(v11) == 77
    && BYTE4(v10) * BYTE2(v9) == 78
    && BYTE2(v10) == (_BYTE)v8
    && (BYTE3(v10) ^ HIBYTE(v9)) == 56
    && BYTE1(v7) + BYTE6(v8) == 0x94
    && BYTE4(v10) + BYTE1(v9) == 0xCF
    && BYTE4(v9) == BYTE4(v6)
    && BYTE1(v7) + BYTE4(v5) == 102
    && BYTE4(v8) + BYTE4(v11) == 0xF1
    && BYTE1(v9) - BYTE5(v6) == 17
    && BYTE4(v8) - BYTE1(v10) == 68
    && BYTE1(v5) - BYTE3(v8) == 68
    && (BYTE3(v10) ^ BYTE5(v10)) == 1
    && (BYTE1(v11) ^ BYTE2(v8)) == 13
    && BYTE3(v5) - BYTE4(v7) == 0xEB
    && (_BYTE)v7 + HIBYTE(v6) == 0x99
    && BYTE5(v5) + (_BYTE)v7 == 0x95
    && BYTE4(v5) - s[0] == 0xE9
    && HIBYTE(v7) + BYTE2(v8) == 96
    && BYTE5(v10) + s[5] == 0x96
    && BYTE2(v9) * BYTE1(v10) == 96
    && BYTE5(v6) * (_BYTE)v10 == 20
    && BYTE3(v7) - BYTE4(v10) == 3
    && BYTE4(v6) + BYTE1(v11) == 0x95
    && BYTE5(v10) * BYTE2(v5) == 0xDA
    && BYTE1(v9) + s[1] == 0xC4
    && HIBYTE(v9) - s[1] == 11
    && BYTE3(v9) == BYTE3(v6)
    && HIBYTE(v9) + HIBYTE(v8) == 0x93
    && BYTE2(v11) * BYTE4(v5) == 81
    && BYTE2(v7) * (_BYTE)v5 == 65
    && BYTE6(v9) - HIBYTE(v7) == 69
    && BYTE5(v8) + s[7] == 104
    && s[4] + BYTE4(v8) == 0xBC
    && (_BYTE)v8 + HIBYTE(v7) == 0xA2
    && s[5] + BYTE1(v7) == 101
    && BYTE5(v7) * BYTE3(v9) == 0xED
    && (BYTE5(v9) ^ BYTE5(v5)) == 16
    && (_BYTE)v10 - BYTE4(v5) == 59
    && HIBYTE(v6) - (_BYTE)v5 == 9
    && (BYTE2(v9) ^ s[7]) == 65
    && s[5] - BYTE3(v9) == 0xFD
    && (BYTE2(v6) ^ BYTE4(v11)) == 26
    && (s[3] ^ s[1]) == 47
    && BYTE1(v6) - HIBYTE(v8) == 43
    && BYTE4(v6) + (_BYTE)v5 == 0xD3
    && BYTE5(v10) * BYTE3(v5) == 0xD8
    && s[6] + BYTE3(v7) == 0xD2
    && s[3] + s[5] == 0xAB
    && BYTE3(v8) - HIBYTE(v9) == 0xD2
    && (BYTE1(v8) ^ (unsigned __int8)v6) == 16 )
  {
    puts("Freedom at last!");
  }
  else
  {
    puts("Lost in the darkness, you'll wander for eternity...");
  }
  return 0;
}
