#include <stdio.h>
#include <conio.h>
    main()
{
    float p,l,luas;

    printf("Program Menentukan luas persegi panjang\n");
    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");
    printf("masukan panjang persegi panjang : ");scanf("%f", &p);
    printf("masukan lebar persegi panjang: ");scanf("%f", &l);

    luas=p*l;
    printf("Luas = %.f X %.f   = %.f cm",p,l,luas);
    return 0;

}
