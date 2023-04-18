#include <graphics.h>
#include <conio.h>

int main(){
	
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	int y=30,x=300;
	char a;

		rectangle(10+x, 10+y, 120+x ,150+y);
		circle(300, 30, 40);
		circle(430, 30, 40);
		rectangle(320, 120, 410, 140);
		circle(340, 80, 20);
		circle(380, 80, 20);
		circle(350, 80, 10);
		circle(370, 80, 10);
		rectangle(340, 140, 360, 170);
		rectangle(370, 140, 390, 170);
		line(220, 120, 310, 120);
		line(420, 120, 500, 120);
		
		
		
	getch();
	closegraph;
	return 0;
	
}
