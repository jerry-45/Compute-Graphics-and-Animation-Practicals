#include<graphics.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	int x,y,left,top,right,bottom,r=100;

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\bgi");

	cout<<getmaxx()<<"\n";
	cout<<getmaxy()<<"\n";

	x=getmaxx()/2;
	y=getmaxy()/2;

	outtextxy(240,50,"Rectangle");
	left=x-50;
	top=y-50;
	right=x-50;
	bottom=y-50;
	rectangle(x-100,y-50,x+100,y+50);
	getch();
	cleardevice();
	
	getch();
	closegraph();
}
