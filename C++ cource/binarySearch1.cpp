#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2; //change mid bcz in term of value 2^31-1 give error in (start+end)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }

        if(key>arr[mid]){
            start = mid + 1;

        }
        
        else{
            end = mid - 1;

        }
        mid = start + (end-start)/2;

        
    }
    return -1;
}

int main() {
    int even[6] = {2,4,5,6,9,12};
    int odd[5] = {3,7,11,12,15};
    
    int evenIndex = binarySearch(even,6,9);

    cout<<"Index of 9 is " << evenIndex <<endl;
    int oddIndex = binarySearch(odd,5,20);
    
    cout<<"Index of 20 is " << oddIndex <<endl;
    return 0;
}