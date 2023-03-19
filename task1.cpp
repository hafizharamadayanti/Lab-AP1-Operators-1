#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    int bilangan;


    cout<<"program c-c++\n"<<endl;
    
      printf("masukkan 4 digit angka = ");
      scanf("%d",&bilangan);
      
    bilangan = bilangan + 8;
    bilangan = bilangan / 3;
    bilangan = bilangan % 5;
    bilangan = bilangan * 5 ;

   printf("hasilnya adalah = \n %d", bilangan);
 
}