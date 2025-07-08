#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l(20,3);
    list<int>l2(l);
    int arr[] = {1,2,3,4};
     list<int>l3(arr, arr + 4);
    cout << l.size() << "\n";
    // list dosent print by index.

    // for(auto it = l.begin(); it != l.end(); it++){
    //     cout << *it << "\n";
    // }

    l3.clear();

    l2.resize(2);

    for(auto val : l2){
        cout << val << "\n";
    }
}
