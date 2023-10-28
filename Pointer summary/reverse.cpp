#include <iostream>
using namespace std;
void printArray(int* reeturnedPtr, int size);
int* reverse(int numbers[], int size);
int main() {
	int numbers[] = {1,2,3,4,5};
	int* returnedPtr = reverse(numbers, 5);
	printArray(returnedPtr,5);
}
void printArray(int* returnedPtr,int size) {
	for (int i = 0; i < size; i++) {
		cout << i << " "<<*(returnedPtr + i) << endl;
	}
}
int* reverse(int numbers[], int size) {
	int* answer = new int[5];
	for (int i = 0; i < size; i++) {
		*(answer + size - 1 - i) = numbers[i];
	}
	return answer;
}