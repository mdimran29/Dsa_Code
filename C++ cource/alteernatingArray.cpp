#include <iostream>
using namespace std;
void swapalternating(int arr[],int size){
for(int i=0; i<size;i+=2){

if(i+1<size){
        swap(arr[i],arr[i+1]);
        
    }

}
    
}
void printArray(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

int main() {
    int  arr[6]= {22,3,1,-4,6,9};
    int brr[5]={32,4,1,6,-2};
    swapalternating(arr,6);
    swapalternating(brr,5);
    printArray(arr,6);
    printArray(brr,5);

    return 0;
}