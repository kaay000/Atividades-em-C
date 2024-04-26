#include <stdio.h>

int main(){
int telefonou, esteve, mora, devia, trabalhou;

printf ("Telefonou para a vítima? (1 - sim) (0 - não)");
scanf ("%d", &telefonou);
printf ("Esteve no local do crime? (1 - sim) (0 - não)");
scanf ("%d", &esteve);
printf ("Mora perto da vítima? (1 - sim) (0 - não)");
scanf ("%d", &mora);
printf ("Devia para a vítima? (1 - sim) (0 - não)");
scanf ("%d", &devia);
printf ("Já trabalhou com a vítima? (1 - sim) (0 - não)");
scanf ("%d", &trabalhou);

if (telefonou + esteve + mora + devia + trabalhou == 2)
{
    printf ("Suspeita");
}
else if (telefonou + esteve + +mora + devia + trabalhou == 3 || telefonou + esteve + +mora + devia + trabalhou == 4)
{
    printf ("Cúmplice");
}
else if (telefonou + esteve + +mora + devia + trabalhou == 5)
{
    printf ("Assassino");
}
else
{
    printf ("N sabe de nada");
}





return 0;
}
