#include <stdio.h>

main(){
    int line, counter;
    while((line = getchar())!=EOF){
        if (line == '\n'){
            ++counter;
        }
    }
    printf("The number of lines = %d\n", counter);
}

