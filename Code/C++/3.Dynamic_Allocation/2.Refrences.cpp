#include<iostream>
using namespace std;

void passbyvalue(int i){
    i++;
}

void passbyrefrence(int &i){
    i++;
}

int main(){

    int i = 100;
    passbyvalue(i);
    cout<<"Pass by value: "<<i<<endl; // Pass by value does not change value of i

    passbyrefrence(i);
    cout<<"Pass by refrence: "<<i<<endl; // Pass by refrence changes the value of i

    int j = i;
    cout << "i = " << i << " and j = " <<j<<endl;
    j = 20;
    cout << "i = " << i << " and j = " <<j<<endl;

    int &k = i;
    cout << "i = " << i << " and k = " <<k<<endl;
    k = 20;
    cout << "i = " << i << " and k = " <<k<<endl;


    return 0;
}