//Write a program that prints its input one word per line
#include<stdio.h>

#define ON 1
#define OFF 0

main(){
    int reader, state;
    state = OFF;
    while ((reader=getchar())!=EOF){
        if (reader == '\t' || reader == ' ' || reader == '\n'){
            if (state == ON){
                putchar('\n');
                state = OFF;
            }
        }else
        {
            putchar(reader);
            state = ON;
        }
        
    }
}