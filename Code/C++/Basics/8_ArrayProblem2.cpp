#include<iostream>
using namespace std;

int main(){
    int n,count;
    cout<<"Enter number of inputs: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter numbers: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%3 == 0){
            count++;
        }
    }
    if(count == 0){
        cout<<"No triplet present";
    }
    else{
        cout<<endl<<"Number of Triplets: "<<count<<endl;
    }
     for(int i=0;i<n;i++){
         if((arr[i]%3) == 0){
             cout << arr[i] << " ";
         }
    }
    cout<<endl;
    return 0;
}