#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void movePlayer(int x,int y);

main(){
int x=4;
int y=4;
system("cls");
while(true){
               movePlayer(x,y);
                 x=x+1;
                    if(x==48)
                           return x==4;
                           
                         }
                             }
void movePlayer(int x,int y)
{
gotoxy(x,y);
cout<<".";
Sleep(150);
gotoxy(x,y);
cout<<" ";
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}