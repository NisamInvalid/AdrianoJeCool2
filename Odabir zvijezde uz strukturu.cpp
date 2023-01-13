#include <stdio.h>
#include <stdlib.h>

struct zvijezda{
	float stupnjevi;
	float velicina;
	float svjetlina;
	float udaljenost;
	int boja;
};

int main(){
	
	struct zvijezda z1;
	
		printf("Unesi temperaturu prve zvijezde: ");
		scanf("%f", &z1.stupnjevi);
		printf("Unesi velicinu prve zvijezde: ");
		scanf("%f", &z1.velicina);
		printf("Unesi svjetlinu prve zvijezde: ");
		scanf("%f", &z1.svjetlina);
		printf("Unesi udaljenost prve zvijezde: ");
		scanf("%f", &z1.udaljenost);
		printf("Unesi boju prve zvijezde, 0=bijela, 1=plava, 2=zuta, 3=pinky: ");
		scanf("%d", &z1.boja);
	
	
	struct zvijezda z2;
	
		printf("Unesi temperaturu druge zvijezde: ");
		scanf("%f", &z2.stupnjevi);
		printf("Unesi velicinu druge zvijezde: ");
		scanf("%f", &z2.velicina);
		printf("Unesi svjetlinu druge zvijezde: ");
		scanf("%f", &z2.svjetlina);
		printf("Unesi udaljenost druge zvijezde: ");
		scanf("%f", &z2.udaljenost);
		printf("Unesi boju druge zvijezde, 0=bijela, 1=plava, 2=zuta, 3=pinky: ");
		scanf("%d", &z2.boja);
	
	struct zvijezda z3;
	
		printf("Unesi temperaturu trece zvijezde: ");
		scanf("%f", &z3.stupnjevi);
		printf("Unesi velicinu trece zvijezde: ");
		scanf("%f", &z3.velicina);
		printf("Unesi svjetlinu trece zvijezde: ");
		scanf("%f", &z3.svjetlina);
		printf("Unesi udaljenost trece zvijezde: ");
		scanf("%f", &z3.udaljenost);
		printf("Unesi boju trece zvijezde, 0=bijela, 1=plava, 2=zuta, 3=pinky: ");
		scanf("%d", &z3.boja);
		
	float rez1=z1.stupnjevi/z1.udaljenost;
	float rez2=z2.stupnjevi/z2.udaljenost;
	float rez3=z3.stupnjevi/z3.udaljenost;

	float rezl1=abs (rez1-0.000069);
	float rezl2=abs (rez2-0.000069);
	float rezl3=abs (rez3-0.000069);
	
	if (rezl1<rezl2 && rezl1<rezl3){
		printf("Odaberi prvu zvijezdu!" );
		printf("Boja te zvijezde je ");
		printf(z1.boja==0?"Bijela":z1.boja==1?"Plava":z1.boja==2?"Zuta":"Pinky");}
	else if(rezl2<rezl1 && rezl2<rezl3){
		printf("Odaberi drugu zvijezdu!" );
		printf("Boja te zvijezde je ");
		printf(z2.boja==0?"Bijela":z2.boja==1?"Plava":z2.boja==2?"Zuta":"Pinky");}
	else if(rezl2<rezl1 && rezl2<rezl3){
		printf("Odaberi trecu zvijezdu!" );
		printf("Boja te zvijezde je ");
		printf(z3.boja==0?"Bijela":z3.boja==1?"Plava":z3.boja==2?"Zuta":"Pinky");}
		
}








