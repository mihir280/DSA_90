#include <iostream>
using namespace std;

void increas(int N){
    if(N==1){
        cout<<1<<endl;
        return;
    }else{
        increas(N-1);
        cout<<N<<endl;
        return;
    }

}

int main(){
    increas(4);

    return 0;

}
