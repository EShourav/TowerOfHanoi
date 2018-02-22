/***
    Muntasher Morshed
    Spring, 2014
    Email: ijeshourav1409@gmail.com
    Dept. of CSE
    University of Asia Pacific
                              ***/

/***    H E A D E R   F I L E S    ***/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void base()
{
    for(int i=1; i<=10; i++)
    {
        /*** Plate 1 ***/
        setcolor(BLUE);
        line(100,590+i,300,590+i);
        line(100,610-i,300,610-i);

        /*** Plate 2 ***/
        setcolor(MAGENTA);
        line(400,590+i,600,590+i);
        line(400,610-i,600,610-i);

        /*** Plate 3 ***/
        setcolor(LIGHTRED);
        line(700,590+i,900,590+i);
        line(700,610-i,900,610-i);

        /*** Bar 1 ***/
        setcolor(BLUE);
        line(190+i,400,190+i,600);
        line(210-i,400,210-i,600);

        /*** Bar 2 ***/
        setcolor(MAGENTA);
        line(490+i,400,490+i,600);
        line(510-i,400,510-i,600);

        /*** Bar 3 ***/
        setcolor(LIGHTRED);
        line(790+i,400,790+i,600);
        line(810-i,400,810-i,600);
    }
}

void mainGraph_1()
{
    /*** Plate 3 ***/
    bar(120,570,280,590);

    /*** Plate 2 ***/
    bar(140,549,260,569);
}

void mainGraph_2()
{
    /*** Plate 3 ***/
    bar(120,570,280,590);

    /*** Plate 1 ***/
    bar(760,570,840,590);
}

void mainGraph_3()
{
    /*** Plate 3 ***/
    bar(120,570,280,590);

    /*** Plate 2 ***/
    bar(440,570,560,590);
}

void mainGraph_4()
{
    /*** Plate 2 ***/
    bar(440,570,560,590);

    /*** Plate 1 ***/
    bar(460,549,540,569);
}

void mainGraph_5()
{
    /*** Plate 2 ***/
    bar(440,570,560,590);

    /*** Plate 3 ***/
    bar(720,570,880,590);
}

void mainGraph_6()
{
    /*** Plate 1 ***/
    bar(160,570,240,590);

    /*** Plate 3 ***/
    bar(720,570,880,590);
}

void mainGraph_7()
{
    /*** Plate 2 ***/
    bar(740,549,860,569);

    /*** Plate 3 ***/
    bar(720,570,880,590);
}

void mainGraph_8()
{
    /*** Plate 1 ***/
    bar(760,528,840,548);

    /*** Plate 2 ***/
    bar(740,549,860,569);

    /*** Plate 3 ***/
    bar(720,570,880,590);
}

int main()
{
    bool dbflag=false, closeflag=true;
    initwindow(1000,800,"Lel :P",0,0,dbflag,closeflag);

    int j;

    base();

    /***** moving plate 1 from 1 to 3 *****/
    for(j=0; j<=180; j=j+10)
    {
        /*** Plate 1 ***/
        bar(160,528-j,240,548-j);
        delay(100);
        cleardevice();
        base();
        mainGraph_1();
    }

    for(j=0; j<=600; j=j+10)
    {
        bar(160+j,348,240+j,368);
        delay(100);
        cleardevice();
        base();
        mainGraph_1();
    }

    for(j=0; j<=220; j=j+10)
    {
        bar(760,350+j,840,370+j);
        delay(100);
        cleardevice();
        base();
        mainGraph_1();
    }

    /***** Moving plate 2 from 1 to 2 *****/
    for(j=0; j<=200; j=j+10)
    {
        bar(140,549-j,260,569-j);
        delay(100);
        cleardevice();
        base();
        mainGraph_2();
    }

    for(j=0; j<=300; j=j+10)
    {
        bar(140+j,349,260+j,369);
        delay(100);
        cleardevice();
        base();
        mainGraph_2();
    }

    for(j=0; j<=220; j=j+10)
    {
        bar(440,350+j,560,370+j);
        delay(100);
        cleardevice();
        base();
        mainGraph_2();
    }

    /***** Moving plate 1 from 3 to 2 *****/
    for(j=0; j<=220; j=j+10)
    {
        bar(760,569-j,840,589-j);
        delay(100);
        cleardevice();
        base();
        mainGraph_3();
    }

    for(j=0; j<=300; j=j+10)
    {
        bar(760-j,349,840-j,369);
        delay(100);
        cleardevice();
        base();
        mainGraph_3();
    }

    for(j=0; j<=200; j=j+10)
    {
        bar(460,349+j,540,369+j);
        delay(100);
        cleardevice();
        base();
        mainGraph_3();
    }

    /***** Moving plate 3 from 1 to 3 *****/
    for(j=0; j<=220; j=j+10)
    {
        bar(120,570-j,280,590-j);
        delay(100);
        cleardevice();
        base();
        mainGraph_4();
    }

    for(j=0; j<=600; j=j+10)
    {
        bar(120+j,350,280+j,370);
        delay(100);
        cleardevice();
        base();
        mainGraph_4();
    }

    for(j=0; j<=220; j=j+10)
    {
        bar(720,350+j,880,370+j);
        delay(100);
        cleardevice();
        base();
        mainGraph_4();
    }

    /***** Moving plate 1 from 2 to 1 ******/
    for(j=0; j<=200; j=j+10)
    {
        bar(460,549-j,540,569-j);
        delay(100);
        cleardevice();
        base();
        mainGraph_5();
    }

    for(j=0; j<=300; j=j+10)
    {
        bar(460-j,349,540-j,369);
        delay(100);
        cleardevice();
        base();
        mainGraph_5();
    }

    for(j=0; j<=220; j=j+10)
    {
        bar(160,350+j,240,370+j);
        delay(100);
        cleardevice();
        base();
        mainGraph_5();
    }

    /***** Moving plate 2 from 2 to 3 *****/
    for(j=0; j<=220; j=j+10)
    {
        bar(440,570-j,560,590-j);
        delay(100);
        cleardevice();
        base();
        mainGraph_6();
    }

    for(j=0; j<=300; j=j+10)
    {
        bar(440+j,350,560+j,370);
        delay(100);
        cleardevice();
        base();
        mainGraph_6();
    }

    for(j=0; j<=200; j=j+10)
    {
        bar(740,349+j,860,369+j);
        delay(100);
        cleardevice();
        base();
        mainGraph_6();
    }

    /***** Moving plate 1 from 1 to 3 *****/
    for(j=0; j<=220; j=j+10)
    {
        bar(160,570-j,240,590-j);
        delay(100);
        cleardevice();
        base();
        mainGraph_7();
    }

    for(j=0; j<=600; j=j+10)
    {
        bar(160+j,349,240+j,369);
        delay(100);
        cleardevice();
        base();
        mainGraph_7();
    }

    for(j=0; j<=180; j=j+10)
    {
        bar(760,348+j,840,369+j);
        delay(100);
        cleardevice();
        base();
        mainGraph_7();
    }

    base();
    mainGraph_8();

    getch();
    return 0;
}
