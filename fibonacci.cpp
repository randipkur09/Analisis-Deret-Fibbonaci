#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printArray(const vector<int>& arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90, 78, 56, 45, 23, 89, 67, 43, 32, 21, 19, 5};

    cout << "Original array: ";
    printArray(arr);

    vector<int> bubbleSortedArray = arr;
    bubbleSort(bubbleSortedArray);
    cout << "Bubble Sorted array: ";
    printArray(bubbleSortedArray);
}
