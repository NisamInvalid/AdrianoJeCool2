#include <stdio.h>
#include <stdlib.h>

int fib(int a, int b, int c){
	if (c<1) return -1;
	inf f2=a+b;
	if (c==1||c==2) return 1;
	if (c==3) return f2;
	else return fib(b, f2, c-1);
}
int main(){
  
}
