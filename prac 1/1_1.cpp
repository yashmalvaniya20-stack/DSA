#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of items:";
    cin>>n;
    int a[n];
    cout<<"enter items";

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int h;
    cout<<"Enter no of hours";
    cin>>h;
    
    for(int k=1;k<=h;k++){
        int first=a[0];
    for(int i=0;i<=n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=first;
}
    cout<<"After hour "<<h<<":";
    for(int i=0;i<n;i++){
        cout<< a[i] <<"   ";
    }
    
    cout<<endl;

}