#include <iostream>
#include <vector>
using namespace std;
main()
{
    vector<int> vec = {1, 3, 4, 19, 11};
    int i = 0, j = vec.size() - 1;
    int mid, target = 9;
    while (true)
    {
        mid = (i + j) / 2;
        if (target == vec[mid])
        {
            cout << "true";
            break;
        }
        if (target > vec[mid])
        {
            i = mid;
        }
        else
        {
            j = mid;
        }
    }
}