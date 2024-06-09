#include <bits/stdc++.h>
using namespace std;

int pivotindex(int arr[], int s, int l) {
    int mid = s + (l - s) / 2; // Calculate the middle index
    int pivot = arr[mid];

    // Move pivot to the start
    swap(arr[s], arr[mid]);

    int count = 0;
    for (int i = s + 1; i <= l; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }
    int pi = count + s;
    swap(arr[s], arr[pi]);

    int i = s;
    int j = l;
    while (i < pi && j > pi) {
        while (arr[i] <= pivot && i < pi) {
            i++;
        }
        while (arr[j] > pivot && j > pi) {
            j--;
        }
        if (i < pi && j > pi) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pi;
}

void quicksort(int arr[], int s, int l) {
    if (s >= l) return;

    int pi = pivotindex(arr, s, l);
    quicksort(arr, s, pi - 1);
    quicksort(arr, pi + 1, l);
}

int main() {
    int arr[] = {5, 7, 9, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
