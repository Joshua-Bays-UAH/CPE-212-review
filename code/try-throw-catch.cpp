#include <cstdio>

int main(){
	try{
		throw 2;
		printf("Print me\n");
	}
	catch(int x){ printf("Error of type int!\n"); return 1; }
	catch(...){ printf("Error of a different type!\n"); return 1; }
	return 0;
}
