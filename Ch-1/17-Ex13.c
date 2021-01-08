/*
Write a program to print a histogram of the legnths of words in its input.
*/

#include <stdio.h>
#define ON 1
#define OFF 0

main(){
    int reader, state, letters, words, charachters, i;
    state = OFF;
    letters = 0;
    words = 0;
    charachters = 0;
    while((reader = getchar())!=EOF){
        ++charachters;
        if (reader == ' ' || reader == '\n' || reader == '\t'){
            if(state == ON){
                ++words;
                state = OFF;
            }
        }else{
            state = ON;
            ++letters;
        }
    }
    printf("The total Number of words is: %d\nThe total Number of letters is: %d\nThe total Number of Charachters is: %d\n", words, letters, charachters);
}