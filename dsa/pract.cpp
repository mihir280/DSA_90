// #include<iostream>
// using namespace std;

// int main(){
//     int arr1[4]={1,2,3,3};
//     int arr2[6]={3,4,5,5,7,9};
    
//     int arr3[10];
//     int index=4;
//     for(int i=0;i<4;i++){
//         arr3[i]=arr1[i];
    
//     }

//     for(int i=0;i<6;i++){
//         arr3[index]=arr2[i];
//         index++;
//     }

//     for(int i=0;i<10;i++){
//         cout<<arr3[i]<<" ";
//     }
//     return 0;
// }
#include<iostream>
#include<climits>
using namespace std;

int main(){

        int arr[5]={4,-2,5,9,-1};
    
        int maxi =INT_MIN;
        int sum =0;
        
        for (int i =0; i <5; i++) {
            sum += arr[i];
            
            if (sum > maxi) {
                maxi = sum;
            }
            
            if (sum < 0) {
                sum = 0;
            }
        }
        cout<<maxi;
    
    
};