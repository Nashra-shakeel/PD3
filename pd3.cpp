#include<iostream>
using namespace std;
main()
{
int initialvelocity;
int acceleration;
int time;
float finalvelocity;
cout<<"Enter initial velocity:";
cin>> initialvelocity;
cout<<"Enter acceleration:";
cin>> acceleration;
cout<<"Enter time:";
cin>> time;
finalvelocity=(acceleration*time)+initialvelocity;
cout<<"final velocity:"<< finalvelocity;


}