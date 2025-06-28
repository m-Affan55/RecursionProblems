#include <iostream>
using namespace std;

int Fibo(int term)
{
    if(term == 0 || term == 1)
    {
        return term;
    }
    
    return Fibo(term-1) + Fibo(term - 2); 
}
main()
{
    int term = 5;
    cout<<Fibo(term);
}