#include <iostream>
#include <math>

int main() {
  std::cout << "Choose a number between 1 and 100!" << std::endl;
  while(true) {
    char ans = 'n';
    int randomNumber = rand() % 100 + 1;
    std::cout << "Was your number " << randomNumber << "?(y/n) ";
    std::cin >> ans;
    if(ans == 'y') {
      std::cout << "\nWow, OK" << std::endl;
      break;
    else{
      std::cout << "\nWell, then...."  << std::endl;
    }
  }
  return 0;
}
