#include <iostream>
#include <string>
using namespace std;

int main() {
   int n;
   cout << "enter n:" << ' ';
   cin >> n;

    string text = "23123515";
    for (int i = 0; i < (text.length()-(n-1)); ++i) {
        cout << text.substr(i, n) << ' ';
    }

    return 0;
}
