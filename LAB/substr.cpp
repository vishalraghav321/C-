#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, substr;
    cout<<"Enter a string: ";
    getline(cin,str);

    cout<< "Enter a substring to delete: ";
    getline(cin, substr);
    int pos = str.find(substr);
    if(pos!= string::npos){
    str.erase(pos, substr.length());
    }
    cout<<"New String: "<<str;

return 0;    
}