#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void boundaryfill(int,int,int,int);
void boundaryfill(int x,int y,int fill_color,int boundary_color)
{
if(getpixel(x,y)!=boundary_color && getpixel(x,y)!=fill_color)
{
delay(1);
putpixel(x,y,fill_color);
boundaryfill(x+1,y,fill_color,boundary_color);
boundaryfill(x-1,y,fill_color,boundary_color);
boundaryfill(x,y+1,fill_color,boundary_color);
boundaryfill(x,y-1,fill_color,boundary_color);
}
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC++\\Disk\\TURBOC3\\BIN");
rectangle(100,100,200,130);
boundaryfill(101,101,5,15);
getch();
closegraph();
}

