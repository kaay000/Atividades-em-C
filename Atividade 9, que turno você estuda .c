#include <stdio.h>

int main(){
char turno;

printf ("Qual turno vc estuda? (M-matutino ou V-Vespertino ou N- Noturno)");
scanf ("%c", &turno);

if (turno == 'M' || turno == 'm')
{
    printf ("Bom dia");
}
else if (turno == 'V' || turno == 'v')
{
    printf ("Boa tarde");
}
else if (turno == 'N' || turno == 'n')
{
    printf ("Boa noite");
}
else
{
    printf ("Valor Inválido!");
}


return 0;
    
}