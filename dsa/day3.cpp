// selection sort
// #include<iostream>
// using namespace std;

// int main(){
    
//     int arr[5]={2,1,4,2,5};

//     for(int i=0;i<5;i++){
//         int mini=i;
//         for(int j=i+1;j<5;j++){
//             if(arr[j]<arr[i]){
//                 mini=j;
//             }
//         }
//         swap(arr[i],arr[mini]);
//     }

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// bubble sort

#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,1,4,2,5};

    for(int i=0;i<4;i++){
        bool has=false;
        for(int j=0;j<5-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                has=true;
            }
        }
        if(has==false){
            break;
        }

        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}