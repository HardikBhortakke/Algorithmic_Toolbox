#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n) {
  vector<int> summands;
  int i = 1;
  //write your code here
  while(n>0){
    if((n-i) >= (i + 1)){
      n -= i;
      //std::cout<<n<<'\n';
      summands.push_back(i);
    }else if(n == i){
      n -= i;
      summands.push_back(i);
    }
    i++;
  }
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
