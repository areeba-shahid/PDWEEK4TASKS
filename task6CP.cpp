#include<iostream>
using namespace std;
int longestTime(int h ,int m,int n){
            
             n = h * 60;
                 if(n > m)
                    return h;
                    if(n < m)
                return m; 
}

main(){
int h;
int m;
int n;
cout<<"Enter the number of hours: ";
cin>>h;
cout<<"Enter the number in minutes: ";
cin>>m;
cout<<longestTime(h,m,n);
}