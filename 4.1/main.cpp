# include <iostream >
#include "list"
#include "iterator"

using namespace std;
 int main ()
 {
 int n;
 std :: cin >> n ;
 list <int> a;
 for ( int i = 0 ; i < n ; ++ i){
     int v ;
     cin >> v ;
     a.insert(a.begin(), v);
 }
 copy(a.begin(), a.end(), ostream_iterator<int>(cout,  " "));
 std :: cout << '\n';

 }
