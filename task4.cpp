#include <iostream>
#include <stdio.h>
#include <string>

using namespace std; 

void toHHMMSS(int angka) 
{
    
    string menit = to_string(angka%60);
    int menitMm= angka % 60;
    angka=angka/60;
    string detik = to_string(angka%60);
    int detikSs =angka%60;
    angka =angka/ 60;
    string jam = to_string(angka);
    int jamHh = angka;
    
    if (jamHh < 10) {
        jam = "0" + jam;
    }
    
    if (menitMm < 10) {
        menit = "0" + menit;
    }
    
    if (detikSs < 10) {
        detik = "0" + detik;
    }
    
 
  cout<<jam <<":" << menit <<":" << detik;
  
}
 int main()
{
    int angka;
    printf("Masukkan digit angka=\n");
    cin>>angka;
    toHHMMSS(angka);

}