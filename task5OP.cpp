#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);

main(){
int x=75;
int y=22;
system("cls");
gotoxy(x , y);
cout<<"AREEBA SHAHID";
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}