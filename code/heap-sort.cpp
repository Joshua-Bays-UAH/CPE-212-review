#include <cstdio>
#include <cstdlib>
#include <ctime>

#define ArrSize 10

int main(){
	srand(time(0));
	int arr[ArrSize];
	for(int i = 0; i < ArrSize; i++){ arr[i] = rand() % 100; }
	for(int i = 0; i < ArrSize; i++){ printf("%i ", arr[i]); } printf("\n");
	
	for(int i = 0; i < ArrSize; i++){
		int max = arr[0]; int maxIndex = 0;
		for(int j = 1; j < ArrSize-i; j++){
			if(arr[j] > max){ max = arr[j]; maxIndex = j; }
		}
		int tmp = arr[0];
		arr[0] = max;
		arr[maxIndex] = tmp;
		printf("%i\n", arr[0]);
		/* "heapify" the array and remove the 0th index */
		for(int j = 0; j < ArrSize; j++){ arr[j] = arr[j + 1]; }
	}
	
	return 0;
}
