    #include <iostream>
    using namespace std;
    int main() {
        int row=1;
        int n;
        cin>>n;
        while (row<=n)
        {
            int colm=1;
            while (colm<=row)
            {
                cout<<"*"<<" ";
                colm++;

            }
            cout<<endl;
            row++;
            
        }
        
        return 0;
    }