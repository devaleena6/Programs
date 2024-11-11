#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter cost price:"<<endl;
    cin>>cp;
    cout<<"Enter the selling price:"<<endl;
    cin>>sp;
    
    if(sp>cp){
        int profit=sp-cp;
        cout<<"The profit is:"<<profit<<endl;
    }
    else if(cp>sp){
        int loss=cp-sp;
        cout<<"The loss is:"<<loss<<endl;
    }
    else{
        cout<<"No profit or loss."<<endl;
    }
    return 0;
}