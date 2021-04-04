#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\bgi");

	int xmax=getmaxx();	//to get the center of the the x-axis
	int ymax=getmaxy();	//to get the center of the y-axis

	line(xmax/2,0,xmax/2,ymax);     //y-axis
	line(0,ymax/2,xmax,ymax/2);    //x-axis

	outtextxy(5,5,"Circle");
	circle(160,120,80);

	outtextxy(325,5,"Rectangle");
	rectangle(360,40,580,200);

	outtextxy(5,245,"Ellipse");
	ellipse(160,360,0,360,50,100);

	outtextxy(325,245,"Half Ellipse");
	ellipse(529,360,0,180,50,100);

	getch();
	closegraph();
}

