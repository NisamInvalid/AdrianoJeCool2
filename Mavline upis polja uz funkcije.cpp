#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

struct mavline{
	
	int visina;
	int broj_grana;
	int broj_malina;	
	
};

void upisiMojuMalinu(struct mavline m){
	
	FILE *filePointer;
	filePointer = fopen("Mavline.txt", "a");
	fprintf(filePointer,"%d\t%d\t%d\n",m.visina, m.broj_grana, m.broj_malina);
	fclose(filePointer);
	
	}
	
void kolikoImaMalina(){
	
	int sum=0;
	FILE *filePointer;
	filePointer = fopen("Mavline.txt", "r");
	struct mavline temp;
	
	while(fscanf(filePointer,"%d %d %d",&temp.visina,&temp.broj_grana,&temp.broj_malina)==3){
		sum+=temp.broj_malina;
		printf("%d\t%d\t%d\n",temp.visina,temp.broj_grana,temp.broj_malina);
	}
	
	printf("Imadem %d malina\n",sum);
	fclose(filePointer);
	
}	
void upisiMojuMalinuDva(void ){
	
	FILE *filePointer;
	filePointer = fopen("Mavline_temp.txt", "a");
	fprintf(filePointer,"%d\t%d\t%d\n",m.visina, m.broj_grana, m.broj_malina);
	fclose(filePointer);
	
	}
			
int main(){
	 
	 struct mavline m;
	 char odabir[5];
	 do{
	 
	printf("Unesi visinu mavline: ");
		scanf("%d", &m.visina);
	printf("Unesi broj grana mavline: ");
		scanf("%d", &m.broj_grana);
	printf("Unesi koliko malina ima mavlina: ");
		scanf("%d", &m.broj_malina);
	
	
	printf("Visina vase maline je %d, broj grana je %d, broj malina je %d\n\n", m.visina, m.broj_grana, m.broj_malina);
	printf("Jeste li zadovoljni svojom malinom?\t");
		scanf("%s", odabir);
		
   	system("cls");
	if(!strcmp(odabir,"da")){
	printf("Vasa malina JE upisana!!!!!!\n");
	upisiMojuMalinu(m);
	} else printf("Vasa malina NIJE upisana!!! Vaša malina nikada nece biti upisana i mrzimo vas zbog toga. Stoko\n");
	
	printf("Vase maline:\n");
	printf("Visina\tbroj grana\tbroj malina\n");
	kolikoImaMalina();
	
		
	printf("Mozemo li pliz nastaviti??\n");
		scanf("%s",odabir);		
	system("cls");
	
	}while(strcmp(odabir,"ne"));
	
}

