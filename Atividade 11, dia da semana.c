#include <stdio.h>

int main(){

int dia;

printf ("Dias das semanas, 1-Domingo, 2-Segunda, 3-Terça, 4-Quarta, 5-Quinta, 6-Sexta e 7-Sabado");
scanf (" %d", &dia);

if (dia == 1)
{
    printf ("Domingo");
}
else if (dia == 2)
{
    printf ("Segunda");
}
else if (dia == 3 )
{
    printf ("Terça");
}
else if (dia == 4)
{
    printf ("Quarta");
}
else if (dia == 5)
{
    printf ("Quinta");
}
else if (dia == 6)
{
    printf ("Sexta");
}
else if (dia ==7)
{
    printf ("Sabado");
}
else
{
    printf ("Valor inválido");
}








    
}