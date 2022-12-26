#include<iostream>
#include<math.h>
using namespace std;

template<class T>

T abst(T a)
{
    return abs(a);
}

int main()
{
    cout << abst(-3) << endl;
    cout << abst(34.38) << endl;

    return 0;
}