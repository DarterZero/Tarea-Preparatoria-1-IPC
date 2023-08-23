#include <stdio.h>

int main(){
    char frase[50];
    int cont = 0;

    printf("\nIngrese una palabra\n");
    scanf("%s", &frase);
    while(frase[cont] != 0){
        printf("%c%c", frase[cont], frase[cont]);
        cont++;
    }
    return 0;
}