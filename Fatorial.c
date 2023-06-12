#include <stdio.h>

int fatorial(float x,float y){
    if(x==0){
        return 1;
    }
    else{
        while(x!=0){
            y=x * x-1;
        }
        return y;
    }
}

int main(void){
    float x,y,resultado;
    printf("Digite o seu numero: ");
    scanf("%f",&x);
    resultado = fatorial(x,y);
    printf("O fatorial de %.2f",x, " é: %.2f",resultado);
    return 0;
}


/*#include <stdio.h>

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
}*/