#include "sorts.h"

void printList(int a[], int s) {
    for (int l = 0; l < s; l++)
        cout << a[l] << " ";
    cout << endl;

}

void swap(int& xp, int& yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}

void selectSort(int a[], int s) {
    cout << "\n3a.  SELECTION SORT\nORIGINAL LIST: ";
    printList(a, s);
    for (int i = 0; i < s; i++) {
        int smalli = i;
        for (int j = i; j < s; j++) {
            if (a[smalli] > a[j])
                smalli = j;
        }
        int temp = a[i];
        a[i] = a[smalli];
        a[smalli] = temp;
        printList(a, s);
    }
}


void insertSort(int a[], int s) {
    cout << "\n3b. INSERTION SORT\nORIGINAL LIST: ";
    printList(a, s);
    for (int i = 1; i < s; i++) {
        for (int j = i; j > 0; j--) {
            if (a[j] < a[j - 1]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
        printList(a, s);
    }
}



void bubbleSort(int arr[], int s)
{
    cout << "\n3c. BUBBLE SORT\nORIGINAL LIST: ";
    printList(arr, s);
    int i, j;
    for (i = 0; i < s - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < s - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        printList(arr, s);
    }
}


int binarySearch(int arr[], int s, int v) {
    cout << "\n5. BINARY SEARCH\n";
    int low = 0, high = s - 1, mid;
    while (high >= low) {
        mid = (low + high) / 2;
        cout << arr[mid] << " ";
        if (arr[mid] < v)
            low = mid + 1;
        else if (arr[mid] > v)
            high = mid - 1;
        else {
            cout << "The end\n";
            return mid;
        }
    }
    return 0;
}