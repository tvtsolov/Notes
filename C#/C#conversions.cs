//===================================================================================
//cnvrt
//-------------------------------------------------------------------------------------
//STRING ELEMENT TO INT
//string[n] is always 'char' type so it needs to be converted back to string before being parsed

string str = "124236723652";
int result = int.Parse(str[1].ToString());
Console.WriteLine(result);
// returns 2
// this basically convert the element back into string for some reason and them parses it to int.

//---------------------------------------------------------------------------------------
//STRING TO INT:

string input = "123";
int result = int.Parse(input); // you can parse string, but not a char (weird)

//CHAR TO INT:

char ch = '2';
int result = Convert.ToInt32(ch - 48);  
    //or directly 
int result = ch - 48;

//---------------------------------------------------------------------------------------
//ARRAY<string> ELEMENT TO INT

//same as above or:

string[] blank = { "1","2","3","5" };
int result = int.Parse(blank[1].ToString());
// result = 2

//---------------------------------------------------------------------------------------
//ARRAY<string> ELEMENT element TO INT

string[] blank = { "12", "282", "3121", "52" };
int result = int.Parse(blank[1][1].ToString());

// first [1] is the array element and the second [1] is the element of the element











Implicit Casting (automatically) - converting a smaller type to a larger type size. char -> int -> long -> float -> double.
    
Explicit Casting (manually) - converting a larger type to a smaller size type. double -> float -> long -> int -> char.
convert string[] to int[]
convert string[] into int[]


// string[] into int[] with given string array



{
    public static void Main()
    {
        string[] list = new string[] {"1", "2", "3"}; 
 
        int[] ints = Array.ConvertAll(list, int.Parse);
        Console.WriteLine(String.Join(",", ints));
    }
}



//or same:

{
    public static void Main()
    {
        string[] list = new string[] {"1", "2", "3"};
 
        int[] ints = list.Select(int.Parse).ToArray();
        Console.WriteLine(String.Join(",", ints));
    }
}

// or from input in one line separated with a symbol:

string input = "2 3 34 12 435"; // could be taken from the console with Consol.ReadLine()
string[] inputArray = input.Split(' ');
int[] intArray = Array.ConvertAll(inputArray, int.Parse);

//---------------------------------------------------------------------------------------------
//cnvr string into string[] or int[]:

string firstList = Console.ReadLine();
string[] firstListArray = firstList.Split(" ");


// we can combine these two lines on one line, we do this with the second list:
string[] secondListArray = Console.ReadLine().Split(',');



//cnvr a string element into double or int

we need to convert the element to char first!





//Cnvr string to number:
    //string to int

    {
      Console.WriteLine("Enter your age:");
      int age = Convert.ToInt32(Console.ReadLine());
      Console.WriteLine("Your age is: " + age);
    }

// the above works only if the string contains only integers (i think)

//or cnvr string to double:

{
    Console.WriteLine("How many 0.5L bottles?:/n");
    double bottles05 = Convert.ToDouble(Console.ReadLine());
}


//string to number:
//or convert directly at the input:

int a = int.Parse(Console.ReadLine());
int b = int.Parse(Console.ReadLine());



//cast int to char

    char first = (char)(67); // C
    char second = (char)(35) // #
    Console.WriteLine  (first = " , " + second); //C#

//char to int
    char ch = '2';
    int result = Convert.ToInt32(ch - 48);
//or directly 
    int result = ch - 48;
    




//int to string

int num1 = 4;

string numString = num1.ToString(); //works with floats as well











