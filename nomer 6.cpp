#include <stdio.h>
#include <conio.h>
    main()
{
    float S,v,t;


    printf("Program Perhitungan jarak tempuh\n");
    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");
    printf("Masukan Kecepatan : ");scanf("%f", &v);
    printf("Masukan Waktu : ");scanf("%f", &t);

    S=v*t;
    printf("Jarak tempuh = %.f X %.f   = %.f m/s",v,t,S);
    return 0;

}
