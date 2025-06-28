#include <iostream>
#include <vector>
using namespace std;
bool BinarySearch(vector <int>vec ,int i ,int j,int target,int mid)
{
    mid = i + j / 2;
    if(target == vec[mid])
    {
        return true;
    }    
    if(target>vec[mid])
    {
        i = mid+1;
        return BinarySearch(vec , i , j,target,mid);
    }
    if(target < vec[mid])
    {
        j = mid-1;
        return BinarySearch(vec , i , j,target,mid);
    }
    else{
        return false;
    }
}
main()
{
    vector<int> vec = {1, 3, 4, 19, 11};
    int i = 0, j = vec.size() - 1,target=88,mid;
    cout<<BinarySearch(vec , i , j,target,mid);
}