#include<iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);
main()
{
  int redRose,whiteRose,tulip;
  cout<<"Red Rose: ";
  cin>>redRose;
  cout<<"White Rose: ";
  cin>>whiteRose;
  cout<<"Tulips: ";
  cin>>tulip;
   flowerShop( redRose, whiteRose, tulip);
}
  void flowerShop( int redRose,int whiteRose,int tulip)
 {
  
 float redRose_price=  redRose*2.00;
 float whiteRose_price=whiteRose*4.10;
 float tulips_price= tulip*2.50;
 float total_price=redRose_price+whiteRose_price+tulips_price;
if(total_price>200)
{
 float discount_price=total_price-((total_price*20)/100);
 cout<<"Original price: $"<<discount_price<<endl;
}
if(total_price<200)
{
 cout<<"Original price: $"<<total_price;
 cout<<"No discount applied.";
}
}
 

  
  
