/*
Write a program to print a histogram of the legnths of words in its input.
*/

#include <stdio.h>
#define ON 1
#define OFF 0

main(){
    int reader, state, letters, words;
    state = OFF;
    letters = 0;
    words = 0;
    while((reader = getchar())!=EOF){
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
    printf("The total Number of words is: %d\nThe total Number of letters is: %d\n", words, letters);
}