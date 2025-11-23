#include <iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    int x;
    vector<int> a;

    while(ss>>x){
        a.push_back(x);  
}

for(int n:a){
    cout<<n<<" ";
}
return 0;
}

//Single Line
#include <iostream>
#include<sstream>
#include<string>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    int x;
    while(ss>>x){
        cout<<x<<" ";
        
    }

    return 0;
}
