#include<iostream>
using namespace std;
 void country(string country_name, int ticket_price);
main()
{
  string country_name;
  int ticket_price;
  cout<<"Enter the country's name: ";
  cin>>country_name;
  cout<<"Enter the ticket price in dollars: $";
  cin>>ticket_price;
   country(country_name , ticket_price );
}
  void country(string country_name, int ticket_price )
{
 if(country_name == "Pakistan")
{
     int final_ticket_price;
  final_ticket_price=ticket_price - ((ticket_price*5)/100);
 cout<<"Final ticket price after discount: $"<<final_ticket_price;
}
 if(country_name == "Ireland")
{
  int final_ticket_price;
  final_ticket_price=ticket_price - ((ticket_price*10)/100);
 cout<<"Final ticket price after discount: $"<<final_ticket_price;
}
 if(country_name == "India")
{
 int final_ticket_price=ticket_price - ((ticket_price*20)/100);
 cout<<"Final ticket price after discount: $"<<final_ticket_price;
}
 if(country_name == "England")
{
 int final_ticket_price=ticket_price - ((ticket_price*30)/100);
 cout<<"Final ticket price after discount: $"<<final_ticket_price;
}
 if(country_name == "Canada")
{
 int final_ticket_price=ticket_price - ((ticket_price*45)/100);
 cout<<"Final ticket price after discount: $"<<final_ticket_price;
}
}
