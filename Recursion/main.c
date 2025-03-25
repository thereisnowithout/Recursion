//
//  main.c
//  Recursion
//
//  Created by Brett Grentell on 26/3/2025.
//

#include <stdio.h>

int fun(int n)
{
    static int x=0;
    if (n > 0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    int r;
    r = fun(5);
    printf("%.d", r);
    return 0;
}
