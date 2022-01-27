#include <iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;

    int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
        cout<<endl<<"Row "<<i<<endl;
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        delete [] arr[i];
    }

    delete [] arr;
    return 0;
}