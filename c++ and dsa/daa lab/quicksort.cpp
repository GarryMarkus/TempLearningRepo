#include <bits/stdc++.h>
using namespace std;


void partition(vector<int> &arr, int low, int high, int &pivotIndex) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    pivotIndex = i + 1;
} 

void quicksort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pivotIndex;
        partition(arr, low, high, pivotIndex);
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}

int main() {
    vector<int> arr;
    int n;

    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}