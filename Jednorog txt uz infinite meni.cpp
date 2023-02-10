#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct jednorog{
	
	char ime[50];
	char boja[50];
	char krvna_grupa[2];

		
};

int main(){
	
	char odabir[6];
	
	struct jednorog j;
	FILE *filePointer;
filePointer = fopen("Jednorog.txt", "w");

fprintf(filePointer, "|Ime|\t |Boja|\t |Grupa|\n");

	do
	{
		printf("Unesi ime jednoroga: ");
			scanf("%s", j.ime);
		printf("Unesi boju jednoroga: ");
			scanf("%s", j.boja);
		printf("Unesi krvnu grupu jednoroga: ");
			scanf("%s", j.krvna_grupa);
		printf("Je li dosta?   ");
			scanf("%s", odabir);
			
		if(!strcmp(j.krvna_grupa,"A"))
			fprintf(filePointer, "%s\t %s\t %s\n", j.ime, j.boja, j.krvna_grupa);
			
	}while(strcmp(odabir, "dosta"));



	
}
