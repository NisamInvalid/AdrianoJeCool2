#include <stdio.h>
#include <stdlib.h>

struct matura
{
	char predmet[15];
	char prezime[20];
	int bodovi;
	int ocijena;	
	
}ma[4];

int main(){
	
	for(int i=0;i<4;i++ ){
			
			printf("Unesi predmet: ");
		scanf("%s",ma[i].predmet);
			printf("Unesi prezime: ");
		scanf("%s",ma[i].prezime);
			printf("Unesi bodove: ");
		scanf("%d",&ma[i].bodovi);
			printf("Unesi ocijena: ");
		scanf("%d",&ma[i].ocijena);
	}
	
	for(int i=0;i<4;i++ )
		if(ma[i].ocijena>1 && ma[i].ocijena<=5)
		printf("%s: prosao \n",ma[i].prezime);
		else printf("Nije prosao %s\n", ma[i].prezime);
	
	}

