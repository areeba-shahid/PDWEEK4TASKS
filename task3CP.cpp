#include<iostream>
using namespace std;
float finalprice(string name,float priceDollars,float discount,float price)
{     
            
       if(name =="pakistan")
               { price = priceDollars -( priceDollars*0.05);
                    return price;}
              if(name=="ireland")
                  { price = priceDollars -( priceDollars*0.1);
return price;}
                   if(name=="india")
                      { price = priceDollars -( priceDollars*0.2);
return price;}
                    if(name=="england")
                          { price = priceDollars -( priceDollars*0.3);
return price;}
                           if(name=="canada")
                            { price = priceDollars -( priceDollars*0.45);
return price;}
}

main(){
while(true)
{
string name;
float priceDollars;
float discount;
float price;
cout<<"Enter the country's name: ";
cin>>name; 
cout<<"Enter the ticket price in dollars: $";
cin>>priceDollars;
cout<<"Final ticket price after discount: $"<< finalprice( name,priceDollars, discount,price)<<endl;
}
}