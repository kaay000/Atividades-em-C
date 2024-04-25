#include <stdio.h>

int main(){
int numero1, numero2, numero3;

printf ("Me fale um numero");
scanf ("%d", &numero1);
printf ("Me fale outro numero");
scanf ("%d", &numero2);
printf ("Me fale mais um numero");
scanf ("%d", &numero3);
    
       if (numero1 >= numero2 && numero1 >= numero3) {
        if (numero2 >= numero3) {
            printf("%d %d %d", numero1, numero2, numero3);
        } else {
            printf("%d %d %d", numero1, numero3, numero2);
        }
    } else if (numero2 >= numero1 && numero2 >= numero3) {
        if (numero1 >= numero3) {
            printf("%d %d %d", numero2, numero1, numero3);
        } else {
            printf("%d %d %d", numero2, numero3, numero1);
        }
    } else {
        if (numero1 >= numero2) {
            printf("%d %d %d", numero3, numero1, numero2);
        } else {
            printf("%d %d %d", numero3, numero2, numero1);
        }
    }

    return 0;
}
