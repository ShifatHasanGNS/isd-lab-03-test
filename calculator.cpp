#include <cmath>
#include <iostream>

using namespace std;

class Calculator {
private:
  int operation;
  double num1;
  double num2;

public:
  Calculator() {}

  int get_operation() { return this->operation; }

  double get_num1() { return num1; }

  double get_num2() { return num2; }

  void set_operation(int operation) { this->operation = operation; }

  void set_num1(double num1) { this->num1 = num1; }

  void set_num2(double num2) { this->num2 = num2; }

  void calc_and_show() {
    if (this->operation < 6) {
      if (this->operation == 5) {
        cout << "\nResult is: " << sqrt(num1) << endl;
      } else {
        switch (operation) {
        case 1:
          cout << "\nResult is: " << num1 + num2 << endl;
          break;

        case 2:
          cout << "\nResult is: " << num1 - num2 << endl;
          break;

        case 3:
          cout << "\nResult is: " << num1 * num2 << endl;
          break;

        case 4:
          cout << "\nResult is: " << num1 / num2 << endl;
          break;

        default:
          cout << "\nWrong operation.\n";
          break;
        }
      }
    } else {
      cout << "\nWrong operation.\n";
    }
  }
};

int main() {
  Calculator calc;

  while (true) {
    double num1, num2;
    int operation;

    cout << "\nPlease enter your operation from the list down below:\n";
    cout << "1: Sum\n2: Substraction\n3: Multiplication\n4: Division\n5: "
            "Square Root\n\n6: EXIT"
         << endl;

    cout << "-> ";
    cin >> operation;

    cout << "Enter Num1: ";
    cin >> num1;

    cout << "Enter Num2: ";
    cin >> num2;

    calc.set_operation(operation);
    calc.set_num1(num1);
    calc.set_num2(num2);

    calc.calc_and_show();
  }

  return 0;
}
