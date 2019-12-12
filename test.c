#include <stdio.h>
#include <conio.h>

void myfunction1();
void myfunction2(int a, int b);

int main() 
{
    int n1 = 10;
    int n2 = 20;
    
    myfunction1();
    myfunction2(n1, n2);
    myfunction2(n1, 111);
    myfunction2(n2, 222);
    getch();
}

void myfunction1() {
    printf("HELLO MY FUNCTION1\n");
}


void myfunction2(int a, int b) {
    printf("HELLO MY FUNCTION2 %d %d\n", a, b);
}