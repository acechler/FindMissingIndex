#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void displayValues(const std::vector<int> values){
  for (const auto& value : values) {
      std::cout << value << " ";
  }
}

std::vector<int> extractUserValues(){
  std::vector<int> values{}; 
  int input{};

  std::cout << "Enter array index (type -1 to end): ";
  while (std::cin >> input) {
      if (input == -1) break; 
      values.push_back(input); 
  }
  return values;
}

int findMissingIndex(const std::vector<int>& values){
  int missingValue{};
  for(int i = 0; i < values.size(); i++){
    if(values.at(i) == i){
      /// Test condition statement
      // std::cout << values.at(i) << " == " << i << std::endl;
      missingValue = i+1;
    }
  }
  return missingValue;
}

int main() {

  std::vector<int> values = extractUserValues();
  std::sort(values.begin(), values.end());
  std::cout << "Sorted Values: ";
  displayValues(values);
  std::cout << std::endl;
  int missingValue = findMissingIndex(values);
  std::cout << "Missing Value: " << missingValue << std::endl;

  return 0;
}
