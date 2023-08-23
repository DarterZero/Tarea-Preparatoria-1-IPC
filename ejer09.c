#include <stdio.h>

int main(){
    int N,  i;
    double f = 1, a = 0, p = 1;
    printf("\nIngrese el numero de terminos que desea obtener\n");
    scanf("%d", &N);
    printf("Los primeros %d terminos de la serie fibonacci son:\n", N);
    for(i = 0; i <= N; i++){
        printf("\n%.0lf", f);
        f = a + p;
        a = p;
        p = f;
    }
    return 0;
}