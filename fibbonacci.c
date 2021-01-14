#include <stdio.h>

int main() { 
    int i ;

    for ( i = 1; i < 1000001; i++)
    {
        printf( "2 x %d = %d\n", i , i*2 );
    }
    
    printf("\n");
    return 0;



}
/*
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
*/