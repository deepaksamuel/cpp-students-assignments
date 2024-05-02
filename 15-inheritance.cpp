#include <iostream>
using namespace std; // this line is mandatory in most of the cpp programs.


class classA
{
public:
    classA(float x, float y)
    {
        a = x;
        b = y;
        cout << "constructor called" <<'\t'<<a<<b<< endl;
    }

    ~classA()
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



class classB : public classA
{
    public:
    classB(float aa, float bb) : classA(aa, bb)
    {}
   
    float getProduct()
    {
        return a*b;
    }
};

int main()
{
    classA* mca = new classA(1,1);
    classB* mcb = new classB(2,2);



    cout << mca->getSum() << endl;
    cout << mcb->getProduct() << endl;
}

