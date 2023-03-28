#include <graphics.h>
#include <conio.h>

int main(){
	
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	int y=0,x=0;
	char a;
	do{
		a= getch();
		cleardevice();
		if(a=='w') y-=20;
		if(a=='s') y+=20;
		if(a=='a') x-=20;
		if(a=='d') x+=20;
		rectangle(10+x, 10+y, 120+x, 120+y);
	}while (a!='q');
	
	
	getch();
	closegraph;
	return 0;
	
}

