#include <iostream>
#include <vector>
using namespace std;
int Sum_Array(vector<int>vec ,int i,int sum)
{
    if(i == vec.size())
    {
        return sum;
    }
    sum = sum + vec[i];
    return Sum_Array(vec,i+1,sum);
}
main()
{
    vector<int>vec = {1,2,3,4,9};
    cout<<Sum_Array(vec,0,0);
}