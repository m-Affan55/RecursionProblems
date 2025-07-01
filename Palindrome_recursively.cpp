#include <iostream>
#include <vector>
using namespace std;
bool IsPalindrome(string str,int i ,int idx)
{
    if(i == idx+1)
    {
        return true;
    }
    if(str[i] == str[idx])
    {
        return IsPalindrome(str , i+1,idx-1);
    }
    return false;

}

main()
{
    int num = 123321;
    string str = to_string(num);
    cout<<IsPalindrome(str,0,str.length()-1);

}