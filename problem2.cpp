#include <iostream>
using namespace std;
int Fibonacci(int fibo)
{
    if(fibo == 0 )
    {
        return 1;
    }
    return fibo * Fibonacci(fibo - 1);
}
main()
{
    int fibo = 5;
    cout<<Fibonacci(fibo);

}