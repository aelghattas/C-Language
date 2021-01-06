#include <stdio.h>

main(){
    int tab = 0, blank = 0, line = 0, reader;
    while((reader = getchar())!=EOF){
        if (reader == '\t'){
            ++tab;
        } else if (reader == ' ')
        {
            ++blank;
        } else if (reader == '\n')
        {
            ++line;
        }
    }
    printf("\nSummary:\nThe Number of Lines: %d\nThe Number of Tabs: %d\nThe Number of Blanks: %d", line, tab, blank);
}