#include <bits/stdc++.h>
using namespace std;
class father
{
public:
    void skincolor()
    {
        cout << "brown" << endl;
    }
};
class mother
{
public:
    void eyecolor()
    {
        cout << "light blue" << endl;
    }
};
class child : public father, public mother
{

};
int main()
{
    child ramesh;
    ramesh.eyecolor();
    ramesh.skincolor();
    return 0;
}