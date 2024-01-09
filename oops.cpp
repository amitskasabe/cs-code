#include <bits/stdc++.h>
using namespace std;
class Marks
{
public:
    int marks;
    Marks()
    {
        cout<<" this is a constructor";
    }
    void printMyMarks()
    {
        cout << marks;
    }
};
class Pen
{
public:
    string type;
    string name;
    string color;
    void printPen()
    {
        cout << type;
        cout << name;
        cout << color;
    }
};
class Mobile
{
};
int main()
{
    Marks();
    Pen prajakta;
    prajakta.name = "papersoft";
    prajakta.type = "Ball Pen";
    prajakta.color = "Blue";
    prajakta.printPen();
    return 0;
}