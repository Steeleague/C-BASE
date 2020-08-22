#include <iostream>
#include <ctime>
using namespace std;

int main(){
	srand(unsigned(time(NULL)));
	const int a = 30;

	int arr[a];
	for (int i = 0; i < a; i++) {
		arr[i] = rand() % 200 - 100;
		
			cout << "ABC [" << i << "] = " << arr[i] << endl;
		
	}
	
}


