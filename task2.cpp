#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    char bilangan[6];
    
    
    cout<<"masukkan 6 digit angka = \n";
    cin>>bilangan;
    
       int a= (bilangan[0]-'0') +2;
       int b= (bilangan[1]-'0') +2;
       int c= (bilangan[2]-'0') +2;
       int d= (bilangan[3]-'0') +2;
       int e= (bilangan[4]-'0') +2;
       int f= (bilangan[5]-'0') +2;
       
       if(a>=10) 
          a=a%10; 
       if(b>=10) 
          b=b%10; 
       if(c>=10) 
          c=c%10; 
       if(d>=10) 
          d=d%10; 
       if(e>=10) 
          e=e%10; 
       if(f>=10) 
          f=f%10; 
 
 
      cout<<"hasil = \n"<<a<<b<<c<<d<<e<<f<<endl; 
}