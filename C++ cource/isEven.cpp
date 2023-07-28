#include <iostream>
using namespace std;
bool isEven(int a){
    return (a%2==0);
}
int main() {
    int num;
    cin>>num;
    if(isEven(num)){
        cout<< num <<" no is even "<<endl;
    }
    else
        cout<< num <<"  no is odd "<<endl;
    return 0;
}