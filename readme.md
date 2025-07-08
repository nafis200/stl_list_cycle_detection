list<int>l(20,3);
list<int>l2(l);
int arr[] = {1,2,3,4};
list<int>l3(arr, arr + 4);

l3.clear();

l2.resize(2);
// list dosent print by index.

    // for(auto it = l.begin(); it != l.end(); it++){
    //     cout << *it << "\n";
    // }

for(auto val : l2){
        cout << val << "\n";
    }

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


<!-- Erase -->

#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l = {10,20,30,40,50};

    // erase

    l.erase(next(l.begin(),1));


    for(auto val : l){
        cout << val << "\n";
    }
}

# Multiple Erase

list<int>l = {10,20,30,40,50};

    // erase

    l.erase(next(l.begin(),1),next(l.begin(),4));


    for(auto val : l){
        cout << val << "\n";
    }

# replace

 list<int> l = {10, 20, 30, 40, 50};

    replace(l.begin(), l.end(), 20, 30);

    for (auto val : l)
    {
        cout << val << "\n";
    }

# find function


#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 50};

    auto it = find(l.begin(),l.end(),20);

    if(it != l.end()){
        cout << "Found\n";
    }
    else{
        cout << "Not found\n";
    }

    for (auto val : l)
    {
        cout << val << "\n";
    }
}

# remove

list<int> l = {10, 20, 30, 40, 50,10};

    l.remove(10);

    for (auto val : l)
    {
        cout << val << "\n";
    }

# sort function

list<int> l = {10, 20, 30, 40, 50,10};

    l.sort();
    l.sort(greater<int>());

    for (auto val : l)
    {
        cout << val << "\n";
    }

# unique pasapasi index e kaj kore sort thakte hoy always

 list<int> l = {10, 20, 30, 40, 50,10};

    l.sort();
    l.unique();

    for (auto val : l)
    {
        cout << val << "\n";
    }

# front and back

cout << l.front() << " " << l.back() << "\n";