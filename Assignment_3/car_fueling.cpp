#include <iostream>
#include <vector>

using namespace std;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here
    int n = 0;
    int travel = tank;
    stops.push_back(dist);
    if(dist <= tank){
        return 0;
    }
    for(int i = 0; i < stops.size(); i++){
        if (travel < stops[i]){
            n += 1;
            travel = stops[i-1] + tank;
        }
        if((stops[i+1] - stops[i]) > tank){
            return -1;
        }
    }
    return n;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;
    vector<int> stops(n);
    for (int i = 0; i < n; i++){
       cin>>stops[i];
    }
    
    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
