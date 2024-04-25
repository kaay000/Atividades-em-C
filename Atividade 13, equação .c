#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, raiz1, raiz2;


    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    
    if (a == 0) {
        printf("A equação não é do segundo grau.\n");
    } else {
        
        delta = b * b - 4 * a * c;

        
        if (delta < 0) {
            printf("A equação não possui raízes reais.\n");
        } else if (delta == 0) {
            
            raiz1 = -b / (2 * a);
            printf("A equação possui uma raiz real: %.2lf\n", raiz1);
        } else {
            
            raiz1 = (-b + sqrt(delta)) / (2 * a);
            raiz2 = (-b - sqrt(delta)) / (2 * a);
            printf("A equação possui duas raízes reais: %.2lf e %.2lf\n", raiz1, raiz2);
        }
    }

    return 0;
}
