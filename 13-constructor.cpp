#include <iostream>
using namespace std; // this line is mandatory in most of the cpp programs.

class MyClass
{
public:
    MyClass(float x, float y)
    {
        a = x;
        b = y;
        cout << "constructor called" << endl;
    }

    ~MyClass()
    {
        cout << "destructor called" << endl;
    }

public:
    float a;
    float b;

private:
    float c;

public:
    float getSum()
    {
        return a * b;
    }
};

int main()
{
    MyClass mc(1,1);

    mc.a = 2;
    mc.b = 1;
    // mc.c=2; // this will not work

    cout << mc.getSum() << endl;
}




