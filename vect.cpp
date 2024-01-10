#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return;
}
int main()
{
    vector<int> v = {1, 2, 3, 4};
    printVector(v);
    return 0;
}