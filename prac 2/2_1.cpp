// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int position = -1;
//     cout<<"Enter no. of car";
//     cin>>n;
//     cout<<"Enter the"<< n<<"no. of car";
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     cout<<"Enter the choice "<<endl;
//     cout<<"1. list"<<endl;
//     cout<<"2. Find the car"<<endl;

//     for(int i=0;;i++){
//         int choice;
//         cout<<"Enter the choice";
//         cin>>choice;
//         if(choice==1){

//             for(int i=0;i<n;i++){
//                 cout<<a[i]<<endl;
//             }

//         }else if(choice==2){
//         cout<<"Enter the car you want to search"<<endl;
//         int target;
//         cin>>target;
     
//         for(int i = 0; i < n; i++) {
//         if(a[i] == target) {
//             position = i;
//              if(position != -1)
//         cout << "Element found at position " << position + 1<<endl;
//     else
//         cout << "Element not found.";

//         }

//         }
//     }else{
//         return 0;
//         }
//     }


#include<iostream>
using namespace std;

int find(int a[], int n, int target, int index)
{
    if(index == n)
        return -1;

    if(a[index] == target)
        return index;

    return find(a, n, target, index + 1);
}

int main()
{
    int n;
    int target;

    cout << "Enter no. of cars: ";
    cin >> n;

    cout << "Enter the " << n << " car numbers: ";

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter car number for search: ";
    cin >> target;

    int position = find(a, n, target, 0);

    if(position != -1)
        cout << "Car found at position " << position + 1;
    else
        cout << "Car not found";

    return 0;
}