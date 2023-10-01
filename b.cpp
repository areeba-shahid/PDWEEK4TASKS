#include<iostream>
using namespace std;
void pet(int holidays){
            int workingDays;
            float timeForGames;
            int diff; 
     workingDays = 365 - holidays;
     timeForGames = (workingDays*63) + (holidays*127);
        if(timeForGames < 30000 ){
     diff = 30000 - timeForGames;}
          if(timeForGames > 30000){
                diff = timeForGames - 30000;}
      int convert = diff / 60;
       int minutes = diff % 60;
 if(timeForGames < 30000){
      cout<<"Tom sleeps well"<<endl;
cout<<convert<<" hours and " <<minutes<<" minutes less for play";}
if(timeForGames > 30000){
       cout<<"Tom will run away"<<endl;
         cout<<convert<<" hours and "<<minutes<<" minutes for play";}
}
main(){
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);
}