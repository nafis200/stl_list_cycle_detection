#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l(20,3);
    cout << l.size() << "\n";
    // list dosent print by index.

    for(auto it = l.begin(); it != l.end(); it++){
        cout << *it << "\n";
    }
}
