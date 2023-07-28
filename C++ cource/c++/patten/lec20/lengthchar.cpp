#include <iostream>
using namespace std;
void reverse(char name[],int n){
    int s = 0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}


int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main() {
    char name[20];
    cout << "Enter the name"<<endl;
    cin>>name;
    cout<<"Enter your name ";
    cout <<name<<endl;
    int len = getLength(name);
    cout<<"length:"<<len<<endl;
    reverse(name,len);
    cout << "reverse name:"<<name;

    return 0;
}