#include<iostream>
using namespace std;
string checkSpeed(int speed){
               if(speed < 101){
          cout<<"Perfect! You're going good.";}
                else
                    {cout<<"Halt...YOU WILL BE CHALLENGED!!!";}
}
                       

main(){
int speed;
cout<<"Speed: ";
cin>>speed;
cout<<checkSpeed(speed)<<endl;
}