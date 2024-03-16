#include<iostream>
#include <vector>
using namespace std;

void fib_no(long long n){
    int num = 1 , prenum = 0, temp = 0, result = 1;
    for(int i = 0; i < n - 1; i++){
        temp = num % 10;
        num = ((num % 10) + (prenum % 10));
        prenum = temp;
        result = num % 10;
    } 
    cout<< result;
}

int main (){
    long long  n;
    cin>>n;
    if(n==0){
        cout<<n;
    }else{
        fib_no(n);
    }
}