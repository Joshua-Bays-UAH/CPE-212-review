#include <cstdio>

template <typename type>
type add_squares(type x, type y){
	return x*x + y*y;
}

int main(){
	printf("%i\n", add_squares<int>(2, 3));
	printf("%f\n", add_squares<float>(2.5, 3.5));
	return 0;
}
