/*
The purpose of this file to emphasize on the ASCII charachter constant
*/


#include <stdio.h>

main() {
    // getchar() reads one single char and return its string contant value in ASCII
    int c;
    while((c=getchar())!=EOF)
        printf("%d\n", c);
        putchar('\n');
    // The program will return two outputs
    //The first is the ASCII constant of the input
    // and on another line it will return 10 which is the constant of Ent used to input
}