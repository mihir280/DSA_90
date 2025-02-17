#include<iostream>
using namespace std;

int duplicacy(int arr[],int n){

    int ans[n-1]={0};
    for(int i=0;i<n;i++){

		ans[arr[i]-1]++;
		
	}
	int ans1=0;

	for(int i=0;i<n-1;i++){
		if(ans[i]>1){
			ans1=i;
			break;
		}
	}
	return ans1+1;
}

int main(){
    
    return 0;
}