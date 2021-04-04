#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\bgi");

	int x,y,x1,y1,x2,y2,dx,dy,pk,xEnd;

	cout<<"Enter x1 & y1 ";
	cin>>x1>>y1;
	cout<<"Enter x2 & y2: ";
	cin>>x2>>y2;
	cout<<"Bresenham's Line drawing algorithm: ";

	dx = x2-x1;
	dy = y2 - y1;

	pk=2*dy-dx;
	
	if(x1 > x2)
	{
		x=x2;
		y=y2;
		xEnd=x1;
	}
	else
	{
		x=x1;
		y=y1;
		xEnd=x2;
	}
	putpixel(x,y,1);
	while(x<xEnd)
	{
		x++;
		if(pk<0)
		{
			pk=pk+2*dy;
		}
		else
		{
			y++;
			pk=pk+2*dy-2*dx;
		}
		putpixel(x,y,1);
	}
	getch();
	closegraph();
}

