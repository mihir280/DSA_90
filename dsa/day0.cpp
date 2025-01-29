// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int s=0,e=4;
    while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++,e--;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}