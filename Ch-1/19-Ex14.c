#include <stdio.h>

float con(float fahr);
int main(){
    int start, end, step;
    float fahr;
    fahr = 0;
    end = 300;
    step = 20;
    
    printf("Fahr\tCelsius\n");
    while (fahr <= end)
    {
        printf("%4.f\t%6.2f\n", fahr, con(fahr));
        fahr = fahr + step;
    }
    return 0;
}

float con(float fahrin){
    return (5.0 / 9.0) * (fahrin - 32);
}