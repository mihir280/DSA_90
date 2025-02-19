#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int value){
        size=size+1;
        int index=size;
        arr[index]=value;

        while(index>1){
            int parent=index/2;

            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }else{
                return;
            }

        }
    }

    void dele(){
        if(size==0)
        {
            return;
        }

        arr[1]=arr[size];
        // remove last elemnet
        size--;
        // take root at its correct position
    int i=1;
    while(i<size){
        int lftidx=2*i;
        int rightindx=2*i+1;

        if(lftidx<size && arr[i]<arr[lftidx]){
            swap(arr[i],arr[lftidx]);
            i=lftidx;
        }

        else if(rightindx<size && arr[i]<arr[rightindx]){
            swap(arr[i],arr[rightindx]);
            i=rightindx;
        }
        else {
            return;
        }
    }
        
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

void heapify(int arr[], int n, int i){

    int largest=i;
    int left=2*i;
    int right=2*i*1;

    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }

}


int main(){

    heap h;
    h.insert(20);
    h.print();

    
    return 0;
}