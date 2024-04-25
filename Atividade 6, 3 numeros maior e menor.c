#include <stdio.h>

int main (){ 
int numero1, numero2, numero3;

printf ("Me fale um numero");
scanf ("%d", &numero1);
printf ("Me fale outro numero");
scanf ("%d", &numero2);
printf ("Me fale mais numero");
scanf ("%d", &numero3);

if (numero1 > numero2 && numero1 > numero3)
{
    printf ("\n%d é maior", numero1);
}
else if (numero2 > numero1 && numero2 > numero3)
{
    printf ("\n%d é maior", numero2);
}
else if (numero3 >numero1 && numero3 > numero2)
{
    printf ("\n%d é maior");    
}
else
{
    printf ("\nSão iguais");
}
if (numero1 < numero2 && numero1 < numero3)
{
    printf ("\n%d é menor", numero1);
}
else if (numero2 < numero1 && numero2 < numero3)
{
    printf ("\n%d é menor", numero2);
}
else if (numero3 < numero1 && numero3 < numero2)
{
    printf ("\n%d é menor");    
}
else
{
    printf ("\nSão iguais");
}

return 0;

}