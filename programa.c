#include<stdio.h>
main(){
    int x, y;
    printf("Escribe el primer numero:");
    scanf("%d", &x);
    printf("Escribe el segundo numero:");
    scanf("%d", &y);
    if (x > y){
        printf("El mayor es: %d",x);
    } else{
        if ( y > x ){
            printf("El mayor es: %d",y);
        }else{
            printf("Son iguales");
        }
    }
}