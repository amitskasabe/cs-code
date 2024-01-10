#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp.insert({" Math ", 90});
    mp.insert({" English ", 20});
    mp.insert({" History ", 0});

    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->first << " = " << itr->second;
    }

    return 0;
}