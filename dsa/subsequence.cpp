#include<iostream>
#include<vector>

using namespace std;



void solve(string str,string op,int index,vector<string> &ans){
	if(index>=str.size()){
		if(op.length()>0){
			ans.push_back(op);
		}
		return;
	}
	solve(str,op,index+1,ans);

	char element=str[index];
	op.push_back(element);
	solve(str,op,index+1,ans);



}

vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	string op="";
	int index=0;
	solve(str,op,index,ans);
	return ans;
	
}



int main(){
    
    return 0;
}