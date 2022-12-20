#include<iostream>
using namespace std;
float luas,panjang,r,sisi,lebar,alas,tinggi,luas1,luas2,luas3,luas4;

float segitiga()
{
    luas1=0.5*alas*tinggi;
    cout<<"\nluas ="<<luas1;
    cout<<"\n";

}

float persegip()
{
    luas2=panjang*lebar;
    cout<<"\nluas="<<luas2;
    cout<<"\n";

}

float lingkaran()
{
    luas3=22/7*r*r;
    cout<<"\nluas= "<<luas3;
    cout<<"\n";

}

float persegi()
{
    luas4=sisi*sisi;
    cout<<"\nluas = "<<luas4;
    cout<<"\n";

}

int main()

{
    cout<<"\n=======================";
    cout<<"\nmenghitung luas segitiga";
    cout<<"\nalas =";cin>>alas;
    cout<<"\ntinggi =";cin>>tinggi;
segitiga();

cout<<"\n===========================";
cout<<"\nmenghitug luas persegi panjang";
cout<<"\npanjang=";cin>>panjang;
cout<<"\nlebar=";cin>>lebar;
persegip();
cout<<"\n============================";
cout<<"\nmenghitung luas lingkaran";
cout<<"\njari=";cin>>r;
lingkaran();
cout<<"\n============================";
cout<<"\nmenghitung luas persegi ";
cout<<"\nsisi = ";cin>>sisi;
persegi  ();


}