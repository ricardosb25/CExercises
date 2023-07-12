#include <stdio.h>;

int main(void){
    float x = get_float("Enter the temperature in Celscius: ");
    float far = (x*1.8)+32;
    printf("%.2f Celcius",x,"in Fahrenheit is %.2f",far);
}
