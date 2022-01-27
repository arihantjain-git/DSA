#include<iostream>
using namespace std;

int main(){

    int *p = new int;
    *p  = 10;
    cout<<*p<<endl;

    int n;
    cin>>n;
    int *arr = new int[n];
    cout<<sizeof(arr)<<endl;

    int n1;
    cout << "Enter size of array: ";
    cin>>n1;
    int *arr1 = new int[n1];
    cout<<"Enter numbers in the array: "<<endl;
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    cout<<"Numbers entered: "<<endl;
    for(int i=0;i<n1;i++){
        cout << arr1[i] << "  ";
    }

    delete p;
    delete [] arr1;
    delete [] arr;

    return 0;
}