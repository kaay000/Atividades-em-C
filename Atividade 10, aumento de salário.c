#include <stdio.h>

int main(){
 
float  salario, aumento20, aumento15, aumento10, aumento5;


printf ("Informe o salario");
scanf ("%f", &salario);

if (salario < 280)
{
  float  porcentagem20 = salario * 0.2;
  aumento20 = salario + porcentagem20;
  printf ("\n O Salario era %0.2f", salario);
  printf ("\n Novo salario é %0.2f", aumento20);
  printf ("\n O aumento foi de 20 porcento");
  printf ("\n O valor do aumento foi %0.2f", porcentagem20);
}
else if (salario >= 280 && salario < 700)
{
  float  porcentagem15 = salario * 0.15;
  aumento15 = salario + porcentagem15;
  printf ("\n O Salario era %0.2f", salario);
  printf ("\n Novo salario é %0.2f", aumento15);
  printf ("\n O aumento foi de 15 porcento");
  printf ("\n O valor do aumento foi %0.2f", porcentagem15);
}
else if (salario >= 700 && salario < 1500)
{
  float  porcentagem10 = salario * 0.1;
  aumento10 = salario + porcentagem10;
  printf ("\n O Salario era %0.2f", salario);
  printf ("\n Novo salario é %0.2f", aumento10);
  printf ("\n O aumento foi de 10 porcento");
  printf ("\n O valor do aumento foi %0.2f", porcentagem10);
}
else if (salario >= 1500)
{
  float  porcentagem5 = salario * 0.05;
  aumento5 = salario + porcentagem5;
  printf ("\n O Salario era %0.2f", salario);
  printf ("\n Novo salario é %0.2f", aumento5);
  printf ("\n O aumento foi de 5 porcento");
  printf ("\n O valor do aumento foi %0.2f", porcentagem5);
}
else
{
  printf ("Não tem aumento");
}

 return 0;  
}