#include <stdio.h>

int main(){
    double G, res;
    int op;

    do{
        printf("\n\n%CQue operaci%cn desea realizar?:\n1) C%c a F%C\n2) F%c a C%c\n3) Salir\n", 168, 162, 248, 248, 248, 248);
        scanf("%d", &op);

        switch(op){
            case 1:
                printf("\nIndique los Grados Celsius\n");
                scanf("%lf", &G);
                res = G * 1.8;
                res = res + 32;
                printf("\n%.2lf%c Celsius equivale a %.2lf%c Fahrenheit\n", G, 248, res, 248);
            break;
            case 2:
             printf("\nIndique los Grados Fahrenheit\n");
                scanf("%lf", &G);
                res = G - 32;
                res = res / 1.8;
                printf("\n%.2lf%c Celsius equivale a %.2lf%c Fahrenheit\n", G, 248, res, 248);
            break;
            case 3:
            printf("Saliendo");
            break;
            default:
            printf("Esa no es una opci%cn", 162);
        }
    } while(op != 3);
    return 0;
}