#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,colour;
	initgraph (&gd,&gm,"c:\\tc\\bgi");
		setcolor(white);
		circle(100,100,80);
	getch();
	closesgraph();
	return 0;
}
