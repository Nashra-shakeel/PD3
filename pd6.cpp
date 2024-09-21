#include<iostream>
using namespace std;
main()
{
float size;
float cost;
float area;
int fertilizercost;
int areacost;
cout<<"Enter the size of the fertilizer bag in pounds:";
cin>> size;
cout<<"Enter the cost of the bag:$";
cin>> cost;
cout<<"Enter the area in square feet that can be covered by the bag:";
cin>> area;
fertilizercost=cost/size;
areacost=cost/area;
cout<<"Cost of fertilizer per pound:$" << fertilizercost <<endl;
cout<<"Cost of fertilizing per square foot:$" << areacost;

}