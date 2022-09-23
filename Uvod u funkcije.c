#include <stdio.h>
#include <stdlib.h>

float minTrosak (int N, float x) //definicija funkcije
{
    return N*x;
    }

int main()
{
int br_prijatelja;
float cijena;
float trosak;

    printf("Unesi broj prijatelja: ");
    scanf("%d", &br_prijatelja);
    printf("Unesi cijenu pretplate: ");
    scanf("%f", &cijena);
    trosak = minTrosak(br_prijatelja, cijena); //poziv funkcije
    printf("Ukupni trosak iznosi %.2f novaca", trosak);
}
