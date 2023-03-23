# hackthebox_rev_cavesystem_angr
rev_cavesystem reversing challenge solved with angr


```
sudo docker run --volume=/home/kali/HTB/CA:/data -it angr/angr
```


yada yada this is A1D5

```c
  if ( !memcmp(s, "HTB{", 4uLL)
    && (_BYTE)v10 * BYTE5(v6) == 20
    && (_BYTE)v8 - BYTE4(v8) == 0xFA
    && BYTE5(v8) - BYTE2(v7) == 0xD6
    && (_BYTE)v6 - (_BYTE)v10 == 8
    && HIBYTE(v10) - (_BYTE)v5 == 0xD5
[...SNIP you get the point ...]
    && BYTE3(v6) + BYTE2(v10) == 0xA1
    && BYTE1(v11) + BYTE5(v8) == 86
    && (BYTE2(v6) ^ BYTE5(v7)) == 56
    && (BYTE4(v11) ^ BYTE4(v9)) == 9
    && BYTE6(v8) * HIBYTE(v5) == 121
    && (BYTE6(v7) ^ BYTE5(v8)) == 93
```

solve using SMT and symbolic execution, ezpz.

![image](https://user-images.githubusercontent.com/57832389/227236453-752db5f7-6409-4272-8d6d-5f82c175a160.png)



# references 
- https://github.com/angr/angr-doc/tree/master/examples
- https://github.com/angr/angr-doc/blob/master/examples/CSCI-4968-MBE/challenges/crackme0x05/solve.py
- https://docs.angr.io
