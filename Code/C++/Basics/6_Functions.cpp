#include<iostream>
using namespace std;

bool equallyDistributed(int fruits){
    if(fruits%11==1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int fruits,full_moons = 0;
    cout << "Enter number of fruits: ";
    cin >> fruits;
    while(!equallyDistributed(fruits)){
        full_moons+=1;
        fruits=2*fruits;
    }

    cout<<full_moons<<"  "<<fruits<<endl;

    return 0;
}