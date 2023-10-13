#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
main()
{
  system("cls");
  printmaze();
  gotoxy(3,3);
  cout<<"P";
}
  
  void printmaze()
{
cout<<"####################### "<<endl;
cout<<"#                     # "<<endl;
cout<<"#                     # "<<endl;
cout<<"#                     # "<<endl;
cout<<"#                     # "<<endl;
cout<<"#                     # "<<endl;
cout<<"#                     # "<<endl;
cout<<"#                     # "<<endl;
cout<<"####################### "<<endl; 
}
   void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

 
