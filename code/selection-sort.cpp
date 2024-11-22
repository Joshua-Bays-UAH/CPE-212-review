#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <vector>

int main(){
	srand(time(0));
	std::vector<int> arr;
	for(int i = 0; i < 10; i++){ arr.push_back(rand() % 100); }

	int swapIndex; int tmp; int min;
	for(int i = 0; i < arr.size(); i++){
		for(int j = 0; j < arr.size(); j++){ printf("%i ", arr[j]); }printf("\n");
		
		swapIndex = i;
		min = arr[i];
		for(int j = i + 1; j < arr.size(); j++){
			if(arr[j] < min){
				min = arr[j];
				swapIndex = j;
			}
		}
		tmp = arr[i];
		arr[i] = min;
		arr[swapIndex] = tmp;
	}
	
	printf("\nSorted output: \n");
	for(int i = 0; i < arr.size(); i++){ printf("%i ", arr[i]); }printf("\n");
	
	return 0;
}
