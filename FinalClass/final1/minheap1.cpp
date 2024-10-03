#include <iostream>
using namespace std;

void minHeapify(int arr[], int n, int i) {
    int lowest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[lowest])
        lowest = left;
    if (right < n && arr[right] < arr[lowest])
        lowest = right;

    if (lowest != i) {
        swap(arr[i], arr[lowest]);
        minHeapify(arr, n, lowest);
    }
}

void buildMinHeap(int arr[], int n) {
    int startIdx = (n / 2) - 1;
    for (int i = startIdx; i >= 0; i--) {
        minHeapify(arr, n, i);
    }
}

void insertMinHeap(int arr[], int& n, int key) {
    n++;
    int i = n - 1;
    arr[i] = key;
    while (i != 0 && arr[(i - 1) / 2] > arr[i]) {
        swap(arr[i], arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(int arr[], int n) {
    cout << "Min Heap: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {9, 8, 7, 6, 7, 2, 6, 10,3};
    int n = sizeof(a) / sizeof(a[0]);
   int newElement = 10;
buildMinHeap(a,n);
   cout << "Before insertion: ";
    printHeap(a, n);

   insertMinHeap(a, n, newElement);

    cout << "After insertion: ";
    printHeap(a, n);

    return 0;
}
