#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
using namespace std;
class axis
{
	private:
	int x, y, x1, y1, x2, y2;
	public:
	void initgraph1(void);
	void drawaxis(void);
};
void axis::initgraph1(void)
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm, "c:\\TC\\bgi");
}
void axis::drawaxis(void)
{
	line(((getmaxx()/2)-(getmaxy()/2)),getmaxy()/2,(getmaxx()-((getmaxx()/2)-(getmaxy()/2))), getmaxy()/2);
	line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	putpixel(getmaxx()/2,getmaxy()/2,RED);
	outtextxy(570,235,"X-axis");
	outtextxy(330,0,"Y-axis");
	x1=getmaxx()/2;
	y1=getmaxy()/2;
	char ch[10]= " ";
	int scale=0;
	outtextxy(x1+5,y1+5, "0");
	for(int i=1;i<=10;i++)
	{
         	scale=scale+10;
         	itoa(scale,ch,10);
         	putpixel(x1+(2*scale),y1,RED);
         	putpixel(x1,y1-(2*scale),RED);
         	outtextxy(x1+(2*scale),y1+5,ch);
         	outtextxy(x1+5,y1-(2*scale),ch);
	}
	scale=0;
	for(int i=1;i<=10;i++)
	{
         	scale=scale-10;
         	itoa(scale,ch,10);
         	putpixel(x1+(2*scale),y1,RED);
         	putpixel(x1,y1-(2*scale),RED);
         	outtextxy(x1+(2.5*scale),y1-10,ch);
         	outtextxy(x1+5,y1-(2*scale),ch);
	}
}
int main()
{
	
	axis a;
	a.initgraph1();
	a.drawaxis();
	getch();
}

