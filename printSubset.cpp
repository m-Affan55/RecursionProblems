#include <iostream>
#include <vector>
using namespace std;
void printSubSets(vector<int> &vec, vector<int> &nums, int i)
{
    if (i == vec.size())
    {
        cout << "i = " << i << ", nums = [ ";
        for (int val : nums)
            cout << val << " ";
        cout << "]" << endl;

        return;
    }
    // include
    nums.push_back(vec[i]);
    printSubSets(vec, nums, i + 1);

    // BackTrack
    nums.pop_back();
    // Exclude
    printSubSets(vec, nums, i + 1);
}

main()
{
    vector<int> vec = {1, 2}, nums;

    printSubSets(vec, nums, 0);
}