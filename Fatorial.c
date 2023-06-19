#include <stdio.h>

int fatorial(int x){
    if(x==0){
        return 1;
    }
    else{
        int resultado = 1;
        while(x!=1){
            resultado *= x;
            x--;
        }
        return resultado;
    }
}

int main(void){
    int x,resultado;
    printf("Digite o seu numero: ");
    scanf("%d",&x);
    resultado = fatorial(x);
    printf("O fatorial de %d é: %d",x,resultado);
    return 0;
}
