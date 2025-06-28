//Check if the array is sorted or not
#include <iostream>
#include <vector>
using namespace std;
bool check(vector <int> vec,int n)
{
    if(n == 1 || n== 0)
    {
        return true;
    }
    if(vec[n-1] >= vec[n-2])
    {
        return check(vec , n-1);
    }
    else{
        return false;
    }
    
}
main()
{
    vector <int> vec = {1,7,3,4,5};
    cout<<check(vec, vec.size());

}