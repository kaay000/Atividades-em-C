#include <stdio.h>

int main(){

int produto1, produto2, produto3;

printf ("Qual valor do primeiro produto");
scanf ("%d", &produto1);
printf ("Qual valor do segundo produto");
scanf ("%d", &produto2);
printf ("Qual valor do terceiro produto");
scanf ("%d", &produto3);

if (produto1 < produto2  && produto1 < produto3)
{
    printf ("\n%d O Primeiro produto é mais barato");
}
else if (produto2 < produto1 && produto2 < produto3)
{
    printf ("\n%d O Segundo produto é mais barato");
}
else if (produto3 < produto1 && produto3 < produto2)
{
    printf ("\n%d O Terceiro produto é mais barato");
}
else
{
    printf ("\n%d Todos produtos estão no mesmo valor");
}



return 0;

}