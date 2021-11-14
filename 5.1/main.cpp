#include <iostream>
#include "array"
#include "numeric"
using namespace std;

typedef std :: array <int , 5 > MyArr ;

void f (MyArr &a)
{
    a[4] = 0;
}

int sum ( MyArr a )
{
    int sum = accumulate(a.begin(),a.end(),0);
    return sum;
}

int main ()
{
    MyArr a = {1 , 2 , 3 , 4 , 5};
    std :: cout << " Sum1 : " << sum ( a ) << '\n';
    f ( a ) ;
    std :: cout << " Sum2 : " << sum ( a ) << '\n';

    return 0;
}
