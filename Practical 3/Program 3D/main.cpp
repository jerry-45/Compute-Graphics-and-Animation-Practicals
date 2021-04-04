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

	outtextxy(240,50,"Concentric Circles");
	setcolor(CYAN);
	circle(x,y,r);
	setcolor(YELLOW);
	circle(x,y,r-30);
	setcolor(RED);
	circle(x,y,r-50);
	setcolor(GREEN);
	circle(x,y,r-70);
	getch();
	closegraph();
	
	getch();
	closegraph();
}
