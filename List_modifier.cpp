#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l(2,3);
    list<int>l2;
    l2 = l;
    l2.push_back(4);
    l2.push_front(4);

    // l2.pop_back();
    // l2.pop_front();

    // insert at any position

    //  4 3 3 4

    //  so list become 4 100 3 3 4

    //  insert 100 between 4 and 3 first  1 index

    l2.insert(next(l2.begin(),1),100);

    // cout << *next(l2.begin(),1) << "\n";


    for(auto val : l2){
        cout << val << "\n";
    }
}
