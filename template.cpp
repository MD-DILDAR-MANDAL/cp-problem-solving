#include <iostream>
using namespace std;

template <class X>
void swapargs(X &a, X &b)
{
    X tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int i = 10, j = 20;
    float x = 10.1, y = 23.3;
    char a = 'x', b = 'y';
    cout << "Original i, j: " << i << " " << j << '\n';
    cout << "Original x, y: " << x << " " << y << '\n';
    cout << "Original a, b: " << a << " " << b << '\n';
    swapargs(i, j);
    swapargs(x, y);
    swapargs(a, b);
    cout << "now i, j: " << i << " " << j << '\n';
    cout << "now x, y: " << x << " " << y << '\n';
    cout << "now a, b: " << a << " " << b << '\n';
    return 0;
}