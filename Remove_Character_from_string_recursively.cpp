#include <iostream>
#include <vector>
using namespace std;
string RemoveCharacter(string name,int i ,char c)
{
    if(i == name.length())
    {
        return name;
    }
    else if(c == name[i])
    {
        name.erase(name.begin()+i);
        return RemoveCharacter(name,i,c);
    }
    return RemoveCharacter(name,i+1,c);



}


main()
{
    string name = "Affan";
    char c = 'f';
    cout<< RemoveCharacter(name,0,c);

}