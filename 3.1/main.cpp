#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n ;
    vector<int> a;

    for ( int i = 0 ; i < n ; ++ i) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    int k;
    cin >> k ;
    int m = 0;
    for ( int i = 0 ; i < n ; ++ i) {
        if (a[i] < k )
        ++m;
    }

    vector<int> b;
    m = 0;
    for (int i = 0 ; i < n ; ++ i) {
        if (a[i] < k) {
            b.push_back(a[i]);
            m++;
        }
        //b[m++] = a[i];
    }
    for (int i = 0 ; i < m ; ++ i)
        cout << b[i] << ' ';



    return 0;
}
