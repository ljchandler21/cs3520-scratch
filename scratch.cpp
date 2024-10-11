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
  
  
  if (cin >> x) {
    cout << "number: " << x << endl; 
  }  else if (cin >> a) {
    cout << "word: " << a << endl; 
  }
}
*/

/*
Write a program that prompts the user to enter a number of dice.

If the input cannot be read as an integer, or it is not in the range 1-10, print an error message and ask the user to input it again.

Once a valid number is input, the program prints out the result of rolling all the dice one by one (again using the rand function). All the die have 6 sides.

Hint: numeric_limits<streamsize>::max()

Optional challenge: (over)write the result of the dice rolls to a file name "dice.txt" instead of the console.
*/
/*
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <limits>
using namespace std;

int main() {
  srand(time(nullptr));

  // TODO
}
*/

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



k
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
LINE 1: 300
LINE 2: 14397
*/

/*
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
*/




//EX100124-B

/*
Use callgrind to determine whether the program spends more instructions (inclusive) in mystery1 or mystery2.  Include relevant callgrind output in your answer.

You can paste the code into scratch.cpp from the demo to run in VS Code.
*/

/* ANSWER:
LINE 1: 2,000
LINE 2: 91,181
-- line 220 ----------------------------------------
     .           LINE 1: TODO
     .           LINE 2: TODO
     .           
     .           
     .           
     .           #include <iostream>
     .           using namespace std;
     .           
     6 ( 0.00%)  int main() {
     1 ( 0.00%)      int x = 0;
     1 ( 0.00%)      int y = 0;
   703 ( 0.02%)      for (int ii = 0; ii < 100; ++ ii) {
 2,000 ( 0.06%)          x = ((x + 1) * 7) % 97; // LINE 1
38,792 ( 1.24%)          for (int jj = 0; jj < x; ++ jj) {
91,181 ( 2.92%)              y = ((y + 1) * 5) % 97; // LINE 2
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


//1004-A
/*
Write a struct named Point2D that represents a two-dimensional integer point.

Write a (non-member) function that will add two of these points (passed by const reference), returning the result.

Hint: struct ... { ... };
*/

/*
#include <iostream>
using namespace std;

// TODO

struct Point2D {
  int x; 
  int y; 
};

Point2D addPoints( Point2D a, Point2D b) {
  Point2D c = {a.x + b.x, a.y + b.y}; 
  return c; 
}

int main() {
  Point2D a = { 1, 2 };
  Point2D b = { 3, 4 };
  Point2D c = addPoints(a, b);
  cout << c.x << " " << c.y << endl; // 4 6
}
*/


//1004-B
/*
Write a scoped enumeration for the four cardinal directions (North, South, East, West).

Write a function that takes a direction as an argument and returns the opposite direction, and a function that will print out a direction.  Use them to print out the opposite of some directions.

Hint: enum class ... { ... };

Optional challenge: use these functions to write a program that reads in the first character of a direction, and prints out the opposite direction.
*/
/*
#include <iostream>
using namespace std;

// TODO

enum class Direction { north, south, east, west };
Direction opposite(Direction d) {
  switch (d) {
    case (Direction::north): Direction::south; 
    break;
    case (Direction::south): Direction::north; 
    break; 
    case (Direction::east): Direction::west; 
    break; 
    case (Direction::west): Direction::east; 
    break; 
  }
}


int main() {
  Direction d = Direction::north;
  write(opposite(d)); // south
  d = Direction::south;
  write(opposite(d)); // north;
  d = Direction::east;
  write(opposite(d)); // west;
  d = Direction::west;
  write(opposite(d)); // east;
}
*/

// 1011-a
/*
Write a function countChars that takes a C-string and a character as arguments and returns the 
number of occurrences of the character in the C-string. Don’t use any functions from <cstring>.
*/

#include <iostream>
using namespace std;

int countChars(const char str[], char ch) {
  long unsigned int numreps = 0; 
  int strLen = sizeof(str)/sizeof(str[0]); 
  for (int idx = 0; idx < strLen; idx++) {
    if (str[idx] == ch) {
      numreps ++; 
    }
  }
  return numreps; 
  // TODO
}

int main() {
  cout << countChars("12341321", '1') << endl; // 3
  cout << countChars("12341321", '2') << endl; // 2
  cout << countChars("12341321", '4') << endl; // 1
}

// 1011-b
/*
Write a function reverseStringCopy that copies instr to outstr, reversed; outstr has size outstr_size. If there is not enough room, return false, otherwise, copy instr reversed and return true.

You can use functions from <cstring>.

Hint: don't forget the terminating null character.
*/

/*
#include <cstring>
#include <iostream>
using namespace std;

bool reverseStringCopy(char * outstr, size_t outstr_size, const char * instr) {
  // TODO
}

int main() {
  const size_t buf_size = 21;
  char buf[buf_size] = "xxxxxxxxxxxxxxxxxxxx";

  cout << "\"" << (reverseStringCopy(buf, buf_size, "54321") ? buf : "false") << "\"" << endl; // "12345"
  cout << "\"" << (reverseStringCopy(buf, buf_size, "cba") ? buf : "false") << "\"" << endl; // "abc"
  cout << "\"" << (reverseStringCopy(buf, buf_size, "") ? buf : "false") << "\"" << endl; // ""
  cout << "\"" << (reverseStringCopy(buf, buf_size, "01234567890123456789") ? buf : "false") << "\"" << endl; // "98765432109876543210"
  cout << "\"" << (reverseStringCopy(buf, buf_size, "012345678901234567890") ? buf : "false") << "\"" << endl; // "false"
  cout << "\"" << (reverseStringCopy(buf, buf_size, "this is a fairly long string") ? buf : "false") << "\"" << endl; // "false"
}
*/



