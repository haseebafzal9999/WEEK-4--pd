#include<iostream>
using namespace std;
 void pet(int holidays);
  main()
{
 int holidays;
 cout<<"Holidays: ";
 cin>>holidays;
  pet(holidays);
}
  void pet(int holidays)
 {
  int workingDays=365-holidays;
  int gameTime=(workingDays*63)+(holidays*127);
  int difference=30000-gameTime;
  int convertInHour=difference/60;
  int convertInMinute=difference-(convertInHour*60);
  if (difference > 0)
    {
        cout << "Tom sleeps well" << endl;
        cout << convertInHour << " hours and  " << convertInMinute << "  minutes less for play.";
    }

    if (difference < 0)
    {
        cout << "Tom will run away" << endl;
        cout << convertInHour << " hours and  " << convertInMinute << "  minutes for play.";
    }
}
  
  
 

