#include <iostream>
using namespace std;
#include<set>


int main() {
    set<int > s;
    s.insert(5);
    s.insert(12);
    s.insert(1);
    s.insert(9);
    s.insert(2);
    s.insert(6);
for(auto i:s){
    cout<< i<<endl;
}

    return 0;
}