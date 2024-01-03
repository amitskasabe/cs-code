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
        cout<<endl;
    }
};
class Mobile
{
public:
    string type;
    string color;
    int ram;
    string name;
    int price;
    void printMobile()
    {
        cout<<type<<endl;
        cout<<color<<endl;
        cout<<ram<<"gb"<<endl;
        cout<<name<<endl;
        cout<<price<<endl;
    }
};
int main()
{
    Pen prajakta;
    prajakta.name = "papersoft";
    prajakta.type = "Ball Pen";
    prajakta.color = "Blue";
    prajakta.printPen();
    Pen p;
    p.name = "unomax";
    p.type = "Ball Pen";
    p.color = "blue";
    p.printPen();
    Mobile parth;
    parth.name = "asus";
    parth.type = "Android";
    parth.color = "silver";
    parth.ram = 4;
    parth.price = 13000;
    parth.printMobile();

    return 0;
}