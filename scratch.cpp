/*
Write a program that tries to read a double from standard input, and if successful, prints "number: " followed by the number. If a number can't be read, it tries to read a word, and if successful, prints "word: " followed by the word.

For example, entering "5.5" prints "number: 5.5" and entering "five" prints "word: five". To simplify error handling, you only need to check if the stream evaluates to true or not.

Optional challenge: always print numbers with with two decimal digits.
*/
/*
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
  // TODO
  double x;
  string a; 
  cout << "enter a number or word" << endl; 
  cin >> x; 
  if (cin) {
    cout << "number: " << x << endl; 
  } else {
    cin.clear(); 
    cin >> a; 
  }
  if (cin) {
    cout << "word: " << a << endl; 
  } else {
    cout << "number or word not submitted" << endl; 
  }
  
  /*if (cin >> x) {
    cout << "number: " << x << endl; 
  }  else if (cin >> a) {
    cout << "word: " << a << endl; 
  }
}*/

/*
Write a program that prompts the user to enter a number of dice.

If the input cannot be read as an integer, or it is not in the range 1-10, print an error message and ask the user to input it again.

Once a valid number is input, the program prints out the result of rolling all the dice one by one (again using the rand function). All the die have 6 sides.

Hint: numeric_limits<streamsize>::max()

Optional challenge: (over)write the result of the dice rolls to a file name "dice.txt" instead of the console.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <limits>
using namespace std;

int main() {
  srand(time(nullptr));

  // TODO
}