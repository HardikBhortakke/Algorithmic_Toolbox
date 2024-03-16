#include<iostream>
#include<cmath>
using namespace std;

long long gcd(long a,long long b){
    if(b==0){
        return a;
    }else{
        long long A = a % b;
       return gcd(b,A); 
    }
}

int main (){
    long long c,d;
    cin>>c>>d;
    if(c >= d){
        cout<<gcd(c,d);
    }else cout<<gcd(d,c);
    return 0;
}