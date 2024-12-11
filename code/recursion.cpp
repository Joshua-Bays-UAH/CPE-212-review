#include <cstdio>

int fibonacci(int n){
	if(n <= 2){ return 1; }
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
	for(int i = 1; i < 8; i++){ printf("F(%i): %i\n", i, fibonacci(i)); }
	return 0;
}
