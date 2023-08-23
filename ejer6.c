#include <stdio.h>

int main(){
    int ini, fin, cont = 0, i;
    
    printf("\n Ingrese un numero entero\n");
    scanf("%d", &ini);
    printf("\nIngrese otro numero entero\n");
    scanf("%d", &fin);
    if (ini < fin){
        for(i = ini; i <= fin; i++){
            if (i%2 == 0){cont++;}
        }
    } else if (ini > fin){
        for(i = fin; i <= ini; i++){
            if (i%2 == 0){cont++;}
        }
    }
    printf("Los numeros pares entre el rango de los numeros dados son: %d", cont);
    return 0;
}