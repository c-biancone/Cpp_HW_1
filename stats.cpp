#include "stats.h"
// Include header files

// Implement the functions average, min, max, median

double average(int x, int y, int z)
{
    int sum = x + y + z;

    // divide sum by number of inputs
    return (sum / 3);
}

int median(int x, int y, int z, int* sortedMin, int* sortedMax)
{
    if (x < y) {  // 2 comparisons (lucky)
        if (y < z)
        { // order is x, y, z
            *sortedMin = x;
            *sortedMax = z;
            return y;
        }
        else {  // 3 comparisons
            if (x < z)
            { // order is x, z, y
                *sortedMin = x;
                *sortedMax = y;
                return z;
            }
            else
            { // order is z, x, y
                *sortedMin = z;
                *sortedMax = y;
                return x;
            }
        }
    } else {
        if (z < y)
        { // 2 comparisons (lucky) // order is z, y, x
            *sortedMin = z;
            *sortedMax = x;
            return y;
        }
        else
        { // 3 comparisons
            if (z > x)
            { // order is y, x, z
                *sortedMin = y;
                *sortedMax = z;
                return x;
            }
            else
            { // order is y, z, x
                *sortedMin = y;
                *sortedMax = x;
                return z;
            }
        }
    }
}

//*************** Deprecated definitions of min and max functions for reference ******************//

int min(int x, int y, int z)
{
    // temp variable for comparison
    int tmp;

    // compare
    x<y ? tmp=x : tmp=y;
    if (tmp > z)
    {
        tmp = z;
    }

    return tmp;
}

int max(int x, int y, int z)
{
    // temp variable for comparison
    int tmp;

    // compare
    x>y ? tmp=x : tmp=y;
    if (tmp < z)
    {
        tmp = z;
    }

    return tmp;
}

