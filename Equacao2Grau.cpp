#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,delta, x1,x2;
    printf("Insira o primeiro valor:");
    scanf("%f", &a);
    printf("Insira o segundo valor:");
    scanf("%f", &b);
    printf("Insira o terceiro valor:");
    scanf("%f", &c);
        
    delta = (b*b -4*a*c);
        
    if (delta < 0) {
        printf("Nao tem raizes reais\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equacao tem uma raiz real %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("A equacao tem duas raizes reais: \n");
        printf("x1 = %.2f\n",x1);
        printf("x2 = %.2f\n",x2);
    }
}