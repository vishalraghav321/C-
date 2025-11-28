#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int num =0;
    int space = 0;
    int special = 0;
    cout<<"Enter a string: ";
    getline(cin,str);
  
    for(char c:str){
        if(c>='0'&& c<='9'){
            num++;
        }
        else if(c==' '){
            space++;
        }
        else if(c>='A'&& c<='z'){
        }
        else{
            special++;
        }
    }

    cout<<"No. of digits:" <<num<<endl;
    cout<<"No. of spaces:" <<space<<endl;
    cout<<"No. of special characters:" <<special<<endl;

}