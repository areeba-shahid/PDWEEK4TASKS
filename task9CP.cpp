#include<iostream>
using namespace std;
 string tpChecker(int people, int tp){
             int det;
           det = people * 57;
            int dete;
                 dete = tp * 500;
               int days;
                  days = dete / det;
         if(days > 14){
           cout<<"Your TP will last " <<days<<" days,no need to panic!";}
         else
                cout<<"Your TP will onlt last "<<days<<" days,buy more!";
}
main(){
int people;
int tp;
cout<<"Number of people in the household: ";
cin>>people;
cout<<"Nimber ofrolls of TP: ";
cin>>tp;
tpChecker(people,tp);
}