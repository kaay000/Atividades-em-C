#include <stdio.h>

int main(){

float nota1, nota2, media;
char conceito;

printf ("Digite a primeira nota");
scanf ("%f", &nota1);
printf ("Digite a segunda nota");
scanf ("%f", &nota2);

media = (nota1 + nota2) / 2;

    if (media >= 9.0) {
        conceito = 'A';
    } else if (media >= 7.5) {
        conceito = 'B';
    } else if (media >= 6.0) {
        conceito = 'C';
    } else if (media >= 4.0) {
        conceito = 'D';
    } else {
       conceito = 'E';
    }
    
    printf("Primeira nota parcial: %.2f\n", nota1);
    printf("Segunda nota parcial: %.2f\n", nota2);
    printf("Média: %.2f\n", media);
    printf("Conceito: %c\n", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

return 0;
}