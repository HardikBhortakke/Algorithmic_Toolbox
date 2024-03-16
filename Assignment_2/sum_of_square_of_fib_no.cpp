#include<iostream>
#include <vector>
using namespace std;

const int array[] = {0, 1, 1, 2, 3, 5, 8, 3, 1, 4, 5, 9, 4, 3, 7, 0, 7, 7, 4, 1,
                   5, 6, 1, 7, 8, 5, 3, 8, 1, 9, 0, 9, 9, 8, 7, 5, 2, 7, 9, 6,
                   5, 1, 6, 7, 3, 0, 3, 3, 6, 9, 5, 4, 9, 3, 2, 5, 7, 2, 9, 1};

void sum_sq_fib_no_naieve(long long n){
    int num = 1 , prenum = 0, temp = 0, result = 1;
    for(int i = 0; i < n; i++){
        temp = num % 10;
        num = ((num % 10) + (prenum % 10));
        prenum = temp;
        num %= 10;
        if(i >= n-2){
            result *= num;
        }
    } 
    cout<< result % 10;
}

void sum_sq_fib_no(long long n){
    int i = n % 60;
    int j = (n+1) % 60;
    int result = array[i] * array[j];
    cout << result % 10;
}

int main (){
    long long  n;
    cin>>n;
    if(n==0){
        cout<<n;
    }else{
        sum_sq_fib_no(n);
    }
}