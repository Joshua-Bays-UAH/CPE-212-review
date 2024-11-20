#include <cstdio>

class baseClass{
	public:
		baseClass();
		virtual int getX();
		int getY();
	private:
	protected:
		int x, y;
};

class derivedClass : public baseClass{
/* Using the public keyword allows all public members to be inherited */
	public:
		derivedClass();
		int getX();
	private:
	protected:
};

int main(){
	baseClass b;
	derivedClass d;
	printf("%i %i\n", b.getX(), b.getY());
	printf("%i %i\n", d.getX(), d.getY());
	return 0;
}

baseClass::baseClass(){ x = 2; y = 2; }
int baseClass::getX(){ printf("Getting x\n"); return x; }
int baseClass::getY(){ return y; }

/* Redefine the member functions */
derivedClass::derivedClass(){ x = 3; y = 3; }
int derivedClass::getX(){ baseClass::getX(); return -1*x; }
