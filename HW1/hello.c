#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int c = atoi(argv[1]);
 
    count_to_x ( c );

    if(c == c)
        printf("Goodbye\n");
    
    return 0;
}

int count_to_x (int x)
{
    if(x > 0)
    {
        printf("Hello World!\n");
        count_to_x( x - 1 );
    }
}
