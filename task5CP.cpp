#include<iostream>
using namespace std;
string possibleBonus(int x,int y){
               if(y-x <= 6)
               cout<<"true";
                    else
                     cout<<"false";
               }

main(){
int x;
int y;
cout<<"Enter your position: ";
cin>>x;
cout<<"Enter your friend's position: ";
cin>>y;
cout<<possibleBonus(x,y);
}