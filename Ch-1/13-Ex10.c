#include <stdio.h>

main(){
    int tab, backs, backsl;
    long reader;
    tab = '\t';
    backs = '\b';
    backsl = '\\';
    while ((reader = getchar())!=EOF){
        if (reader == tab)
            printf("\\t");
        else if (reader == backs)
            printf("\\b");
        else if (reader == backsl)
            printf("\\\\");
        else
            putchar(reader);
    }
}
