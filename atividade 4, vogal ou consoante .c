#include  <stdio.h>

int main (){
char letra;

printf ("Digite uma letra: ");
scanf (" %c", &letra);

if (letra == 'a'|| letra == 'A'|| letra == 'e'|| letra == 'E'|| letra == 'i'|| letra == 'I'|| letra == 'o'|| letra == 'O'|| letra == 'u'|| letra =='U') {
    printf ("Vogal");
}
else{

    printf ("consoante");
}


    return 0;
}