
yield return

private set (encapsulation)
price >= 0


List<T>(products) // encapsulates the List to be accessable only through the internal methods

// Encapsulate all constants used for validation 

/*
Как да вземате определено число от многочислено такова

Например имаме числото 4365

Искаме да вземем първото число - 4
int firstDigit = fourDigitNumber / 1000;

Второто число - 3
int secondDigit = (fourDigitNumber / 100) % 10;

Третото число - 6
int thirdDigit = (fourDigitNumber / 10) % 10;

Четвъртото число - 5
int forthDigit = fourDigitNumber % 10;


Как да сравните числовата стойност на 2 char, ще пусна 2 варианта:
string str = "input: 1";
Console.WriteLine(Char.GetNumericValue('8'));        // Output: "8"
Console.WriteLine(Char.GetNumericValue(str, 7));    // Output: "1"

char chA = 'A';
char chB = 'B';
Console.WriteLine(chA.Equals('A'));        // Output: "True"
Console.WriteLine('b'.Equals(chB));        // Output: "False"


Сравняване с .CompareTo()

string name = "Pesho";
string secondName = "Ivan";
// name.CompareTo(secondName) returns a NUMBER as result
// ще върне -1 ако сборът на буквите на първата дума преобразувани към числа е по-малък от този сложен в скоби
// ще върне 0 ако двата стринга са равни
// ще върне 1 ако думата в скобите има по-висок сбор на буквите си
Console.WriteLine(name.CompareTo(secondName));

Как да намерим най–голямото число в колекция:

int biggestNumber = int.MinValue;

foreach (var item in numbers)
{
   if (item > biggestNumber)
    {
         biggestNumber = item;
    }
}


*/


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

class Program
{
    static void Main()
    {
        // your code here
    }
}



 
//----------------------------------------------------------------------------
// How to read bracket notation for ranges

/*

A bracket - [ or ] - means that end of the range is inclusive -- it includes the element listed. A parenthesis - ( or ) - means that end is exclusive and doesn't contain the listed element.


(0, 5) = 1, 2, 3, 4
(0, 5] = 1, 2, 3, 4, 5
[0, 5) = 0, 1, 2, 3, 4
[0, 5] = 0, 1, 2, 3, 4, 5

*/

//interpolation with parameters:


string firstName = "John";
string lastName = "Smith";
Console.Write("Hello, {0} {1}!\n", firstName, lastName);
// prints:
// Hello, John Smith!

// Means add the first parameter , if we have 1, 2 and 3 these will be the following parameters after the comma




// data types

/*

int - whole numbers, like: 1, -56, 948
double - decimal numbers, like: 239.43909, -660.01
char - single characters, like: “a”, “&”, “£”
string - string of characters, like: “dog”, “hello world”
bool - boolean values, like: true or false

*/

// == vs .Equals()  comparing strings

// == for objects > compares addresses (if both are pointing to the same place)
// == for strings > compares values
// .Equals() for objects > compares the content of the object, not the address
// .Equals() for strings > compares values 

// the equality operator == checks whether two references are the same, 
// and the Object. Equals() method checks whether the two object instances point to the same place in the memory

// For the reference type variables, == and .Equals() method by default checks whether two two object instances are equal or not.
// for strings both .equals() and == will comapare content 

object g1 = "Hannah Montana";
object g2 = new string ("Hannah Montana");
object g3 = g1;

Console.WriteLine(g1 == g2);        // Flase  because it compares if the content is the same (address)
Console.WriteLine(g1.Equals(g2));   // True
Console.WriteLine(g1 == g3);        // True
Console.WriteLine(g1.Equals(g3));   // True

string str1 = "sas";
string str2 = new string(str1);
string str3 = "sas";

Console.WriteLine(str1 == str2);        // True    compares values
Console.WriteLine(str2 == str3);        // True    
Console.WriteLine(str1.Equals(str2));   // True    compares values because it's a string
Console.WriteLine(str2.Equals(str3));   // True


// string general

// ways to declare a string

string message1 = "Hello barbie!"; // using literal
char [] charArray = new [] {'H','e','l','l','o',' ','B','a','r','b','i','e','!'};
string message2 = new string(charArray); // using a char array
string message3 = new string ('w', 10); // repeating a character


// comparing strings:

string text = "beb";
text == "beb";
text.Equals("beb"); // this also returns true, is case sensitive

text.Equals("Beb", StringComparison.InvariantCultureIgnoreCase) // is not case sensitive, returns true


// making dynamically allocated string to avoid memory loss:

StringBuilder sb = new StringBuilder();

sb.Append("some long text maybe");
sb.Append("Some more even longer text oh boy oh boy oh boy");

string result = sb.ToString(); // to get the final string

// using IndexOf:

string message = "Telerik Alpha program Madafuckaaaa!!";
message.IndexOf('k');


// replace:

string text = "Telerik Academy";
text = text.Replace("Telerik", "Ninja"); // result: "Ninja Academy"

text = text.Replace("Telerik", null); // removes the part we want, result is " Academy"


// (not the same as .AreEqual()) > AreEqual is typically associated with unit testing frameworks like NUnit or MSTest.
// It's not a standard method in the C# language but rather a part of a testing framework's assertion library.

//-------------------------------------------------------------------------------------------------
//array general
//array syntax:

int[] a = { -5 }; //  << initiallisation and declaration of the array

// Initial declaration
    int[] plantHeights;

    // This works if you have already initialized it before:
    plantHeights = new int[] { 3, 4, 6 };
    
    // you can use new with initialization as well:
    int[] plantHeights = new int[] { 3, 4, 6 };
    //or not:
    int[] plantHeights = { 3, 4, 6 };

    //or you can define it one line:

    int[] plantHeights = { 3, 4, 6 };

//resize an array
int[] arr = { 1, 2, 3, 4, 5 };
Array.Resize(ref arr, 7); // Resize the array to a new size -> 7

// If you decide to define an array and then initialize it later (rather in one line like above) you MUST use the new keyword

int[] arr;
arr = new int[x]; // must use new in this case!

// you can define the array size:

int[] arr = new int[x]; // where X is the array size

//--------------------------------------------------------------------------------------



/* division :

int / int = int

float / float = float
    
float / int = float
    
*/

//--------------------------------------------
// casting:
//--------------------------------------------

// cast int to char

    char first = (char)(67); // C
    char second = (char)(35) // #
    Console.WriteLine  (first = " , " + second); //C#
    
// char to int

// for this you don't need parsing, just assign the value and it will be converted automatically, but this will take the int value of the char, remember that char '3''s value is not int 3; but we can use math to find these as we used it in the C++ class

int x = 0;
char y = '3';
x = y - 48; // (if it's lowercase char or a digit)


//or

char x = '4';
int intValue = Convert.ToInt32(x - 48); // if we don't deduct it will return the asci value otherwise

//string to int 
int number = int.Parse(numberString);
//-----------------------------------------------------

// Formatting specifier:
// precision point specifier 

// value:F2 // prints only 2 digits after the decimal point
    
// example:
double number = 12345.6789;
string formattedNumber = number.ToString("F2");
//or:
double number = 12345.6789;
string formattedNumber = string.Format("{0:F2}", number);
//or
double number = 12345.6789;
string formattedNumber = $"{number:F2}";


//another way to do that with custom specifiers:
double number = 12345.6789;
Console.WriteLine(number.ToString("0.00")); // Two decimal places, bit note that this adds rounding!!
// prints 12345.68 (note it doesn't finish with 7, but with 8, it rounds the last digit)
// or another custom format specifier:
Console.WriteLine(number.ToString("00000.0000"));
// prints 12345.6789

 
 //string.ToLower() // makes all chars in the string to lower
 
string originalString = "Hello World!";
string lowercaseString = originalString.ToLower();

Console.WriteLine(lowercaseString); // Output: hello world!

 


//Switch statement

int month = 3;

switch (month)
{
    case 1:  //if month is 1 > print this
        Console.WriteLine("January");
        break;  // break prevents the executuion to fall through to the next statement below 
        
    case 2: //if month is 2 > print this:
        Console.WriteLine("February");
    case 3:
    
        ...
            
            default:
        // execute if none of the above is true
            break;    
}

    //also if you pur 'return;' you will make the computer go outside the block you're in. If it's the Main function it will just stop if there is nothing else in it.

// switch with enums:

static void Main(string[] args) 
{
  Level myVar = Level.Medium;
  switch(myVar) 
  {
    case Level.Low:
      Console.WriteLine("Low level");
      break;
    case Level.Medium:
       Console.WriteLine("Medium level");
      break;
    case Level.High:
      Console.WriteLine("High level");
      break;
  }
}


//do statement 
    
do                           
{                                                       
    Console.WriteLine(n);                           
    n++;                        
                                             
}      while (condition);                 
          

//  this runs the code in the block at least once, even if the while condition is not met;
//  if the condition is met it will continue to do it until it isn't


//enums property:
        public Priority Priority
        {
            get { return this.Priority; }
            private set { }
        }
    //in case we use a method for increment and decrement the values
    
 
    

    //ternary statement 
    //?: operator

bool isEven = (num % 2 == 0) ? true : false; // to get a bool value from an expression


string color = "blue";
string result = (color == "blue") ? "blue" : "NOT blue";

// simply put it means:
// if color == blue add the part after '?' otherwise use the part after ':'

// another example:
bool isPrime = false;
char x = isPrime ? '1' : '0';
// that means if isPrime is true assign 1, else assign 0


Console.WriteLine(result);


In this example, we create a variable result and save the outcome of the ternary operator expression. The expression starts with the Boolean expressions (color == "blue"), followed by the ternary operator ?, then the two possible outcomes, separated by a colon :. The first outcome, "blue" will be saved to result if the Boolean expression evaluates to true, otherwise it will store the second outcome.

// Split method:
// Split() and Split(' ') are almost the same:

/*
In C#, input.Split(' ') and input.Split() are not exactly the same.

input.Split(' '): This version of the Split method splits the string input into an array of substrings using a space (' ') as the separator. It splits the string wherever it encounters one or more space characters. If there are multiple spaces between words in the input, each sequence of spaces will result in an empty string in the array.

input.Split(): This version of the Split method splits the string input into an array of substrings using whitespace characters (including spaces, tabs, and line breaks) as the separators. It will split the string wherever it encounters any whitespace character.
*/


//Arrays general

//initialize an array:

string[] elements = Console.ReadLine().Split(' ');   
//or
int[] arr = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
//or like so:
int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

int[] name = new int[10]; //must have a size if we are using this format

// if you have a variable (x for example) you want to use as the lenght of the array you put it at the later [] like this:
// int[] name = new int[x];

//or

int[] anotherOne = new int[] {1, 2, 3, 4}; // here we can omit the 'new':
int[] anotherOne = {1, 2, 3, 4}; // the size '[]' here is assumed by the programm from the number of elements in the array which is set
 
// the new keyword is used to create a new array
// another example:

char[] messArray = new char[10];



//array math:

firstIndex + (index*size) == firstIndex++

// how to sort an array:

int[] numbers = { 5, 1, 3, 2, 4 };

Array.Sort(numbers);

// sort in reverse:

Array.Reverse(numbers);


// how to copy an array:
//---------------------------------------------------------------------------------------------
//    make two arrays with the same lenght [12] array1 and array2
//   copy array 1 into array2
    
    Array.Copy(array1, array2, 12);

// so it's like that:
//    Array.Copy(what, where, how much)
              location >> destination >> length 
    //also this can be used:
    array1.CopyTo(array2, 12)


//---------------------------------------------------------------------------------------------
//    2D arrays, basically tables
int[,] array2D = new int[,] { { 1, 2 }, { 3, 4 }, { 5, 6 }, { 7, 8 } };

// The same array with dimensions specified.
int[,] array2Da = new int[4, 2] { { 1, 2 }, { 3, 4 }, { 5, 6 }, { 7, 8 } };

// int[rows, colums], this is their length 
// to access an element 
// arr[rows][cols]

        nameArray[0, 2] = 5; // the first row is index 0, same as arra elements
        
        
// GetLength():

    int[,] matrix = {
        {1000, 2},
        {300, 4}
    };
    
    for (int row = 0; row < matrix.GetLength(0); row++) { //matrix.GetLength(0) the number of rows
        for (int col = 0; col < matrix.GetLength(1); col++) { //matrix.GetLength(1) the number of columns
            Console.Write("{0, 4}", matrix[row, col]);
        }
        Console.WriteLine();
    }
// the 4 is printing each character in a space of 4 characters. it's called format specifier.
// prints exactly:

1000   2
 300   4

// here is how to initialize it:
    int[,] nameArray =      

// populate an array from console:
    for (int i = 0; i < rows; i++)
    {
        short[] row = Console.ReadLine().Split(' ').Select(short.Parse).ToArray();
        for (int j = 0; j < row.Length; j++)
        {
            matrix[i, j] = row[j];
        }
    }
        
// jagged arrays
    int[][] arrayName = new int[5][3];
      

//example:
    
int[][] jaggedArray = new int[3][]; // we ca iniialize without cols but we can't without rows

//Before you can use jaggedArray, its elements must be initialized. You can initialize the elements like this:
jaggedArray[0] = new int[5];
jaggedArray[1] = new int[4];
jaggedArray[2] = new int[2];

//You can also initialize the array upon declaration like this:


int[][] jaggedArray2 = new int[][]
{
    new int[] { 1, 3, 5, 7, 9 },
    new int[] { 0, 2, 4, 6 },
    new int[] { 11, 22 }
};

// rows int[x][]
// columns int [][x]
      
int[][] grades = {
    new int[]{2, 3, 1, 1}
    new int[]{2, 3}
    new int[]{1, 5, 78, 32, 1, 5, 6}
};
    
Console.WriteLine(grades.Length); // prints the number of rows
Console.WriteLine(grades[0].Length) // number of columns for the first row
        
// loops to itterate through jagged array:
    
    for (int row = 0; row < grades.Length; row++)
    {
        for (int column = 0; column < grades[row].Length; column++)
        {
            Console.WriteLine(grades[row][column] + " ")   
        }
            Console.WriteLine();
    }

// this will print all the items arranges as if you are seeing the actual array
// Caleb explanation: https://youtu.be/qOruiBrXlAw?t=10843

    // loop through 2D array

        int[,] grades = {
            {2, 3, 1, 1}
            {2, 3, 3, 5}
            {1, 5, 78, 32}
        };

Console.WriteLine(grades.GetLength(0)); // will print the number of rows
Console.WriteLine(grades.GetLength(1)); // will print the number of colums

 for (int row = 0; row < grades.GetLength(0); row++)
    {
        for (int column = 0; column < grades.GetLength(1); column++)
        { 
         Console.WriteLine(grades[row, column] + " ")   
        }
        Console.WriteLine();
    }


    // list general

    
    List<int> grades = new List<int>();
    // or even:
    List<int> grades = new();   
    
        grades.Add(int.Parse(Console.ReadLine()));  // adds an element in the first place in the list
        //or:
        grades.Add(3); // this appends the value at the end of the list
        grades.Insert(2,15) //this adds an element (index, item)
            // if we take index that's already takes it will shoft everything else to the right


        Console.WriteLine(grades.Count); // prints the number of elements in the list
        Console.WriteLine(grades[0]); // prints the first element in the list

        // we can add elements from the start:

    List<int> grades = new List<int>() {5, 10};
        // we need to keep the new part this time

// contains methos:

List<int> myList = new List<int> { 1, 2, 3, 4, 5 };

if (myList.Contains(3))
{
    Console.WriteLine("Item is present in the list.");
}


//    foreach loop

    
int[] numbers = { 1, 1, 2, 3, 5, 8 };

// the foreach loop:

foreach (int number in numbers)    // number is a new variable we create but what this does is it prints each variable in the array. each number in the numbers array.
{
    Console.WriteLine(number);
}


// ways of creating an array
    
// 1
// one way is to ask for the size of the array:
    
    int n = int.Parse(Console.ReadLine());
    int[] arr = new int[n];

//then make a for loop that will take the next n times of input and add them to the array
    
    for (int i = 0; i < arr.Length; i++)
    {
        arr[i] = int.Parse(Console.ReadLine());
    }

// 2
// if we don't know the number of the elements is to assign them to a string variable 
    
//    input: 1 2 3 4 5 8 9 0 12 124 123 1 2 5 
        
// we create the string:
      /*1*/  string line = Console.ReadLine();
// then create an array but using the Split() method which splits the elements with ' ' between them
      /*2*/  string[] elements = line.Split(' ');

// a fancy way to write this is also:
      /*1*/  string[] elements = Console.ReadLine().Split(' '); //not using the line string at all; it will separate the
// string into an array variables once it's submitted

// then of course convert the digits into int if we need them to be int with a loop that will take up the data
// and convert them each one and add them to the array:
        for (int i = 0; < elements.Length; i++)
        {
            numbers[i] = int.Parse(elements[i]);
        }

// Join() method sticks together the parts of an array and makes it into a string:
// print an array:

        int[] nums = { 1, 2, 3, 4, 5, 6, 7, 8 };
        string output = string.Join( ", ", nums );
        Console.WriteLine(output);
        
// output:
// 1, 2, 3, 4, ,5 ,6, 7, 8
// the ", " is what the Join() method will put between the elements
// For Join we need to use "" but for Split '';

//or:

Console.WriteLine(string.Join(',', arrayName));

//best way to take in input and make it into an array of integers separates by comma:

        string input = Console.ReadLine();
        int numbers = Array.ConvertAll(input.Split(','), int.Parse);

// numbers will be an array of integers at the end







//Math things

//get absolute value

double number = -5.7;
double absoluteValue = Math.Abs(number);

// keep track of average without containers:

while(true) {
        int number = int.Parse(Console.ReadLine());
        sum += number;
        count++;
        double average = (double)sum / count;
        Console.WriteLine($"Current average: {average}");
}

/*
Order of Operations

Parentheses
Exponents (степени)
Multiplication / Division
Addition / Subtraction

rules of BODMAS:
division can be done before multiplication and must be done before addition, and multiplication comes before addition
    
*/
    
// Math.Pow() Method
    
    public static double Pow(double base, double power)
    
    //double base: It is a double-precision floating-point number which is to be raised to a power and type of this parameter is System.Double.
    
// Examples:

Input  : base = 8, power =2 //power is the exponent
Output : 64

Input  : base = 2.5, power =3
Output : 15.625
    
// other examples:
    
     double pow_ab = Math.Pow(6, 2);

//---------------------------------------------------------------------------------------------   
//    Math.Sqrt() Method
    

    
Input  : Math.Sqrt(81) 
Output : 9

Input  : Math.Sqrt(-81) 
Output : NaN

Input  : Math.Sqrt(0.09) 
Output : 0.3

Input  : Math.Sqrt(0)
Output : 0

Input  : Math.Sqrt(-0)
Output : 0


//-------------------------------------------------------------------------------------------- 
    //print string in reverse order:
    //(had to be passed into an array first)

            string input = Console.ReadLine();
            char[] reverse = input.ToCharArray();
   for (int i = 0; i < reverse.Length; i++)
            {
                int characterIndex = reverse.Length - i - 1;  // reverse.Length - i - 1, this part seems to be the key

                Console.Write(reverse[characterIndex]);
            }
//---------------------------------------------------------------------------------------------
//    alternative:
//assignes them to the array and then prints the array 
//---------------------------------------------------------------------------------------------
    for (int i = 0; i < inputArray.Length / 2; i++)
        {
            char temp = inputArray[i];
            inputArray[i] = inputArray[inputArray.Length - i - 1];
            inputArray[inputArray.Length - i - 1] = temp;
        }
    Console.WriteLine(inputArray); 
//---------------------------------------------------------------------------------------------
//    Remove duplicates, remove repeating elements:
//---------------------------------------------------------------------------------------------
//    https://www.tutorialsteacher.com/articles/remove-duplicate-values-from-array-in-csharp#:~:text=In%20C%23%2C%20we%20cannot%20remove,instead%20of%20removing%20duplicate%20values.

// remove duplicates also:

    class Program
{
    static void Main()
    {
            int[] arr = { 2, 4, 2, 6, 9, 4, 3, 8, 7, 1, 6 };
            int[] uniqueArr = RemoveDuplicates(arr);
            Console.WriteLine(string.Join(", ", uniqueArr)); // Output: 2, 4, 6, 9, 3, 8, 7, 1
    }

        static int[] RemoveDuplicates(int[] arr)
            {
            return arr.Distinct().ToArray();
            }
}
//---------------------------------------------------------------------------------------------

    //Example: Remove duplicate from integer array :
int[] nums = { 1, 2, 3, 4, 3, 55, 23, 2 };
int[] dist = nums.Distinct().ToArray();
    
//---------------------------------------------------------------------------------------------
    //Example: Remove duplicate from string array 
string[] animals = { "Cat", "Alligator", "Fox", "Donkey", "Cat" };
string[]  dist = animals.Distinct().ToArray();
//---------------------------------------------------------------------------------------------
// remove the last element of a string:
// Remove() on a string

    string s = "king";
    string result = s.Remove(2); //everything after that position is deleted, prints ki
    string si = "kingsman";
    string result = si.Remove(4,2); // 2 chard after position 4 are deleted, prints 
    
    
    
// Trim() removes whitespaces on both sides of a string, it can also remove specified chars you give as arguments passed as an array you initialize in the parameter list ...super weird


// take input and place it in an array of ints on one line

int[] arr = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
//or like so:
int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

//---------------------------------------------------------------------------------------------
// Substring general
//---------------------------------------------------------------------------------------------

newString = oldStringName.Substring(int startIndex, int length);
//This version of the method returns a new string that starts from the specified startIndex and includes all characters from that position to the end of the string.

// >>>>>>>>>>>>>>>> Substring(startIndex, int length); 

//or
    
string originalString = "Hello, World!";
string substring1 = originalString.Substring(7); //from 7 to end
string substring2 = originalString.Substring(0, 5);  // from 0 to 5

//---------------------------------------------------------------------------------------------
// string.Remove
//---------------------------------------------------------------------------------------------

string modifiedString = originalString.Remove(startIndex, length);

/*---------------------------------------------------------------------------------------------

Remove(Int32)	
Returns a new string in which all the characters in the current instance, beginning at a specified position and continuing through the last position, have been deleted.

Remove(Int32, Int32)	
Returns a new string in which a specified number of characters in the current instance beginning at a specified position have been deleted.

---------------------------------------------------------------------------------------------
*/
//---------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------
    Methods
//---------------------------------------------------------------------------------------------
// params:

static void Main(string[] args)
{
    string one = "sexology";
    string two = "biology";
    CalculateResultsForStudent("Pesho", one, two);
}

static void CalculateResultsForStudent(string studentName, params string[] exams) //<<< params used here
{
        Console.WriteLine($"{studentName}'s exams: ");
        foreach (var exam in exams) // the passed params are put in a collection
        {
            Console.WriteLine($"{exam}");
        }
}   


//parameters and argimetns



static void YourMethodName(string identity, int age)
{
  Console.WriteLine($"{identity} is {age} years old.");
}
    
// default values, optional parameters


//To make our functions even more flexible, we can make certain parameters optional. If someone calls your method without all the parameters, the method will assign a default value to those missing parameters.

//All you have to do is use the equals sign (=) when defining the method. In this example, punctuation is an optional parameter, and its default value is ".".

static void Main(string[] args)
{
  YourMethodName("I'm hungry", "!"); // prints "I'm hungry!"
  YourMethodName("I'm hungry");  // prints "I'm hungry."
}
 
static void YourMethodName(string message, string punctuation = ".")
{
  Console.WriteLine(message + punctuation);
}

//--------------------------------------------------------------------------
//sequence of paramenters is predifined when passing arguments
    //also called named arguments and possitional arguments 
//--------------------------------------------------------------------------
//In this example, your method has five optional parameters:

static void YourMethodName(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0) {...}

//When you call the method, you only want to specify d. But calling the method this way would set a to 4, not d!

YourMethodName(4);
//Refer to the parameter by its name instead:

YourMethodName(d: 4);

//With named arguments, you can list them in any order:

YourMethodName(d: 4, b: 1, a: 2);

//positional arguments MUST come before named arguments:

YourMethodName(2, 1, d: 4) // a is 2, b is 1, d is 4
YourMethodName(d: 4, 2, 1) // Error!
    
    
    
//---------------------------------------------------------------------------------------------
//    return statement
//---------------------------------------------------------------------------------------------

// the keyword return tells the computer to exit the method and return a value to wherever the method was called.
// When a method is declared, it must announce the type of value it will return.
// The method declaration is a combination of details including: the access modifiers, return type, method name, and parameter // types. 
    
//---------------------------------------------------------------------------------------------
//    Using OUT
// out statement
// it is called out because it allow the value to be used outside of the method, it's passed by reference. 
    
//---------------------------------------------------------------------------------------------
    
//We can use out parameters in our own methods as well. In this example, Yell() converts phrase to uppercase and sets a boolean variable to true:

static string Yell(string phrase, out bool wasYellCalled)
{
  wasYellCalled = true;
  return phrase.ToUpper();
}

//The out parameter must have the out keyword and its expected type
//The out parameter must be set to a value before the method ends
//---------------------------------------------------------------------------------------------
//   When calling the method, don’t forget to use the out keyword as well:

string message = "garrrr";
Yell(message, out bool flag);
// returns "GARRRR" and flag is true
//---------------------------------------------------------------------------------------------
    
    Return an all-caps string, i.e. "HELLO":

"hello".ToUpper();
//---------------------------------------------------------------------------------------------
    
    public static void Main(string[] args)
{
  Console.WriteLine(Sight("Dauna"));
}
 
static string Sight(string viewer, string spaceThing = "meteor")
{
  return $"{viewer} saw a {spaceThing}!";
}

//prints:
// 
//---------------------------------------------------------------------------------------------
// expression-bodied definitions and lambda expressions
//---------------------------------------------------------------------------------------------

bool IsEven(int num)
{
  return num % 2 == 0;
}

//equals to:
bool isEven(int num) => num % 2 == 0;



//This also works for methods that return nothing, aka void:

void Shout(string x) => Console.WriteLine(x.ToUpper());
//This type of definition can only be used when a method contains one expression.
 
//lambda expression:
(int num) => num % 2 == 0   //(if used as an argument in a method)
//lambda expression is an anonymous method: it has no name.  They use the fat arrow, no curly braces, and no semicolon (;):
    (input-parameters) => expression

//Lambda expressions with more than one expression use curly braces and semicolon:

(input-parameters) => { statement; }


//---------------------------------------------------------------------------------------------
// example:
//    lambda expression with 3 expressions:
    
    int[] numbers = {1, 3, 5, 6, 7, 8};



    Array.Exists(  numbers, (int num) => 
{
  bool isDozenMultiple = num % 12 == 0;
  bool greaterThan20 = num > 20;
  return isDozenMultiple && greaterThan20;  // if both are true return true for this lambda expression
}  )
// ^^^ an example. which checks if any element in the array numbers  is a multiple of 12 and greater than 20:
//---------------------------------------------------------------------------------------------
// shorter lambda expressions:
        
bool hasEvenNumbers = Array.Exists(numbers, (num) => num % 2 == 0 );
// the type of num has been removed, that also works, and even shorter:
bool hasEvenNumbers = Array.Exists(numbers, num => num % 2 == 0 );
//no parentheses around the parameter either 

//so this means:
//We can remove the parameter type if it can be inferred
//We can remove the parentheses if there is one parameter
//---------------------------------------------------------------------------------------------
int[] plantHeights = { 3, 6, 4, 1, 6, 8 };
 
// Find the first occurence of a plant height that is greater than 5 inches

Array.Find(plantHeights, height => height > 5);
//searches a one-dimensional array for a specific value or set of values that match a certain condition and returns the first occurrence in the array.
//Find() takes two parameters: the first is the array and the second is a predicate that defines what we’re looking for. A predicate is a method that takes one input and outputs a boolean.

//heigth is an introduced integer, that is created inside the parenthesis and it's purpose is to 
//take in the array values while checking them in the method *
//---------------------------------------------------------------------------------------------
    array wrap around:

 int encrPosition = (position + 3) % 26;
    
//we have index of 26, beyond that it's outside it, and we want to wrap around it and start from the begining

see codecademy task:
https://www.codecademy.com/courses/learn-c-sharp/projects/csharp-caesar-cipher
//---------------------------------------------------------------------------------------------
//    using tryparse methods:


//Boolean.TryParse() :
    
bool replyAsBool;
bool isBool;
string reply = Console.ReadLine();
    
isBool = Boolean.TryParse(reply, out replyAsBool)
    
// isBool says if it can be parsed or not, true if it can, false if it can't
// the actual converted value is stored in replyAsBool in this case

// another example:

bool TryParse(string input, out T result)


// or:


string input = "42";
int value;

    if (int.TryParse(input, out value))
    {
        Console.WriteLine("Conversion successful. The value is: " + value);
    }
    else
    {
        Console.WriteLine("Conversion failed. Invalid input.");
    }
//---------------------------------------------------------------------------------------------
    
// how to remove duplicates and an alternative way to handle the last comma:

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

class Program
{
    static void Main()
    {
        string list = Console.ReadLine();
        string[] listArr = list.Split(',');
        string newItem = listArr[0];
        for (int i = 0; i < listArr.Length; i++)
        {
            if (!newItem.Contains(listArr[i]))
            {
                newItem = newItem + ',' + listArr[i];
            }
        }
        Console.WriteLine(newItem);
    }
}

//---------------------------------------------------------------------------------------------
//array method .Contains is very useful, here is how to use it:
//---------------------------------------------------------------------------------------------
    string input = Console.ReadLine();
    int[] arr = Array.ConvertAll(input.Split(','), int.Parse);

            if (arr.Contains(i+1))  //you can put whatever in the ()
            {
                //do x;
            } 
    

//---------------------------------------------------------------------------------------------
// enums general
//---------------------------------------------------------------------------------------------

enum Level 
{
  Low,
  Medium,
  High
}

// assigning an enum:

//You can access enum items with the dot syntax:

Level myVar = Level.Medium;
Console.WriteLine(myVar);

// give mine explisit int velues:

enum Months
{
  January,    // 0
  February,   // 1
  March=6,    // 6
  April,      // 7
  May,        // 8
  June,       // 9
  July        // 10
}

// getting the int needs conversion:

static void Main(string[] args)
{
  int myNum = (int) Months.April;
  Console.WriteLine(myNum);
}

//The output will be:   7

//---------------------------------------------------------------------------------------------
// complexity:
/*


big O 

O(1) – constant time                    >>              index access
O(log n) – logarithmic time             >>              loop over sorted array  with binary search
O(n) – linear time                      >>              loop over elements of an array
O(n log n) – quasilinear time
O(n²) – quadratic time                  >>              loop within a loop

avoid:
O(nm) – polynomial time
O(2n) – exponential time                >>              loop over every possible combination in an array
O(n!) – factorial time


*/


//--------------------------------------------------------------------------------------------
// classes general
//--------------------------------------------------------------------------------------------
// classes are reference types
// fields are by default private
//
// the this keyword here is used ony to call constructors in the same class, not im parent classes NB!!!
// this in a constructor:
        class Person
        {
            public string firstName;
            public string lastName;

            public Person(string firstName) 
            {
                this.firstName = firstName;
            }
            
            public Person(string firstName, string lastName) 
                :this(firstName) //this calls the prev constructor! this is all it's doing
            {
                this.lastName = firstName;
            }
        }
        
// sealed keyword, is a word for a class to make it uninheritable 
 
// protected members of a class. can be accessed by the class where the method is and the derived classes
// setters ca be protected, constructors as well

// static methods are accessed by this.X ParentClass.X, otherwise it's called by the child class like so :
base.MethodName()

// static class general
// used directly to provide methods, like Math.Pow()
// you don't create instances of this type of class, it starts existing once the program starts 
// and live until it's end, they serve for keeping lists in them (afaik) :)
// cannot be inherited
//

// null coalescing operator
Description = description ?? "No Description"
// if the description value is not null assign decsription, else assign whatever is after the ??

// terniary operator option:
// property = (condition) ? (option 1) : (option 2)

//--------------------------------------------------------------------------------------------
// enums general
//--------------------------------------------------------------------------------------------


    public enum DayOfWeek 
    {
        Mon, Tue, Wen, Thu, Fri, Sat, Sun
    }
    
    piblic static void Main() 
    {
        DayOfWeek day = DayOfWeek.Wed;
        Console.WriteLine(day); // Wed
        Console.WriteLine(day +1) // Thu
    }
    
    
    
//--------------------------------------------------------------------------------------------
// interfaces general
// contains only method declarations
// tells us what each child can do
// we don't 'inherit', we inplement the interface,
// interfaces can inherit other interfaces
// doens't have a state
// one class can implement more than 1 interface
// by default all members are abstract, no need to explicitly write the word 'abstract'
// when we inplement methods we don't add 'override'

// abstract classes general
// cannot be instantiated
// classes where there are some declarations, not everything is defined/implemented; with word 'abstract' keyword before the name of the method
// we can use abstract to not instantiate the class as an object, to try to avoid that
// has state
// 

abstract class Employee {
string Name {get; set;}
public Employee(string name, string departments)
    {
        Name = name
        Department = department;
    }
    
    public abstract double CalculatePaycheck();
}
// when we implement the abstract methods in the childs we do that:

class RegEmployee : Employee {
    public override double CalculatePaycheck() // we add the override keyword
    {
        //implementation
    }
}

// properties can be abstract, it means that the childs to have these properties with getters and setters with 'override'



// Structs general
//--------------------------------------------------------------------------------------------
//structs are value types
// the behave as primitives
// used when it has 1 or two values in it and is usually used a part of another object

public struct Point 
{
    public float x;
    public float y;
}

//--------------------------------------------------------------------------------------------
// namespaces
//--------------------------------------------------------------------------------------------
// can have
// classes, structs, enums, interfaces, namespcaes
// can't have
// data or methods directly in them
// 
//their content can exists in more than one file
// you can create types with duplicate names    
//  every sub namespace needs to be added with 'using' at the start of the file
//

//--------------------------------------------------------------------------------------------
// satics and instances 
//-------------------------------------------------------------------------------------------
//static is a variable that is persistent througth the objects and lives inside the class definition

public class Person {
    static int nextId = 0;
    public int id;
    public Person(string name) 
    {
        this.id = nextId++;
        this.name = name;
    }
}
// can be used for methods, fields, constructors, properties and more
//
//
//
//-----------------------------------------------------------------------------
// readonly keyword
//-----------------------------------------------------------------------------
/*
In a field declaration, readonly indicates that assignment to the field can only occur as part of the declaration or in a constructor in the same class. A readonly field can be assigned and reassigned multiple times within the field declaration and constructor.

A readonly field can't be assigned after the constructor exits. This rule has different implications for value types and reference types:

Because value types directly contain their data, a field that is a readonly value type is immutable.
Because reference types contain a reference to their data, a field that is a readonly reference type must always refer to the same object. That object isn't immutable. The readonly modifier prevents the field from being replaced by a different instance of the reference type. However, the modifier doesn't prevent the instance data of the field from being modified through the read-only field.
*/

// readonly property
// you can set the field only in the constructor or in the list (default value)

//-----------------------------------------------------------------------------
//DateTime
//formating:
DateTime time = DateTime.Now;
time.ToString("yyyyMMdd|HH:mm:ss.ffff") //[20230915|15:29:25.7867] 



//---------------------------------------------------------------------------------------------
// auto property auto properties:
public DataType PropertyName { get; set; }

//---------------------------------------------------------------------------------------------
// list encapsulation
// encapsulating a collection:
//

// getter to return a copy (new Collection)
// make the collection readonly 



//1) A collection which can be changed
// when there is no need to place any real restrictions on the exposed collection:

public List<T> Collection
{
    get
    {
        return this.collection;
    }
    set
    {
        if (value == null)
        {
            throw new ArgumentNullException();
        }
        this.collection = value;
    }
}
private List<T> collection = new List<T>();

//2) A collection that can be modified, but not swapped
// 
public IList<T> Collection
{
    get
    {
        return this.collection;
    }
}
private ObservableCollection<T> collection = new ObservableCollection<T>();

//3) Expose a read-only copy of a collection
//Frequently you want to prevent consumers from modifying an exposed collection - usually however you do want the exposing class to be able to modify the collection. An easy way to do this is by exposing a read-only copy of your collection:

public ReadOnlyCollection<T> Collection
{
    get
    {
        return new ReadOnlyCollection<T>(this.collection);  // retirn a copy, not the actual object 
    }
}
private List<T> collection = new List<T>();

//4) Collections that can be modified, but only in a certain way

public ReadOnlyCollection<T> Collection
{
    get
    {
        return new ReadOnlyCollection<T>(this.collection);
    }
}
private List<T> collection = new List<T>();

public AddItem(T item);


// another example of the above (?):
public sealed class CustomCollection<T> : IList<T>
{
    private IList<T> wrappedCollection;

    public CustomCollection(IList<T> wrappedCollection)
    {
        if (wrappedCollection == null)
        {
            throw new ArgumentNullException("wrappedCollection");
        }
        this.wrappedCollection = wrappedCollection;
    }

    // "hide" methods that don't make sense by explicitly implementing them and
    // throwing a NotSupportedException
    void IList<T>.RemoveAt(int index)
    {
        throw new NotSupportedException();
    }

    // Implement methods that do make sense by passing the call to the wrapped collection
    public void Add(T item)
    {
        this.wrappedCollection.Add(item);
    }
}
//Example use:

public MyClass()
{
    this.wrappedCollection = new CustomCollection<T>(this.collection)
}

public CustomCollection<T> Collection
{
    get
    {
        return this.wrappedCollection;
    }
}
private CustomCollection<T> wrappedCollection;
private List<T> collection = new List<T>();

//---------------------------------------------------------------------------------------
// inheritance
// overriding methods inside derived class:
public new string PrintInfo() { //add  the new keyword before the return type
  // print print print
}
//
//
//
//---------------------------------------------------------------------------------------
// parsing general

// parsing from string to enum type

protected GenderType ParseGenderType(string value)
{
    if (Enum.TryParse(value, true, out GenderType result))
    {
        return result;
    }
    throw new ArgumentException($"None of the enums in GenderType match the value {value}.");
}

protected GenderType ParseScentType(string value)
{
    if (Enum.TryParse(value, true, out ScentType result))
    {
        return result;
    }
    throw new ArgumentException($"None of the enums in ScentType match the value {value}.");
}


// it returns a Boolean indicating whether the parsing was successful, and if so, 
// it stores the parsed enum value 'GenderType' or 'ScentType' in the out parameter.
//---------------------------------------------------------------------------------------
// Exception handling general

// this is not a loop, we need a while loop in order to make this a loop

try 
{
    //perform operation that could fail
}
catch (TypeOfExceptionHere ex) // listens for a particular error
    //
}

//alternative example:
try {
    // Code that might throw an exception
} catch (ExceptionType1 e1) {
    // Handle ExceptionType1
} catch (ExceptionType2 e2) {
    // Handle ExceptionType2
} catch (...) {
    // Handle all other exceptions
}
finally
{
    // will always be executed
}

//another example

static void Main(string[] args)
{
    try
    {
        string input = "gwegw"; // if there was no try catch the VS would throw "Input string was not in a correct format."
        int.Parse(input);
    }
    catch (SystemException ex)
    {
        Console.WriteLine(ex.ToString()); //same output as the one below

        Console.Error.WriteLine(ex.Message); // prints only the error message without any other details "Input string was not in a correct format."

        Console.Error.WriteLine(ex.ToString());

        /*
         * System.FormatException: Input string was not in a correct format.
           at System.Number.ThrowOverflowOrFormatException(ParsingStatus status, TypeCode type)
           at System.Int32.Parse(String s)
           at OOPtest1.Program.Main(String[] args) 
            in C:\Users\tvtso\Desktop\APPPPP\C#\Telerik Alpha\OOP\OOPtest1\OOPtest1\Program.cs:line 13
        */


        throw new SystemException();   // throws it in VS "System Error" and stops the program
    }
}

// throw will not stop your program if it's inside a try catch block and there is a catch that matches it!!!!!!

//---------------------------------------------------------------------------------------------
// Creating exceptions general
//---------------------------------------------------------------------------------------------
Exception ex = new FileNotFoundException("gwegw");
throw ex; // throw keyword used here

//use exception in  a catch

catch (Exception ex)
{
    // log the error somewhere
    Console.Error.WriteLine("wgwege"); // we can add that to display something in the console before the throw
    throw; // this will rethrow the error and repeatedly add it in the log
    throw ex; //this will clear the stack trace and start it over
}

// just an empty catch with a consolewriteline message will trow the message if any exception is met!!  

// using throw ex in the above example will throw the same in the same way but will reset the stack trace


// custom exception class:

public class InvalidUserInputException : ApplicationException
{
    public InvalidUserInputException (string message) :
    base(message)
    {
    
    }
}

// Generics (templates in C++)
// aka parameterized types, template types

// type safety (only one type allowed per instance)
// code reuse (with diff types)
// System.Collections.Generic
// used mainly to create collections



public class GenericList<T>
{
    private List<T> elements;
    
    public GenericList(int capacity = 4)
    {
        this.elements = new List<T>(capacity);
    }
    
    public void Add(T element) 
    {
        this.elements.Add(element);
    }
    
    public int Count
    {
        get
        {
            return this.elements.Count;
        }
    }
}


public class Program
{
    public static void Main()
    {
        var ints = new GenericList<int>();
        var strings = new GenericList<string>();
        
    }
}

// constraints

public static T Min<T>(T first, T second)
    where T : IComparable<T>    // this is where the constraints are listed
{
        return 3;
}

// ^^ this is a method


// primary constrint:
where : class  // reference type parameters
where : struct // value type parameters
where : new() // public private c-or, allows you to create new objects of type T inside the method

where T : Person();
//Example 

public class MyCLass
    where Type: class, new()
{
    //....
}


// 
// Generic method with multiple constraints

public TResponse Call<TResponse, TRequest>(TRequest request)
    where TRequest : MyClass
    where TResponse : MyOtherClass

// Extention methods
// they don't have access to private or protected members

// must be in a static class
// should be a static method
// the first parameter of the method must be this


public static class Extentions
{
    public static int ToInt(this string str) // here the keyword this indicates what we are extending
    {
        return int.Parse(str);
    }
}

// used like so:
string str = "235";
int number = str.ToInt();

// should be used only where the methos would be applicable for any instance of that type, not for a specific ones

//another example:

public static class StringExtentions
{
    public static int GetWordCount(this stringtext) 
    {
        return text.Split(" ").Length;
    }
}

class Program
{
    static void Main (string[] args)
    {
        var text = "gwgw gw rge rger g erg";
        
        Console.WriteLine(text.GetWordCount()); //prints 6
        Console.WriteLine(StringExtentions.GetWordCount(text)); // prints 6
    }
    
}

// create dictionary:
// create dictionary:array

Dictionary<string, int> myDictionary = new Dictionary<string, int>();

// Tuple:

var myTuple = ("World", 123); // does that even work????
new Tuple <int, int>(row, col);

// Lambda expressions general

// example 1

List<Person> people = new List<Person> 
{
    new Person { Name = "gwg", Age = 23 }, 
    new Person { Name = "gwg", Age = 23 },
    new Person { Name = "gwg", Age = 23 },
};

// get me a list of all names:
Ienumberable<string> namesList = people.Select(p => p.Name); // returns the name itself
List<string><string> namesList = people.Select(p => p.Name).ToList();
 
// example 2
//------------------------------------------------------
List<Person> people = new List<Person> 
{
    new Person { Name = "gwg", Age = 23 }, 
    new Person { Name = "gwg", Age = 23 },
    new Person { Name = "gwg", Age = 23 },
};

var sortedByAge = people.OrderBy(p => p.Age);  // => read as "by" or "goes to"


// example 3
//------------------------------------------------------
var myNumbers = new List<int>{3,465,7,8,,345,5,16,6}; // we want a new list with number bigger than 5

var numbersOver5 = myNumbers.Where(n => n > 5); // read that as "give me the item (n) from this list
// where my condition is met
// n is the parameter, or each element in the collection

// similar to this but with bool:
bool allNumbersAreBiggerThan5 = myNumbers.All(g => g > 5);

// Where method:
// Filters a sequence of values based on a predicate.
// https://learn.microsoft.com/en-us/dotnet/api/system.linq.queryable.where?view=net-7.0


// example 4
//------------------------------------------------------
int[] plantHeights = { 3, 6, 4, 1, 6, 8 };
Array.Find(plantHeights, height => height > 5);
//searches a one-dimensional array for a specific value or set of values that match a certain condition and returns the first occurrence in the array.
//Find() takes two parameters: the first is the array and the second is a predicate that defines what we’re looking for. A predicate is a method that takes one input and outputs a boolean.

// example 5
//------------------------------------------------------
bool IsEven(int num)
{
  return num % 2 == 0;
}

//equals to:
bool isEven(int num) => num % 2 == 0;

// example 6
//------------------------------------------------------

string name = "gwgeqr";
char letter = 'g'; 
(name, letter) => name.StartsWith(letter); // returns bool?


// example 7
//------------------------------------------------------

//using delegate to assign the result of the lambda

Func<T, TResult>

Func<int, int> square = (n) => n * n; //square is the function name 
//usage:
int result = square(16); // this is how we call the delegate




public delegate int CalculatorDelegate(intx, int y); // declaration
//using the delegate:
CalculateDelegate myDel = Add; // add is a method we hav ewriten already and exists

// can be used for any method that has two int params and returns int
// this is a reference to a method

// Generic delegate:

Func<int,int,int> myDelegate = Add;
// the last param inside <int,int,int> is the return type;
// the last param is always the return type

// predicate returns a bool



// LINQ library general

// provides unificated way of manipulating collections using IEnumerable interface, data bases, XML docs
// it has extention methods
// all strings are IEnumerable



//LINQ methods

// most commonly used operators:
// 1. .Where() = filters a collection
// 2. .First() = returns the first match in the collection
// 2.1 .FirstOrDefault = if there are not objects that match, return the default value, null for objects
// 3. .Select() = returns a collection with transformed elements
List<int> numbers = new List<int> { 1, 2, 3, 4, 5 };

// Using Select to square each number
var squaredNumbers = numbers.Select(x => x * x);
// Select() can create anonimous types:
            var orderCounts = Database.Customers
                .Select(cust => new
                {
                    cust.CustomerID,
                    OrderCount = cust.Orders.Count()
                });

// 4. .OrderBy().ThenBy() = sorts a collection based on criteria
var alphabeticallyOrdered = people
    .OrderBy(p=>p.FirstName)  // sort by name only
    .ThenBy(p=>p.LastName);   // then sort by last name
// 5. .Sum() = sums all the elements
// 6. .Min()/.Max() = finds the min/max element based on condition
var youngest = people.Min(p => p.Age);
// 7. .Count() = finds the count based on condition, returns an int
var countOfJohns = people(p=>p.FirstName == "John");
// 8. .Any() = if at least one of the elements meets a certain condition
    Members.Any(Member => Member.Name == name)) // returns bool
// Any() withtout parameters can also check if the list is empty and will return false if it is
// 9. .All() = checks if all the elements match a criteria and returns a boolean
// 10. .Average() = returns double
// 11. .Skip(n) skips n number of elements
// 12. .Take(n) takes n number of elements and makes a new list
// 13. .TakeWhile takes until a criteria is met and stop and returns 
// 14. .GroupBy() groups the elements by a trait:

//that needs to be used with something else, or you will need that:

       List<Person> people = new List<Person>
        {
            new Person { Name = "Alice", Age = 25 },
            new Person { Name = "Bob", Age = 30 },
            new Person { Name = "Charlie", Age = 25 },
            new Person { Name = "David", Age = 30 }
        };

        // Group people by their age
        var ageGroups = people.GroupBy(person => person.Age).ToList();



/*
eliminates loops, shortens the code
LINQ is based on the conception of lazy evaluation
The queries are constructed but are only evaluated when actually needed
Also known as Query materialization
The elements are returned one by one




yeald return

the result of this return will be called only when we need the result of this request, not at the time when it's hit by the provram at runtime


This is an example of lazy evaluation
*/



//---------------------------------------------------------------------------------------------
//out keyword:

//In C#, the out keyword is used as a method parameter modifier to indicate that a parameter is being passed by reference and that the method is expected to assign a value to that parameter. Essentially, it allows a method to return multiple values through its parameters.
//
//Here's how the out keyword is used:
//
//When declaring a method with out parameters:


public void GetValue(out int result)
{
    // The method must assign a value to 'result'
    result = 42;
}

//When calling a method with out parameters:

int value;
GetValue(out value);
// 'value' now contains the assigned value, which is 42 in this case

//Key points to remember about out parameters:
//
//The method that uses out parameters must assign a value to each out parameter before it returns.
//The caller of the method must provide variables as arguments for out parameters, and these variables must be uninitialized.
//out parameters are often used when a method needs to return more than one value or when a method needs to return a value along with a specific status indicator.


//---------------------------------------------------------------------------------------
//unit testing
[TestClass]  // attribute 
public class Tests
{
    private Calculator calculator; // Declare an instance of the Calculator class here;
    string long
    
    [TestInitialize] // attribute 
    public void Initialize()
    {
        // Create a new Calculator object before each test.
        calculator = new Calculator();
        string validCustomerName = "Ivan";
        string invalidCustomerName = "g";    }
    
    
    [TestMethod]
    public void Deposit_Should_Be_Valid() 
    {
        //Arrange
        Account account = new Account();
        //Act
        account.Deposit(125.0m);
        //Assert
        Assert.AreEqual(125.0m, account.Balance, "Balance is wrong")
    }
    //ор
    
    //Act & Assert
    [TestMethod]
    public  void ThrowWhen_valueLargerThanMax()
    {
        //arrange   
        string customerName = "Bruce";
        double balance = 50;
        BankAccount sut = new BankAccount(costomerName, balance);
        //act and assert
        Assert.ThrowException<ArgumentException>(() => sut.CustomerName = new string('a',11));
    }
    
    
}
// attributes general

// 1. [TestClass]
// 2. [TestMethod]
// 3. [Timeout]
// 4. [ExpectedException]
// 5. [Ignore]
// 6. [ClassInitialize], [ClassCleanup]
// 7. [TestInitialize], [TestCleanup]


// Assertions Examples



Assert.AreEqual(expected_value, actual_value, "message") // compares values
Assert.AreSame(expected_object, actual_object, "message") // compares references
Assert.IsNull(object, "message")
Assert.IsNotNull(object, "message")
Assert.IsTrue(condition)
Assert.IsFalse(condition)
Assert.IsInstanceOfType(value1, typeof(value2)) // we check if the returned type is the expected  value2
Assert.ThrowsException<ArgumentException>(()=> sut.CustomerName = new string('a',3)) 
Assert.ThrowsException<ArgumentException>(() => sut.CustomerName = new string('a', 3), "Optional message here");
// we can also do that:
Assert.ThrowsException<InvalidUserInputException>(() => command.Execute()); // no parameters, just call the method of the object we created in the test (command in this case)


//empty lambda
// it translates into:
// check if this exception is thrown when the sut.CustomerName is "aaa"

[TestMethod]
[ExpectedException(typeof(ArgumentException))]
//or with the messgage:
[ExpectedException(typeof(ArgumentException), "Please provide a non-null or empty value")]
//if we test the constructor:
Assert.ThrowsException<ArgumentException>(() => new Boarder.Models.Task(title1, assignee, dueDate));
//this checks if the exception that wa thrown was the expected type, but we don't write an Assert line


// naming convetions

IsAdult_AgeLessThan18_False
// first the method we are testing
// second state under test
// expected result
IsAdult_False_AgeLessThan18
//MethodName_
//expectedBehaviour
//_SUT
Should_ThrowException_When_AgeLessThan18
When_AgeLessThan18_Expect_IsAdultAsFalse


//Unit testing best practices

// 1. Should be executed fast
// 2. Is utomated and readable
// 3. Is easy to implement
// 4. Is relevant tomorrow
// 5. Is consistent in it's results in different platform
// 6. Has full contriol over the unit under test
// 7. Is fully isolated



//---------------------------------------------------------------------------------------------
//sorting algorithms


// Selection sort   O(n2) worst and best case, same number of loops

repeat (n - 1) times
    set the first unsorted element as the minumim
    for each of the unsorted elements
        if element < current minimum
        set element as new minimum
        
// searched for the smallest element and switches it with the current index (first, second, thirds etc.) 

// Bubble sort

    do 
        swapped = false
        for i = 1 to indexOfLstUnsortedElement -1
            if leftElement > rightElement
                swap(leftElement, rightElement)
                swapped = true
    while swapped

// merge sort best, O(log n) worst O(n log n)

// splits into small arrays of 1 element and devide and conquer 

// quick sort O(n2)

// also devide and conquer, uses a pivot point, moves all elements smaller than it to the laft and bigger than it to the right, then does the same again from the start



//---------------------------------------------------------------------------------------------
// Trees general

//using CompareTo.



// CompareTo(Object) // not the same as CompareTo(String)




//  Returns int
//  Value	Condition
//  Less than zero	This instance precedes value.
//  Zero	This instance has the same position in the sort order as value.
//  Greater than zero	This instance follows value.
//  -or-
//  value is null.

string s = "some text";
Object[] objectsToCompare = { test, test.ToString(), 123,
                                    123.ToString(), "some text",
                                    "Some Text" };
                                    
foreach (var objectToCompare in objectsToCompare)
int i = s.CompareTo(objectToCompare);

//DFS in Binary tree

//InOrder
InOrder(node.Left);
print(node);
InOrder(node.right);

//PostOrder
PostOrder(node.left);
PostOrder(node.right);
print node;

//PreOrder
Print node;
PreOrder(node.left);
Preorder(node.rigth);

// Breadth first seach in a tree BFS
// is implemented with queue always
GetBFS(root)
queue.enqueue(root)
while (queue not empty) 
{
    node = queue.dequeue()
    print node;
    foreach child in node.children
        queue.enqueue(child)
}

// Depth first search DFS
// implemented with stack always
GetBFS(root)
stack.push(root)
while (stack not empty)
{
    node = stack.Pop()
    print node;
    foreach child in node.children
        stack.push(child)
}



//---------------------------------------------------------------------------------------------
// recursion, imagine the problem as the stack used for the method in order of operations

static string RecursionTask1(int n)
{
    if (n <= 0)
    {
        return "";
    }
    else
    {
        return n.ToString() + RecursionTask1(n - 1);
    }
}

// prints 54321
// tip - imagine the very last operation and see where it will be placed, at the start or the begining of the string 
//
//---------------------------------------------------------------------------------------------




//Web Development

// -- BeersApiController.cs
controllers deal with how the incoming requests are managed 

    [Route("api/beers")] // the path to the below class > BeersApiController
    [ApiController]

    //controller is a class that takes and responces ro requests


//also 
 [Route("api/beers")] 
// can be set to use the first name of the controller

// each controller is on a different path
// we do not instantiate the controller, the path automatically instantiates it

// And how does that work??
 [Route("api/beers")] 
//what will be the path?
// the path will be the first name of the controller before the word 'Controller' in the name. 
// For example if the name of the controller is:

DayTimeController, the path will be :
api/daytime

//if the name of the controller is 
StringController, the name will be 
api/string


//---------------------------------------------------------------------------------------------



// @ Dep inversion
// abstraction should not depend on other details 
// details should not depend on abstractions

// classes should require their dependencies (in the c-ors)
// you can't create them without the objects they need


// achieved by using:
// @ IoC

// meaning of IoC > we don't have to instantiate the objects, the frame work does it

// @ Dependancy injection

// differenes between DInv, IoC and DInj


// loose coupling 
// easier to read
// easy to maintain and extend




// **** TRANSIENT SCOPED SINGLETON **** //

//--------------------------------------------------------
//          *** TRANSIENT >> most often used ??
//--------------------------------------------------------
// new instance is created each request TO USE THE OBJECT
//
// useful for
/*
    Database Access (new request is new connection)
    File Access
    Services that should dispose of their state
    When you need a fresh instance of an object every single time
*/


//--------------------------------------------------------
//        *** SCOPED >> often used?
//--------------------------------------------------------
// new instance per рequest is created, refresh the page creates a new one
// all classes will use one instance and close it (when the query is finished?)
// 
// useful for:
/*
    persisting state throughtout application per request
*/


//--------------------------------------------------------
//         *** SINGLETON  >> most often used??
//--------------------------------------------------------
// lives untill the whole app works
// 
// used for caching services
/*
    caching services
    global configuration
    business rules
    https clients
    persistent state that is useful for the runtime of the application
*/




// Layered Architecture

/*

Presentation layer  >> in our case the controllers
^
Business layer >> Service 
^
DataAccess layer >> Repository

*/


// Dependancy injection

//=====================================================//
// Basic Authentication
//=====================================================//


// authentication vs authorisation

// authentication is when you login, username and username, two factor authentication
// checks against username only:

//we pass string authorizationHeader as argument:
try
    return this.UserService.GetUsername(authorizationHeader);
catch
    exception("Invalis username");

//next will be to check if he is Admin

// authorization follows the authentication
// authorizationn is your rights 
//
//
//

//C:\Program Files (x86)\Microsoft SDKs\NuGetPackages\

//=====================================================//
// Entity Framework Core
//=====================================================//
//
// Object-Relational Mapping (ORM)
// ORM libraries
//
//  Code First method:
//  - creating the app logic first, then create the databases and their logic
//  - build the code logic arount the database logic
//
//  Entity Framework = standard ORM library 
//  maps tables to objects
//  Has build in CRUD operations
//
//  DbContext class
//  all the communication between the app and the database goest through this class
//  it translates all the LINQ queries into SQL queries and to execure them 
//
//  DbContext is out DataBase
//  DbSet are the tables in the DataBase
//  


// First we create the Context class in the Models folder:

    public class BeerContext : DbContext // this needs a NuGetPackage called Microsoft.EntityFrameworkCore.SQLserver
    {
        public BeerContext(DbContextOptions<BeerContext> options)
        : base(options){ }


        public DbSet<Beer> Beers { get; set; }
        public DbSet<Brewery> Breweries { get; set; }
    }


//  next create the database and setting it up in Program.cs:

 public void ConfigureServices(IServiceCollection services)
 {
     services.AddDbContext<BeerContext> ( options => { options.
         UseSqlServer(@"Server=DESKTOP-VKFPR8Q\SQLEXPRESS;Database=BeersDatabase;Integrated Security=True;"); } );

     // connects the DB and our application
     // UseSqlServer() <- takes a connection string that consists of:
     // 1. name or address of the sql server (check it in the SQL S management studio)
     // 2. name of the db
     // 3. the way of authentication
     // @"Server=DESKTOP-VKFPR8Q\SQLEXPRESS;Database=BeersDatabase;Integrated Security=True;"
     // (1, 2, 3)
     // the last part True means to use the credentilas we use on our Windows PC for authenticating in the SQL server
     // if False, we need to provide a passwords and username
 }
 
 
// Code first

//  Data Annotations - ForeignKey Attribute in EF 6 & EF Core
//  The ForeignKey attribute is used to configure a foreign key in the relationship 
//  between two entities in EF 6 and EF Core. It overrides the default conventions. 
//  As per the default convention, EF makes a property as foreign key property when 
//  its name matches with the primary key property of a related entity.

//  ForeignKey Signature: [ForeignKey(name string)]
//
//
//
//
//



//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------

/*
basic notes:

class inherits one class
class implements multiple interfaces
interface extends multiple imterfaces 

constants for min and max should be in the class where they are needed

consts for validation in the abstract class should be private!!!!!!!!!

using static Validator; << to access the validator methods in the same file (this is called static import)

the settes in the base class are not needed if we are not setting the field there

the base class constructor should be protected

get => field;


*/
    
    
    
    
    
    
    
    