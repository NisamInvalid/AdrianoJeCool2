#include <stdio.h>
#include <math.h>

struct crvic{
	
	char ime[50];
	int duljina;
	char sta_voli_jesti;
	int moze_li_ubiti_svinju;
	
};

int main(){
struct crvic C[5];
	

		printf("Unesi ime prvog crva: ");
	scanf("%s", C[0].ime);
		printf("Unesi duljinu prvog crva: ");
	scanf("%d", C[0].duljina);
		printf("Unesi sta voli jesti prvi crv: ");
	scanf("%s", C[0].sta_voli_jesti);
		printf("Moze li prvi crv ubiti svinju, unesi 1 ako moze. ");
	scanf("%d", C[0].moze_li_ubiti_svinju);
	
	
		printf("Unesi ime drugog crva: ");
	scanf("%s", C[1].ime);
		printf("Unesi duljinu drugog crva: ");	
	scanf("%d", C[1].duljina);
		printf("Unesi sta voli jesti drugi crv: ");
	scanf("%s", C[1].sta_voli_jesti);
		printf("Moze li drugi crv ubiti svinju, unesi 1 ako moze. ");
	scanf("%d", C[1].moze_li_ubiti_svinju);
	
	
		printf("Unesi ime treceg crva: ");
	scanf("%s", C[2].ime);
		printf("Unesi duljinu treceg crva: ");
	scanf("%d", C[2].duljina);
		printf("Unesi sta voli jesti treci crv: ");
	scanf("%s", C[2].sta_voli_jesti);
		printf("Moze li treci crv ubiti svinju, unesi 1 ako moze. ");
	scanf("%d", C[2].moze_li_ubiti_svinju);
	
	
		printf("Unesi ime cetvrtog crva: ");
	scanf("%s", C[3].ime);
		printf("Unesi duljinu cetvrtog crva: ");
	scanf("%d", C[3].duljina);
		printf("Unesi sta voli jesti cetvrti crv: ");
	scanf("%c", C[3].sta_voli_jesti);
		printf("Moze li cetvrti	 crv ubiti svinju, unesi 1 ako moze. ");
	scanf("%d", C[3].moze_li_ubiti_svinju);
	
	
		printf("Unesi ime petog crva: ");
	scanf("%s", C[4].ime);
		printf("Unesi duljinu petog crva: ");
	scanf("%d", C[4].duljina);
		printf("Unesi sta voli jesti peti crv: ");
	scanf("%s", C[4].sta_voli_jesti);
		printf("Moze li peti crv ubiti svinju, unesi 1 ako moze. ");
	scanf("%d", C[4].moze_li_ubiti_svinju);

void ispisi(struct crvic C[]){
	
	if(C[0].duljina>C[1].duljina && C[0].duljina>C[2].duljina && C[0].duljina>C[3].duljina C[0].duljina>C[4].duljina)
		printf("Prvi crv je najveci!", C[0].duljina);
	else if(C[1].duljina>C[0].duljina && C[1].duljina>C[2].duljina && C[1].duljina>C[3].duljina && C[1].duljina>C[4].duljina)
		printf("Drugi crv je najveci!", C[1].duljina);
	else if(C[2].duljina>C[0].duljina && C[2].duljina>C[1].duljina && C[2].duljina>C[3].duljina && C[2].duljina>C[4].duljina)
		printf("Treci crv je najveci!", C[3].duljina);
	else if(C[3].duljina>C[0].duljina && C[3].duljina>C[1].duljina && C[3].duljina>C[2].duljina && C[3].duljina>C[4].duljina)
		printf("Cetvrti crv je najveci!", C[3].duljina);
	else printf("Peti crv je najveci!", C[4].duljina);
	
	if(C[0].duljina>C[1].duljina && C[0].duljina>C[2].duljina && C[0].duljina>C[3].duljina && C[0].duljina<C[4].duljina)
			printf("Prvi crv je najveci!", C[0].duljina);
	else if(C[1].duljina>C[0].duljina && C[1].duljina>C[2].duljina && C[1].duljina>C[3].duljina && C[1].duljina>C[4].duljina)
		printf("Drugi crv je najveci!", C[1].duljina);
	else if(C[2].duljina>C[0].duljina && C[2].duljina>C[1].duljina && C[2].duljina>C[3].duljina && C[2].duljina>C[4].duljina)
		printf("Treci crv je najveci!", C[3].duljina);
	else if(C[3].duljina>C[0].duljina && C[3].duljina>C[1].duljina && C[3].duljina>C[2].duljina && C[3].duljina>C[4].duljina)
		printf("Cetvrti crv je najveci!", C[3].duljina);
	else printf("Peti crv je najveci!", C[4].duljina);

}

}




/* #include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct crvic{
	char ime[50];
	int dulj;
	char hrana[50];
	char ubojica[3];
};

void ispisi(struct crvic c[]){
	
	int i,j,min_idx;
	struct crvic temp;
	
	for(i=0;i<4;i++){
		min_idx=i;
		for(j=i+1;j<5;j++)
			if(c[j].dulj<c[min_idx].dulj)
		min_idx=j;
		
		temp=c[min_idx];
		c[min_idx]=c[i];
		c[i]=temp;
	}
	for(i=0;i<4;i++)
		printf("%s,\t %s,\t %s\t, %d\n", c[i].ime, c[i].hrana, c[i].ubojica, c[i].dulj);
	
}

int main(){
	
	struct crvic c[5]={"mirko", 50, "trava", "DA", 
						"milica", 30, "blato", "NE",
						"ivica", 40, "kruh", "DA",
						"darko", 20, "list", "NE"};
	
	printf("Unesi ime crva: \n");
	scanf("%s", c[4].ime);
	printf("Unesi duljinu crva: \n");
	scanf("%d", &c[4].dulj);
	printf("Unesi omiljenu hranu crva: \n");
	scanf("%s", c[4].hrana);
	printf("Moze li ubiti svinju? \n");
	scanf("%s", c[4].ubojica);
	
	ispisi(c);*/
