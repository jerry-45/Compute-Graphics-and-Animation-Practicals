#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\bgi");
	
	int xc,yc,x,y;
	float p;
	long rx,ry;
	
	cout<<"Enter coordinates of centre : ";
	cin>>xc>>yc;
	cout<<"\nEnter x,y radius of ellipse: ";
	cin>>rx>>ry;

	//Region 1
	p=ry*ry-rx*rx*ry+rx*rx/4;
	x=0;y=ry;
	while(2.0*ry*ry*x <= 2.0*rx*rx*y)
	{
		if(p < 0)
		{
			x++;
			p = p+2*ry*ry*x+ry*ry;
		}
		else
		{
			x++;
			y--;
			p = p+2*ry*ry*x-2*rx*rx*y-ry*ry;
		}
		putpixel(xc+x,yc+y,RED);
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc-x,yc-y,RED);
	}

	//Region 2
	p=ry*ry*(x+0.5)*(x+0.5)+rx*rx*(y-1)*(y-1)-rx*rx*ry*ry;
	while(y > 0)
	{
		if(p <= 0)
		{
			x++;
			y--;
			p = p+2*ry*ry*x-2*rx*rx*y+rx*rx;
		}
		else
		{
			y--;
			p = p-2*rx*rx*y+rx*rx;
		}
		putpixel(xc+x,yc+y,RED);
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc-x,yc-y,RED);
	}
	getch();
	closegraph();
}

