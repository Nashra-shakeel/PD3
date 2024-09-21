#include<iostream>
using namespace std;
main()
{
int minutes;
int fps;
int total;
cout<<"Number of minutes:";
cin>>minutes;
cout<<"Frames per second:";
cin>>fps;
total=(minutes*60)*fps;
cout<<"Total number of frames:"<<total;
}