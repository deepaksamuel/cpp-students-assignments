#include <iostream> 

using namespace std; 

int main() 
{ 
    int a=100;
    int b=150;

    if(a==100 && b==150)
    {
        cout<<"a is equal to 100 and b is equal to 150"<<endl;
    }
    if(a==150 && b<200)
    {
        cout<<"a is equal to 150 and b is less than 200"<<endl;
    }
    if(a!=150)
    {
        cout<<"a is not equal to 150"<<endl;
    }
    if(a==100 || b==100)
    {
        cout<<"either a or b is equal to 100"<<endl;
    }
    return 0;
}

