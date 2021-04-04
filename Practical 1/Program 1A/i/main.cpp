#include<graphics.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\bgi");
	arc(100,100,0,135,50);
	getch();
	closegraph();
}

