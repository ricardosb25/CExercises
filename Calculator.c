//Em progresso

#include <stdio.h>

int main(void){
    float num1,num2,resultado;
    int oper,rep;
    rep = 1;
    while(rep==1){
        printf("\n\nMenu de calculos");
        printf("\n1-Soma");
        printf("\n2-Subtração");
        printf("\n3-Divisão");
        printf("\n4-Multiplicação");
        printf("\nEscolha uma opção: ");
        scanf("%d", &oper);
        printf("Digite um numero: ");
        scanf("%f", &num1);
        printf("Digite outro numero: ");
        scanf("%f", &num2);
        if(oper==1){
            resultado = num1+num2;
            printf("O resultado é %.2f", resultado);
        }
            if(oper==2){
            resultado = num1-num2;
            printf("O resultado é %.2f", resultado);
        }
            if(oper==3){
            resultado = num1/num2;
            printf("O resultado é %2.f", resultado);
        }
            if(oper==4){
            resultado = num1*num2;
            printf("O resultado é %.2f", resultado);
        }
        printf("\nDeseja fazer mais um calculo(Sim = 1/Não = 0)?: ");
        scanf("%d", &rep);
    }
    printf("\n\nPrograma finalizado");
    return 0;
}
