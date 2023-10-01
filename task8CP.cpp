#include<iostream>
using namespace std;
pet(int holidays){
            int workingDays;
            float timeForGames;
            float diff;
           
     workingDays = 365 - holidays;
     timeForGames = (workingDays*63)+(holidays*127);
        if(timeForGames < 30000 ){
     diff = 30000 - timeForGames;}
          if(timeForGames > 30000){
                diff = timeForGames - 30000;}
    
     float convertToo = diff / 60;
      int convert = diff / 60;
      float dec = convertToo - convert;

       int minutes = dec * 60;
      
 if(diff > 0)
      {cout<<"Tom sleeps well"<<endl;
cout << convert <<" hours and " << minutes << " minutes less to play";}
if(diff < 0){
       cout<<"Tom will run away" <<endl;
         cout<<convert <<" hours and " << minutes <<" minutes for play";}
}

main(){
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);
}