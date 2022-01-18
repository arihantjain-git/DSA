#include<iostream>
using namespace std;

int main(){
    int n,q,page;
    cin>>n>>q;
    int arr[n];
    cout<<"Enter pages:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<q;j++){
        cin>>page;
        cout<<"Query "<<j+1<<": "<<arr[page-1]<<endl;
    }

    return 0;
}