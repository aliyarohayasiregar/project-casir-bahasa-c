// #include <stdio.h>
// #include <stdlib.h>
// #include <windows.h>
// #include "windows_api.c"

void bingkai(int p, int l)
{
    setcolor(9, 0);
    for (int a = 1; a <= p; a++)
    {
        printf("%c", 219);
    }
    for (int b = 1; b <= l; b++)
    {
        printf("%c", 219);
    }
}

void tampilan()
{
    bingkai(39, 119);
    setcolor(3, 0);
    for (int a = 2; a <= 20; a++)
    {
        alya(a, 3);
        printf(" #######  ##       ########  ##    ##        ########  ##       ########  ##    ##");
        alya(a, 4);
        printf(" ##   ##  ##       ##        ##    ##        ##    ##  ##       ##        ##    ##");
        alya(a, 5);
        printf(" ##   ##  ##       ########  ########  ####  ##    ##  ##       ########  ########");
        alya(a, 6);
        printf(" ##   ##  ##       ##        ##    ##        ##    ##  ##       ##        ##    ##");
        alya(a, 7);
        printf(" #######  #######  ########  ##    ##        ########  #######  ########  ##    ##");
        Sleep(20);
    }
    setcolor(6, 0);
    for (int a = 60; a > 40; a--)
    {
        for (int b = 1; b <= 15; b++)
        {
            setcolor(b, 0);
            alya(a, 10);
            printf("##    ##  #######  ########  ####### ");
            alya(a, 11);
            printf("##  ##    ##   ##     ##     ##   ## ");
            alya(a, 12);
            printf("## ##     ##   ##     ##     ####### ");
            alya(a, 13);
            printf("##  ##    ##   ##     ##     ##   ## ");
            alya(a, 14);
            printf("##    ##  #######     ##     ##   ## ");
            Sleep(1);
        }
    }

    for (int b = 1; b <= 15; b++)
    {
        setcolor(b, 0);
        alya(32, 17);
        printf(" #######  ##  #######  ##  #######   #######  ##     ##");
        Sleep(10);
        alya(32, 18);
        printf(" ##       ##  ##   ##  ##  ##   ##   ##   ##  ##   ##  ");
        Sleep(10);
        alya(32, 19);
        printf(" #######  ##  #######  ##  #######   ##   ##  ## ##  ");
        Sleep(10);
        alya(32, 20);
        printf("      ##  ##  ##       ##  ##  ##    ##   ##  ##   ## ");
        Sleep(10);
        alya(32, 21);
        printf(" #######  ##  ##       ##  ##    ##  #######  ##     ##");
        Sleep(10);
        Sleep(40);
    }
}