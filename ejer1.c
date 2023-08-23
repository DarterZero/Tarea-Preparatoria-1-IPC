#include <stdio.h>

int main(){
    int cantidad, valor = 0, acum, op,i;
    do{
    printf("\nque operacion desea realizar:\n1) Adici%cn\n2) Multiplicaci%cn\n3) Salir\n", 162, 162);
    scanf("%d", &op);
    switch(op){
            case 1:
                acum = 0;
                printf("ingrese la cantidad de numeros a operar\n");
                scanf("%d", &cantidad);
                printf("Ingrese el primer valor \t");
                scanf("%d", &valor);
                for (i = 0; i < cantidad-1; i++){
                    acum = acum + valor;
                    printf("\nIngrese el siguiente valor\t");
                    scanf("%d", &valor);
                }
                acum = acum + valor;
                printf("\nLa sumatoria de los valores es:\t%d\n", acum);
            break;
            case 2:
                acum = 1;
                printf("ingrese la cantidad de numeros a operar\n");
                scanf("%d", &cantidad);
                printf("Ingrese el primer valor \t");
                scanf("%d", &valor);
                for (i = 0; i < cantidad-1; i++){
                    acum = acum * valor;
                    printf("\nIngrese el siguiente valor\t");
                    scanf("%d", &valor);
                }
                acum = acum * valor;
                printf("\nLa multiplicaci%cn de los valores es:\t%d\n", 162, acum);
            break;
            case 3:
                printf("Finalizado");
                break;
            default:
                printf("Opci%cn no v%clida", 162, 160);
    }
    } while (op !=3);
    return 0;
}