#include <iostream> 

using namespace std; 

// a function is defined like so:
int average(int a, int b)
{
    return (a+b)/2;
}

int main() 
{ 
    int x,y; //declaring two integers 
    cout<<"Enter first number: "<<endl;
    cin>>x;
    cout<<"Enter second number: "<<endl;
    cin>>y;
    float avg = average(x,y);
    cout<<"The average of the numbers is: "<<avg<<endl;
    
    return 0;
}

