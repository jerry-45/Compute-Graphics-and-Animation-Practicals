#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\bgi");
	
	int x,y,x1,y1,x2,y2,dx,dy,steps,incr_x,incr_y,k;

	cout<<"Enter x1: ";
	cin>>x1;
	cout<<"Enter y1: ";
	cin>>y1;
	cout<<"Enter x2: ";
	cin>>x2;
	cout<<"Enter y2: ";
	cin>>y2;
	cout<<"DDA Line Algorithm: ";
	
	dx=x2-x1;
	dy=y2-y1;
	
	if(abs(dx)>abs(dy))
	{
		steps=abs(dx);
	}
	else
	{
		steps=abs(dy);
	}
	
	incr_x=dx/steps;
	incr_y=dy/steps;

	x=x1;
	y=y1;
	putpixel(round(x), round(y),1);
	
	for(k=1;k<=steps;k++)
	{
		x=x+incr_x;
		y=y+incr_y;
		putpixel(round(x), round(y),1);
	}
	
	getch();
	closegraph();
}

