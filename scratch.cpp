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

/*
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
*/

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


// 1015-A
/*
Write a function element_of that takes a vector of strings and a string to search for as arguments. 
The function returns the index of that string in the vector, if it is there, otherwise it throws an runtime_error exception. 
(Don’t worry about catching the exception for this exercise.)
*/
/*
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

size_t index_of(const vector<string> & v, const string & s) {
  // TODO
  try {
    for (unsigned long i = 0; i > 0; i++) {
    
      if (v[i] == s) {
      return i; 
      }
    }
  } catch (nullptr_t e) {
      throw runtime_error("String does not exist in vector"); 
  }
}

int main() {
  vector<string> vec = { "a", "b", "c", "d", "e", "f" };

  cout << index_of(vec, "a") << endl; // 0
  cout << index_of(vec, "d") << endl; // 3
  cout << index_of(vec, "g") << endl; // exception!
}*/

//1015-B
/*
Write a function mean_average that takes a vector of doubles as an argument, and returns the mean average of the numbers in the vector. If the vector is empty, the function throws an invalid_argument exception.

Update the function read_and_average_numbers to handle an invalid_argument exception from mean_average and print an error message.
*/

/*
#include <iostream>
#include <numeric>
#include <stdexcept>
#include <vector>
using namespace std;

double mean_average(const vector<double> & v, size_t & s) {
  if (s < 1) {
    throw invalid_argument("Cannot average empty set");
  }
  double sum = 0; 
  for (long unsigned int i = 0; i < s; i++) {
    sum += v[i]; 
  }
  return sum / s; 

}

void read_and_average_numbers() {
  vector<double> v;
  double x;
  size_t size = 0; 
  while (cin >> x) {
    v.push_back(x);
    size++; 
  }
  // TODO
  try {
    cout << mean_average(v, size) << endl;  
  } catch (invalid_argument& e) {
    cout << "Cannot average empty set." << endl; 
  }
}

int main() {
  read_and_average_numbers();
}
//*/


//1022-A

/*
Write the implementation for two classes Base and Derived.  Derived inherits from Base and the classes have two member functions: redefinable and overridable.  Both functions return the name of the class as a string; however, the derived class redefines redefinable and overrides overridable.

Hint: one member function should be virtual and one should not.
*/

/*
#include <iostream>
#include <string>
using namespace std;

class Base {
public:
  virtual ~Base() {} // recommended
  public str redefinable() {
    return "Base"; 
  }

  public str overridable() {
    return "Base";
  }
  
};

class Derived : public Base {
public:
  virtual ~Derived() {

    public str redefinable() {
      return "Derived"; 
    }

    public str overridable() {
      return "Derived"; 
    }
  } // recommended
  // 
};

void use_base(const Base & b) {
  cout << b.redefinable() << " " << b.overridable() << endl;
}

void use_derived(const Derived & d) {
  cout << d.redefinable() << " " << d.overridable() << endl;
}

int main() {
  Base b;
  Derived d;

  use_base(b); // prints "Base Base"
  use_base(d); // prints "Base Derived"
  use_derived(d);  // prints "Derived Derived"
}
/*


/*
From the given code for WrappedUInt, add overloaded operators so that a WrappedUInt can be compared for equality (==) to a WrappedUInt or a UInt. Write them as friend functions.

Hint: There should be three functions written.
*/

/*
#include <iostream>
using namespace std;

typedef unsigned int UInt;

class WrappedUInt {
public:
  WrappedUInt(UInt value, UInt modBy);
  friend ostream & operator<<(ostream &, const WrappedUInt &);

  // TODO

private:
  UInt m_value;
  const UInt m_modBy;
};

WrappedUInt::WrappedUInt(UInt value, UInt modBy):
  m_value(value % modBy),
  m_modBy(modBy)
{}

ostream & operator<<(ostream & os, const WrappedUInt & wi) {
  return (os << wi.m_value);
}

// TODO

int main() {
  WrappedUInt wi0(1U, 3U);
  WrappedUInt wi1(1U, 3U);
  WrappedUInt wi2(2U, 3U);

  cout << boolalpha;

  cout << (wi0 == wi1) << endl; // true
  cout << (wi0 == wi2) << endl; // false

  cout << (wi0 == 1U) << endl; // true
  cout << (wi0 == 2U) << endl; // false

  cout << (1U == wi0) << endl; // true
  cout << (2U == wi0) << endl; // false
}*/

/*
Write a function that takes a (const reference to a) list, and uses 
iterators to print out the elements of the list in forward and backward order.

Hint: use auto
Hint: begin ... end; rbegin ... rend

Optional challenge: try without using auto.
Optional challenge hint: const_iterator
*/

/*
#include <iostream>
#include <list>
using namespace std;

void print_forward_backward(const list<int> & lst) {
  //list<int> fwdL = lst;
  auto fwd = lst.begin(); 
  //list<int> bkwdL = lst;
  auto bckwd = lst.end(); 
  --bckwd;
  cout << "forward: ";
  for (int i = 0; i < 5; i++) {
    cout << "" << *fwd << " ";
    fwd++; 
  }
  endl; 
  cout << "backward: ";
  for (int i = 5; i > 0; i--) {
    cout << "" << *bckwd << " ";
    -- bckwd; 
  }
  endl; 
}

int main() {
  list<int> test_list = { 1, 2, 3, 4, 5 };
  print_forward_backward(test_list);
  // forward: 1 2 3 4 5
  // backward: 5 4 3 2 1
}
*/


// 1105A
/*
Write a program that reads integers from standard input until error, then sorts the numbers, 
removes all copies of the largest number, and prints all the numbers.

For example, given input “2 4 1 1 4 3” it should print “1 1 2 3”.

Hint: use sort and remove with vector<T>::erase.
*/

/*
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;

  int i = 0;
  while(cin >> i) {
    v.push_back(i);
  }

  if (v.empty()) {
    return EXIT_SUCCESS;
  }

  // TODO
}

// 1108A
/*
Write a function named swap that swaps the value of two integers through pointers.  
Call the function to swap two values. You can assume the arguments are not null.
*/
/
#include <iostream>
using namespace std;

void swap(int* &a, int* &b) {
  int* &c = a; 
  a = b; 
  b = a;
  // TODO
}

/*
int main() {
  int a = 2;
  int b = 4;
  cout << a << " " << b << endl; // "2 4"
  swap(&a, &b);
  cout << a << " " << b << endl; // "4 2"
}
*/


// 1108B
/*
Write a function named remove that works similarly to the remove algorithm, but with pointers to integers.  
That is, given a range of integers from begin and up to (but not including) end, it will remove all integers with the value val from the range, 
and return a pointer to the new end of the range. You can assume the pointer arguments are not null.
*/

/*
#include <iostream>
#include <vector>
using namespace std;

int * remove(int * begin, int * end, int val) {
}

void run(vector<int> vec, int val) {
  int * begin = &(vec[0]);
  int * end = remove(begin, begin + vec.size(), val);
  cout << "array:";
  for (; begin != end; ++ begin) {
    cout << " " << *begin;
  }
  cout << endl;
}

int main() {
  run({ 1, 0, 2, 0, 3, 0, 4 }, 0); // "array: 1 2 3 4"
  run({ 8, 1, 8, 2, 8, 3, 8 }, 8); // "array: 1 2 3"
  run({ 1, 2 }, 5);                // "array: 1 2"
  run({ 1, 1, 1 }, 1);             // "array:"
}
*/


