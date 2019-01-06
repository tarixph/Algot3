#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int C, Fahrenheit, Reamur;

    printf("Program Program konversi suhu\n");
    printf("--------------------------------------------\n\t");
    printf("Nama : Midian Zauria Fiery\n\t");
    printf("Nim  : 311810812\n");
    printf("--------------------------------------------\n");

    cout<<"masukan suhu Celcius: ";
    cin>>C;

    cout<<"\n\t";
    Fahrenheit=1.8*C+32;

    cout<<"Suhu Fahrenheitnya adalah : "<<Fahrenheit<<"F";

    cout<<"\n\t";

    Reamur=0.8*C;

    cout<<"Suhu Reamurnya     adalah : "<<Reamur<<"R";


    return 0;

}
