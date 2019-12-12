#include <stdio.h>
#include "conio.h"

int myadd(int a, int b);

int main() 
{
    int res;
    
    myadd(10, 30);
    
    res = myadd(40, 50);
    
    printf("%d\n", res);
    
    getch();
}

int myadd(int a, int b) {
    return a + b;
}