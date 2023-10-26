#include <iostream>

int main() {
  double A;
  int N;
  std::cout << "Введіть дійсне число A: ";
  std::cin >> A;
  do {
    std::cout << "Введіть ціле число N (більше 0): ";
    std::cin >> N;
  } while (N <= 0);

  double result = 1.0;
  for (int i = 0; i < N; i++) {
    result *= A;
  }
  std::cout << A << " у степені " << N << " дорівнює " << result << std::endl;

  return 0;
}