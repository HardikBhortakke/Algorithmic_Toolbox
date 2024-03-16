#include<iostream>
#include <vector>
using namespace std;

long long fib_mod_naieve( long long n, long long m){
    int pre_num = 0,num = 1,temp = 0;
    for(int i = 0; i < n - 1; i++ ){
        temp = num % m;
        num = ((num % m) + (pre_num % m)) % m;
        pre_num = temp;
    }
    return num % m;
}

long long fib_mod(long long n, long long m) {
	long long previous = 0, current = 1, tmp_previous = 0;

	vector<long> pisano;
	pisano.push_back(0);
	pisano.push_back(1);

	while (true) {
		tmp_previous = previous;
		previous = current;
		current = (tmp_previous + current) % m;
		if (current == 1 and previous == 0) {
			pisano.pop_back();
            break;
		} else {
			pisano.push_back(current);
		}
	}
	long index = n % pisano.size();
	cout << pisano.size() << endl;
	for (auto elem : pisano){
		cout << elem << " ";
	}
	cout << endl;
	return pisano.at(index);
}

int main (){
    long long  n,m;
    cin>>n>>m;
    if(n==0 || m==0){
        cout<<n;
    }else{
        cout<<fib_mod(n,m);
    }
}