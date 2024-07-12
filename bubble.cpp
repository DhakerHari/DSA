#include <iostream>
using namespace std;

// Correct swap function to swap values, not pointers
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int a[], int num) {
    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    int arr[5] = {2, 4, 3, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
