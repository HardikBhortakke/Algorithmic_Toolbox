#include <iostream>
#include <cstdlib>
using namespace std;

long long max_pairwise_product (int size,int arr[]){
    int m1=-1,m2=-1,x=0;
    for(int i=0; i<=size ; i++){
        if(i<size){
            if(arr[i]>m1){
                m1 = arr[i];
                x=i;
                cout<<i<<" , "<<x<<" , "<<m1<<" || ";
            }
        }
        if((i>=1 && x != i-1) && (arr[i-1]>=m2 && arr[i-1]<=m1)){
            m2 = arr[i-1];
            cout<<i<<" , "<<m2<<"\n";
        }
    }
    return ((long long)m1)*m2;;
}

long long Max_Pairwwise_Product (int size,int num[]){
    long long result = 0;
    int i = 0;
    for(i;i < size; i++){
        for(int j = i+1; j < size; j++){
            if(((long long)num[i])*num[j] >= result){
                result = ((long long)num[i])*num[j];
            }
        }
    }
    return result;
}

long long Max_pairwise_product(int size,int num[]){
    int m1 = 0, m2 = 0 , x = -1;
    for (int i = 0 ; i < size ; i++ ){
        if (num[i] >= m1){
            m1 = num[i];
            x = i;
        }
    }
    for (int i = 0 ; i < size ; i++ ){
        if(num[i] >= m2 && x != i){
            m2 = num[i];
        }
    }
    return ((long long)m1)*m2;
}
/*
int main (){
    while (1){
        int n = rand() % 10 +2;
        cout<<n<<"\n";
        int arr[n];
        for (int i=0;i<n;i++){
            arr[i] = rand() % 10;
            cout<<arr[i]<<"\t";
        }
        long long result1 = max_pairwise_product(n,arr);
        long long result2 = Max_Pairwwise_Product(n,arr);
        cout<<"\n result1:"<<result1<<"\n";
        cout<<"result2:"<<result2<<"\n";
        if(result1 != result2){
            cout<<"wrong \n";
            break;
        }
        else {
            cout<<"OK \n ";
            continue;
        }
    }
    
    return 0;
}
*/
int main (){
    
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long result1 = Max_pairwise_product(n,arr);
        cout<<result1;
    return 0;
}
