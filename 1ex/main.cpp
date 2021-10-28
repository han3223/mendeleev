#include <iostream>
using namespace std;

int main() {
    char arrString[] = "Hello";
    for (int i = 0; i < sizeof(arrString); ++i) {
        arrString[i] = tolower(arrString[i]);
    }

    for (int i = 0; i < sizeof(arrString); ++i) {

        for (int j = i+1; j < sizeof(arrString); ++j) {
            if ((isalpha(arrString[i]) && isalpha(arrString[j])) && (arrString[i] == arrString[j])){
                i = sizeof(arrString);
                j = sizeof(arrString);
                cout << "Not Isogramm";
            }
        }
    }


    return 0;
}
