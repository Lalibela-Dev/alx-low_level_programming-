#include "main.h"
/**
 *Return: Always 0.
 */
int main() {
int a;
int b;
a = 98;
b = 42;
_putchar("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
_putchar("a=%d, b=%d\n", a, b);  
return 0;
}
void swap_int(int *x, int *y){
int temp;
temp = *x;
*x = *y;
*y = temp;
}
