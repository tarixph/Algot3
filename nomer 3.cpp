#include <stdio.h>
#include <conio.h>

main()
{

 float c=89.88,m,E;
 printf("PROGRAM PERHITUNGAN MENGGUNAKAN RUMUS E=mc2 \n");
 printf("--------------------------------------------\n\t");
 printf("Nama : Midian Zauria Fiery\n\t");
 printf("Nim  : 311810812\n");
 printf("--------------------------------------------\n");
 printf("Masukkan massa (Kg) : ");
 scanf("%f", &m);
 E=m*c*c;
 printf("E = %.2f * %.2f * %.2f  = %.2f J",m,c,c,E);
 getch();
}
