#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <deque>


using namespace std;

clear terminal path:
function prompt( ) {">"}



size_t

// editing tasks.json:

// "${file}" becomes "*.cpp"


//-------------------------------------------------------//
// check my CPP version, check C++ version, 

int main() {
    std::cout << "C++ Standard Version: " << __cplusplus << std::endl;
    return 0;
}


/*
where:
C++98: 199711L
C++03: 199711L
C++11: 201103L
C++14: 201402L
C++17: 201703L
C++20: 201911L
C++23: Expected to be 2023xxL (depending on the final standardization)
*/
//-------------------------------------------------------//

compiling with -o allow us to name the exe file after the o


C++ basic data types include:
int: integers
double: floating-point numbers
char: individual characters
string: sequence of characters
bool: true/false
/*
float: it can represent numbers with up to 7 significant digits and has a range of approximately 3.4 x 10^-38 to 3.4 x 10^38. Floats are typically used when memory is at a premium or when high precision is not required.

double: it requires 8 bytes (64 bits) of memory to store. It can represent numbers with up to 15-16 significant digits and has a range of approximately 1.7 x 10^-308 to 1.7 x 10^308. Doubles are the default choice for floating-point numbers in C++, and are typically used when higher precision is required than what can be provided by a float.

double long:  extended-precision floating-point number, which means it requires more than 8 bytes of memory to store (usually 10 or 16 bytes). It can represent numbers with even greater precision and range than doubles, but the exact range and precision depend on the implementation. Long doubles are typically used in scientific and engineering applications where very high precision is required, such as in numerical simulations or when working with very large or very small numbers.
*/

//It's important to note that the specific range and precision of these data types can vary depending on the system and compiler being used

//setting and clearing precision point in output stream:

cout.precision(3);
cout << fixed << points.distance();
  
  cout.unsetf(ios_base::floatfield);  // Clear precision setting
  cout << x << endl;   // Output with default precision (6 digits)
  
  
  
// the precision of the output stream by default is 6 btw
// the precision of the output stream by default is 6 btw
------------------------------------------------------------------------------------------------------------  



You can use parentheses to group operations together to follow PEMDAS, which is an acronym for

Parenthesis
Exponents
Multiplication
Division
Addition
Subtraction




== equal to
!= not equal to
> greater than
< less than
>= greater than or equal to
<= less than or equal to



Ask:

std::cin >> variable;



if (condition) {

  do something

} else {

  do something else

}





/n means - нов ред!




#include <iostream>

int main() {

  int grade = 90;
  
if (grade > 60) {
 
  std::cout << "Pass\n";
}
}


//meaning:

/*

if (condition) {

  do something

} else {

  do something else

} 

*/


//Or:


/*

if (condition) {

  some code

} else if (condition) {

  some code

} else {

  some code

}


*/

The else if statement always comes after the if statement and before the else statement. The else if statement also takes a condition.


if (grade == 9) {
 
  std::cout << "Freshman\n";
 
} 
else if (grade == 10) {
 
  std::cout << "Sophomore\n";
 
}
else if (grade == 11) {
 
  std::cout << "Junior\n";
 
} 
else if (grade == 12) {
 
  std::cout << "Senior\n";
 
}
else {
 
  std::cout << "Super Senior\n";
 
}



#include <iostream> means  #include means :


'pre-processor directive' 

 It instructs the compiler to locate the file that contains a library known as iostream




Logical operators

The result of the operation of a logical operator is a bool value of either true or false.


&&: the and logical operator
||: the or logical operator
!: the not logical operator


random number generator. one out of 10 :


// print the actual bool, print bool

bool flag = false;

    std::cout << flag << "\n"; //prints 0 for false, 1 for true, to print the "true" or "false" words do that:
    std::cout << std::boolalpha << flag << "\n"; // prints 'false'


//'srand' needs be be above int 'answer'

---------------------------------------------------------------------------------------

//switch statement

switch (month) // in C++ can use only integral types, no strings or chars
{
    case "1":
    // code
    break;
    case "12":
    // code
    break;
    default:
    // code
    break;
}

// or you can use an enum to use it with other variables:



int main()
{
    
    enum class Season { summer, winter, fall, spring };
    Season now = Season::winter;

    switch (now)
    {

    case Season::summer:
    break;
    case Season::spring:
    break;
    case Season::fall:
    break;
    case Season::winter:
    std::cout << "Boob" << "\n";
    break;
    }
    
     while(2)
    {
        std::cout << "bah" << "\n";
    }
}
---------------------------------------------------------------------------------------


#include <cstdlib>

srand(time(NULL));
int answer = std::rand() % 10;
std::cout << answer;

------------------------------

ask PC to generate one out of 3 choices:

-----------------------
srand (time(NULL));
 
int computer = rand() % 3 + 1;
 
int user = 0;



^^^^

Now we have a random number that could be 1, 2, or 3 for the computer. And we also have a variable for user’s input.
-----------------------


srand(time(NULL)); //Not working

srand((unsigned) time(NULL)); //this works

int random = rand() % 251; // that makes a number from 1 to 251 but you need to add this on top of the main function as well:
srand(time(NULL));




expression	equivalent to...
y += x;	y = y + x;
x -= 5;	x = x - 5;
x /= y;	x = x / y;
price *= units + 1;	price = price * (units+1)



Here is what a while loop looks like:

------------------------------+
while (condition) {

  statements

}
------------------------------+

// example:

------------------------------------------------+
while (guess != 8) {
 
  std::cout << "Wrong guess, try again: ";
  std::cin >> guess;
 
}
------------------------------------------------+
 // or this example:
 
------------------------------------------------+
while (guess != 8 && tries < 50) {
 
  std::cout << "Wrong guess, try again: ";
  std::cin >> guess;
 
  tries++;
 
}
------------------------------------------------+

The && symbol means and and it combines two conditions into one.

In this while loop, while guess does not equal to 8 and the number of tries is less than 50, we are asking the user to type a number once again. And then we add 1 to tries using the ++ operator.





When we know exactly how many times we want to iterate (or when we are counting), we can use a for loop instead of a while loop:

-----------------------------------------------
for (int i = 0; i < 20; i++) 
{
 
  std::cout << "I will not throw paper airplanes in class.\n";
 
}
-----------------------------------------------

----------------------------
Arrays (C style arrays)
----------------------------
//initialize an array

int myArray[5] = {0};

// or

int myArray[5];

// size has to be there always at initialization!!


// how to pass and return a c-style array,
// how to pass a c-style array to a function:
// pass an array as parameter:
// also how to return a c-style array from a function:

int* filterNegative(int arr[], int size, int& newSize) {
    int* filteredArray = new int[size]; // Create a new array to store the filtered elements
    newSize = 0; // Initialize the newSize to 0

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            filteredArray[newSize] = arr[i];
            newSize++;
        }
    }

    return filteredArray;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before filtering: ";
    printArray(arr, size);

    int newSize;
    int* filteredArr = filterNegative(arr, size, newSize);

    std::cout << "Filtered array: ";
    printArray(filteredArr, newSize);

    delete[] filteredArr; // Remember to deallocate the dynamically allocated memory

    return 0;
}

// return a c style array from a function, return an array from a function
// In C++, you cannot directly return an array from a function. However, you can return a pointer to an array. Here's the syntax for returning a pointer to an int array from a function:

int* functionName()
{
    int* newArray = new int[size];  // Allocate memory for the array
    // Populate the array
    // ...
    return newArray;
}

// this can only be assigned to a pointer to an array (which is a pointer to an int, to put it simply, there is no such thing as a pointer to a c style array, only a pointer to it's first element), not to a normal array; example:

int* createArray()
{
    int* newArray = new int[5];
    for (int i = 0; i < 5; ++i)
    {
        // create array
    }
    return newArray;
}

int main()
{
    int* arrayPtr = createArray();

    // Access and print the elements of the array
    for (int i = 0; i < 5; ++i)
    {
        cout << arrayPtr[i] << " ";
    }
    delete[] arrayPtr;  // Deallocate the memory
}


//formuila to print a c-style array:
void printAsMatrix(int arr[], int numRows, int numColumns) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numColumns; j++) {
            int index = i * numColumns + j;
            std::cout << arr[index] << " ";
        }
        std::cout << std::endl;
    }
}

// the new keyword:
// ALWAYS returns a pointer, you can initialise an object using NEW only if you use a pointer in the lvalue


// very important, if you want to print or edit only a portion of the matrix you will need to use the old sizes (rows and cols) of the big array to do the math right. At least the numColumns here would need to be the old cols, not the new one if the new query is with different number of cols of course
    
int size = sizeof(arr) / sizeof(arr[0]);  // or also: sizeof(arr) / sizeof(int);
// you can't extract the size of an array inside a finction, you need to pass it as a separate paramenter

// we need to specify the size ourselves if we want to use these array, like so:

int array[100];

//or with a pointer:

int * arrayPrt = (new int[1000]);   // weird, I know -_-

// you can initialize an array with a pointer as above
// 








-----------------------------------
STL arrays, templetaised array
-----------------------------------
//initialize:
 
std::array<int, 5> data // templetized array, it knowns it's size, passed by value (same as vectors) not by reference (like arrays)

<type, size>

 
 ----------------------------------------
 //multidimentional arrays
 -----------------------------------------
 
 
 int grades[][3] - {{1,2,3,}, {2,3,4}, {6,6,6}};
 
 // the size [3] needs to be specified, it won't caount it automatically
 
 
 

//'foreach' loop in C++:

{ 
    int arr[]={1,2,3,4,5};   //array initialization
    cout<<"The elements are: ";
    for(int& i : arr)
    {
    	cout<<i<<" ";
    }
    return 0;
}

// this is the loop syntax:
for(int i : arr)

//We can also use auto instead of 'int' in the loop; This ensures that the type of the variable is deduced from the array type, and no data type conflicts occur.

--------------------------------------------------------------------------------------
//sizeof(x) gives the size of the variable in bytes
--------------------------------------------------------------------------------------
getting the size of an array:

    int chicken_eggs[] = {423,534,6345645,25,1325,235,124,152,634,645,2315};
    int size = sizeof(chicken_eggs) / sizeof(chicken_eggs[0]);  // the size of the array devided to the size of one element
    std::cout << size << std::endl;

//prints 11
--------------------------------------------------------------------------------------

--------------------------------------------------------------------------------------
//how to sort an array
--------------------------------------------------------------------------------------
  int arr[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    std::sort(arr, arr + n); // n is the length of the array     you need to #include <algorithm>
    
    // this is sorting the array in ascending order ()
    
--------------------------------------------------------------------------------------  
    
// reverse an array:

std::reverse(arr, arr + n);

--------------------------------------------------------------------------------------


//copy an array:

// with C style arrays you can't do that but with STD arrays and vectors you can just assign it to the new variable :
//  std::array<int, 4> anArray= {12, 3, 4, 12};
//  std::vector<int> aVector = anArray;

copy (arr1, arr1+size, arr2);   //auto copying, the arr2 is the new empty array



// find maximum and minimum elements in an array:

int* max_num_ptr = std::max_element(arr, arr + n);
//and 
int* min_num_ptr = std::min_element(arr, arr + n);


-----------------------------------------------------------------------------
// ternary operator or conditional operator


string color = "blue";
string result = color == "blue" ? "blue" : "NOT blue";
// simply put it means:
// if color == blue add the part after '?' otherwise use the part after ':'

// another example:
string guess;
bool password = sdafwefw1233;
std::cin >> string guess;
guess == password ? std::cout << "You guessed right" : std::cout << "Nah, that's not the password"


----

//reverse a string

std::string str = "hello world";
std::reverse(str.begin(), str.end());

// reverse a vector ; reverse vector

 reverse(v.begin(), v.end());

-------------------------------------------
//Making square work:

#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  // Write a while loop here:
  
  while (i < 10) {
 
  square = i * i;
 
  std::cout << i << "  " << square << "\n";
 
  i++;
 
}

//or you can also use this code:
/*
 while (i < 10) {
 
  std::cout << i << "  " << i * i << "\n"; 
 
  i++; 
 
}  
*/
  
  
  
}
--------------------------------------
//C string

//it is an array of chars by the way, not a real string as the C++ std::string class
//looks like this:

char line1[50] = {'h', 'e', 'l', 'l', 'o', '\0'}

//should be null terminated (\0) always if we want to use it as a string. This tellst he compiler this is the end of the line

//it can also be initialized like this:



char line3[] = "hello";


//inbuild functions


strcat(line1, line2) // concactinates the second line to the first, add it to the first string

strstr(line1, "world"); // not sure what that does, have to look it up; maybe return the index of what we are serching for


strlen(line1) // returns the size of the string


----------------------------------------
// C++ string

//string size:

std::string str = "sdpihaoige";

std::cout << str.size();


//initialization:

string theFoxPart = "the quick brown fox";

string theActionPart("jumps over");

char dogPartCString[] = "the lazy dog"; // C string type

string sentence = theFoxPart + string("---") + // this part is interesting string("---")
        theActionPart + string(3, '-') // this one says print 3 times '-'
        + dogPartCString;




//working with strings 

//inbuild functions:            used like this: string_name.function()

string baha = "maharaha";
baha.find("aha") //returns the index of the word or char we are searching for; if not found returns std::string::npos


find(search what, index) or:
find(baha, "aha") // returns the index , the second argument is where to start from index


find all occurances in a string:

// find all:
//Each time search from after the last index where we found it:


//std::string Find All Occurrences

string str = "canary";
int foundIndex = str.find("a");
while (foundIndex != string::npos) {
cout << foundIndex << endl;
foundIndex = str.find("a", foundIndex + 1);
}

myString.find(subStr, start_to_search_from_pos) // the start_to_search_from_pos is included in the search and is the new index 0


myString.substr(index, length) //returns a new substring starting at the index and as long as the length we haven given it 

myString.erase(index, length)  // removes the number of chars 
myString.erase(index) // removes all after that position


myString.replace(index pos, length, str) // example:               //but it could not find the searching word and will throw an error; be aware!

string s = "abc"; 
s.replace(1,2,"cme"); cout << s; // prints 'acme'; this doens't bother with the old size, it will put as many characters as you want and make the string bogger if it has to
// length is how many chars we will delete!

myString.insert 

//how to insert a char:

std::string myString = "myWord";
char myChar = '<';
myString.insert(0, 1, myChar);


The insert() function takes three parameters:

//The index at which to insert the characters (in this case, 0 for the beginning of the string).
//The number of characters to insert (in this case, 1 for a single character).
//The character to insert (in this case, the variable myChar that contains the < character).

//it can insert strings are well like so:

std::string myString = "myWord";
std::string newSunStr = "<<<";
myString.insert(0, newSunStr);


//.contains:

std::string str = "Hello, world!";
std::string substr = "world";
    
   str.contains(substr) // returns true if it's found and false if it's not found
---------------------------------------



streams

// take lines of input until end is met:
// using getline in a while statement:
string line;
while (getline(cin, line) && line != "end") {

}

// make an object return bool value if it fails to parse to a var in a while loop, by overloading operator ():
        operator bool() const {
            return !stream.fail();
        }


istringstream input;
string line;
std::getline(input, line)  // this returns true or false, can be used in an if statement, it checks 'if the stream can be read'
///or
if (std::getline(input, line) && line != stop) // this checks if there is anything in the stream and if what was read was == to the stop string

std::stringstream  // Istringstream and Ostringstream

#include <sstream>
 
 // how to clear ostringstream:
    std::ostringstream buffer;
    buffer.str("");
    buffer.clear();
==========================================================================================
// istringstream > stream that only reads
==========================================================================================

// Initialize istringstream by giving it a string to read from:

string str = "3 -2";
istringstream numbersStream(str);   // numbersStream is the name of the istringstream and str the name of the string


// From then on, use the stream just like cin

int num1, num2;
numbersStream >> num1 >> num2;
int sum = num1 + num2;


//input > getline > string > stream > vector
    
    
    std::string numberStr;
    std::vector<int> vec1;
    
    std::getline(std::cin, numberStr); // get string from input (and returns bool if it's not empty)
    
    std::stringstream ss(numberStr);    // put string to stream

    int num;    
    while (ss >> num) {  // <<< how to exhaust the stream
        vec1.push_back(num);     // read from stream and put in the vector
    }
  
    


==========================================================================================
// ostringstream is a limited stringstream than only writes
==========================================================================================
//Writing with std::ostringstream

//Initialize ostringstream like a normal variable
ostringstream stream1; // we give it a name, here it's 'stream'
//From then on, use the stream just like cout
stream << "The sum is " << num1 + num2 << endl;
//To get the string when you're done, call str()
cout << stream1.str();

//another example:
#include <iostream>
#include <sstream>

int main() {
  std::string userInput;
  std::cout << "Enter your name: ";
  std::getline(std::cin, userInput);

  std::ostringstream oss;
  oss << "Hello, " << userInput << "!";   // put all the data in one ostringstream and then:

  std::string result = oss.str();   // print it as one string using .str()
  std::cout << result << std::endl;

  return 0;
}

// using ostringstream to create a string:



    std::ostringstream oss;

    int num = 42;
    double pi = 3.14159;
    std::string name = "Alice";

    oss << "Number: " << num << ", Pi: " << pi << ", Name: " << name;

    std::string result = oss.str(); 
    std::cout << result << std::endl;





// using streams in a function:


// we use istream and always pass the streams by reference:

bool compareArray(std::istream & stream1, std::istream & stream2) {
}

// the data type is not specified here, as we don't need to specify it

// checking if the streams are equal number of elements :

while(arr1 && arr2) {

// reading element by element, passing one element at a time per stream

}


// you can use the state of the stream as a return value:
bool tryParse(const std::string str, int& a) {

    std::istringstream iss(str);
    iss >> a;

    return (bool)iss;  // << returns bool depending on the result when the stream tried to assign the value to an int, works as TryParse in C#
}


---------------------------------
//passing newline in a istream:
---------------------------------
    string input = "Hello\nWorld";
    istringstream iss(input);
    string line1, line2;
    getline(iss, line1);  // this is where the magic happens
    getline(iss, line2);
    
    std::cout << "Line 1: " << line1 << std::endl;
    std::cout << "Line 2: " << line2 << std::endl;



----------------------------------------------------------------
//which means you can do that:

    string input = "Hello";
    string input2 = "world";
    string str3 = input + '\n' + input2;
    cout << str3;
    
    
----------------------------
// ifstream and ofstream  writing to files
----------------------------

#include <fstream>

//create an instance of the file class:

std::ofstream file;
file.open("filename.txt") // this file may or may not exist, the extention is not mendatory

// it can also be writen like this:

std::ofstream file ("filename");

// write to the file:

file << "something"; // adds the string to the file

// the above will overwrite the file each time it starts, if we want to add updates to the file wihtouth overwriting it we need to do that at the start:

file.open("filename.txt", std::ios::app);


// write from a file:
// ifstream is usedm itput streams expect the file to exist (will throw an error otherwise)

ifstream input;
input.open("input.txt");
int a, b;
input >> a >> b;
input.close();

//output

ofstream output;
output.open("output.txt"); // will create the file if it doesn't exist
output << a + b << endl; 

output.close();


//output append:

ofstream output("output.txt", fstream::app)













---------------------------
// don't skip whitespaces
---------------------------

// noskipws
// example:
  while (ss >> noskipws >> c)

-----------------------------------------------------------
// get string properly with whitespace in it
-----------------------------------------------------------
// get string from input:



std::string my_string;
std::cin.ignore();
std::getline(std::cin, my_string);

//this puts the whole line that is typed in the console by the user and stores it in my_string

//there is also this:


---------------------------------------------------------------
getline explanation:
getline(x, y)
    x is where we want to read the input from (std::cin)
    y is where we want to store it in (string or vector)
    
we can have a delimiter // check how to do this

//the third argument is a delimiter:

 char delim = ',';
 getline(cin, access, delim); // access is a string we are using to store the input

// cin is a stream !

    std::string input;
    std::cout << "Enter comma-separated values: ";
    std::getline(std::cin, input);

    std::vector<std::string> values;
    std::stringstream ss(input);
    std::string token;

    while (std::getline(ss, token, ',')) {  //we use getline to take back the stringstream and split it
        values.push_back(token);
    }
    
//getline can be used with cin or with stringstream as well:

getline(stream, targetStr)

    
----------------------------------------------------------------------------------------------------
//get items separated by whitespace into a vector:
----------------------------------------------------------------------------------------------------
    vector<int> arr;
    int num;
    while (cin >> num) {
        arr.push_back(num);
        if (cin.get() == '\n') {    // will stop once the end of the line is reached
            break;
        }
    }
   // will stop once the end of the line is reached, otherwise it will wait for more suitable input and will stop only when the iput cannot be put into an integer value;
------------------------------------------------------------------------------------------------------------------------------
// convert string to integer:


int number = 123;
std::string strNumber = std::to_string(number);


------------------------------------------------------------------------------------------------------------------------------
// string to int:

std::string word = "3345, 45";
int wordIntoInt = std::stoi(word);

//will return:
//3345
//everything after the , . or whitespace will be ignored
    
//also string to double:

double number = stod(word);

---------------------------------------------------
// int to string:
int i = 9;
std::to_string(i);

------------------------------------------------------------------------------------------------------------------------------
// conversions :

//implicit casting
char a = 'a';
int i = a;  // this assigns the ASCI digit value of the char, but '2' is not equal to 2 in this logic

// to get the int value use this:
char c = 2;
input[i] = c - '0';  // this adds the int value to the input[i] array/string/vector elemnt
 

//explicit casting
int i = 97;
char a = (char)i;

double a = 3.442;
int x;
x = (int)a;  // this simply removes the mantissa 

char to int:

std::cin >> char c;
int num = c - '0'; // uses the ASCII table differnece to get the int value


//make a char from small to capital letter:

char c = a;
c -=32; //this adds in the ascii table the place where the char is a capitalized

usually we use:


#include <cctype>

    char ch = 'a'; 
    char uppercaseChar = std::toupper(ch);
    
    
// check if char is a letter (without the inbuild method etc std::isalpha(c)) :

char c;
std::cin >> c;
if (c >= 'a' && c <= 'z' || a >= 'A' && c <= 'Z')

// The check checks two ranges because of the way the ascii table looks like:


//check if char is a digit:

isdigit(c)

//check if char element in a vector is empty:
if (vec[0] == '\0') 

//check if a string element in a vector is empty:
if (vec[1].empty())
/*


ASCII table:

Dec Hex    Char  Description                  Dec Hex    Char    Dec Hex    Char   Dec  Hex    Char
------------------------------------------    -----------------  ---------------   ----------------
0   0x00   NUL   null                         32  0x20   SPACE   64  0x40   @      96   0x60   `
1   0x01   SOH   start of heading             33  0x21   !       65  0x41   A      97   0x61   a
2   0x02   STX   start of text                34  0x22   "       66  0x42   B      98   0x62   b
3   0x03   ETX   end of text                  35  0x23   #       67  0x43   C      99   0x63   c
4   0x04   EOT   end of transmission          36  0x24   $       68  0x44   D      100  0x64   d
5   0x05   ENQ   enquiry                      37  0x25   %       69  0x45   E      101  0x65   e
6   0x06   ACK   acknowledge                  38  0x26   &       70  0x46   F      102  0x66   f
7   0x07   BEL   bell                         39  0x27   '       71  0x47   G      103  0x67   g
8   0x08   BS    backspace                    40  0x28   (       72  0x48   H      104  0x68   h
9   0x09   TAB   horizontal tab               41  0x29   )       73  0x49   I      105  0x69   i
10  0x0A   LF    NL line feed, new line       42  0x2A   *       74  0x4A   J      106  0x6A   j
11  0x0B   VT    vertical tab                 43  0x2B   +       75  0x4B   K      107  0x6B   k
12  0x0C   FF    NP form feed, new page       44  0x2C   ,       76  0x4C   L      108  0x6C   l
13  0x0D   CR    carriage return              45  0x2D   -       77  0x4D   M      109  0x6D   m
14  0x0E   SO    shift out                    46  0x2E   .       78  0x4E   N      110  0x6E   n
15  0x0F   SI    shift in                     47  0x2F   /       79  0x4F   O      111  0x6F   o
16  0x10   DLE   data link escape             48  0x30   0       80  0x50   P      112  0x70   p
17  0x11   DC1   device control 1             49  0x31   1       81  0x51   Q      113  0x71   q
18  0x12   DC2   device control 2             50  0x32   2       82  0x52   R      114  0x72   r
19  0x13   DC3   device control 3             51  0x33   3       83  0x53   S      115  0x73   s
20  0x14   DC4   device control 4             52  0x34   4       84  0x54   T      116  0x74   t
21  0x15   NAK   negative acknowledge         53  0x35   5       85  0x55   U      117  0x75   u
22  0x16   SYN   synchronous idle             54  0x36   6       86  0x56   V      118  0x76   v
23  0x17   ETB   end of transmission block    55  0x37   7       87  0x57   W      119  0x77   w
24  0x18   CAN   cancel                       56  0x38   8       88  0x58   X      120  0x78   x
25  0x19   EM    end of medium                57  0x39   9       89  0x59   Y      121  0x79   y
26  0x1A   SUB   substitute                   58  0x3A   :       90  0x5A   Z      122  0x7A   z
27  0x1B   ESC   escape                       59  0x3B   ;       91  0x5B   [      123  0x7B   {
28  0x1C   FS    file separator               60  0x3C   <       92  0x5C   \      124  0x7C   |
29  0x1D   GS    group separator              61  0x3D   =       93  0x5D   ]      125  0x7D   }
30  0x1E   RS    record separator             62  0x3E   >       94  0x5E   ^      126  0x7E   ~
31  0x1F   US    unit separator               63  0x3F   ?       95  0x5F   _      127  0x7F   DEL


*/

------------------------------------------------------------------------------------------------------------------------------
    
//*    pointer points to the address of the first element of the list
//     pointers can change the elemnt they point to
//
//&    reference always point to one element
//     references can't be changed once initialised


----------------------------------------------------------------------------------------------------
//general iterators
----------------------------------------------------------------------------------------------------
//iterators often use size_t data type; each STL containter offers a similar size_type type. For vector for example:

std::vector<T>::size_type // is the type where we ofter use just int
// or this:

std::vector<T>::iterator i ... {
    
    access the element like so:
    *i  // i will be printed, the value of the element where the i points to (it's a pointer)
    // same as vector[i], but shorter and more reliable 


// Access the current element with *

// Using Iterators with Vectors


vector<int> nums {42, 13, 69};
    for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++) {
    cout << *i << endl;
} 


get index with iterator:

int inedex = it - vector.begin(); // works only with iterators
------------------------------------------------------------------

size_t and size_type are unsigned (cannot be less than 0) long int;
size_t is able to represent the size of any object in bytes;

sizeof() returns size_t; size_t is used when we want to represent an index of the size of something.


we can use the iterators like so:

// - you can't access the numeric value of the iterator just by using i, you will need to use 
std::cout << std::distance(v.begin(), i) << std::endl;  // access the numeric value of the iterator where V is the vector name

//or we can find the index number by doing that:

i - v.begin() // this turns the iterator into a integer when we want to print it, idk if it ill work for assigning 

// - you can use methods like so:
std::cout << *i < ": " << i->size() << std::endl; // here the vector contains strings, this is referring to their respectful sizes
// - tjhe iterator loop looks like this:
for (std::vector<int>::iterator i = numbers.begin(); i != numbers.end(); i++)
// all iterators have these elements:

operator++ - moves iterator to the next element
operator* - accesses the element
operator-> - same as operator. on the element







---------------------------------
//using STD algorithms:
---------------------------------

inside #algorithm :

https://cplusplus.com/reference/algorithm/

lower_bound(begin, end, value)
// finds the closest bigger element (iterator) in the container; if it doesn't exists it returns where it should be, you can eliminate that case with a check: if (it != nums.end()) as usual;

it-nums.begin() //returns the index strangley enough :/

min_element(begin, end)
//returns iterator if range is not empty(if it is it returns end). since it's an iterator it needs to be dereferenced
//data must have < 
max_element //same as min_element in the details


std::string.find()  //returns the possition of the found item and std::string::npos if not found
std::string.sort()

string.find("substring") 
string.find("s") 


//using .find with a vector:


std::*find(vector.begin(), vector.end(), lastItem) // the * stands for dereferencing the result, as it will be a pointer;

//check:
!= vector.end() only in case you are checking the whole container!!! otherwise use the last item as a check;


--------------------------
std::string.sort // (the string is called  numbers in this example)

std::sort(numbers.begin(), numbers.end());

std::sort(numbers.begin(), numbers.end(), std::less<int>()); //в нарастващ ред (the default way)

std::sort(numbers.begin(), numbers.end(), std::greater<int>()); // в намаляващ ред

//sort a vector:

std::vector<int> myVec = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    
    std::sort(myVec.begin(), myVec.end());

//sorting an array:

string wordsArray[6] { "whales", "cats", "dogs", "fish", "cheetahs", "dodos" };
    sort(wordsArray, wordsArray + 6);
    
//sorting lists (they have their own sort method): sort list
    
list<int> nums { 61, 41, 231, 764, 45 };
    nums.sort();
//in reverse:

nums.sort(std::greater<int>());

---------------------------------------------------------------------------------------------
//lists general

// initialize list:

std::list<int> my_list {};

// with elements:

std::list<int> my_list {1, 2, 3, 4, 5};

// with repeated elements:

std::list<int> my_list (10, 0); // creates a list with 10 elements of value 0

//empty list with 10 elements

std::list<int> my_list (10); // creates a list with 10 elements of value 0 as well 

// All element access is done with iterators



// Can add or remove elements anywhere in O(1) time

//add elements to a list, add to list, add to a list:
push_back();
//access element in list // access list > 
list.front();

// lists have:
push_back(), push_front(), insert(), size()


//push_back() is equivalent (also for lists) to     -- -  --+  
std::list<int> numbers {1,3,5};                      //    |
                                                      //    |                    
std::list<int>::iterator lastItemIter = numbers.end(); //< -+ this
numbers.insert(lastItemIter, 3);


// Element access:
front() // Access first element
back() // Access last element

//using erase on lists:

pop_back() // delete last element
pop_front() // delete first element

lastItemIter = numbers.begin(); // points to the start of the list
lastItemIter++; 
lastItemIter++; //now points to the third element of the list
lastItemIter = numbers.erase(lastItemIter); // erases the third element of the list

//another way to use erase:
    list<int> myList = {1, 2, 3, 4, 5};
    list<int>::iterator it =    next(myList.begin(), 2); // Iterator pointing to the third element, this seems to move the iterator with two positions to the right
    myList.erase(it); // Remove the third element


// search list search in a list search in list

    auto it = find(mylist.begin(), mylist.end(), 3);
    if (it != mylist.end()) {
        //
    }
    
    // or
    
    auto it = find (my_list.begin(), my_list.end(), some_value); // some_value is what we are searching for
    
    
    -----------
    //iterate using a while loop, removing elements from a list:
    
    class Company {
        string name;
        int id;
        // has getters for name and id
    }
    
    list<Company*>& list
    
    
    auto it = list.begin();  // we want to remove all duplicate elements atfter the first occurence, using iteration
    while (it != list.end()) {
        auto itIn = std::next(it);
        while (itIn != list.end()) {
            if ((*it)->getName() == (*itIn)->getName()) {
                itIn = list.erase(itIn); // Remove the duplicate element
            } else {
                ++itIn;
            }
        }
        ++it;
    }        
------------------------------------------------------------------------------------------------



//reverse iteration through a list
 for (auto itl = orderOfAppearanceList.rbegin(); itl != orderOfAppearanceList.rend(); ++itl)
------------------------------------------------------------------------------------------------------------------------------
//sort a list
------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------
    
//string.erase

erase(pos, count): Removes count characters from the string starting at index pos.

erase(pos): Removes the character at index pos from the string and everything after that

erase(): Removes all characters from the string.

erase(iterator): Removes the character at the position pointed to by the iterator.

erase(first, last): Removes the characters in the range [first, last] from the string.

--------------------------------------------------------------------------------------------------------------------------

//string.replace
                                                         
replace(size_t pos, size_t count, const std::string& str, size_t subpos, size_t sublen): This overload replaces a part of the original string starting at pos and ending after count characters, with a substring of str that starts at position subpos and has a length of sublen.

replace(size_t pos, size_t count, const char* cstr, size_t cstr_len): This overload replaces a part of the original string starting at pos and ending after count characters, with the first cstr_len characters of the C-style string cstr.

replace(iterator first, iterator last, const std::string& str): This overload replaces the characters in the range specified by the iterators first and last with the contents of the string str.

replace(iterator first, iterator last, const char* cstr, size_t cstr_len): This overload replaces the characters in the range specified by the iterators first and last with the first cstr_len characters of the C-style string cstr.

replace(iterator first, iterator last, size_t count, char ch): This overload replaces the characters in the range specified by the iterators first and last with count copies of the character ch.

In all of these overloads, the first two parameters specify the range of characters to replace.            

   example:                                               
                                                         
    std::string nona = "Bamboozle";
    nona.replace(3, 4, "**^^*&^*&");  // start index,    number of the chars removed,    what are the chars replaced with
    std::cout << nona << "\n";                                                                                                     //prints Bamb**^^*&^*&e

--------------------------------------------------------------------------------------------------------------------------  
//create substring 
//string.substr 

string1.substr(5,2) //returns part of a string starting from 5 and lasts 2 chars (length, not position!!) 

//it can be used like this:

string1.substr(5) // starts the new string from the possition 5 till the end of the string1 string;
--------------------------------------------------------------------------------------------------------------------------

--------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------

// general vectors general
// https://www.geeksforgeeks.org/vector-in-cpp-stl/


After the angle brackets is the name of the vector.

// vector initialization
// initialize vector

std::vector<double> location(2);

              ^         ^    ^
            type      name  number of elements (not set what they are yet)
            

std::vector<int> vec(5, 0); // a vector with 5 elements all equal to 0;





//adding items to a vector:

std::vector<std::string> dna = {"ATG", "ACG"};


//add an element to a vector:

dna.push_back("GTG");
dna.push_back("CTG");

//search in a vector, search vector, search a vector

find(myVector.begin(), myVector.end(), 3) // begin, end and the element we are searching for; returns an iterator!!
// if not found returns myVector.end(), returns an iterator anyway;

//same as this:
 auto it = std::find(v.begin(), v.end(), x);
    if (it != v.end()) { 
        //
    }

--------------------
2D vectors:

       std::vector <std::vector<std::string>> users = {{}, {}};
       std::vector<std::vector<std::string>> complexVector; //another example

    // rows int[x][]
    // columns int [][x]
    
    //              0 |   |    |   |
    //                |___|____|___|
    //              1 |   |    | X |  
    //                |___|____|___|   to access X [1][2]
    //              2 |   |    |   |  
    //   
    //                  0   1    2
    
    
   // populating 2d vectors from console input:
   // create 2d vector
    
        size_t rows, cols;
    vector<vector<int>> vec;
    cin >> rows >> cols;
    cin.ignore();
    int element;

    for (int i = 0; i < rows; i++) {
        vector<int> vecInput;
        for (int k = 0; k < cols; ++k) {
            cin >> element;
            vecInput.push_back(element);
        }
        vec.push_back(vecInput);
    }
    
    // remove element from a vector:
    vector.erase() 
    
int main ()
{
  std::vector<int> myvector;

  // set some values (from 1 to 10)
  for (int i=1; i<=10; i++) myvector.push_back(i);

  // erase the 6th element
  myvector.erase (myvector.begin()+5);

  // erase the first 3 elements:
  myvector.erase (myvector.begin(),myvector.begin()+3);

  return 0;
}
-------------------------------------------------------------------------------------------------------------------
   
2d arrays

//zero initializer:

int arr[rows][cols] {}; //note that this has a different syntaxis from the 2d vectors' initilization



//pass a '2d' array to a function: (really a linear array, much easier this way)

--------------------------------------------------------------------------
void printMatrix(int rows, int cols, char* arr){  // prints the array

    for (int i = 0; i < rows; ++i) {
        for (int k = 0; k < cols; ++k){
            cout << arr[i * cols + k] << ' ';   // access a c-style array element formula
        }
            cout << endl;
    }

}

int main() {

        int r, c; 

        cin >> r >> c; // r = rows, c = columns
        char ch;

    char* arr = new char[r * c];

    for (int i = 0; i < r; i++) {    // fills the array
            for (int j = 0; j < c; j++) {
                cin >> ch;
                // Assign values to
                // the memory block
                *(arr + i * c + j) = ch;  // alternative formula
            }
        }


    cout << "test" << '\n';

    printMatrix(r, c, arr);
    
    return 0;
}

--------------------------------------------------------------------------

    // Traverse the 2D array
    for (int i = 0; i < m; i++) { // m number or rows
        for (int j = 0; j < n; j++) { // n i s the number of columns
 
            // Print values of the
            // memory block
            cout << *(arr + i * n + j)   // alternative formula
                 << " ";
        }
        cout << endl;
    }

// access different elements:
    int i = 1; int k = 1;
    cout << "print element 1 1: " << arr[i * c + k] << endl;
    cout << "print element one up: " << arr[(i-1) * c + k] << endl;  
    cout << "print element one down: " << arr[(i+1) * c + k] << endl;  
    cout << "print element one left: " << arr[i * c + (k-1)] << endl; 
    cout << "print element one right: " << arr[i * c + (k+1)] << endl; 
    cout << "print element up+rigth: " << arr[(i-1) * c + (k+1)] << endl;  
    //cout << "print element up+left: " <<  << endl;
    //cout << "print element down+left: " <<  << endl;
    //cout << "print element down+rigth: " <<  << endl;
    
    
    //check borders:
    
        // left b  (if col < 0)
        // rigth b (if col > c)
        // down b  (if row > r)
        // up b  (if row < 0)
--------------------------------------------------------------------------



   
using .find with a vector:


std::find(vector.begin(), vector.end(), item) != vector.end()







functions

------------------------------------------------------

//Assign a random number to an int

#include <iostream>

int main() {
  
  // This seeds the random number generator:
  srand (time(NULL));
  
  // Use rand() below to initialize the_amazing_random_number
  
  int the_amazing_random_number = rand() % 666;            //<< Assigns a random number to an int; that is assigns the function's value to the int
 
  std::cout << the_amazing_random_number;
}

// set a range for the rand:
srand(time(NULL));
int max+value = 3080807;
int number = rand() % max_value + 1 // returns a number [1.....max value]
//or

int number = rand() % max_value // returns a number [0.....max value-1]

create a random number from 1 to x:

rand() % x; //returns the number
--------------------------------------------------------


square function

#include <cmath>
We gain the power to call sqrt() to find the square root of any number.

Calling a function is how we get a function to take action. To call a basic function, we just need the function name followed by a pair of parentheses like sqrt(9). For example:

std::cout << sqrt(9) << "\n";
 
// This would output 3


--------------------------------------------------------------------------------------------------
//operators precedence:
https://www.youtube.com/watch?v=_bYFu9mBnr4&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=1&t=11046s


https://en.cppreference.com/w/cpp/language/operator_precedence


--------------------------------------------------------------------------------------------------
//header files

// usually declarations go here, not the definitions, but if you have definitions, then don't use semicolon:

#ifndef REGISTER_H
#define REGISTER_H

#include "Company.h"

class Register {
	size_t numAdded;
	Company* companiesArray;
public:
	Register() : numAdded(0), companiesArray(nullptr) {}  // definition 

	Register(size_t numCompanies);  // declaration

	void add(const Company& c);  // declaration

	Company get(int companyId) const;  // returns the company with the given id, declaration

	~Register(); // declaration

	Register& operator=(const Register& other);   // declaration only
	Register(const Register& other); // declaration only
};

#endif // !REGISTER_H

// default constructor added:
MyClass() = default; // C++ 20(or 21) and above
// or this
MyClass() {}; // same but the old syntax, still works


//Function Declarations in Header file
//C++ functions typically have two parts: declaration and definition.

//Function declarations are generally stored in a header file (.hpp or .h) and function definitions (body of the function that //defines how it is implemented) are written in the .cpp file.



1 header file // .h declarations, structs go here as well
2 implementation file // .cpp definitions, don't use ';', also default argumetns can be removed, they are put in the header file declarations
3 main file   // .cpp calling

//both cpp files need to #include the .h file

==================================
//in the header file:
#ifndef nameOfImplementationFile // with no extention, in all caps //In general, the include guard name is made by taking the name of the header file, converting it to uppercase, and replacing any non-alphanumeric characters with underscores. The _H or _HPP suffix is then added to make the name unique and indicate that it is a header file.
#define nameOfImplementationFile  

//all the functions declarations go here

#endif

// you can use only this at the top:

#pragma once

// and don't add ifndef, define and endif, pragma once is enough since C++20

===========================
DEBUGing
===========================

conditional inclusion of code can be setup like so:

#define BOOBA //on top


#ifdef BOOBA

std::cout << "This is conditional code!"\n;   //this will not be included in the code at compiling if the BOOBA is not defined at the start

#endif

====================================================================
// Structs
====================================================================
 
// creating a struct:
 
 struct User
{
//by default the members are public

    std:string first_name;
    std:string last_name;
    std:string status;
    std:string age;
    
    int get_salary()   // a method to use to get to salary from outside the struct
    {
        return salary;
    }
    
    private:
        double salary = 14000;
 
};

//make one letter to lower case:

str[i] = tolower(str[i]);

//or make one letter to a capital letter"

str[i] = toupper(str[i]);

//make all to lowercse in a string str. :

transform(str.begin(), str.end(), str.begin(), ::tolower);
    

====================================================================
// Classes 
==================================================================== 
// by default the members are private

//create a class:


class User
{
    string status = "dumb";

    public:
        string first_name;
        string last_name;
        string middle_name;

};

















    // methods are declared in the header file, but the definitaions are in a separate file with the same name as the hpp file but .cpp. 
    
------------------------------------------------------------------------------   
// Declaration in the hpp file:
------------------------------------------------------------------------------
#include <string>

    class Song {

  std::string title;

  public:
  void add_title(std::string new_title);     << the method declaration
  std::string get_title();
  
 };
------------------------------------------------------------------------------
// Definition in the cpp file (with the same name as the hpp file):
------------------------------------------------------------------------------
#include "song.hpp"
    
void Song::add_title(std::string new_title) {    << deffinition
                                                 <<
  title = new_title;                             <<
                                                 <<
}                                                <<

std::string Song::get_title() {

  return title;

}
------------------------------------------------------------------------------

            
class City {

  // Attribute
  int population;

public:
  // Method 
  void add_resident() {
    population++;
  }

};


------------------------------------------------------------------------------
            
class ClassName {

/*

 strings
 integers
 stuff
 
*/
 
 public:
 
 MethodForAddingNewMembers();

    
    public:
    
    private: <<<<< breaks public, by default everything in a class is private
    

};


In a mail function you can add new Objects by just typing this:


ClassName object_name;   >>>>    same as    >>>> int x;

it works like a normal type:

int x;


---------------------------------------------------------------------------

If we want to make sure each City is created with a name and a population, 
we can use parameters and a member initializer list to initialize attributes to values passed in:

// city.hpp
#include "city.hpp"
 
class City {
 
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
 
};

// city.cpp

City::City(std::string new_name, int new_pop)

  // members get initialized to values passed in 
  

  : name(new_name), population(new_pop) {}
You could also write the definition like this:


City::City(std::string new_name, int new_pop) {
  name = new_name;
  population = new_pop;
}


---------------------------------------------------------------------------
//However, a member initialization list allows you to 
//directly initialize each member when it gets created.


To instantiate an object with attributes, you can do:

// inside main()
City ankara("Ankara", 5445000);


Song::Song(std::string new_title, std::string new_artist)


----------------------------------------------------------------------------







//integer/integer = integer
//float / float = float
//float / integer = float



 
system ("cls"); // deletes everything from the terminal; clear the terminal  

---------------
//general stacks general
---------------

//last in first out LIFO 
//imagine heavy items, can't remove the one below, only the one at the top
 
top() returns the top
pop() removes the top
push() adds to top




---------------
//queues general
---------------
// can't use iterators
//first in last out "FILO"

front() gets first
pop() removes first
push() adds to back

---------------
//priority queues
---------------

top() gets first
pop() removes first
push() adds to back

priority_queue<int, deque<int>, std::greater<>> nameOfQueue;


 
push() //adds to back


how to exhaust a stack:

stack:
 
while (!reversed.empty())

queue:

while (!queue.empty())


// Key-Value containers

//==================
// maps and pairs general maps general
//==================
//pairs general:
//========

//pair е клас и темплейт от STL;

stl::paid<T1, T2> name  // използва се в мапове постоянно; 

//в мап first винаги е ключа, second е value-то
//асоциативни контейнери, имат O(log n) или О(1);

//initialization:
std::pair<type1, type2> myPair = {value1, value2};

//add elements to a pair:
vector<pair<string, double>> products;
products.push_back(make_pair(productName, productPrice));
//or
vector<pair<int, int>> v;
int start, end;
v.push_back({ start,end });  // <<



//========
//maps:
//========


// map iterators in loops:

map<string, int> cities = 
    {
        pair<string, int> {"Gabrovo", 58950},
        pair<string, int> {"Sofia", 1307376},
        pair<string, int> {"Melnik", 385},
    };


for (auto i = cities.begin(); i != cities.end(); i++)
{ cout << i->first << " " << i->second << endl; }

// note the -> operator, it's necessary with map iterators

//adding elements to a map:
cities.insert(pair<string, int>("Melnik", 358));



//or
cities["Melnik"] = 478;


// more examples:

std::map<std::string, int> populationMap; // Create an empty map

// Add elements to a map
populationMap["City A"] = 1500000;
populationMap["City B"] = 500000;
populationMap["City C"] = 2000000;


//  search map
//  how to search in a map, search a map, seach an element in a map: (we need to create an iterator first)
[map iterator].find() // връща итератор към двойката; или mapName.end() ако го няма, но търси само по ключ, винаги

auto result = cities.find(searchCityName); // this is an iterator 'result', but also the found value in the find() function
if (result != cities.end()) // here we check if this returns true or false, found or not
    cout << result->first << " " << result->second;
    
//alternatively we can use to search the map [] but we need to be 100% sure the key inside the [] exists.
cities["x"]++; // if not found adds {"x", 0}, returns int& (the 0), 0++ gives 1, so {"x", 1}





//if the second element of the pair is a vector here is how we add elements:

record.insert(make_pair(name, vector<double>{grade}));


//remove an element in a map

cities.erase("Malkik"); // if the key doesn't exist, it will throw a runtime error
//using an iterator:
cities.erase(cities.find("Melkik")); // this one is a little faster

//remove the top element of the map:
myMap.erase(myMap.begin());

// access a particulat element of the map
    map<string, int> myMap;

    // Add elements to the map
    myMap["A"] = 10;
    myMap["B"] = 20;
    myMap["C"] = 30;

    // Access a particular element
    string key = "B";
    int value = myMap[key];  // value is 20
------------------------------------------------------------------------------
create map of type <sting, int> // this is in the demo files in C:\Users\tvtso\Desktop\APPPPP\CPP\SoftUni\Advanced\Map and Set\03. Map-and-Set-Demos
map<string, vector<int> StidentGrades;:
------------------------------------------------------------------------------
    map<string, vector<int> > studentGrades;

    int numStudents;
    cout << "Enter students count: ";
    cin >> numStudents;

    // remove the endline from the input
    //(after we read numStudents we're at the end of that line)
    cin.ignore();

    for (int i = 0; i < numStudents; i++)
    {
        string line;
        getline(cin, line);

        istringstream lineIn(line);
        string name;
        lineIn >> name;

        vector<int> grades;
        int grade;
        while(lineIn >> grade)
        {
            grades.push_back(grade);
        }

        studentGrades[name] = grades;
    }

    string command;
    getline(cin, command);
    while(command != "end")
    {
        cout << endl;

        map<string, vector<int> >::iterator gradesIt =
                                    studentGrades.find(command);

        if (gradesIt != studentGrades.end())
        {
            for (int grade : gradesIt->second)
            {
                cout << grade << " ";
            }
        }
        else
        {
            cout << "no info" ;
        }

        getline(cin, command);
    }
    
    //print the content of the map print map print emements of a map print a map
    // iterate through a map, map loop 
    
        for (auto i = cities.begin(); i != cities.end(); i++)
        { cout << i->first << " " << i->second << endl; }   
    //or
        for (pair<string, int> element : cityPopulations)
        { cout << element.first << " " << element.second << endl; }   //weird af syntax
    
    
nested map:

        std::map<std::string,               //<< initialisation
        std::map<std::string, 
        std::vector<std::string>>> 
        continents;

    for (int i = 0; i < n; i++) {           // filling the map n times
        std::string continent, country, city;
        std::cin >> continent >> country >> city;
        continents[continent][country].push_back(city);
    }
    
    //why the above works:
    
//    When we access an element of continents using the [] operator, if the key being accessed does not already exist in the map, 
// a new element is inserted into the map with the key-value pair. If the key already exists in the map, then the 
// operator returns a reference to the existing value associated with the key.

          print the nested maps with 3 nested for range based loops:
          
    for (auto& continent : continents) {
        std::cout << continent.first << ":\n";
        for (auto& country : continent.second) {
            std::cout << country.first << " -> ";
            for (int i = 0; i < country.second.size(); i++) {
                std::cout << country.second[i];
                if (i < country.second.size() - 1) {
                    std::cout << ", ";
                }
            }
            std::cout << std::endl;
        }
    }
------------------------------------------------------------------------------




===============
//general sets general
===============
// does not have
.front() or .top()
//only unique elements, only keys

.find() // връща итератор към ключ или .end() ако ключа го няма

 std::set<int> mySet = {1, 2, 3, 4, 5};

    // Search for the element 3 in the set
    auto it = mySet.find(3);


.insert() //вмъква само ако няма такъв ключ

//print the set:

for (set<char>::iterator i = letters.begin(); i != letters.end(); i++) 
{
    cout << *i; //since iterators work like pointers and the set only has one value we can use it directly
}
 
//remove item 
set.erase(exact_emelent_value);

//CHATGPT:

  // Using a range-based for loop
    for (const auto& elem : mySet) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Using an iterator
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << *it << " ";
    }




//iterate a set like so:

    // Using a for-each loop
    std::cout << "Using a for-each loop: ";
    for (const auto& element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Using an iterator
    std::cout << "Using an iterator: ";
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    
//iterare in reverse:

    std::cout << "Set elements in reverse order:" << std::endl;
    for (auto it = mySet.rbegin(); it != mySet.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

// how to check if we are not at the last element:

it != prev(listName.end())

//or

next(it) != myset.end()

++++

-----
// unordered_set  - same functions as unordered_multiset
// the difference between the two:


//The main difference between std::unordered_set and std::unordered_multiset in C++ is how they handle duplicate elements:
//
//std::unordered_set: It is an unordered container that stores a collection of unique elements. Duplicate elements are not allowed in a set, so when inserting an element that already exists, the insertion operation is ignored.
//
//std::unordered_multiset: It is an unordered container that allows duplicate elements to be stored. It can contain multiple elements with the same value. When inserting an element, whether it is a duplicate or not, it is added to the container.

emplace(), insert(), erase(), clear(), count()

// access top element:

if (!mySet.empty()) {
        int topElement = *mySet.begin();
        std::cout << "Top element: " << topElement << std::endl;
        } else {
        std::cout << "Set is empty." << std::endl;
    }
    
// remove element

size_t removedElements = mySet.erase(elementToRemove); // have to provide the value of the element you want to remove

// there is not really a top of front element here, it's a bucket of elements
        

//best container to check for unique elements that do not duplicate is the unordered_multiset because of this:

#include <iostream>
#include <unordered_set>

int findNonDuplicate(const std::unordered_multiset<int>& values) {
    for (const auto& value : values) {
        if (values.count(value) == 1) {
            return value;
        }
    }

    return -1; // No non-duplicate value found
}

int main() {
    std::unordered_multiset<int> values = {1, 2, 2, 3, 3, 4, 5, 5};

    int nonDuplicate = findNonDuplicate(values);

    if (nonDuplicate != -1) {
        std::cout << "Non-duplicate value: " << nonDuplicate << std::endl;
    } else {
        std::cout << "No non-duplicate value found." << std::endl;
    }

    return 0;
}
-------------------------------

//general pointers general

// how to dynamically allocate an array of pointers:

Company* companiesArray; // does not allocate any memory
companiesArray = new Company[numCompanies];  // allocates accordint to the default constructor in Company, if ther eis none it uses the C++ directive

//initialize with a pointer // initialize with pointer // pointerinitialization

int* pointerToArray = new int[5]; // Dynamically allocate memory for an array of size 5, must have size
// access elements:
pointerToArray[index];

char* input = new char[100];
==================================================================
==================================================================
==================================================================
==================================================================
            // pointer to a function
==================================================================
    
    // how it loosk like as a type:
    void(*)();
    // how it works:
    
    void hello(int x) {
        while (x--) {
                std::cout << "Hello" << std::endl;
            }
    }
    int main () {
    
        //auto f = hello;
        void(*f)(int) = hello;  // T(*name)(params)
        f(5); // we are calling the hello() function here!
    }
==================================================================
==================================================================
==================================================================
==================================================================

            // pointer to a function, example:

            void blah(string str, int x) {
                while (x--) {
                    cout << str << endl;
                }
            }

            int main() {

                void (*myPointer) (string, int);    // initialize the pointer without an address, without a name; pointer to function
                myPointer = blah;                   // we assign it, we give it an address;
                myPointer("bubibo bap baduda", 7);  // we run the pointer
            }

            // here ^^^ we can use myPointer to switch where it points to, we can have a different functions all suitable for the pointer to point to (number, order and type of arguments must be the same as the type of the pointer);
------------------------------------------------------------------------------------------------------
            // another example:
            // using pointer to a function as an argument in another function

            void print(const vector<int>& v) {
                for (int item : v){
                    cout << item << " ";
                }
            }

            vector<int> filter(vector<int> numbers, bool(*shouldFilter)(int)) {  // the (int) part is the shouldFilter argument list
                vector<int> filtered;
                for (int n : numbers) {
                    if (shouldFilter(n)) {
                        filtered.push_back(n);
                    }
                }
                return filtered;
            }

            bool isEven(int number) {
                return number % 2 == 0;
            }

            bool isOdd(int number) {
                return number % 2 != 0;
            }

            int main() {

                vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8};
                print(filter(input, isEven));    // in filter() we are using two different functions as parameters isEven first...
                cout << endl;
                print(filter(input, isOdd));     // ...and then we use isOdd

            } // the definition of filter allows that percisely because it's using a pointer as a parameter

            // the idea here is that you need to use a pointer to a function if you want to use a function as a paramenter in another function! always! This is why it's necessary to use pointers when using functions as paramenters. Also this allows you to not cpecify which exact function you are going to use, it only speifys the return type and the intake parameters. You can use any function you have with these parameters and the same return type inside this bigger function;

            // this way we can set a number of pointers with different results:

            double addition(double x, double y){

            }

            double multiplication(double x, double y){

            }

            double subtraction(double x, double y){

            }

            performOperation(double (*myPointer) (double, double)){
                myPointer()
            }

                int main() {

                    performOperation(addition(2, 3));
                    performOperation(subtraction(2, 3));
                    performOperation(multiplication(2, 3));
                }

            // we can create a calculator program with pointers this way

// alternatively we can use 
const std::function<void(val1, val2, val3)>& nameOfFunc //in the parameter list, void is the return type, val1, val2 and val3 are the parameters, the name must match the name that is passed in the main program   
// might neeed mor ereaserch on the usage of this  ^^^


// lambda functions

auto greet = []() {  // first part = the function is assigned to a varialbe called greed, second part it takes no parameters ()
    std::cout << "Hello, world!" << std::endl;
};
int main() {
    // Call the lambda function through the variable
    greet();
}
//the type of the greet variable (yes, it's a variable) is deduced as a lambda function type. However, the specific lambda function type is an unnamed type generated by the compiler and is not directly accessible or expressible in code.


==================================================================
// smart pointers
==================================================================

unique_ptr -> // no need for delete, unique_ptr clears memory when it goes out of scope, but you cannot assign it ever
unique_ptr -> // no need for delete, unique_ptr clears memory when it goes out of scope, but you cannot assign it ever


//unique_ptr to a class:

int main() {
    // Create a unique_ptr to a MyClass object using make_unique
    std::unique_ptr<MyClass> myClassPtr = std::make_unique<MyClass>(42);

    // Use the unique_ptr as if it were a regular pointer
    myClassPtr->doSomething();

    // No need to explicitly delete myClassPtr, memory will be managed automatically

    return 0; // myClassPtr is automatically deleted when it goes out of scope (end of main)
}


//shared_ptr to a class:

int main() {
    // Create a shared_ptr to a MyClass object using std::make_shared
    std::shared_ptr<MyClass> myClassSharedPtr = std::make_shared<MyClass>(42);

    // Use the shared_ptr as if it were a regular pointer
    myClassSharedPtr->doSomething();

    // The object will be automatically deleted when the last shared_ptr that owns it is destroyed

    return 0; // myClassSharedPtr is automatically deleted when it goes out of scope (end of main)
}

// shared pointer to an existing obejct of a class

    CommandInterface cmdInf(str); // Creating an object of CommandInterface

    // Creating a shared_ptr that points to the existing object 'cmdInf'
    std::shared_ptr<CommandInterface> sharedPtr(&cmdInf);


// pointer casting general
// c-style casting:

          int* ptr = (int*)some_other_ptr;   
// or this example:

	char letter = 'A';

	void* voidPtr = &letter;
	char* charPtr = &letter;

	char* cStyleCastPtr = (char*)voidPtr;  // c-style casting
	int* badCast = (int*)charPtr;          // c-style casting

//static cast
// static_cast<T> 

char letter = 'A';
void* voidPtr = &letter;
char* p1 = static_cast<char*>(voidPtr);


// nullptr

// how to allocate assign to a nullptr:
int x = 1;

memory[memLocation] = new int;  //in a vector of pointers ot int
*(memory[memLocation]) = x;

// assign nullptr :
delete memory[memLocation];
memory[memLocation] = nullptr;


//sort vector of pairs by the first element and by the second:

--------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>

bool compareFirst(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first < b.first;
}

int main() {
    std::vector<std::pair<int, int>> vec = {{3, 2}, {1, 5}, {2, 3}};
    std::sort(vec.begin(), vec.end(), compareFirst);

    for (const auto& pair : vec) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }

    return 0;
}
--------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>

bool compareSecond(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    std::vector<std::pair<int, int>> vec = {{3, 2}, {1, 5}, {2, 3}};
    std::sort(vec.begin(), vec.end(), compareSecond);

    for (const auto& pair : vec) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }

    return 0;
}
--------------------------------------------






/*


if (x) {
return 0;
}  //излиза от програмата изцяло (от main())






queues can rotate if necessary like so:

queue<int> loops;
loops.push(34);
loops.push(453);
loops.push(63);
loops.push(6);
loops.push(641);

int curLoops = loops.front();
loops.pop();
loops.push(curLoops);

the last item (front()) becomes the first(push()) and we can test again;
 
*/







big O 


O(1) – constant time
O(log n) – logarithmic time
O(n) – linear time
O(n log n) – quasilinear time
O(n²) – quadratic time

avoid:
O(nm) – polynomial time
O(2n) – exponential time
O(n!) – factorial time





асоциативни контейнери, имат O(log n)



key-value pairs- first is the key always

pair<string, pair<double, double>> location
{
"name of the location",
pair<double, double> {21321.54235,4234.13131}
}
 
associated container = ordered
find(), insert() and erase() = O(log(N))

end of the line

--------------------------------------------------------------
int main() {
    // Convert decimal to hexadecimal
    int decimalNumber = 42;
    std::stringstream ss;
    ss << std::hex << decimalNumber;
    std::string hexadecimalNumber = ss.str();

    std::cout << "Decimal to Hexadecimal: " << hexadecimalNumber << std::endl;

    // Convert hexadecimal to decimal
    std::string hexadecimalInput = "2A";
    std::stringstream ss2;
    ss2 << std::hex << hexadecimalInput;
    int decimalOutput;
    ss2 >> decimalOutput;

    std::cout << "Hexadecimal to Decimal: " << decimalOutput << std::endl;

    return 0;
}





// typedef general

 typedef string tenStrings[10]; // makes tenStrings an array of 10 strings each time it's used.
 
 // is used like so:
 
 tenStrings words = { "the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog", "!" }; // makes an array called words
 
typedef map<string, vector<int> > StudentScores;
StudentScores judgeAssignment2Scores;



// enum general enumerations general

enum color { red, blue, pink };

// or

enum color {
    red,
    blue,
    pink
}


color eyeColor = blue;
// same as     color eyeColor = 1;     /// INCORRECT!
color eyeColor = (color)1; // correct syntax (C cast)
color eyeColor = static_cast<color>(2); // correct syntax for using int


// enum class defines a new data type:
enum class Color { 
    red, 
    blue, 
    pink 
};

Color eyeColor = Color::blue;
/* Color eyeColor = 1 – invalid,
compile time error */

// classes

class Person {
    class Body {
        public:
        double heightMeters;
        double weightKgs;
    };

    // NOTE: making everything public is not a good approach
    public:
        string name;
        int age;

        Body body;
};

//instantiate an object of type Person using a pointer:

    Person * newPerson = new Person(); // or Person * newPerson = new Person; also works
    newPerson->name = "Ipsum";
    newPerson->age = 4;
    newPerson->body.heightMeters = 0.4;
    newPerson->body.weightKgs = 4.5;
    
    class Person {
    class Body {
        public:
        double heightMeters;  
        double weightKgs;
    };

// contructors general

class Person {
    string name; int age = 0; double height = 0;
    Person(string pName, int pAge, double pHeight) {   // constructor
        name = pName;
        age = pAge;
        height = pHeight;
    }
};

// Can be called on declaration directly:

        Person peter("Peter Brown", 31, 1.69);
        // or:
        Person peter{"Peter Brown", 31, 1.69};
        // or  copy initialization syntax:
        Person ivan = Person(“Ivan Ivanov”, 12, 1.52));
        
        
        
        
    Person peter{“Peter Brown”, 31, 1.69};
    Person ivan = Person(“Ivan Ivanov”, 12, 1.52));
    vector<Person> people;
    people.push_back(Person(“Ana Ivanova”, 43, 1.60));

// default contructor, has no parameters:

        Person() { name = "<unknown>", age = 5; } // note the semicolon inside
        
        // this will be called if we just initialize an array with this type:
        
        Person people[3];
        
// if we define the variables with "= 10" in the class they will be initialized with these values if not specified; 




====================================================================
// Destructors
====================================================================

~User()
{
    //code, it might print something in the output to say the user has been deleted for example;
}



====================================================================
// Constructors
====================================================================

// you can define the constructor inside the class
// looks like this:

class Register {
private:
    size_t numAdded;

public:
    Register(size_t numCompanies) : numAdded(0) {
        numAdded = numCompanies;
    }
};

// this is the classic constructor AND an initializer list for one variable. So the constructor syntax looks like this:

// MyClass (int x, int y) : init list { classic constructor; }



User () 
{
    //code
    // we ca use this default contructor to give output that a user has been created like so:
    // std::cout << "A user has been created successfully!" << '\n';
}


// default constructor is automatically created when you create the class
// it will be used only if we don't define a custom constructor, ONLY then!
// custom constructor example:


User () 
{

    std::string first_name;
    std::string last_name;
    public:
            User (std::string firstN, std::string lastN) // classic constructor
            {
                first_name = firstN;
                last_name = lastN;
            }
}
User (std::string firstN, std::string lastN) // classic constructor
{
    first_name = firstN;
    last_name = lastN;
}




//Initializer lists initialiser list ( type of constructor )

class Body {
        public:
            double heightMeters;
            double weightKgs;

            Body(double heightMeters, double weightKgs) :  // The inisializer list, easy to see what gets assigned where
                heightMeters(heightMeters),
                weightKgs(weightKgs) {
        } // look at that weird thing here <<< {}, part of the syntax
        
// output stream
// using  ostringstream and istringstream using a class:
// returning an ostream, returning an outputstringstream

class Person {

    string getInfo() {    //getter
        ostringstream info;                                                 //ostringsrteam
        info << "name: " << this->name << ", age: " << this->age
            << endl;
        return info.str();
    }
        
    public:
        string name;
        int age = 0;


    Person(string name, int age) :   // initializer list, constructor
            name(name),
            age(age) {
           }
        
    void print(ostream & ostr){       //again this is a getter but public     // this is new, check how is't used in main()
                ostr << "Name: " << name << ", age: " << age << endl;
        }
};

int main() {

    Person person("Dick Chain", 12);
    person.print(cout);                                                     //using it in main()

}


// classes and structs general

//classes >> access is by default private
//structs >> access is by default public

// getters and setters 

class Circle {
    private:
        double radius;
        double area;
    public:
        Circle(double radius) :     // initialization list
        radius(radius),
        area(radius * radius * PI) {}
        
        const & double getRadius() const { return this->radius; }     //getter for redius
        const & double getArea() const { return this->area; }         //getter for area
        
        void setRadius(double radius) {                 //setter
        this->radius = radius;
        this->area = radius * radius * PI;
    }
};

---------------------------------------

// use output stream in a method:

void print(ostream & ostr) {
// set what to put in the stream
}

//in main:

Person person("Dick Chain", 12);
person.print(cout);   


----------------------------------

// use istream to initialize an obejct of a class:

class Sale {

    public:
        Sale(istream & istr) {  // you always need to pass this as a reference or it won't work; you can't copy a stream
        
        }

};

int main() {
    
    vector<Sale> sales;
    sales.push_back(Sale(cin)); // the condtructor needs to be setup to use this a reference

}




---------------------------------------------------
//defining methods outside of the class where the method pertains to that class

class Fruit {
    int size;
    string name;
}

void Fruit::print() {
    cout << name;
}




---------------------------------------
// euclidian distance:

float euclidianDistance(int x1, int y1, int x2, int y2)
{
    // Calculating distance
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}


-------------------------------------
// const fields in classes general
// const methods const functions
// mutable key word is used on fields in classes
-------------------------------------
// used to signify that the method can't change anything anywhere

// can be initialized only via initializer list unless they are static

    void print() const {
        cout << this->id << " " << this->dollars;
    }
};

// these methods CAN actaully change variables only if the vaiable are marked mutable




//make class iterationable with a for loop:
// for each range based loop for classes:



/*
1. The class we are iterrating through needs to have begin() and end() 
this can be implemented with an Iterator class shown below, you can call it whatever you want
the class needs to have a constructor 
2. to have a dereferencing operator operator*   
3. operator ++
4. operator != and operator ==

*/

----------------------------------------------------------


// Iterator class:


class SimpleClass {
private:
    int data;

public:
    explicit SimpleClass(int value) : data(value) {}

    int getData() const {
        return data;
    }


        
    // the needed Iterator class
    class Iterator {
    private:
        SimpleClass* simpleObject;

    public:
        explicit Iterator(SimpleClass* obj) : simpleObject(obj) {}

        // Increment operator (prefix)
        Iterator& operator++() {
            // Increment logic here
            // ...

            return *this;
        }

        // Dereference operator
        int operator*() const {
            return simpleObject->getData();
        }

        // Comparison operator: Equality
        bool operator==(const Iterator& other) const {
            return simpleObject == other.simpleObject;
        }

        // Comparison operator: Inequality
        bool operator!=(const Iterator& other) const {
            return !(*this == other);
        }
    };

    // Begin iterator function OUTSIDE of the Iterator class
    Iterator begin() {
        return Iterator(this);
    }

    // End iterator function OUTSIDE of the Iterator class but inside the outer class
    Iterator end() {
        // Return an "end" iterator, typically when there are no more elements to iterate over
        return Iterator(nullptr);
    }
};



//multiple files general



//declaration of function:

const * char RecommendAFood(char firstLetter);  // << this is what goes into the header file
//this goes above main() ^^ 

//definition of a function:

const * char RecommentAFood(char firstLetter) {  // this goes into your implementation file
    if (firstLetter == 'a' || firstLetter == 'A'){
        return "apple";
    } else if (firstLetter == 'b' || firstLetter == 'B')
        retirn "banana";
    else {
        return "pizza";
    }
}






// all declarations go in the header file




---------------------------------------------------------------------------------------
main.cpp
---------------------------------------------------------------------------------------
#include "user.h"

---------------------------------------------------------------------------------------
user.cpp
---------------------------------------------------------------------------------------
#include "user.h"
//need to include all libs that are necessaruy fior the functions used here

void functX(int x){
    return x;
}

void functY(char c){
    return c;
}
---------------------------------------------------------------------------------------
user.h
---------------------------------------------------------------------------------------
#pragma once

int functX();
char functY();

---------------------------------------------------------------------------------------




------------------------------------------------------------------------------------------------------------------
//operator overloading operators
------------------------------------------------------------------------------------------------------------------
//  Member Operator Overload


//   ResultT operatorT(RighthandT r)    // binary
//   ResultT operatorT()                // unary
//                  (other keyword)


class Price {
    int cents; 
    string currency;
    ...
    
    Price operator+(const Price& other) const {    // the overload
        string resultCurrency = ...;
        return Price (this->cents + other.cents, resultCurrency);
    }
};

    Price a{ 499, "usd" };
    Price b{ 1000, "usd" };
    Price sum = a + b;
// sum is { 1499, "usd" }
------------------------------------------------------------------------------------------------------------------


// Non-Member Operator Overload
// 
//  ResultT operatorT(LefthandT l, RighthandT r)    // binary
//  ResultT operatorT(T operand)                    // unary

    Price operator+(const Price& a, const Price& b) {
        string currency = ...;
        return Price(a.getCents() + b.getCents(), currency);
}
    Price a{ 499, "usd" };
    Price b{ 1000, "usd" };
    Price sum = a + b; // sum is { 1499, "usd" }
------------------------------------------------------------------------------------------------------------------

// overloading ostringstream and istringstream << >>
// overloading operator >>
// overloading operator <<

// left value is always the stream
// the return type needs to be the stream you need

// Overriding read from istream – friend if field is private

// overloading istream

class Price {
    ...
    friend istream& operator>>(istream& in, Price& p); // makes the 'operator>>' function a friend function
    // we use friend here because one of the elements of the equation is outside of the class, so we don't have access to it by dafault, it's the lvalue
    ...
};

// friend functions is declared as friend in the other class, as the prictice goes, but it cal also be defined in there... why is that, I have no idea, but it sounds stupid, why would you make a function friend if it's alrealy a member of the class?

istream& operator>>(istream& in, Price& p) {
    return in >> p.cents >> p.currency;
}


Price a, b; cin >> a >> b;

// Overriding write to ostream Overloading Stream Read/Write
// overloading ostream


//overloading operator <<
ostream& operator<<(ostream& out, const Price& p) {
    return out << p.getCents() << " " << p.getCurrency();
}

std::cout << a + b << std::endl;

// or 

Lecture & operator << (const Resouce & r){  // insert into a map that exists in Lecture 
    resources[r.getId] = r;
    return *this;
}


----------------------------
//overloading operator()

class Multiplier {
public:
    int operator()(int a, int b) const {
        return a * b;
    }
};

main() {
    Multiplier multiplier;
    int result = multiplier(5, 3);
}
------------------------------------------------------------------------------------------------------------------
// overloading operator< opeartor<(
// allows the class to be used in maps as key values, to compare objects

class Fraction {
    int num; int denom;
public:
    Fraction(int num, int denom)
    : num(num), denom(denom) {}
    ...
    bool operator<(const Fraction& other) const {
    return this->num * other.denom < other.num * this->denom; }
};
...
    set<Fraction> fractions{
    Fraction{1, 3}, Fraction{2, 10}, Fraction{2, 6}
}; // fractions will contain 2/10 and 1/3 in that order
------------------------------------------------------------------------------------------------------------------
public:
	Fraction(int num, int denom) : numerator(num), denominator(denom) {}

	int getNumerator() {
		return this->numerator;
	}

	int getDenominator() {
		return this->denominator;
	}

	bool operator<(const Fraction& other) const {   //const is mendatory at all times when doing that
		return this->numerator * other.denominator < other.numerator * this->denominator;
	}
};

int main() {
	// NOTE: 1/3 and 2/6 are the same - std::set assumes that 
	// if (a < b) is false and (b < a) is false, then (a == b) is true and will not add 2/6, 
	// because it already has the equivalent value 1/3 in the set
	std::set<Fraction> fractions{ Fraction{1, 3}, Fraction{2, 10}, Fraction{2, 6} };

	for (Fraction f : fractions) {
		std::cout << f.getNumerator() << "/" << f.getDenominator() << std::endl;
	}
}
------------------------------------------------------------------------------------------------------------------
//simple implementation of this in order to use enumerable containters:


class Cls;
    private:
        size_t id;
    public:
        bool operator < (const Cls &other) {            
            return id < other.id;
        }
        
        // now you can use the elements of this class as elemets in containers
        // or you can directly use the objects of the class in a containters like map or set
------------------------------------------------------------------------------------------------------------------
//overloading ++ post and prefix

Cargo & operator++()  //prefix
    units++;
    return *this; // because it's definitition in the documentation returns a reference, this is prefix



Cargo operator++(int) //sufix
    units++;
    return Cargo(units, ....);  // whatever the constructor is

// operator ==

bool operator==(const Cargo & other) const {
    return this->units == other.units;
}

--------------------------
// oprator [] overload:

T& operator[](size_t index) {
    return _data[index];
}
------------------------------------------------------------------------------------------------------------------
//returning a reference is used when you want to chain functions:

class MyString {
    public:
        MyString& append(const std::string& str) {
            // perform append operation
            return *this;  // Return reference to enable chaining
        }
    };

    MyString str;
str.append("Hello").append("World");

------------------------------------------------------------------------------------------------------------------
// using namespaces:

namespace SoftUni {
    namespace CppFundamentals {
        const int numLectures = 6
            std::string lectures[numLectures]{ "Basic Syntax", ... };
}

namespace CppAdvanced {
    using namespace std;
        vector<string> lectures{ "Pointers and References", ... };
    }
}

// accessing them:

int main() {
    for (std::string s : SoftUni::CppFundamentals::lectures)
    std::cout << s << std::endl;
}
------------------------------------------------------------------------------------------------------------------
// preprocessor directives
------------------------------------------------------------------------------------------------------------------
#include // includes files and libraries
#define // defines macros and find and replace left with rigth value
    #define PI 3.14
    // example with function:
    #define SHOW(something) cout << something << endl;

    //you use this as so:

    SHOW("Hello baby"); 

#undef // undefines the value 
    #undef SHOW

#if  // works with what's #define-d
#elif
#endif
#ifdef  // if defines execute this

    #define DEBUG_ENABLED

    #ifdef DEBUG_ENABLED
        // Code for debugging
        std::cout << "Debug mode is enabled." << std::endl;
    #else
        // Code for non-debug mode
        std::cout << "Debug mode is disabled." << std::endl;
    #endif
#ifndef // if not defined >>
    #ifndef X
    #define X
#else
#pragma
#endif


------------------------------------------------------------------------------------------------------------------
//templates
// used when you want to be able to use one function for different types of data for arguments
// the perations inside need to have the relevant operators in order for the operatios to be executed properly 
------------------------------------------------------------------------------------------------------------------
// template functions
template<typename T>
T calcPercentage(const T& a, const T& b) {  // the first T here is what we are returning, we can return anything else, doesn't need to be T
    return (a * 100) / b;
}

template<typename T1, typename T2> 
std::string concatValues(const T1& a, const T2 & b)
{
    std::ostringstream out;
    out << a << b;
    return out.str();
}


// templetized  function definition with classes as types

template<class T1, class T2>   // we can also omit the second class T here
void printValues(const T1& a, const T2& b) {
    cout << a << " " << b << endl;
}   

// definition of a templetized function:

template<typename T>
void printValue(const T& value) {
    std::cout << "The value is: " << value << std::endl;
}

// call of this function above:
    printValue(42);  // Call the templated function with int as the template argument
    printValue("Hello");  // Call the templated function with const char* as the template argument
    printValue(3.14);  // Call the templated function with double as the template argument






//definition of templetized class:

template<typename T>
class MyTemplateClass {
    T value;
public:
    MyTemplateClass(const T& val) : value(val) {}

    void printValue() const {
        std::cout << "The value is: " << value << std::endl;
    }
};

// definition of the templetized class:

int main() {
    MyTemplateClass<int> obj1(42);  // Instantiate MyTemplateClass with int as the template argument
    obj1.printValue();  // Call the member function on the instantiated object

    MyTemplateClass<double> obj2(3.14);  // Instantiate MyTemplateClass with double as the template argument
    obj2.printValue();  // Call the member function on the instantiated object

    return 0;
}
// prints:
//  The value is: 42
//  The value is: 3.14

----------------------------------------
// template specialization
----------------------------------------

#include <iostream>

// Template function definition
template <typename T>
T multiply(T a, T b) {
    return a * b;
}

// Template specialization for the int type
template <>
int multiply<int>(int a, int b) {
    std::cout << "Specialized version for int type." << std::endl;
    return a + b;
}

int main() {
    int result1 = multiply(3, 4);          // Uses the specialized version for int type
    double result2 = multiply(2.5, 1.5);   // Uses the generic template version for double type

    std::cout << "Result 1: " << result1 << std::endl;    // Output: Result 1: 7
    std::cout << "Result 2: " << result2 << std::endl;    // Output: Result 2: 3.75

    return 0;
}
    


-------------
//class templates
// template classes 
// Classes can receive templates to use as data types
// vector<T>, list<T>, map<K, V>

#ifndef PAIR_H
#define PAIR_H

    template<class T1, class T2>
    class Pair {
        public:
        T1 first; T2 second;
        Pair(T1 first, T2 second)
            : first(first)
            , second(second) { }
    };
    
#endif // !PAIR_H


------------------------------------------------------------------------------------------------------------------
// hpp declarations only:
------------------------------------------------------------------------------------------------------------------

// Declaring a Class
class MyClass {
public:
  MyClass();  // Constructor
  void myMethod();  // Member function
private:
  int myData;  // Data member
};

// Declaring a Template Class
template <typename T>
class MyTemplateClass {
public:
  MyTemplateClass();
  void myMethod();
private:
  T myData;
};

//using the above in main() :

int main() {
    // Instantiate objects of MyTemplateClass for specific types
    MyTemplateClass<int> intObj;
    MyTemplateClass<double> doubleObj;

    // Call member functions on the instantiated objects
    intObj.myMethod();
    doubleObj.myMethod();

    return 0;
}

//=================================================

// Declaring a Template Function
template <typename T>
void myTemplateFunction(T value) {
  // Function body
}

// note that if we declare the class outside main the main cpp file will have to use it like so:

MyClass::MyClass() //if you want to define the constructor

//another example:


--------------------
//.H file intended to have only declarations
--------------------

#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include <vector>

class Company {
private:
    int id; string name;
    vector<pair<char, char> > employees;
public:
    Company(int id, string name,
    vector<pair<char, char> > employees);
    ...
    int getId() const;
    ...
    bool operator==(const Company& other) const;
    };
#endif // !COMPANY_H

--------------------
//.CPP file
--------------------

#include "Company.h"
#include <sstream>

Company::Company(int id, string name, vector<pair<char, char> > employees) // constructor
: id(id), name(name), 
employees(employees) {}
...
int Company::getId() const {
    return this->id;
}
...
bool Company::operator==(
const Company& other) const {
    return this->id == other.id;
}
...

// overloading operator= operator assignment  always needs self assignment check in it!!!

class MyClass {
private:
    int data;

public:
    // Constructor
    MyClass(int value) : data(value) {}

    // Getter
    int getData() const {
        return data;
    }

    // Assignment operator overload, operator= overload, copy operator 
    MyClass& operator=(const MyClass& other) {
        if (this == &other) {
            return *this;  // Self-assignment check
        }

        // Assign data from the other object
        data = other.data;

        // Return a reference to the current object
        return *this;
    }
};

int main() {
    MyClass obj1(42);
    MyClass obj2(100);

    obj2 = obj1;  // Assign obj1 to obj2 using the assignment operator

    std::cout << "obj2 data: " << obj2.getData() << std::endl;

    return 0;
}

------------------------------------------------------------------------------------------------------------------
// Constructors bonus
------------------------------------------------------------------------------------------------------------------
// constructors in array of objects

class Baba {

}

Baba nameOfArray[2] {Baba ("Babaran") }; // this c-or will be called on cpp[0], everything else after it will be with  the default constructor = which is not the case according to ChatGPT, it thinks the second element will be random value

here is how to initialize all elements with the contructor:

Baba nameOfArray[2] = {Baba("Babaran"), Baba("SomeOtherValue")};

// we can create a default constructor:

MyClass() = default; // C++ 20(or 21) and above
MyClass() {}; // same but the old syntax, still works

-----------------------------------------------------------------------------------------------------
//copy constructor is passing non-reference parameters/returning values
// syntax:
ClassName(const ClassName& other)  // this must always be const reference


//example 1:
    MyClass(const MyClass& other) {
        data = new int(*other.data);
    }
    
    
//example 2:


class Lesson {
	Lecturer lecturer;
	std::string subject;
	int numStudents;
    
	Lesson(const Lesson& other)  // copy constructor
		: lecturer(other.lecturer), 
        subject(other.subject), 
        numStudents(other.numStudents) {
	}


// assignement operator oveloar

	Lesson& operator=(const Lesson& other) { // this must also always be const reference
		this->lecturer = other.lecturer;
		this->subject = other.subject;
		this->numStudents = other.numStudents;     
    }


// move constructor (different from move assignement operator)

/*
Makes the pointer of the declared object point to the data of a
temporary object 
Nulls out the pointer of the temporary objects
Prevents unnecessarily copying data in the memory
*/

// syntax:

----------------------------------------------------------------------------------------------------------
  // Move constructor

class MyVector {
private:
    int* data;
    size_t size;

public:
    // Constructor
    MyVector(size_t size) : size(size) {
        data = new int[size];
    }

    // Move Constructor
    MyVector(MyVector&& other) noexcept : data(other.data), size(other.size) {
        // Reset the source object's data to nullptr to avoid double deletion
        other.data = nullptr;
        other.size = 0;
    }
    //...
    
    
    int main() {
    // Creating a MyVector object using the constructor
    MyVector vec1(5);
    
    // Filling vec1 with some data .... here: 
    // *fill fill fill*
    
    // Using the move constructor to transfer ownership of the data to vec2
    // ::move::
    MyVector vec2 = std::move(vec1);

// or

    vector<int> v;
    vector<int> v2;

    std::move(v.begin(), v.end(), v2);
    
     // vec1's data pointer is now nullptr as ownership was transferred to vec2

}

----------------------------------------------------------------------------------------------------------
// another example of move constructor:


  VectorWrapper(VectorWrapper&& other) : _data(std::move(other._data)) {
    std::cout << "Invoking Move Ctor" << std::endl;
    
  }
  
// usage in main() :

    MyClass obj1(42);
    MyClass obj2(64);

    MyClass obj3(std::move(obj2));
    std::cout << obj3.getValue() << std::endl; // prints 64
    
    

// so the rvalue is deleted/ is assigned nullprt value

// move assignement operator assignment move operator (when you define thsi the copy constructor will no longer have a default value)
//I you  any type of constructor the default copy constructor is no longet defined implicitly


    
    std::unique_ptr<int> first(new int(42));
    std::unique_ptr<int> second(new int(64));

    first = std::move(second); // move assignment, doesn't need operator= overload if the obeject(second) is copiable 
    std::cout << *first << std::endl;

    std::vector<std::unique_ptr<int>> pointers;




------------------------------------------------------------------------------------------------------------------
// Destructors
// you don't need to define a custom constructor if you are not sing 'new' (dynamically allocated memory)

class IntArray {
	int* data;
	int size;
public:
	IntArray(int size) : 
	data(new int[size]), size(size) {}

	~IntArray() {
		delete[] this->data;
	}
    
    
}

// how to use "= delete" :
// to disable copying the values and allow using only via reference

	// Prevent copies to avoid memory problems
	IntArray(const IntArray& other) = delete;
	IntArray& operator=(const IntArray& other) = delete;
    
    
    
// NOTE: replacing the signature with the commented-out signature will cause a compilation error 
// in calls due to IntArray not being copyable

void printArray(const IntArray& arr) {
//void printArray(IntArray arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
------------------------------------------------------------------------------------------------------------------
// the this keyword
// Importatnt thing to note is that THIS returns the address of the object that it references, and only *this returns the object itself
// THIS is a reference to the current object

------------------------------------------------------------------------------------------------------------------

// RAII
------------------------------------------------------------------------------------------------------------------
// rule of three:

// if a class needs one of these:

// Copy constructor
// Copy assignment operator=
// Destructor
// Then it's very likely it needs all three:

IntArray(const IntArray& other) {
    //...
}
IntArray& operator=(const IntArray& other) {
    //...
}
~IntArray() { //... }


------------------------------------------------------------------------------------------------------------------
// rule of five

// If a class needs ONE of the following: 
// Copy Constructor 
// Copy Assignment operator= 
// Destructor 
// Move Constructor 
// Move Assignment operator= 


... it probably needs ALL of them:


IntArray(const IntArray& other) { ... } 
IntArray& operator=(const IntArray& other) { ... } 
IntArray(IntArray&& other) { ... }
IntArray& operator=(IntArray&& other) { ... }
~IntArray() { ... }
------------------------------------------------------------------------------------------------------------------
//using shared pointer for a class member:

class IntArray {
	std::shared_ptr<int> data;
	int size;
public:
	IntArray(int size) : data(new int[size], [](int* p) { delete[] p; }), size(size) {}

	int getSize() const {
		return this->size;
	}

	int& operator[](const int index) const {
		return this->data.get()[index];
	}
};

// ^^^this is the constructor for the shared_ptr data(new int[size], [](int* p) { delete[] p; }) ^^^
----------------------------------------------------------------------------------------------
// pointer to a function
// function pointers

int main() {
    // Declare a pointer to a function that takes two int parameters and returns an int
    int (*operationPtr)(int, int);
    // Assign the address of the add function to the pointer
    operationPtr = add;
        // Use the pointer to call the add function
    int result = operationPtr(10, 5);
    std::cout << "Result of add function: " << result << std::endl;

    // Reassign the pointer to the subtract function
    operationPtr = subtract;

    // Use the pointer to call the subtract function
    result = operationPtr(10, 5);
    std::cout << "Result of subtract function: " << result << std::endl;

    // Reassign the pointer to the multiply function
    operationPtr = multiply;

    // Use the pointer to call the multiply function
    result = operationPtr(10, 5);
    std::cout << "Result of multiply function: " << result << std::endl;




------------------------------------------------------------------------------------------------------------------
// Inheritance
------------------------------------------------------------------------------------------------------------------
// Derived classes inherit a base class to reuse its members:

class Vehicle { 
private: 
    double speed;
public: 
    Vehicle(double speed) : speed(speed) {}
    void setSpeed(double speed) { this->speed = speed; }
};

class Car : public Vehicle {
private: 
    bool parkingBrakeOn;
public:
    Car(double spd, bool park) : Vehicle(spd), parkingBrakeOn(park) {}
};
 
class Airplane : public Vehicle {
private: 
    double altitude;
public:
    Airplane(double spd, double alt) : Vehicle(spd), altitude(alt) {}
};

------------------------------------------------------------------------------------------------------------------
// Derived classes override them to have different behavior

class Vehicle { ...
    virtual void stop() { this->speed = 0; } 
};

class Airplane : public Vehicle {
    //...
    virtual void stop() override {  // the inherited function stop() is overriden for Car objects
    Vehicle::stop();
    this->altitude = 0;
}
};
class Car : public Vehicle {
    //...
    virtual void stop() override {
    Vehicle::stop();
    this->parkingBrakeOn = true;
    }
};

// base class pointers, conteiner holding different types of objects that are childs to the base class:

std::vector<Vehicle*> vehicles{
    new Car(90, false),
    new Airplane(700, 10000, 242),
    new Car(0, true)
};

vehicles[0]->stop(); // calls Car::stop(), it's been overriden inside the Car classoperator
vehicles[1]->stop(); // calls Airplane::stop()
vehicles[2]->stop(); // calls Car::stop()


// inheritance syntaxis

class BaseClass {
    private:
        int idNumber;
    public:
        string address;
}

class MyClass {
    private:
        int age;
    public:
        string name;
}

// if we have:

class MyClass : private BaseClass  // everything >  private, it's rarely used if at all
//or
class MyClass : public BaseClass // no change, same access to members as it is in Base, used in most cases
//or
class MyClass : protected BaseClass  // base public > der. protected, no chnage for the rest
{ 
// code here
}




//what protected does:
// it makes the member accessible but not changable from the outside


// the final keayword:


class A final : public B {

}

// ^^^here final means that class A cannot be inherited anymore



------------------------------------------------------------------------------------------------------------------
// base classes are abstract classes, this is how they are called, abstract classes that is
------------------------------------------------------------------------------------------------------------------
// Extract common members into a base class

// Inheritance – Extracting Base Class

class Vehicle {
public: double speed;
};


class Car : public Vehicle {
    bool parkingBrakeOn;
public:
    Car(double speed, bool parked)
    : parkingBrakeOn(parked) {
    this->speed = speed;
    }
};



class Airplane : public Vehicle {
    double altitude;
    double heading;
public:
    Airplane(double spd, double alt, double hdg)
    : altitude(alt), heading(hdg) {
    this->speed = spd;   // Can't use initializer-list for base class field
}

// using Base constructors, inheritanse constructors
// inherited constructor

// IMPORTANT:
// anything that is constructed using the Base constructor doens't need to ne constructed by the Derived constructor, only the unique Derived members

class Vehicle { protected:
    double speed;
    Vehicle(double speed) : speed(speed) {}
    }
    
class Car : public Vehicle {
//...
    Car(double speed, bool park)
    : Vehicle(speed), parkingBrakeOn(park) {} // Vehicle(speed) must be included first as a separate member
    } // in the above line Vehicle(speed) speed is the name of the argument from the V arg list, not the Vehicle member speed
    
class Airplane : public Vehicle {
//...
    Airplane(double s, double a, double h)
    : Vehicle(s), altitude(a), heading(h) {} // again Vehicle(s) must be initialized first
    }


------------------------------------------------------------------------------------------------------------------
// "upcast" (assigning a Derived object to a Base object)  it's generally safe

// the Base operator= is hidden from Derived, always the Derived = is called even if we upcast 
// How to explicitly call the Base class assignment operator
    baseObj.operator=(derivedObj2);
    
    
    
//downcast  
// the oposite, not very good idea

// Attempting downcasting using dynamic_cast
class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square." << std::endl;
    }
};

    Shape* shapePtr = new Circle();
    Circle* circlePtr = dynamic_cast<Circle*>(shapePtr);   // << that is the attempt at downcasting
------------------------------------------------------------------------------------------------------------------
// if base class has custom c-or, derived must specify a c-or, 
// or the default c-or in Derived will call a default c-or for Base, which doesn't exist 
------------------------------------------------------------------------------------------------------------------
// Constructors are not inherited
------------------------------------------------------------------------------------------------------------------

    Derived d; Base* p = &d; // this is a valid object of type D! nothing is lost because of how memory works
    
    Base* p = new Derived(); ... // also valid
    // data is sliced if you have:
    Base p = new Derives(); // no '*'
    
Airplane plane(510, 2400, 90);
Vehicle* v = &plane;
cout << v->toString() << endl; // calls Vehicle::toString()
------------------------------------------------------------------------------------------------------------------
//Base class =operator call:

Hardware::operator(other);  // this directly executes the base operator=

// this can be inside the definition of the copy constructor 


// define constrouctors for derived classes:




------------------------------------------------------------------------------------------------------------------
//polymophism
------------------------------------------------------------------------------------------------------------------
/*

Static Polymorphism: Resolved at compile-time using templates or inheritance without virtual functions.

Dynamic Polymorphism: Resolved at runtime using virtual functions and pointers or references to the base class. Selection of the appropriate function is determined based on the runtime type of the object.

Ad-hoc Polymorphism: Resolved at compile-time through function overloading and operator overloading. The compiler selects the appropriate function or operator behavior based on the types of the arguments.

*/
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------

std::shared_ptr<Person> createPersonObject(const std::string& name, int age) {
    return std::make_shared<Person>(Person{name, age});
}

std::shared_ptr<Person> getPersonClassPointer() {
    Person dummy;
    return std::make_shared<Person>(dummy);
}

------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------


//##############################################################################################################
// algotirhms
//##############################################################################################################

//=======================================================================
// sorting algorithm:
//=======================================================================

// for a vector:


void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted.
        if (!swapped)
            break;
    }
}

// for an array:


void bubbleSort(int arr[], int n) {
    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted.
        if (!swapped)
            break;
    }
}

//=======================================================================
// std::binary_search, check cppreference for that
//=======================================================================


//=======================================================================
// 
//=======================================================================


//=======================================================================
// 
//=======================================================================


//=======================================================================
// 
//=======================================================================


//=======================================================================
// 
//=======================================================================






#include <string>
#include <sstream>
#include <vector>
#include <utility>
#include <iostream>
#include <cmath>
#include <algorithm>

#include "Company.h"


using namespace std;

class Sort {
private:
    

public:
vector<Company> v;
    Sort(const vector<Company>& v_) : v(v_) {}

    void byName() {
        sort(v.begin(), v.end(), compareByName);
    }

    void byId() {
        sort(v.begin(), v.end(), compareById);
    }

private:
    static bool compareByName(const Company& a, const Company& b) {
        return a.getName() < b.getName();
    }

    static bool compareById(const Company& a, const Company& b) {
        return a.getId() < b.getId();
    }
};





int main() {

    vector<Company> catalog;
    
 string line;
    while (getline(cin, line) && line != "end") {
        istringstream is(line);
        string name;
        int id;
        is >> name >> id;
        Company c (id, name);
        catalog.push_back(c);
    }

    string command;
    cin >> command;

    if (command == "name") {
        Sort sorter(catalog);
        sorter.byName();

        for (Company c : sorter.v) {
           // cout << c.toString() << endl;
        
        }
    }

    else if (command == "id") {
        Sort sorter(catalog);
        sorter.byId();
    }
    
    else {
        cout << "Command not valid" << endl;
    }

}