#include <iostream> 
#include <vector> 

using namespace std; 

// A vector is similar to an array but which has more advanced features (not taught here) and for which you
// need not know the size apriori 
int main() 
{ 
    vector <int> a;
    vector <float> b;

    // to set the values
    for(int i=0; i<100; i++)
    {
        a.push_back(i);
        b.push_back(i/10);
    }

    // to print out 
    for(auto i=a.begin();i!=a.end();i++)
    {
        cout<<*i<<endl;
    }
    return 0;
}
