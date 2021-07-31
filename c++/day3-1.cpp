#include <iostream>
using namespace std;
void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void printArray(int arr[], const int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
        }
    cout << endl;
}

void selectionSort(int arr[], const int length) {
    for (int startIdx = 0; startIdx < length - 1; ++startIdx) {
        int smallestIdx = startIdx;
        for (int currentIdx = startIdx + 1; currentIdx < length; ++currentIdx) {
            if (arr[smallestIdx] > arr[currentIdx]) {
                smallestIdx = currentIdx;
            };
        }
        int temp = arr[smallestIdx];
        arr[smallestIdx] = arr[startIdx];
        arr[startIdx] = temp;
    };
    printArray(&arr[0], length);
}

// BubbleSort
void bubbleSort(int arr[], const int length) {
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printArray(&arr[0], length);
};

int main(void) {
    // 선택정렬
    const int length = 5;
    int array[length] = { 3, 5, 2, 1, 4 };

    selectionSort(&array[0], length);
    bubbleSort(&array[0], length);
    return 0;
}