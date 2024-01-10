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
        cout << type << endl;
        cout << name << endl;
        cout << color << endl;
    }
};
int main()
{
    Marks();
    Pen prajakta;
    prajakta.name = "papersoft";
    prajakta.type = "Ball Pen";
    prajakta.color = "Blue";
    prajakta.printPen();
    Pen siyana;
    siyana.name = "airmail";
    siyana.type = "ink pen";
    siyana.color = "blue";
    siyana.printPen();
    Mobile prajakta1;
    prajakta1.name = "samsung";
    prajakta1.color = "blue";
    prajakta1.type = "android";
    prajakta1.price = 20000;
    prajakta1.printMobile();
    return 0;
}