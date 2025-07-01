#include <iostream>
#include <vector>
using namespace std;
int MaxArray(vector<int>vec,int i,int max)
{
    if(i == vec.size())
    {
        return max;
    }
    if(max < vec[i])
    {
        max = vec[i];
    }
    return MaxArray(vec,i+1,max);
    
}

main()
{
    vector<int>vec = {1,2,3,4,9};
    cout<<MaxArray(vec,0,0);
}