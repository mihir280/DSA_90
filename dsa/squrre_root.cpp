#include<iostream>
using namespace std;

int square(int k){
    int s=1;
    int e=k;
    int mid=0;
    int ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(mid*mid==k){
            return mid;
        }else if(mid*mid<k){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return -1;
}
double precision(int n,int precise,int tempsol){
    double ans=tempsol;
    double factor=1;

    for(int i=1;i<=3;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }

    }
    return ans;
}

int main(){
    int n=6;
    int tempsol=square(n);
    cout<<precision(n,3,tempsol);
    
    return 0;
}