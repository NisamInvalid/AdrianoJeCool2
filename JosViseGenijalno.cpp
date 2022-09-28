#include <stdio.h>
#include <stdlib.h>



int main(){
	int i=0;
	while (0==0){
		int j=0;
		i++;
		if(i%280<140){
			for(j=0;j<i%280;j++) printf(" ");
			printf ("AdrianoJeCool\n"); //by Adriano
		}
		else {
			for(j=0;j<140-(i%280-140);j++) printf(" ");
			printf ("AdrianoJeCool\n"); //by Adriano
		}
	}
}
	

