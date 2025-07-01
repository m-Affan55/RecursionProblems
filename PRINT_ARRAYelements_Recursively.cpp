#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<int>vec,int i)
{
    if(i == vec.size())
    {
        return ;
    }
    cout<<vec[i];
    printArray(vec,i+1);
}

main()
{
    vector<int>vec = {1,2,3,4,9};
    printArray(vec,0);  
}