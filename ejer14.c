#include <stdio.h>

int main(){
    int f, i, j, r =1;
    printf("ingrese el numero de filas de la torre:");
    scanf("%d", &f);
    for(i = 0; i < f; i++){
        printf("\n");
        for(j = 0; j < r; j++){
            printf("*");
        }
        r++;
    }
    return 0;
}