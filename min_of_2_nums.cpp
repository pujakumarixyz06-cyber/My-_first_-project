#include<iostream>
using namespace std;
//min of 2 nums
int minofTWO(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

    int main(){
        cout<<"min="<<minofTWO
        (5,3)<<endl;
        return 0;
    }
