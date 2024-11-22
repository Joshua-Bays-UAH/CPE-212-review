#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <vector>

int main(){
	srand(time(0));
	std::vector<int> arr;
	for(int i = 0; i < 10; i++){ arr.push_back(rand() % 100); }

	int tmp;
	for(int i = 0; i < arr.size(); i++){
		for(int j = 0; j < arr.size(); j++){ printf("%i ", arr[j]); }printf("\n");
		
		for(int j = 0; j < arr.size() - 1 - i; j++){
			if(arr[j] > arr[j+1]){
				tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	printf("\nSorted output: \n");
	for(int i = 0; i < arr.size(); i++){ printf("%i ", arr[i]); }printf("\n");
	
	return 0;
}

