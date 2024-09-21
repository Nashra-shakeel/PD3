#include<iostream>
using namespace std;
main()
{
int number;
int sum;
cout<<"Enter 5 numbers:";
cin>> number;
sum=((number/10000)%10)+((number/1000)%10)+((number/100)%10)+((number/10)%10)+(number%10);
cout<<"sum is:"<<sum;
}