#include<iostream>
using namespace std;
main()
{
int n;
int w;
int h;
int area;
int walls;
cout<<"Number of square meters you can paint:";
cin>> n;
cout<<"Width of the single wall(in meters):";
cin>> w;
cout<<"Height of the single wall(in meters):";
cin>> h;
area=w*h;
walls=n/area;
cout<<"Number of walls you can paint:"<<walls;
}