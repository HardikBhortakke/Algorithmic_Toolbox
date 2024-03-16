#include<iostream>
#include <vector>
using namespace std;

void fib_no(unsigned long long n){
    int pre_num = 0,num = 1,temp = 0;
    for(int i = 0; i < n - 1; i++ ){
        temp = num;
        num = (num + pre_num);
        pre_num = temp;
    }
    cout<<num;
}

int main (){
    unsigned long long  n;
    cin>>n;
    if(n==0){
        cout<<n;
    }else{
        fib_no(n);
    }
}