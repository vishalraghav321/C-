#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "banana";
    int count = 0;

    size_t pos = s.find("ana");
    while (pos != string::npos)
    {
        count++;
        pos = s.find("ana", pos + 1);
    }
    cout << count;
    return 0;
}