#include "stats.h"
// Include header files

// Implement the functions average, min, max, median

double average(int x, int y, int z)
{
    int sum = x + y + z;

    // divide sum by number of inputs
    return (sum / 3);
}
/*
int median(int x, int y, int z)
{
    if (x < y) {
        if (y<z) {
            return y;
        } else if (x<z) {
            return z;
        } else {
            return x;
        }
    } else {
        if (z>y) {
            return y;
        } else if (z>x) {
            return x;
        } else {
            return z;
        }
    }
}
*/
int min(int x, int y, int z)
{
    // temp variable for comparison
    int tmp;

    // compare
    x<y ? tmp=x : tmp=y;
    if (tmp>z)
    {
        tmp=z;
    }

    return tmp;
}

int max(int x, int y, int z)
{
    // temp variable for comparison
    int tmp;

    // compare
    x>y ? tmp=x : tmp=y;
    if (tmp<z)
    {
        tmp=z;
    }

    return tmp;
}

