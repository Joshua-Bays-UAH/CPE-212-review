#include <new>
#include <cstdio>

int main(){
	int* ptr;
	ptr = new int;
	*ptr = 10;
	printf("%i is stored at %X\n", *ptr, ptr);
	delete ptr; /* Deallocate the memory */
	ptr = NULL; /* Set the pointer to NULL because it does not point to any memory */
	return 0;
}
