#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printH(char a);
void printA(char b);
void printS(char c);
void printN(char d);

main(){
int x;
int y;
char a;
char b;
char c;
char d;
         system("cls");
               gotoxy(x=2,y=2);
           printH(a);
             gotoxy(x=2,y=4);
                printA(b);
 gotoxy(x=2,y=6);
                    printS(c);
 gotoxy(x=2,y=8);
                         printS(c);
 gotoxy(x=2,y=10);
                           printA(b);
 gotoxy(x=2,y=12);
                              printN(d);
                             }
void printH(char a)
{
    cout<< "H";
}
                             
void printA(char b)
{
    cout<< "A";
}
                             
void printS(char c)
{
    cout<< "S";
}
                             
void printN(char d)
{
    cout<< "N";
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



                       
                           
              