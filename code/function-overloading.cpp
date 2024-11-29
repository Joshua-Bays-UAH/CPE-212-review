#include <cstdio>

int add_squares(int x, int y){
	printf("int function\n");
	return x*x + y*y;
}

float add_squares(float x, float y){
	printf("float function\n");
	return x*x + y*y;
}

int main(){
	printf("%i\n", add_squares(2, 3));
	printf("%f\n", add_squares(2.5f, 3.5f));
}
