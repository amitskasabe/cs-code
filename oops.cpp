#include <bits/stdc++.h>
using namespace std;
class Marks
{
public:
    int marks;
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
int main()
{
    Pen prajakta;
    prajakta.name = "papersoft";
    prajakta.type = "Ball Pen";
    prajakta.color = "Blue";
    prajakta.printPen();
    return 0;
}