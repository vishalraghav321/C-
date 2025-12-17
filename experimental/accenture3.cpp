#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isAnagram(string s1, string s2)
{
     if (s1.size() != s2.size())
    {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

   
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1.at(i) != s2.at(i))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1 = "ashfda", s2 = "ashda";
    cout << isAnagram(s1, s2);
}
