// //#include <stc12.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <reg51.h>
#include "delay.h"


#include "reg51.h"
#include "STC15Fxxxx.h"

void delay()
{
    int i, j;

    for (i=0; i<500; i++)
    for (j=0; j<100; j++);
}


void main()
{
    // P0M0 = 0x00;
    // P0M1 = 0x00;
    // P1M0 = 0x00;
    // P1M1 = 0x00;
    // P2M0 = 0x00;
    // P2M1 = 0x00;
    // P3M0 = 0x00;
    // P3M1 = 0x00;
    // P4M0 = 0x00;
    // P4M1 = 0x00;
    // P5M0 = 0x00;
    // P5M1 = 0x00;
    // P6M0 = 0x00;
    // P6M1 = 0x00;
    // P7M0 = 0x00;
    // P7M1 = 0x00;

    // P10 = 0;
    // delay();
    // P10 = 1;
    // P11 = 0;
    // delay();
    // P11 = 1;
    // P12 = 0;
    // delay();
    // P12 = 1;
    // P13 = 0;
    // delay();
    // P13 = 1;
    // P14 = 0;
    // delay();
    // P14 = 1;
    // P15 = 0;
    // delay();
    // P15 = 1;
    // P16 = 0;
    // delay();
    // P16 = 1;
    // P17 = 0;
    // delay();
    // P17 = 1;

//    P30 = 0;          //P3.0/P3.1为仿真口和USB下载口时不可演示
//    delay();
//    P30 = 1;
//    P31 = 0;
//    delay();
//    P31 = 1;
    // P32 = 0;
    // delay();
    // P32 = 1;
    // P33 = 0;
    // delay();
    // P33 = 1;
    // P34 = 0;
    // delay();
    // P34 = 1;
    // P35 = 0;
    // delay();
    // P35 = 1;
    // P36 = 0;
    // delay();
    // P36 = 1;
    // P37 = 0;
    // delay();
    // P37 = 1;
//
    // P20 = 0;
    // delay();
    // P20 = 1;
    // P21 = 0;
    // delay();
    // P21 = 1;
    // P22 = 0;
    // delay();
    // P22 = 1;
    // P23 = 0;
    // delay();
    // P23 = 1;
    // P24 = 0;
    // delay();
    // P24 = 1;
    // P25 = 0;
    // delay();
    // P25 = 1;
    // P26 = 0;
    // delay();
    // P26 = 1;
    // P27 = 0;
    // delay();
    // P27 = 1;

    // P00 = 0;
    // delay();
    // P00 = 1;
    // P01 = 0;
    // delay();
    // P01 = 1;
    // P02 = 0;
    // delay();
    // P02 = 1;
    // P03 = 0;
    // delay();
    // P03 = 1;
    // P04 = 0;
    // delay();
    // P04 = 1;
    // P05 = 0;
    // delay();
    // P05 = 1;
    // P06 = 0;
    // delay();
    // P06 = 1;
    // P07 = 0;
    // delay();
    // P07 = 1;

    // P40 = 0;
    // delay();
    // P40 = 1;
    // P41 = 0;
    // delay();
    // P41 = 1;
    // P42 = 0;
    // delay();
    // P42 = 1;
    // P43 = 0;
    // delay();
    // P43 = 1;
    // P44 = 0;
    // delay();
    // P44 = 1;
    // P45 = 0;
    // delay();
    // P45 = 1;
    // P46 = 0;
    // delay();
    // P46 = 1;
    // P47 = 0;
    // delay();
    // P47 = 1;

    // P50 = 0;
    // delay();
    // P50 = 1;
    // P51 = 0;
    // delay();
    // P51 = 1;
    // P52 = 0;
    // delay();
    // P52 = 1;
    // P53 = 0;
    // delay();
    // P53 = 1;
    // P54 = 0;
    // delay();
    // P54 = 1;
    // P55 = 0;
    // delay();
    // P55 = 1;
    // P56 = 0;
    // delay();
    // P56 = 1;
    // P57 = 0;
    // delay();
    // P57 = 1;

    // P60 = 0;
    // delay();
    // P60 = 1;
    // P61 = 0;
    // delay();
    // P61 = 1;
    // P62 = 0;
    // delay();
    // P62 = 1;
    // P63 = 0;
    // delay();
    // P63 = 1;
    // P64 = 0;
    // delay();
    // P64 = 1;
    // P65 = 0;
    // delay();
    // P65 = 1;
    // P66 = 0;
    // delay();
    // P66 = 1;
    // P67 = 0;
    // delay();
    // P67 = 1;

    // P70 = 0;
    // delay();
    // P70 = 1;
    // P71 = 0;
    // delay();
    // P71 = 1;
    // P72 = 0;
    // delay();
    // P72 = 1;
    // P73 = 0;
    // delay();
    // P73 = 1;
    // P74 = 0;
    // delay();
    // P74 = 1;
    // P75 = 0;
    // delay();
    // P75 = 1;
    // P76 = 0;
    // delay();
    // P76 = 1;
    // P77 = 0;
    // delay();
    // P77 = 1;

    while (1)
    {
        // P0 = 0x00;
        // delay();
        // P0 = 0xff;

        P1 = 0x00;
        delay_ms(100);
        P1 = 0xff;
        delay_ms(100);

        // P3 = 0x03;          //P3.0/P3.1为仿真口和USB下载口时不可演示
        // delay();
        // P3 = 0xff;

        // P2 = 0x00;
        // delay();
        // P2 = 0xff;

        // P4 = 0x00;
        // delay();
        // P4 = 0xff;

        // P5 = 0x00;
        // delay();
        // P5 = 0xff;

        // P6 = 0x00;
        // delay();
        // P6 = 0xff;

        // P7 = 0x00;
        // delay();
        // P7 = 0xff;
    }
}
