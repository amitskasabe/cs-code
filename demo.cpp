#include <bits/stdc++.h>
using namespace std;
vector<int> sayHello()
{
    return {1, 2, 3};
}
int main()
{
    vector<int> result;
    result = sayHello();
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}