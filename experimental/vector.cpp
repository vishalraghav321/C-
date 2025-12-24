#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n, q,l,j,a,k;
    cin >> n >> q;
    vector<vector<int>> vec;
     for(int i =0; i<n; i++){
        cin>>a;
         for(int j =0; j<a; j++){
            cin>>l;
        vec[i].push_back(l);
    }
    }
    for(int i =0; i<q; i++){
        cin>>j>>k;
        cout<<vec[j][k]<< endl;
    }
    return 0;
}