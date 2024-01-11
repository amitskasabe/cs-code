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

/*

vector<int> v = {1,1,1,2,2,3,3,4,1,1,8,8,8,8};

map<int,int> mp;
map<element , count>
map<1,5>
map<2,2>
map<3,2>
map<4,1>
map<8,4>
*/