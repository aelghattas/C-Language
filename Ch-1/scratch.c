#include <stdio.h>
#define ON 1
#define OFF 0

int main(){
    int reader, state, letters, words, i, seeker;
    state = OFF;
    letters = 0;
    words = 0;
    seeker = 0;
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
    int histogram[words];
    for (i=0; i<words; ++i){
        histogram[i] = 0;
    }
    while((seeker = getchar())!=EOF){
        if (seeker == ' ' || seeker == '\n' || seeker == '\t'){
            if(state == ON){
                ++words;
                histogram[words] = letters;
                state = OFF;
            }
        }else{
            state = ON;
            ++letters;
        }
    }    
    for (i=0; i<words; ++i){
        printf("%d\t%d\n", i, histogram[i]);
    }
    return 0;
}