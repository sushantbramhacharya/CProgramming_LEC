#include <graphics.h>
int main()
{
 	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	line(150,100,200,100); 
	circle(80,80,50);
	rectangle(200,200,250,300);
	getch(); 
	closegraph();
}