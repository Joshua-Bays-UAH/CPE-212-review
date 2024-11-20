#include <cstdio>

int main(){
	int x = 0;
	int *xPtr = &x; /* Create a pointer for x */
	printf("x is %i and stored at %X\n", x, xPtr);
	*xPtr = 2; /* Dereference the pointer to change x */
	printf("x is %i and stored at %X\n", x, xPtr);
	return 0;
}
