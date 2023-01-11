/* Variables Demo - operator &; address of */
#include <stdio.h>
#include <conio.h>
int main() {
	char c='A'; int i=i; long l=1000;
	float f=0.5f; double d=12.809 ;
	printf("Variable c; at addr: %u, value: %c, size: %d\n", &c, c, sizeof(c));
	printf("Variable i; at addr: %u, value: %d, size: %d\n", &i, i, sizeof(i));
	printf("Variable l; at addr: %l, value: %l, size: %l\n", &l, l, sizeof(l));
	printf("Variable f; at addr: %f, value: %f, size: %f\n", &f, f, sizeof(f));
    printf("Variable d; at addr: %d, value: %d, size: %d\n", &d, d, sizeof(d));
    return 0;
}
