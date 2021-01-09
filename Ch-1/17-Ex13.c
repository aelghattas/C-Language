/*
Write a program to print a histogram of the legnths of words in its input.
*/

#include <stdio.h>
#define ON 1
#define OFF 0
#define SIZE 100

int main(){
    int reader, state, letters, words, i;
    state = OFF;
    letters = 0;
    words = 0;

    int stack[SIZE];

    for (i=0; i<SIZE; ++i){
        stack[i] = 0;
    }

    while((reader = getchar())!=EOF){
        if (reader == ' ' || reader == '\n' || reader == '\t'){
            if(state == ON){
                ++words;
                stack[words] = letters;
                state = OFF;
            }
        }else{
            state = ON;
            ++letters;
        }

    }
    int histogram[words];
    histogram[0] = 0;
    printf("Word\tLetters\n");
    for (i=1; i<=words; ++i){
        histogram[i] = stack[i] - stack[i-1];
        printf("%d\t%d\n", i, histogram[i]);
    }
    return 0;
}