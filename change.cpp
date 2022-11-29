#include <iostream>

int get_change(int m) {
  //write your code here
  int numCoins = 0;
  int coins[3] = {10, 5 ,1};
  int i = 0;
  while (m > 0) {
    if(m >= coins[i]) {
      m -= coins[i];
      numCoins++;
    } else {
      i++;
    }
  }

  return numCoins;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
