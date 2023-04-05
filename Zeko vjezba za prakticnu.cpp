#include <stdio.h>
#include <string.h>
#include <conio.h>

struct zeko{
	
	int masa;
	int koliko_hrane_pojede;
	int darezljivost;
	char ime[1500];
		
}z;

void unos(){
	
	FILE * filepointer;	
	
	filepointer = fopen("Zeko.txt", "a");
	
	printf("Unesi masu zeca: \n");
		scanf("%d", &z.masa);	
	printf("Koliko hrane moze pojesti zec? \n");
		scanf("%d", &z.koliko_hrane_pojede);
	printf("Unesi darezljivost zeca od 0 do 150: \n");
		scanf("%d", &z.darezljivost);
	printf("Unesi ime zeca: \n");
		scanf("%s", z.ime);
	
	fprintf(filepointer, "%d %d %d %s \n", z.masa, z.koliko_hrane_pojede, z.darezljivost, z.ime);
	
	fclose(filepointer);
}

void ispis(){
	
	FILE * filepointer;
	
	filepointer = fopen("Zeko.txt", "r");
	while(fscanf(filepointer,"%d %d %d %s", &z.masa, &z.koliko_hrane_pojede, &z.darezljivost, z.ime)==4)
	printf("%d\t %d\t %d\t %s\t", z.masa,z.koliko_hrane_pojede,z.darezljivost,z.ime);
	
	fclose(filepointer);
	printf("press any key to continuar...");
	getch();
	
};

int main(){
	
	int odabir;
do{
	
	
printf("-----------------------\n");
printf("| 1. Unesi novog zeca |\n");
printf("| 2. Ispisi masu zeca |\n");
printf("| 3. Komb. filtera    |\n");
printf("| 4. Max              |\n");
printf("| 5. Min              |\n");
printf("| 6. Najiplativiji    |\n");
printf("| 7. Exit             |\n");
printf("-----------------------\n");

printf("Sto zelite raditi: ");
	scanf("%d", &odabir);
	
	switch(odabir){
    case 1:
    	
    	unos();
    	break;
    	
	case 2:
		
		ispis();
		break;
		
	
	};
	
}while(odabir!=7);
}



