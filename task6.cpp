#include<iostream>
using namespace std;
void longestTime(int hour, int minutes);
main()
{
int hour, minutes;
cout<<"Enter the number of hours: ";
cin>>hour;
cout<<"Enter the number of minutes: ";
cin>>minutes;
  longestTime(hour,minutes);
}
  void longestTime(int hour,int minutes)
{
	int long_duration;
	long_duration=hour*60;
if(long_duration>minutes)
	{
	cout<<hour;
        }
if(long_duration<minutes)
{
  cout<<minutes;
}
}
     

