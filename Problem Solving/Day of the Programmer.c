#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int y,leap; 
    scanf("%d",&y);
    leap=0;
    if (y % 4 == 0) leap=1;
    if (y > 1918)
    {
    if (y % 100 == 0) leap=0;
    if (y % 400 == 0) leap=1;
    }
    if (y != 1918) 
    {
        if (leap == 0) printf("13.09.%d\n",y);
        else printf("12.09.%d\n",y);
    }
    else printf("26.09.%d\n",y);
    // your code goes here
    return 0;
}
