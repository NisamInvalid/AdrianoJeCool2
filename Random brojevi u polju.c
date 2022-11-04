#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int trazi(int A[],int n){
		int i;
		for(i=0; i<n; i++)
			if(A[i]>=8 && A[i]<=10)
				return i;
			return -1;	
	
}

int main(){
	
int A[50];
int n,i;
time_t t;
	
srand((unsigned) time(&t));
printf("Odaberi broj n:  ");
scanf("%d", &n);	

for (i = 0; i<n; i++){

   A[i]=rand() % 100;
	
}
for (i = 0; i<n; i++){

   printf("%d\t",A[i]);
	
}

printf("\nBrojcina ti je na indexu %d",trazi(A,n));

}
