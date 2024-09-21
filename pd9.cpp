#include<iostream>
using namespace std;
main()
{
int number;
int sum;
int digit1;
int digit2;
int digit3;
int digit4;
cout<<"Enter a 4-digit number:";
cin>> number;
digit1=(number/1000)%10;
digit2=(number/100)%10;
digit3=(number/10)%10;
digit4=number%10;
sum=digit1+digit2+digit3+digit4;
cout<<"Sum of indivisual digits:"<< sum;

}