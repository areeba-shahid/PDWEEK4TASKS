#include<iostream>
using namespace std;
float flowerShop(int redRose,int whiteRose,int tulips){
        float total;
             total = (redRose*2)+(whiteRose*4.10)+(tulips*2.5);
                 cout<<"Original Price: $"<<total<<endl;
                  if(total > 200){
     cout<<"Price after discount: $"<<total -(total*0.2);}
                      
       
               else
                 {cout<<"No discount applied.";}
}
                                            
main(){
int redRose;
int whiteRose;
int tulips;
cout<<"Red Rose: ";
cin>>redRose;
cout<<"White Rose: ";
cin>>whiteRose;
cout<<"Tulips: ";
cin>>tulips;
flowerShop(redRose,whiteRose,tulips);
}