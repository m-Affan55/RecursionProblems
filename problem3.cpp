#include <iostream>
using namespace std;
int sum(int num)
{
    if(num ==  0)
    {
        return 0;
    }
    return num + sum(num-1);



}
main()
{
    int n = 4; 
    cout <<sum(n);
}