#include <cstdio>

int main(){
	int arr[6] = {-1, 7, 12, 17, 3, 4};
	int s = 12;
	for(int i = 0; i < 6; i++){
		if(arr[i] == s){
			printf("%i is at index %i\n", s, i);
			break;
		}
	}
}
