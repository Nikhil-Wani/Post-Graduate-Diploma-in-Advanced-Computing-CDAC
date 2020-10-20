#include <stdarg.h>
#include <stdio.h>

double average ( int num, ... )
{
    va_list arguments;                     
    double sum = 0;

    /* Initializing arguments to store all values after num */
    va_start ( arguments, num );           
  /* Sum all the inputs; we still rely on the function caller to tell us how
     * many there are */
    for ( int x = 0; x < num; x++ )        
    {
        sum += va_arg ( arguments, double ); 
    }
    va_end ( arguments );                  // Cleans up the list

    return (double)sum / num;                      
}

int main()
{
    printf( "%f\n", average ( 3, 12.2, 22.3, 4.5 ) );
    printf( "%f\n", average ( 5, 3.3, 2.2, 1.1, 5.5, 3.3 ) );
}

