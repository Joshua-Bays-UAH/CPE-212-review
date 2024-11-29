#include <cstdio>

template <typename type> class numContainer{
	private: type value;
	public:
		numContainer(){ value = 0; }
		~numContainer(){}
		void add(type x){ value += x; }
		type getValue(){ return value; }
};


int main(){
	numContainer<int> i; i.add(2);
	printf("The value is %i\n", i.getValue());
	
	numContainer<float> f; f.add(2.5);
	printf("The value is %f\n", f.getValue());
	
	return 0;
}

