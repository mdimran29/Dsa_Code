#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    
    int s = 0, e = n-1 ;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if (key>arr[mid]){//right
            s = mid + 1;
        }
        else if (key<arr[mid]){//left
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n - 1 ;
    int mid = s + (e - s)/2;
    int ans = -1;
    while (s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if (key>arr[mid]){
            s = mid + 1;
        }
        else if (key<arr[mid]){
            e = mid - 1;
            }
            mid = s + (e - s)/2;
        
    }
    return ans;
}

int main() {
    
    int even[11] = {1,2,2,3,3,3,3,3,3,3,5};
    cout<<"The occurance of first 3 at index " << firstOcc(even,11,3) << endl;
    
    cout<<"The occurance of last 3 at index " << lastOcc(even,11,3) ;


    return 0;
}