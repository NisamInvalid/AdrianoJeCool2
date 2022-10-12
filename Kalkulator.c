#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float retx1(float a, float b, float c){
return ((-b)+sqrt((b*b)-4*a*c))/(2*a);


}
float retx2(float a, float b, float c){
return ((-b)-sqrt((b*b)-4*a*c))/(2*a);

	
}


int main()
{
  
  float a;
  float b;
  float c;
  
  printf("Unesi broj a: ");
  scanf("%f", &a);
  printf("Unesi broj b: ");
  scanf("%f", &b);
  printf("Unesi broj c: ");
  scanf("%f", &c);
  
  
  printf("Prvi je najbolji a iznosi ?: %.2f\n",retx1(a,b,c));
  printf("Drugi je najbolji a iznosi ?: %.2f\n",retx2(a,b,c));
  
   }
