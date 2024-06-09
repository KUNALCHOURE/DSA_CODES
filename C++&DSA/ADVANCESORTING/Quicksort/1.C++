#include<bits/stdc++.h>
using namespace std;

int pivotindex(int arr[], int s, int l) {
    int pivot = arr[s];
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

int ksmallestele(int arr[], int s, int l, int k) {
    int pi = pivotindex(arr, s, l);
    if (pi + 1 == k) {
        return arr[pi];
    } else if (pi + 1 < k) {
        return ksmallestele(arr, pi + 1, l, k);
    } else {
        return ksmallestele(arr, s, pi - 1, k);
    }
}

int main() {
    int arr[] = {5, 7, 9, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    cout << ksmallestele(arr, 0, n - 1, k) << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
