#include <stdio.h>

main(){
    long reader;
    long str;
    str = 0;
    while((reader = getchar())!=EOF){
        if(reader != ' '){
            putchar(reader);
        }else if (reader == ' ')
        {
            if(str == ' '){

            }else
            {
                putchar(reader);
            }
            
        }
        str = reader;
    }
}