#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
	int xc,yc,x,y,p,r;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\bgi");

	cout<<"Mid-point Circle Drawing Algorithm: ";
	cout<<"Enter co-ordinates of centre: ";
	cin>>xc>>yc;
	cout<<"Enter radius of circle: ";
	cin>>r;
	x = 0;
	y = r;
	p = 1-r;
	do
	{
		if(p<0)
		{
			x++;
			p += 2*x +1;
		}
		else
		{
			x++;
			y--;
			p = p + 2*x - 2*y +1;
		}
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc+y,yc+x,WHITE);
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc+y,yc-x,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc-y,yc-x,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc-y,yc+x,WHITE);
	}
	while(x<=y);
	getch();
	closegraph();
}

