#include<bits/stdc++.h>
using namespace std;
class cars
{
public:
    string name;
    string color;
    int price;
    string varient;
    void printcars()
    {
        cout<<"name: "<<name<<endl<<" color: "<<color<<endl<<" price: "<<price<<endl<<" varient: "<<varient;
    }
};
int main()
{
    cars rolls;
    rolls.name = "rolls_royce";
    rolls.color="white";
    rolls.price = 60000000;
    rolls.varient = "disel";
    rolls.printcars();
    return 0;
}