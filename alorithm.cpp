#include <bits/stdc++.h>
using namespace std;
void addElements()
{
    vector<int> evenNumbers;
    for (int i = 0; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            evenNumbers.push_back(i);
        }
    }

    for (int i = 0; i < evenNumbers.size(); i++)
    {
        cout << evenNumbers[i] << " " << endl;
    }
}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.pop_back();
    v.push_back(20);
    v.push_back(20);
    v.push_back(20);

    // v.insert(v.size(), 20);
    v.insert(v.begin() + 2, 100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    addElements();
    return 0;
}