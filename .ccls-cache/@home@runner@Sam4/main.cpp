#include <iostream>
using namespace std;

int main() {
  double A;
  int N;
  cout << "Введіть дійсне число A: ";
  cin >> A;
  do {
    cout << "Введіть ціле число N (більше 0): ";
    cin >> N;
  } while (N <= 0);

  double result = 1.0;
  for (int i = 0; i < N; i++) {
    result *= A;
  }
  cout << A << " у степені " << N << " дорівнює " << result << endl;

  return 0;
}