#include<iostream>
using namespace std;
main()
{
string name;
int adultticket;
int childticket;
float atsold;
float ctsold;
float percent;
float totalamount;
float donate;
float remaining;
cout<<"Enter the movie name:";
cin>> name;
cout<<"Enter the adult ticket price:$";
cin>> adultticket;
cout<<"Enter the child ticket price:$";
cin>> childticket;
cout<<"Enter the number of adult ticket sold:";
cin>> atsold;
cout<<"Enter the number of child ticket sold:";
cin>> ctsold;
cout<<"Enter the percentage of amount donated to charity:";
cin>> percent;
cout<<""<<endl;
cout<<"Movie:"<< name<<endl;
totalamount=(adultticket*atsold)+(childticket*ctsold);
cout<<"Total amount generated from ticket sales:$"<< totalamount<<endl;
donate=totalamount*percent/100;
cout<<"Donation to charity "<< percent <<"%:$"<< donate<<endl;
remaining=totalamount-donate;
cout<<"Remaining amount after donation:$"<< remaining;
}