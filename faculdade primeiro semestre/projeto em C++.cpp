#include <stdio.h>
int main(){
float dividendo, divisor;
printf("entre com dois numeros reais:\n");
scanf("%f %f", &dividendo, &divisor);
printf("a divisao de %.2f por %.2f vale %.2f",&dividendo,divisor,dividendo/divisor);
return 0;
}
