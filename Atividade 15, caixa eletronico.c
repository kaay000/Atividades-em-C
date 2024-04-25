#include <stdio.h>

int main(){

int Saque, valorNota, quantidade;

printf ("Digite o valor do saque (entre 10 a 600 reais): ");
scanf ("%d", &Saque);
   
   if (Saque < 10 || Saque > 600)
   {
      printf ("Valor Invalido");
      return 1;
   }

   printf("Notas fornecidas:\n");
   
   valorNota = 100;
   quantidade = Saque / valorNota;
   if (quantidade > 0)
   {
      printf ("%d notas de %d reais \n", quantidade, valorNota);
      Saque %= valorNota;
   }
   valorNota = 50;
   quantidade = Saque / valorNota;
   if (quantidade > 0)
   {
      printf ("%d notas de %d reais \n", quantidade, valorNota);
      Saque %= valorNota;
   }
   valorNota = 10;
   quantidade = Saque / valorNota;
   if (quantidade > 0)
   {
      printf ("%d notas de %d reais \n", quantidade, valorNota);
      Saque %= valorNota;
   }
    valorNota = 5;
   quantidade = Saque / valorNota;
   if (quantidade > 0)
   {
      printf ("%d notas de %d reais \n", quantidade, valorNota);
      Saque %= valorNota;
   }
    valorNota = 1;
   quantidade = Saque / valorNota;
   if (quantidade > 0)
   {
      printf ("%d notas de %d reais \n", quantidade, valorNota);
      Saque %= valorNota;
   }

   return 0;
}