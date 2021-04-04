#include<graphics.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\bgi");
	setcolor(GREEN);
	circle(100,100,50);
	setfillstyle(1,YELLOW);
	floodfill(100,100,GREEN);
	getch();
	closegraph();
}
