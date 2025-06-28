#include <iostream>
using namespace std;
void print(int num)
{
    if(num > 1)
    {
        cout<<num;
        num--;
        print(num);
    }
    else{
        cout<<1;
    }
}

main()
{
    int n = 4;
    print(n);
}