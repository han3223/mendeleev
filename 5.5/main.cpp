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
    int num;
    cout << "Enter value num: ";
    cin >> num;
    for (int i = 0; i < num; ++i) {
        int number;
        cout << "Enter number: ";
        cin >> number;
        for (int j = 0; j < size; ++j) {
            if (number == arr[j])
                cout << "Number found in position:" << j+1;

        }
    }
    delete []arr;

    return 0;
}