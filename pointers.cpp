#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *x = &a;
    cout << x;
    cout<<endl;
    x = x + 10;
    cout << x;

    int *ptr = 0;

    return 0;
}