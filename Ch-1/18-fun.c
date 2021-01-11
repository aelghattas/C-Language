#include<stdio.h>

int power(int m, int n); //Function Proto-Type

int main(){
    int i;
    printf("Power\tResult\n");
    for (i=0; i<10; ++i)
        printf("%d\t%d\n", i, power(3, i));
    return 0;
}

int power(int base, int n){
    int i, p;
    p = 1;
    for (i=0; i<=n; ++i)
        p = p * base;
    return p;
}