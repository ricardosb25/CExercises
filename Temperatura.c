#include <stdio.h>;

int main(void){
    float x = get_float("Digite a temperatura em Celscius: ");
    float far = (x*1.8)+32;
    printf("%.2f Celcius",x,"em Fahrenheit são %.2f",far);
}