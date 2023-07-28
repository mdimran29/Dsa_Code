#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main() {
    int arr[10]={12,3,-2,4,15,5,6,-8,1,19};
    cout<< "Enter the element search for" <<endl;

    int key;
    cin>> key;
    bool found=search(arr,10,key);

    if(found){
        cout<<"element is present"<<endl;
    }
    else
    cout<<"element is absent"<<endl;

    return 0;
}