#include <stdio.h>

int main(){
    int op, i;
    double vol, L, r, h;
    do{
    printf("\n%cQue volumen desea calcular?:\n1) Cubo\n2) Esfera\n3) Pir%cmide Triangular\n4) Pir%cmide Cuadrada\n5) Salir\n", 168, 160, 160);
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("Ingrese la longitud de una arista\n");
            scanf("%lf", &L);
            vol = L * L * L;
            printf("El volumen del cubo es de: %.2lf\n", vol);
        break;
        case 2:
            printf("Ingrese la longitud del radio\n");
            scanf("%lf", &r);
            vol = 4 * 3.141592654 * r * r * r / 3;
            printf("El volumen de la esfera es de: %.2lf\n", vol);
        break;
        case 3:
            printf("Ingrese la Longitud de una arista\n");
            scanf("%lf", &L);
            printf("Ingrese la altura de la piramide\n");
            scanf("%lf", &h);
            vol = L * L * h * 1.732050808 / 12;
            printf("El volumen de la piramide es de: %.2lf\n", vol);
        break;
        case 4:
            printf("Ingrese la Longitud de una arista de la base\n");
            scanf("%lf", &L);
            printf("Ingrese la altura de la piramide\n");
            scanf("%lf", &h);
            vol = L * L * h / 3;
            printf("El volumen de la piramide es de: %.2lf\n", vol);
        break;
        case 5:
        printf("\nSaliendo");
        break;
        default:
        printf("Esa no es una opci%cn", 162);
    }
    } while(op != 5);
    return 0;
}