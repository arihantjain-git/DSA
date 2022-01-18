#include<iostream>
using namespace std;

int main(){

    int x1,y1,x2,y2,a1,b1,a2,b2,intersect_area,tot_area;
    cout<<"Enter cordinates of rectangle 1: "<<endl;
    cin>>x1>>y1>>x2>>y2;
    cout<<endl<<"Enter cordinates of rectangle 2:"<<endl;
    cin>>a1>>b1>>a2>>b2;

    if(b1<y2&&a1<x2){
        intersect_area = (x2-a1)*(y2-b1);
        tot_area = ((x2-x1)*(y2-y1))+((a2-a1)*(b2-b1))-intersect_area;
    }
    else{
        tot_area = ((x2-x1)*(y2-y1))+((a2-a1)*(b2-b1));
    }

    cout<<endl<<"Answer: "<<tot_area<<" unit square.\n";
    return 0;
}