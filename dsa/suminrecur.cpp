// #include<iostream>
// using namespace std;
// int sum(int arr[],int size){

//     if(size==0){
//         return 0;
//     }

//     if(size==1){
//         return arr[0];
//     }

//     int add=0;
//     add+=arr[0]+ sum(arr+1,size-1);
   
//     return add;
// }
// int main(){
    
//     int arr[5]={2,4,6,9,11};

//     cout<<sum(arr,5);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool line(int arr[],int size,int key){
//     if(size==0)
//     return false;

//     if(arr[0]==key)
//     return true;

//     else
//     line(arr+1,size-1,key);

// }

// int main(){

//     int arr[5]={1,2,3,4,5};

//     if(line(arr,5,6)){
//         cout<<"True";
//     }else{
//         cout<<"false";
//     }


    

//     return 0;
// }


#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int key){
    if(s>e)
    return false;

    int mid=s+(e-s)/2;

    if(arr[mid]==key)
    return true;

    if(arr[mid]<key)
    return binarySearch(arr,mid+1,e,key);
    else 
    return binarySearch(arr,s,mid-1,key);
    

}

int main(){

    int arr[5]={1,2,3,4,5};

    if(binarySearch(arr,0,4,9)){
        cout<<"True";
    }else{
        cout<<"false";
    }


    

    return 0;
}