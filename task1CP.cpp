#include<iostream>
#include<windows.h>
using namespace std;
string IsEqual(int x,int y){
      if(x==y)
           cout<<"true";
        else   cout<<"false";
}
main(){
int x;
int y;
cout<<"Enter the first number: ";
cin>>x;
cout<<"Enter the second number: ";
cin>>y;
cout<<IsEqual(x,y)<<endl;

}