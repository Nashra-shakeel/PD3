#include<iostream>
using namespace std;
main()
{
float i;
float p;
int chance;
cout<<"Enter imposter count:";
cin>> i;
cout<<"Enter player count:";
cin>> p;
chance=(i/p)*100;
cout<<"Chance of being an imposter:"<< chance <<"%";
}