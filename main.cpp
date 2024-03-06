#include<Windows.h>
#include<iostream>
#include<fstream>
#include<process.h>
#include<string>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void goTo_xy(int x,int y){
    COORD c = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

class LINES{
    public:
        void LINE_HOR(int,int,int,char);
        void LINE_VER(int,int,int,char);
};
