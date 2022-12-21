#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct kruznica{
	int x;
	int y;
	int r;
	
};

main(){
	
	float razlika;
	struct kruznica k1;
	struct kruznica k2;
	float c;
	
	printf("Unesi X, Y i r Kruznice 1: ");
	scanf("%d  %d %d",&k1.x, &k1.y, &k1.r);
	
	printf("Unesi X, Y i r Kruznice 2: ");
	scanf("%d %d %d",&k2.x, &k2.y, &k2.r);
	
	float p1=((float)k1.r*k1.r)*3.14;
	float p2=((float)k2.r*k2.r)*3.14;
	
	razlika=abs(p1-p2);
	
	c=sqrt((float)((float)((float)(float)k1.x-k2.x)*((float)k1.x-k2.x))-((float)((float)(float)k1.y-k2.y)*((float)k1.y-k2.y)));
	
	printf("Povrsine se razlikuju %.2f, a udaljenost im je %f", razlika, c);
}
