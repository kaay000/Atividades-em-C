#include <stdio.h>

int main (){
char genero;

printf ("Qual seu genero? (M/F):  ");
scanf ("%c", &genero);

if (genero == 'F' || genero == 'f')
{
    printf ("Feminino");
}
else if (genero == 'M' || genero == 'm' )
{
    printf ("Masculino");
}

else
{
    printf ("Entrada inválida");
}


return 0;

}