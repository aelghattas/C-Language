#include <stdio.h>
//Exercise 1.4 Celsius -> Fahr
//fahr = (9.0 * celsius / 5.0) + 32.0
main(){
    int lower, upper, step;
    float fahr, celsius;
    lower = 0;
    upper = 200;
    step = 20;
    celsius = lower;
    printf("Celsius\tFahr");
    while(celsius<=upper){
        fahr = (9.0 * celsius / 5.0) + 32.0;
        printf("%3.f\t%6.f\n", celsius, fahr);
        celsius = celsius + step;
    }
} 