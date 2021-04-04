#include<graphics.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int gd=DETECT, gm, points[]={120,250,400,250,400,350,450,200,120,250};
	initgraph(&gd,&gm,"c:\\TC\\bgi");
	drawpoly(5,points);
	getch();
	closegraph();
}

