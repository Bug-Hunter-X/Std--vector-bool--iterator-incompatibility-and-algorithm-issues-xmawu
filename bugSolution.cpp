#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  // Problematic code:
  std::vector<bool> boolVector = {true, false, true, true};
  //This will not compile properly
  //std::sort(boolVector.begin(), boolVector.end()); // This line won't work as expected

  // Solution: Use std::vector<char> or a different container
  std::vector<char> charVector = {1, 0, 1, 1}; // 1 represents true, 0 represents false
  std::sort(charVector.begin(), charVector.end());

  std::cout << "Sorted vector: ";
  for (char value : charVector) {
    std::cout << static_cast<int>(value) << " ";
  }
  std::cout << std::endl;

  return 0;
}
