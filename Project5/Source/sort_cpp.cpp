void sort(int *arr, int count, int(*order)(int, int)) {
	if (count == 0)
		return;
	if (!order)
		return;
	//if (!arr) return;
	int temp1 = count - 1, temp2 = 0, temp_arr;
	for (int i = 0; i < temp1; i++) {
		temp2 = temp1 - i;
		for (int j = 0; j < temp2; j++)
			if (order(arr[j], arr[j + 1])) {
				temp_arr = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp_arr;
			}
	}
}

int CheckBigger(int a, int b) { return a > b; }
int CheckSmaller(int a, int b) { return a < b; }