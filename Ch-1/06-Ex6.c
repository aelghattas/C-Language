#include <stdio.h>
/* 
The input from the keyboard is converted to int so if we entered -1 it will be
converted to something else rahter the EOF = -1
On linux Crtl + D gives the -1 signal
On Windows Crtl + z gives the -1 signal
*/

main(){
    int c;
    /*
    here the expression c=getchar()!= EOF means, c = 0 or 1
    0 if getchar()=EOF
    1 if getchar()!=EOF
    so we build this condition within the loop and use it to
    terminate the loop once we enter the and EOF value using Crtl+D
    */
    while (c=getchar()!= EOF)
        printf("%d\n", c);
    printf("%d - Terminating\n", c);
}