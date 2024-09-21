#include<iostream>
using namespace std;
main()
{
float vegprice;
float fruitprice;
int vegtotalkg;
int fruittotalkg;
float total;
float earningrs;
cout<<"Enter vegetable price per kilogram(in coins):";
cin>> vegprice;
cout<<"Enter fruit price per kilogram(in coins):";
cin>> fruitprice;
cout<<"Enter total kilograms of vegetables:";
cin>> vegtotalkg;
cout<<"Enter total kilograms of fruit:";
cin>> fruittotalkg;
total=(vegprice*vegtotalkg)+(fruitprice*fruittotalkg);
earningrs=total/1.94;
cout<<"Total earning in Rupees:"<<earningrs;
}