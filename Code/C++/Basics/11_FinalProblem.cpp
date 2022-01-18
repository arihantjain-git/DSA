#include<iostream>
using namespace std;

int main(){
    int n;
    int cs1 = 0, cs2 = 0;
    int maxlead = 0;
    int maxlead_plyr = 1;

    cout<<"Enter number of rounds: ";
    cin>>n;
    while(n--){
        int s1,s2;
        cout<<endl<<"Enter score of player 1: ";
        cin>>s1;
        cout<<endl<<"Enter score of player 2: ";
        cin>>s2;

        cs1+=s1;
        cs2+=s2;

        int lead = 0;
        int curr_lead_plyr = 1;

        if(cs1>=cs2){
            lead = cs1-cs2;
        }
        else{
            curr_lead_plyr = 2;
            lead = cs2-cs1;
        }

        if(lead>maxlead){
            maxlead = lead;
            maxlead_plyr = curr_lead_plyr;
        }

        cout<<maxlead_plyr<<" "<<maxlead<<endl;


    }
    return 0;
}