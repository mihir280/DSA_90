#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot=arr[s];

    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;

        }
    }

    int index=cnt+s;

    swap(arr[index],arr[s]);

    int i=s,j=e;

    while(i<index && j>index){

        while(arr[i]<=arr[index]){
            i++;
        }

        while(arr[j]>arr[index]){
            j--;
        }

        if(i<index && j>index){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    return index;
}

void quickSort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }

    int p=partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){

    int arr[5]={2,1,4,9,6};
    int n=5;
    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}