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
        cout << type << endl;
        cout << name << endl;
        cout << color << endl;
    }
};
class Mobile
{
public:
    int ram;
    int storage;
    string color;
    string company;
    void printMobile()
    {
        cout << ram << "GB" << endl;
        cout << storage << "GB" << endl;
        cout << color << endl;
        cout << company << endl;
    }
};
int main()
{
    Pen prajakta;
    prajakta.name = "papersoft";
    prajakta.type = "Ball Pen";
    prajakta.color = "Blue";
    prajakta.printPen();
    Pen shadap;
    shadap.name = "rolla";
    shadap.color = "shaipen";
    shadap.type = "blue";
    shadap.printPen();
    Mobile sam;
    sam.color = "silver";
    sam.ram = 3;
    sam.storage = 128;
    sam.company = "apple";
    sam.printMobile();

    return 0;
}