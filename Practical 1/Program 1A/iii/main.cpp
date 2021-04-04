#include<graphics.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\bgi");
	circle(100,100,50);
	getch();
	cleardevice();
	outtext("HELLO WORLD!!!");
	getch();
	closegraph();
}
