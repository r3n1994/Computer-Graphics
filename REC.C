#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int a1,a2,b1,b2,x1,x2,y1,y2;
int sx=2;
initgraph(&gd,&gm,"C:\\TurboC++\\Disk\\TURBOC3\\BIN");
printf("\nEnter cordinates of the rectangle:\n");
scanf("%d,%d %d,%d",&a1,&a2,&b1,&b2);
x1=a1*sx;
x2=a2;
y1=b1*sx;
y2=b2;
rectangle(a1,a2,b1,b2);
setcolor(RED);
rectangle(x1,x2,y1,y2);
getch();
closegraph();
}
