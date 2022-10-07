#include <stdio.h>
#include <stdlib.h>

int  pobjednik (int tatjana, int zvonimir){
	
return (tatjana+zvonimir)%2;	

}

int main(){

int tatjana;
int zvonimir;

printf("Unesi koji ce broj Zvonimir izabrati: ");
scanf("%d", &zvonimir);
printf("Unesi koji ce broj Tatjana izabrati: ");
scanf("%d", &tatjana);

printf(pobjednik(tatjana,zvonimir)?"Tatjana je pobjedila" : "Zvonimir je pobjedio");
}
	
