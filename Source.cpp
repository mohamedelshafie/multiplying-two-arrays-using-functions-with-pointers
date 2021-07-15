//multiplying two arrays using functions with pointers
#include <iostream>
using namespace std;
int *apply_all(int arr1[],int size1,int arr2[],int size2);
void print(int arr[],int size);

int main(){
	int array1[] = { 1, 2, 3, 4, 5 };
	int array2[] = { 10, 20, 30 };
	cout << "first array: ";
	print(array1, 5);
	cout << "second array: ";
	print(array2, 3);
	int *results = apply_all(array1, 5, array2, 3);
	cout << "Result :";
	print(results, 15);
}
int *apply_all(int arr1[], int size1, int arr2[], int size2){
	int *r = new int[size1*size2] ;
	int position = 0;
	for (int i = 0; i < size1; i++){
		for (int j = 0; j < size2; j++){
			r[position] = arr1[i] * arr2[j];
			position++;
		}
	}
	return r;
}
void print(int arr[], int size){
	for (int i = 0; i < size; i++){
		cout << arr[i]<<" ";
	}
	cout << endl;
}