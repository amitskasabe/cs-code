#include <bits/stdc++.h>
using namespace std;
class Database
{
public:
    Database()
    {
        cout << " Connected ";
    }
};
class StringCls
{
public:
    string str;
    int stringLenght()
    {
        int i = 0;
        while (str[i] != '\0')
        {
            i++;
        };

        return i;
    }
};
int main()
{
    StringCls strs;
    strs.str = "amit kasabe";
    cout << strs.stringLenght();

    string myName = "amit";


    return 0;
}