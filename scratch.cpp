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
/*
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
//*/


// 1112A

/*
Write a program that dynamically allocates and deallocates Test objects to produce the given output.
*/
/*
#include <iostream>
using namespace std;

class Test {
public:
  Test(int id): m_id(id) {
    cout << "+ " << m_id << endl;
  }
  ~Test() {
    cout << "- " << m_id << endl;
  }
private:
  const int m_id;
};

// AS GIVEN BY FOLLOWING ALONG IN CLASS
// DEMO WAS SHOWN FOR FINISHED PROD.
int main() {
  Test *t1 = new Test(1);
  Test *t2 = new Test(2);

  delete t1; 

  Test *t3 = new Test(3);

  delete t3; 
  delete t2; 

  // TODO
  // + 1
  // + 2
  // - 1
  // + 3
  // - 2
  // - 3
}*/

///1112B
/*
Write a program that prompts the user for a string length.  Then the program dynamically allocates a char buffer just big enough to hold a C-string of the given length (including space for the null character). It then prompts the user for a string, reads it into the buffer, converts it to uppercase, and displays the uppercase C-string. Then the buffer is deallocated.

Hint: You can use cin.getline(buffer, bufferlength) to read up to bufferlength chars (including the null char) into buffer.
*/

/*
#include <iostream>
#include <limits>
using namespace std;

int main() {
  cout << "Enter a string length:" << endl;
  int len;
  if (!(cin >> len) || len <= 0) {
    cout << "Input error." << endl;
    return -1;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Enter a string to uppercase:" << endl;

  char * str = new char[len + 1]; 
  cin.getline(str, len + 1); 

  for (char * ii = str; *ii; ++ii) {
    *ii = toupper(*ii); 
  }

  cout << str << endl; 

  delete []str;

  // TODO
}
*/


//1112C
/*
Write the function allocate, that takes a C-string words as an argument and returns a pointer to a dynamically allocated array of C-strings. The function should copy each space-separatedword (any number of spaces separates words) from the argument into the array. It also stores the number of words found (i.e. the length of the array) in the argument wordcount.  Only use C-strings and related functions.

Hint: copy the C-string into a non-const buf and use strtok to find the words.
*/
/*
#include <cstring>
#include <iostream>
using namespace std;

char **allocate(const char *words, size_t &wordcount) {
  // TODO
  char *buf = new char[strlen(words + 1)]; 

  strcpy(buf, words); 

  size_t w = 0; 
  char * word = strtok(buf. " "); 
  while (word != nullptr) {
    ++ w; 
    word = strtok (nullptr, " ");
  }

  char ** arr = new char *[w]; 
 
   strcpy(buf, words); 

  size_t w = 0; 
  word = strtok(buf. " "); 
  while (word != nullptr) {
    arr[wordcount] = new char[strlen(word) + 1]; 
    strcpy(arr[wordcount], word); 
    ++ wordcount
    word = strtok (nullptr, " ");
  }


  delete []buf; 

  return arr;
}

void deallocate(char **arr, size_t n) {
  for (size_t ii = 0; ii < n; ++ii) {
    delete[] arr[ii];
  }
  delete[] arr;
}

void print(char **arr, size_t n) {
  for (size_t ii = 0; ii < n; ++ii) {
    cout << arr[ii] << endl;
  }
}

int main() {
  // prints "--" "hello" "there," "world" "!" "--"
  size_t wordcount = 0;
  char **arr = allocate("hello there,  world !  ", wordcount);
  cout << "--" << endl;
  print(arr, wordcount);
  cout << "--" << endl;
  deallocate(arr, wordcount);
}*/

// 1115A

/*
Complete the implementation of the chess piece class hierarchy, and fill in the destructors and print member functions, to produce the indicated output.
*/

/*
#include <iostream>
#include <vector>
using namespace std;

class ChessPiece {
public:
  // TODO
  virtual ~ChessPiece() = 0; // VIRTUAL DESTRUCTOR MUST HAVE IMPLEMENTATION. Can either solve that here or
  virtual void print() const = 0; 
};

ChessPiece::~ChessPiece() {} // Can provide implementation after the class is instantiated.

class Rook : public ChessPiece {
public:
  virtual ~Rook( ) override { cout << "~rook" << endl; }
  virtual void print( ) const override { cout << "rook" << endl; }
};

class Bishop : public ChessPiece {
public:
  virtual ~Bishop( ) override { cout << "~bishop" << endl; }
  virtual void print( ) const override { cout << "bishop" << endl; }
};

int main() {
  vector<ChessPiece *> v;
  v.push_back(new Rook);
  v.push_back(new Bishop);

  // prints "Rook" then "Bishop"
  for (const auto elem: v) {
    elem->print();
  }

  // prints "~Rook" then "~Bishop"
  for (auto elem: v) {
    delete elem;
  }
  v.clear();
}*/

// 1115B

/*
Complete the implementation of MovableInt. A MovableInt holds a pointer to a dynamically allocated int that can be moved from object to object (but not copied!).  An empty MovableInt has a null pointer.
*/

/*
#include <iostream>
using namespace std;

class MovableInt {
public:
  // allocate new movable int (dynamically allocate a single int and give it the value i)
  MovableInt(int i) : m_int(new (int(i))) {}

  // move construct
  MovableInt(MovableInt && o) {
    // TODO
    m_int = o.m_int; 
    o.m_int = nullptr; 
  }

  // deallocate movable int
  ~MovableInt() { delete m_int; }

  // move assign
  MovableInt &operator=(MovableInt && o) {
    // TODO
    if (this != &o) {
    delete m_int; 
    m_int = o.m_int; 
    o.m_int = nullptr; 
    }
    return *this;
  }

  bool has_value() const { return m_int; }

  int get_value() const { return *m_int; }

private:
  MovableInt(const MovableInt &) = delete;
  MovableInt &operator=(const MovableInt &) = delete;

  int * m_int;
};

int main() {
  cout << boolalpha;

  MovableInt m1(1);
  cout << m1.has_value() << " " << m1.get_value() << endl; // true 1
  
  MovableInt m2(2);
  cout << m2.has_value() << " " << m2.get_value() << endl;// true 2

  MovableInt m3 = move(m1);
  cout << m1.has_value() << endl; // false
  cout << m3.has_value() << " " << m3.get_value() << endl; // true 1

  m3 = move(m2);
  cout << m2.has_value() << endl; // false
  cout << m3.has_value() << " " << m3.get_value() << endl; // true 2
}
//*/

//1119
/*
Complete the implementation of allocate_array to allocate an int array of the given size using a unique_ptr and sort_array to sort a unique_ptr array of ints. Hint: use std::make_unique and std::sort; consider pass by reference.
*/

#include <algorithm>
#include <iostream>
#include <memory>
using namespace std;

unique_ptr<int[]> allocate_array(size_t sz) {
  return make_unique<int[]>(sz); 
}

void sort_array(unique_ptr<int[]> &arr, size_t sz) {
  sort(arr.get(), arr.get() + sz);
}

int main() {
  cout << "Enter an array size:" << endl;
  size_t arr_sz;
  if (!(cin >> arr_sz)) {
    return EXIT_FAILURE;
  }

  auto arr = allocate_array(arr_sz);
  for (size_t ii = 0; ii < arr_sz; ++ii) {
    cout << "Enter a number:" << endl;
    if (!(cin >> arr.get()[ii])) {
      return EXIT_FAILURE;
    }
  }

  sort_array(arr, arr_sz);

  cout << "Sorted:";
  for (size_t ii = 0; ii < arr_sz; ++ii) {
    cout << " " << arr.get()[ii];
  }
  cout << endl;
}

/*
From the given implementation of TestList, implement the insert_after function for adding elements to the linked list using smart pointers.  Your implementation should not call new or delete directly, and should automatically deallocate all the objects allocated.
*/

#include <iostream>
#include <memory>
using namespace std;

struct Test {
  Test(int idi): id(idi) { cout << "+ " << id << endl; }
  ~Test() { cout << "- " << id << endl; }
  const int id;
};

class TestList {
public:
  TestList(int id): m_item(id), m_next(nullptr) {}

  void print() const {
    cout << m_item.id;
    if (m_next) { cout << " "; m_next->print(); }
    else { cout << endl; }
  }

  // insert a new TestList node between
  // this node and the next node with the given id.
  // return a pointer to the newly allocated node.
  shared_ptr<TestList> insert_after(int id) {
    auto next = make_shared<TestList>(id); 
    next -> m_next = m_next; 
    m_next = next; 
    return next; 
  }

private:
  Test m_item;
  shared_ptr<TestList> m_next;
};

int main() {
  auto head = make_shared<TestList>(1);
  auto node = head->insert_after(3);
  head->insert_after(2);
  node->insert_after(4);
  // has constructed 1 through 4
  head->print(); // prints "1 2 3 4"
  // will destruct 4 through 1
}

