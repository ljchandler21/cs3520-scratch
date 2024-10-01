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


/*Write a program that prints the sum of integers on each line of a file.

The program reads from the file “in.txt” line-by-line (stopping on any error reading a line). For each line, it reads the line as a list of integers (stopping processing that line on any error). It writes the sum of the integers on each line to a separate line in standard output.

You’ll need to create a file to read from. A file containing:
1 2
4 5 6 a 7
100

Should display:
3
15
100

Hint: use an ifstream to read from the file, and an istringstream to process each line.
*/

/*
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
//using namespace std;
using std::istringstream;
//using std::cout;

int main() {
  // TODO

  ifstream inFile("in.txt"); 
  if (!inFile) {
    cout << "Error opening file" << endl;
    return 1; 
  }
  //istringstream my_stream(inFile); 
  string line; 
  int num; 
  int sum; 
  while (getline(inFile, line)) {
    sum = 0; 
    istringstream myStream(line); 
    while (myStream >> num) {
      //myStream >> num; 
      sum += num; 
    }
    //cout << sum << endl; 

    //for (int i: line) {
    //  myString >> sum =+ num; 
    //}
    cout << sum << endl; 
  } 
  
}



/*
int alt() {
      // Input string
    string a("1 2 3");
 
    // Object class of istringstream
    istringstream my_stream(a);
 
    // Variable to store number n
    int n;
 
    // Stream a number till white space
    // is encountered
    my_stream >> n;
 
    // Print the number
    cout << n << "\n";
}*/


///EX0924-A
/*
Write a function named make_ordered that takes two int arguments a and b by reference. If needed, it swaps the values of the arguments so that the the smaller value is stored in a and the larger in b. That is, it orders the values so that a <= b after the function returns.
*/
/*
#include <iostream>
using namespace std;

// TODO

void make_ordered(int &x, int &y) {
if (x < y) {
  x = x; 
  y = y; 
}
else if (x > y) {
  int larger = x; 
  x = y;  
  y = larger;  
}
}

int main() {
  int a = 1;
  int b = 2;
  make_ordered(a, b);
  cout << a << " " << b << endl; // 1 2

  a = 2;
  b = 1;
  make_ordered(a, b);
  cout << a << " " << b << endl; // 1 2
}*/

/// EX0924-B

//// EX0927-A
/*
Use gdb (and not cout) to determine the value assigned to result when ii is 5.

You can paste the code into scratch.cpp from the demo to run in VS Code.

Optional challenge: if you set mys to 10 in that iteration of the loop (right before result is added to mys), what is the value of result on the next iteration?
*/

/* ANSWER:
// When ii = 5, result = 15
// Optional: when mys is 10, the next processed result is 20
*/

/*
int mystery_func(int & x) {
  x = 5 + ((x * x * 2) % 41);
  return x / 2;
}

int main() {
  int mys = 0;
  for (int ii = 0; ii < 10; ++ ii) {
    int result = mystery_func(mys);
    mys += result;
  }
}
*/


//EX100124-A

/*
Use gcov to determine how many times the lines commented LINE 1 and LINE 2 are executed (each).

You can paste the code into scratch.cpp from the demo to run in VS Code.

Hint: You may need to change your Makefile.
*/

/* ANSWER:
LINE 1: TODO
LINE 2: TODO
*/

#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int y = 0;
    for (int ii = 0; ii < 100; ++ ii) {
        x = ((x + 1) * 7) % 97; // LINE 1
        for (int jj = 0; jj < x; ++ jj) {
            y = ((y + 1) * 5) % 97; // LINE 2
        }
    }
    cout << x << " " << y << endl;
}


//EX100124-B

/*
Use callgrind to determine whether the program spends more instructions (inclusive) in mystery1 or mystery2.  Include relevant callgrind output in your answer.

You can paste the code into scratch.cpp from the demo to run in VS Code.
*/

/* ANSWER:
*/

/*
#include <iostream>
using namespace std;

void mystery1() {
    int x = 0;
    int y = 0;
    for (int ii = 0; ii < 1000000; ++ ii) {
        x = ((x + 1) * 7) % 97;
        for (int jj = 0; jj < x; ++ jj) {
            y = ((y + 1) * 5) % 97;
        }
    }
    cout << x << " " << y << endl;
}

void mystery2() {
    int x = 0;
    int y = 0;
    for (int ii = 0; ii < 100000; ++ ii) {
        x = ((x + 1) * 7) % 5011;
        for (int jj = 0; jj < x; ++ jj) {
            y = ((y + 1) * 5) % 97;
        }
    }
    cout << x << " " << y << endl;
}

int main() {
    mystery1();
    mystery2();
}
*/
