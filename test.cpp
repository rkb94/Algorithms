#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int main(void){
	int arr[] = {3, 4, 1, 5, 2};
	array<int, 7> myarr = {3, 4, 1, 5, 2};
	sort(myarr, myarr.size());
	for (int i = 0; i < myarr.size(); i++){
		printf("%d ", myarr[i]);
	}
}