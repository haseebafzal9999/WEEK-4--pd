#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
  int x=5,y=5;
  system("cls");
  gotoxy(x,y);
  cout<<"H";
  gotoxy(x,y)
  y = y+1;
  cout<<"a";
   gotoxy(x,y)
  y = y+1;
  cout<<"s";
   gotoxy(x,y)
  y = y+1;
  cout<<""

}
  void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
  