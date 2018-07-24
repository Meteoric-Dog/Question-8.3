#include<iostream>
#include<stdio.h>

using namespace std;

//extern void sort(int *arr, int count, int(*order) (int, int));
//extern int CheckBigger(int a, int b);
//extern int CheckSmaller(int a, int b);

#ifdef __cplusplus
extern "C" {
#endif
	void sort(int *arr, int count, int(*order)(int, int));
	int CheckBigger(int a, int b);
	int CheckSmaller(int a, int b);
#ifdef __cplusplus
}
#endif

void display(int *arr, int count) {
	cout << "Array here:";
	for (int i=0; i < count; i++)
		cout << arr[i] << "  ";
	cout << endl;
}

int main() {
	int arr[] = { 9,5,8,4,5,8,5,2,10 };
	int amount = 9;
	sort(arr, amount, CheckBigger);
	display(arr, amount);
	system("pause");
	return 0;
}