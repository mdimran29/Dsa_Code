#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
      int  j=1;
      char start = 'A';
        while (j<=n)
        {
            
            cout<<start<<" ";
            start++;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}