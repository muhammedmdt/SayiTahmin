#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
 
using namespace std;
 
int main()
{
int randomsayi,kullanicisayi;
srand(time(NULL));
randomsayi=rand()%20;
 
 
do{
cout<<"1 ile 20 arasindaki sayiyi tahmin edin = ";
cin>>kullanicisayi;
if(kullanicisayi>randomsayi)
cout<<"Biraz inin"<<endl;
else if(kullanicisayi<randomsayi)
cout<<"Biraz cikin"<<endl;
else
break;
}
while(randomsayi!=kullanicisayi);
 
cout<<"Tebrikler Bildiniz";
 
system("pause");
return 0;
}
