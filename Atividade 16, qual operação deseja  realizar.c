#include <stdio.h>
#include <math.h>

int main(){
float numero1, numero2, operaçao;

printf ("Digite 2 numeros: ");
scanf ("%f %f", &numero1, &numero2);
printf ("Qual operaçao deseja realizar (1 Soma, 2 Subtraçao, 3 multiplicação, 4 divisao)");
scanf ("%f", &operaçao);

if (operaçao == 1)
{
    numero1 += numero2;
    printf ("\n A soma deu %f", numero1);
}
else if (operaçao == 2)
{
    numero1 -= numero2;
    printf ("\n A subtraçao deu %f", numero1);
}
else if (operaçao == 3)
{
    numero1 *= numero2;
    printf ("\n A multiplicação deu %f", numero1);
}
else if (operaçao == 4)
{
    numero1 /= numero2;
    printf ("\n A divisão deu %f", numero1);
}
else
{
    printf ("\n Valor Inserido invalido");
}
int parte_inteira = (int)numero1;
if ( parte_inteira % 2 == 0)
{
    printf ("\n O numero e par");
}
else
{
    printf ("\n O numero e impar");
}
if (numero1 > 0)
{
    printf ("\n O numero e positivo");
}
else
{
    printf ("\n O numero e negativo");
}
if (numero1 == floor(numero1))
{
    printf ("\n O numero e inteiro");
}
else
{
    printf ("\n O numero e decimal");
}





return 0;
}