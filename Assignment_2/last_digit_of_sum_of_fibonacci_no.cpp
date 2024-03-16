#include<iostream>
#include <vector>
using namespace std;

long long fib_no_sum(long long n){
    if(n==0){
        return n;
    }
    int num = 1 , prenum = 0, temp = 0, result = 1;
    for(int i = 0; i < n - 1; i++){
        temp = num % 10;
        num = ((num % 10) + (prenum % 10));
        prenum = temp;
        result += num % 10;
        result %= 10;
    } 
    return result;
}

int main (){
    long long  n;
    cin>>n;
    cout<<fib_no_sum(n%60);
}