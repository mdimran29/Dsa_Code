#include <iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int i, int j){
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int Maxrowsum(int arr[][3],int i,int j){
    int maxi = INT8_MIN;
    int rowIndex = -1;
        for(i=0; i<3; i++){
            int sum =0;
        for(j=0; j<3; j++){
        
            sum = sum + arr[i][j];
            
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }

}
        cout << "The maximum sum is "<<maxi <<endl;
        return rowIndex;
}
int main() {
    
    int arr[3][3];
    int i,j;
    cout<<"Enter the element"<<endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin>> arr[j][i];
        }
    }
    int sum =0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<< arr[i][j] <<" ";
        sum = sum + arr[i][j];
            
        }
        // cout<< "sum of row"<<sum<<" " ;
        cout<<endl;
    }
    

// int target;
// cin >> target;
// if(isPresent(arr,target,3,4)){
//     cout <<"Element found";
// }
// else
//     cout <<"Element not found";

int ansIndex = Maxrowsum(arr,3,3);
cout << "Maximum value at the index" << ansIndex<<endl;
    return 0;
}