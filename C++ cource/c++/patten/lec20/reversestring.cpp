#include <iostream>
using namespace std;
void reverse(char name[],int n){
    int s = 0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
     
}

int main() {
    char name[20];
    cout << "Enter the name"<<endl;
    cin>>name;
    int len = name;
    reverse(name,len);

    cout<<"Enter your name ";
    cout <<name<<endl;
    return 0;
}