#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the No. :- ";
    cin>>n;
    int dup = n;

    int revNum = 0;
    while (n>0)
    {
        int LastNo = n % 10;
        revNum = (revNum * 10) + LastNo;
        n = n / 10;
    }

    if( dup == revNum){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}