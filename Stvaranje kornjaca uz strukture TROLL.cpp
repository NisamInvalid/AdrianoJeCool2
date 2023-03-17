#include <stdio.h>
#include <string.h>
#include <math.h>

struct korni{
	
	int zaobljenost;
	int duljina_nogu;
	int broj_plocica;
	char ime[20];
	
}k;

int main(){

int odabir;
int odabir_max;


do{
	
printf("---------------------------------\n");
printf("| 1. Unesi novu kornjacu\t|\n");
printf("| 2. Max\t\t\t|\n");
printf("| 3. Min\t\t\t|\n");
printf("| 4. Ispisi all\t\t\t|\n");
printf("| 5. Exit\t\t\t|\n");
printf("---------------------------------\n");

printf("Sto zelite raditi: ");
scanf("%d", odabir);
		
switch(odabir){
    case 1:
        printf("Unesi zaobljenost kornjace: ");
        	scanf("%d", &k.zaobljenost);
        printf("Unesi duljinu mogu kornjace: ");
    		scanf("%d", &k.duljina_nogu);
    	printf("Unesi koliko plocica ima kornjaca na oklopu: ");
			scanf("%d", k.broj_plocica);
		printf("Unesi ime kornjaci: ");
			scanf("%s" k.ime);
        break;
    case 2:
       printf("Koje max podatke zelite? \n");
       
printf("---------------------------------\n");
printf("| 1. Zaobljenost\t|\n");
printf("| 2. Duljina nogu\t\t\t|\n");
printf("| 3. Broj plocica\t\t\t|\n");
printf("---------------------------------\n");

       switch(odabir_max){
       	case 1:
	        int max=0;
	        max=k.zaobljenost>max?k.zaobljenost : max;

       		break;
       		
       	case 2:
       		int max=0;
	        max=k.dulina_nogu>max?k.duljina_nogu : max;
	        
       		break;
       		
       	case 3:
		   int max=0;
	        max=k.broj_plocica>max?k.broj_plocica : max;
	        
		   break;	
	   }
        break;
    case 3:
        printf("Sljedeca boja na semaforu je zuta");
        break;
    case 4:
        printf("Sljedeca boja na semaforu je crvena");
        break;
    case 5:
        printf("Sljedeca boja na semaforu je crvena");
        break;
    default:
        printf("Glupane uzeo si broj veci od 5");
        break;
}
	
}





		

}while(odabir!=5);




}
