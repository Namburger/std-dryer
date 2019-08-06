#include <iostream>
#include <vector>
#include "dryer.hpp"

int main() {
  std::vector<int> t1 = {1, 3, 4, 3, 2, 3, 5};
  std::cout << "before drying:\n";
  for (auto i : t1) std::cout << i << " ";
  std::cout << "\n";
  dryer::dry(t1);
  std::cout << "after drying\n";
  for (auto i : t1) std::cout << i << " ";
  std::cout << "\n";
}
