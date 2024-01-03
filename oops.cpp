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
    string name;
    string color;
    string type;
    int price;
    void printMobile()
    {
        cout << name << endl;
        cout << color << endl;
        cout << type << endl;
        cout << price << endl;
    }
} ;
int main()
{
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