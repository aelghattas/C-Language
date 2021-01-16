#include <stdio.h>
#define LIMIT 1000

int reader(char in[]);

int main(){
    char line[LIMIT];
    int i;
    int count;
    i = 0;
    while ((i = reader(line)) > 0){
        count = i;
    }
    printf("%d", count);
    return 0;
}

int reader(char input[]){
    int i, c;
    for (i=0; (c=getchar())!=EOF; ++i){
        input[i] = c;
    }
    return i;
}