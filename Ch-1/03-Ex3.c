#include <stdio.h>
//Exercise 1.3 Fahr -> Celsius
main(){
    int lower, upper, step;
    float fahr, celsius;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Fahr\tCelsius\n");
    while(fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3d\t%6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}