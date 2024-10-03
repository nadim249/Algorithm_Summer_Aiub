#include <iostream>
using namespace std;

void maxHeapify(int arr[], int n, int i) {

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    int startIdx = (n / 2) - 1;
    for (int i = startIdx; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
}

void insertMaxHeap(int arr[], int& n, int key) {
    n++;
    int i = n - 1;
    arr[i] = key;
    while (i != 0 && arr[(i - 1) / 2] < arr[i]) {
        swap(arr[i], arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(int arr[], int n) {
    cout << "Max Heap: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {9,8,7,6,7,2,6,5,1};
    int n = sizeof(a) / sizeof(a[0]);
   int newElement = 50;
   buildMaxHeap(a,n);
    cout << "Before insertion: ";
    printHeap(a, n);

   insertMaxHeap(a, n, newElement);

    cout << "After insertion: ";
    printHeap(a, n);

    return 0;
}
//Before insertion: Max Heap: 9 8 7 6 7 2 6 5 1 