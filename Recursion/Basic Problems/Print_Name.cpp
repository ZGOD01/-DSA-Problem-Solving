#include <iostream>

using namespace std;

void PrintName( int i,int n){
    if (i>n)
    {
        return;
    }
    cout<<"ZGOD"<<endl;
    PrintName(i+1,n);
    
}


int main(){

    int n;
    cout<<"Enter the value of n :- ";
    cin>>n;

    PrintName(1,n);
    return 0;

}