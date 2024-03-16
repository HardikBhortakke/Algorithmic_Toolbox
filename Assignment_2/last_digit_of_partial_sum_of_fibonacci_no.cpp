#include<iostream>
#include<vector>
using namespace std;

const int fib_mod[] = {0, 1, 1, 2, 3, 5, 8, 3, 1, 4, 5, 9, 4, 3, 7, 0, 7, 7, 4, 1,
                   5, 6, 1, 7, 8, 5, 3, 8, 1, 9, 0, 9, 9, 8, 7, 5, 2, 7, 9, 6,
                   5, 1, 6, 7, 3, 0, 3, 3, 6, 9, 5, 4, 9, 3, 2, 5, 7, 2, 9, 1};


long long fib_no_partial(long long m, long long n){
    // Handling the cases when m > n or n is 0
    if (n == 0 || m > n) {
        return 0;
    }

    // Reducing the values of m and n to make them fit into a cycle of 60
    m %= 60;
    n %= 60;

    if (n < m) {
        n += 60;
    }

    long long result = 0;
    for (int i = m; i <= n; i++) {
        result += fib_mod[i % 60];
        result %= 10;
    }

    return result;
}

int main() {
    long long m, n;
    cin >> m;
    cin >> n;
    cout << fib_no_partial(m, n);
    return 0;
}
