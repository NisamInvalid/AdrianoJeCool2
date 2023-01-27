#include <stdio.h>
#include <stdlib.h>

struct cvijece{
	
	int broj_latica;
	int max_visina;
	int is_it_tree; //Ako je drvo stavi 1, ako nije stavi 0
	char boja[50];
	
	
};


int main(){
	
	char odabir[50];
	
struct cvijece c[6]={6, 2, 1, "Plava",
				   33, 5, 0, "Roza",
				   3, 56, 1, "Sarkopirkasta",
				   6, 7, 1, "Zelena", 
				   3, 6, 0, "Plava"};
				   
printf("Unesi koliko latica ima cvijet: ");
	scanf("%d", &c[5].broj_latica);
printf("Upisi kolika je maksimalna visina drveta: ");
	scanf("&d", &c[5].max_visina);
printf("Upisi je li cvijet drvo(1 ako je, 0 ako nije): ");
	scanf("%d", &c[5].is_it_tree);
printf("Unesi boju drveta: ");
	scanf("%s", &c[5].boja);
							
}
		
void filter(struct cvijece c[]){

	char boja[50];
	
		printf("Za koju boju zelis filtrirati: ");
			scanf("%s", &odabir);
		if (!strcmp(c[i].boja, odabir));
			printf("Cvijet ima %d latica."; c[].boja);
			printf("Cvijet je bio visok %d odabrane mjerne jedinice.", c[].max_visina);
			printf("")
		else if 
		
	
}
	
	




