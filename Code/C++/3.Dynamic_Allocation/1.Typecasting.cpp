#include<iostream>
using namespace std;

int main(){

    int i = 65;
    char ch = i; // Implicit Typecasting

    int *p = &i;
    char *pc = (char*)p; // Explicit Typecasting

    cout << "p = " << p << endl; // Address of i
    cout << "pc = " << pc << endl; // Address of i typecasted 
    cout << "*p = " << *p << endl; // int pointer of i derefrenced
    cout << "*pc = " << *pc << endl; // char pointer of i derefrenced
    cout << "*(pc+1) = " << *(pc+1)<< endl; // null pointer
    cout << "*(pc+2) =  " <<*(pc+2)<< endl; // null pointer
    cout << "*(pc+3) = " << *(pc+3)<< endl; // null pointer




    return 0;
}