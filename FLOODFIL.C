#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void flood(int, int, int, int);
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC++\\Disk\\TURBOC3\\BIN");
rectangle(100,100,200,135);
flood(101,101,4,0);
getch();
closegraph();
}
void flood(int x,int y,int color1,int color2)
{
if(getpixel(x,y)==color2)
{
delay(1);
putpixel(x,y,color1);
flood(x+1,y,color1,color2);
flood(x-1,y,color1,color2);
flood(x,y+1,color1,color2);
flood(x,y-1,color1,color2);
}
}

