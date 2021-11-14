#include <iostream>
#include "algorithm"
using namespace std;
int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; ++i) {
        //cin >> arr[i];
        arr[i] = rand()%100;
        cout << " ";
    }
    cout << "Source array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    sort(arr, arr + size);

    cout << "Sort array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    delete []arr;

    return 0;
}
