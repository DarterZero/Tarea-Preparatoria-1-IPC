#include <stdio.h>

int main(){
    int n, F = 1, i;

    printf("\nIngrese un numero entero positivo\n");
    scanf("%d", &n);
    for(i = n; i > 0; i--){F = F * i;}
    printf("\nEl factorial de %d es: %d\n", n, F);
    return 0;
}