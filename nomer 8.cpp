#include <iostream>
#include <stdio.h>>

using namespace std;
float dollar (float x);
int main()
{
    float n;

    printf("Program konversi mata uang \n");
    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");
    cout<<"Konversi Mata Uang"<<endl;
    cout<<"Masukan Rupiah :";
    cin>>n;
    cout<<" = "<<dollar(n)<<" USD "<<endl;
    cout<<endl;
    return 0;
}
float dollar(float x)
{
    float hasil;
    hasil=x/14500;
    return hasil;
}
