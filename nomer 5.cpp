#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
    int h,m,j,d;

    printf("Program konversi waktu detik, menit, jam\n");
    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");

    cout<<"masukan nilai waktunya: ";
    cin>>d;

    cout<<"\n\t";
    m=d*60;

    cout<<d<<" "<<"menit =  "<<m<<"     "<<"detik";

        cout<<"\n\t";
    j=d*3600;

    cout<<d<<" "<<"Jam   =  "<<j<<"   "<<"detik";

        cout<<"\n\t";
    h=d*86400;

    cout<<d<<" "<<"Hari  =  "<<h<<"  "<<"detik";
    return 0;

}
