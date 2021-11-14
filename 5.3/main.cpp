#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; ++i) {
        //cin >> arr[i];
        arr[i] = rand()%1000000;
        cout << " ";
    }
    cout << "Source array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sort array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete []arr;

    return 0;
}
