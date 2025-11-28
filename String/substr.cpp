#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, substr;
    cout<<"Enter a string: ";
    getline(cin,str);

    cout<< "Enter a substring to delete: ";
    getline(cin, substr);

    cout<<"Substring is placed at: "<< str.find(substr)<<endl;
    str.erase(str.find(substr), substr.length());

    cout<<"New String: "<<str;

    
}