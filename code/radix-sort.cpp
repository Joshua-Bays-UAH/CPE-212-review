#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <vector>

int main(){
	srand(time(0));
	std::vector<int> arr;
	for(int i = 0; i < 25; i++){ arr.push_back(rand() % 100); }
	for(int i = 0; i < arr.size(); i++){ printf("%i ", arr[i]); }printf("\n");

	std::vector<int>r[10][11];
	for(int i = 0; i < arr.size(); i++){ r[arr[i]/10 % 10][0].push_back(arr[i]); }
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < r[i][0].size(); j++){
			printf("%i ", r[i][0][j]); r[i][(r[i][0][j]) % 10 + 1].push_back(r[i][0][j]);
		}
	}printf("\n");
	arr.clear();
	for(int i = 0; i < 10; i++){
		for(int j = 1; j < 11; j++){
			for(int k = 0; k < r[i][j].size(); k++){
				arr.push_back(r[i][j][k]);
			}
		}
	}
	
	printf("\nSorted output: \n");
	for(int i = 0; i < arr.size(); i++){ printf("%i ", arr[i]); }printf("\n");
	
	return 0;
}
