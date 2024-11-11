#include<iostream>
using namespace std;

int main(){
   // int num1,num2;
   // cout<<"Enter first number:"<<endl;
   // cin>>num1;
   // cout<<"Enter second number:"<<endl;
   // cin>>num2;
    
   // int temp;
   // temp=num1;
   // num1=num2;
   // num2=temp;
   // cout<<"Enter first number:"<<num1<<endl;
   // cout<<"Enter second number:"<<num2<<endl;
    //int sum;
    //sum=num1+num2;
    //cout<<"Enter the sum:"<<sum<<endl;
    
    int score;
    cout<<"Enter score:"<<endl;
    cin>>score;
    
    if(score>80){
        cout<<"well done!"<<endl;
    }
    else if(score>50){
        cout<<"can improve"<<endl;
    }
    
    else if(score<50){
        cout<<"poor perdormance"<<endl;
    }
    
    
    
    return 0;
}
