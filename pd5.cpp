#include<iostream>
using namespace std;
main()
{
string name;
int kg;
int loss;
cout<<"Enter the name of person:";
cin>> name;
cout<<"Enter the target weight loss in kilogram:";
cin>> kg;
loss=kg*15;
cout<< name <<" will need "<< loss <<" days to lose "<< kg <<" kg of weight by following doctors suggestion.";
}