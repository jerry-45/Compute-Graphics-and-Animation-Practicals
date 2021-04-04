#include<graphics.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\bgi");
	circle(200,200,100);
	setcolor(RED);
	circle(100,100,50);
	getch();
	closegraph();
}

