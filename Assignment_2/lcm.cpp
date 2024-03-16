#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

long long gcd(long long a,long long b){
    if(b==0){
        return a;
    }else{
        long long A = a % b;
       return gcd(b,A); 
    }
}

unsigned long long lcm (long long a, long long b){
    if(a>=b){
       return ((a * b) / gcd(a,b)); 
    }else return ((a * b) / gcd(b,a));
}

int main(){
    long long a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
    return 0;
}