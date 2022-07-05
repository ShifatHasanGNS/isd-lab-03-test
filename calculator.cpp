// importing necessary libraries
#include <iostream>
#include <cmath>

using namespace std;
 
int main()
{
    // we put the program in a loop using the while statement
    while (true)
    {
      // variables for numbers we're gonna calculate and also operation number
      double num1, num2;
      int operation;

      // we first ask the user for operation number and show them a list of operations with their own unique number
      cout << "\nPlease enter your operation from the list down below:\n";
      cout << "1: Sum\n2: Substraction\n3: Multiplication\n4: Division\n5: Square Root\n\n6: EXIT" << endl;

      // prompt the user for their operation number
      cout << "-> ";
      cin >> operation;

      // if operation is NOT 6, meaning the user is not willing to execute the 6th operation which basically exits the program
      if (operation != 6) {
        // prompt the user for the first number
        cout << "\nPlease enter the first number.\n";
        cout << "-> ";
        cin >> num1;

        // if operation was 5 (square root) then calculate the square root of first entered number and output it to the console
        if (operation == 5) {
          cout << "\nResult is: " << sqrt(num1) << endl;
        }
        // otherwise, prompt the user for the second number
        else{
          cout << "\nPlease enter the second number.\n";
          cout << "-> ";
          cin >> num2;

          // here we use a switch statement instead of a million if-statements. this gives us mamy advantages, mostly in terms of performance
          switch (operation)
          {

              // if the operation number was 1, then calculate the sum of both first and second numbers
              case 1:
                  cout << "\nResult is: " << num1 + num2 << endl;
                  break;
    
              // if the operation number was 2, then calculate the substraction of both first and second numbers
              case 2:
                  cout << "\nResult is: " << num1 - num2 << endl;
                  break;
    
              // if the operation number was 3, then calculate the multiplication of both first and second numbers
              case 3:
                  cout << "\nResult is: " << num1 * num2 << endl;
                  break;

              // if the operation number was 4, then calculate the division of both first and second numbers
              case 4:
                  cout << "\nResult is: " << num1 / num2 << endl;
                  break;
    
              // if the operation number was none of the above numbers, meaning that the user has entered a wrong operation number then simply
              // output an string saying that the entered operation is wrong
              default:
                  cout << "\nWrong operation.\n";
                  break;
                  // at this point, we've reached the end of the program. so what happens is that the program goes back to the
                  // line 10 and again repeats the cycle. this cycle goes forever, until the user enters the operation number 6 (which closes the program)
                  // or program gets closed by other factors, like user killing the process or program facing any sort of error
            }
          }
        }
      else{
          // if program reaches this line of code, it means the user has entered the number "6" as operation number
          // and so what we need to do is to break the loop and simply finish the program.
          return 0;
      }

    }
}