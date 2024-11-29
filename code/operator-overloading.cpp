#include <cstdio>

class weighted_value{
	public:
		float value;
		float weight;
		weighted_value(float v, float w){ value = v; weight = w; }
};

float operator + (const weighted_value x, const weighted_value y){
	return x.value*x.weight + y.value*y.weight;
}

int main(){
	weighted_value x(3, 1.5);
	weighted_value y(2.0, 3.0);

	printf("x + y is %f\n", x + y);
	return 0;
}
