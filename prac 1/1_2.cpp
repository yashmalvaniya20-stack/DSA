#include<iostream>
using namespace std;
int main(){
 
    int n;
    cout<<"Enter the number of Ids: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    
    cout<<"Books borrowed more than once:\n ";
    for(int i=0;i<=n-1;i++){
        
        bool printed = false;

        for(int k=0;k<i;k++){
            if(arr[k]==arr[i]){

            printed=true;
            break;
            }
        }
        if(printed)
        continue;

        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<endl;
                break;
            }

        }

    }   

}