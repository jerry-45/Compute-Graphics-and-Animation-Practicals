#include<graphics.h>
#include<conio.h>
#include<iostream>

int main()
{
	int gd = DETECT,gm;
	initgraph(&gd, &gm, "c:\\TC\\bgi");
	//Draw Hut
	setcolor(WHITE);
	rectangle(150,180,250,300);
	rectangle(250,180,420,300);
	rectangle(180,220,230,300);
	rectangle(300,220,350,270);

	line(200,100,150,180);

	line(200,100,250,180);
	line(200,100,370,100);
	line(370,100,420,180);

	//Fill colours
	setfillstyle(1, YELLOW);
	floodfill(152, 182, WHITE);
	floodfill(252, 182, WHITE);
	setfillstyle(4, BLUE);
	floodfill(182, 252, WHITE);
	setfillstyle(7, RED);
	floodfill(200, 105, WHITE);
	floodfill(210, 105, WHITE);

	getch();
	closegraph();
}

