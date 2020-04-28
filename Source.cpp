#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
double totalrain[12];
double avgrain=0;
double maxrain=0;
double minrain=0;
double total=0;
double temprain;

// assigning value to the totalrain array
for(int i=0;i<12;i++)
{
cout<<"Enter Rain Fall For Month " <<i+1<< " : ";
cin>>totalrain[i];
total+=totalrain[i];
}
//calculating average rain
avgrain=total/12;

//finding maximum and minimum rain

maxrain=totalrain[0];
minrain=totalrain[0];

for (int i=1;i<=12;i++)
	{temprain=totalrain[i];
		if(temprain>maxrain)
			maxrain=temprain;

		if(temprain<minrain)
			minrain=temprain;}

cout<<" Total Rain: "<<total<<setprecision(2)<<fixed<<showpoint<<endl;
cout<<" Average Rain: "<<avgrain<<setprecision(2)<<fixed<<showpoint<<endl;
cout<<" Max Rain: "<<maxrain<<setprecision(2)<<fixed<<showpoint<<endl;
cout<<" Min Rain: "<<minrain<<setprecision(2)<<fixed<<showpoint<<endl;
getch();



}