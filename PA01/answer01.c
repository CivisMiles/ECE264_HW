#include <stdlib.h>
#include "answer01.h"

int arraySum(int * array, int len)
{
    //Local Declarations
    int sum = 0; //the numerical sum of the array given
    int lcv; //loop control variable

    //Statments
    for (lcv = 0;lcv < len;lcv++)
    {
        sum = array[lcv] + sum;  
    }
    
    return (sum);
}

int arrayCountNegative(int * array, int len)
{
    //Local Declarations
    int neg = 0; //number of negative valuse in the array
    int lcv; //loop control variable

    //Statments
    for (lcv = 0;lcv < len;lcv++)
    {
        if (array[lcv] < 0)
        {
            neg++;
        }
    }
    
    return (neg);
}

int arrayIsIncreasing(int * array, int len)
{ 
    //Local Declarations
    int order = 1;
    int lcv = 1; //loop control variable
    int loopbreak = 0; // if the next value in the array is smaller it breaks the cycle

    //Statements    
    while(lcv < len && loopbreak == 0)
    {
        if(array[lcv - 1] > array[lcv])
        {
            loopbreak = 1;
            order = 0;
        }
        
        lcv++;
    } 
    
    return(order);
}

int arrayIndexRFind(int needle, const int * haystack, int len)
{
    //Local Declarations
    int lcv = 1; //loop control variable
    int location = -1; //location of the "needle" in the array
    
    //Statements
    while (lcv <= len && location == -1)
    {
        if (needle == haystack[len - lcv])
        {
           location = len - lcv; 
        }

        lcv++;
    }
    
    return (location);
}

int arrayFindSmallest(int * array, int len)
{
    //Local Declarations
    int lcv = 1; //loop control variable
    int small = 0; //smallest integer    

    //Statements
    
    while (lcv < len)
    {
        if (array[small] > array[lcv])
        {
            small = lcv;
        }
    lcv++;
    }
    
    return (small);
}
// a comment
