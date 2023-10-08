===================================================================================
cnvrt
---------------------------------------------------------------------------------------------
Implicit Casting (automatically) - converting a smaller type to a larger type size. char -> int -> long -> float -> double.
    
Explicit Casting (manually) - converting a larger type to a smaller size type. double -> float -> long -> int -> char.
convert string[] to int[]
convert string[] into int[]


string[] to int[]

{
    public static void Main()
    {
        string[] list = new string[] {"1", "2", "3"};
 
        int[] ints = Array.ConvertAll(list, int.Parse);
        Console.WriteLine(String.Join(",", ints));
    }
}




//or  string array into ints array

{
    public static void Main()
    {
        
        string[] list = new string[] {"X", "2", "3"};
 
        int[] ints = Array.ConvertAll(list, s => int.TryParse(s, out var x) ? x : -1);
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



---------------------------------------------------------------------------------------------
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


string to number:
or convert directly at the input:

int a = int.Parse(Console.ReadLine());
int b = int.Parse(Console.ReadLine());


//char to int

// we can't do that directly, we need to convert the char to string and them parse it:

string number = Console.ReadLine();
char symbol = number[i];

int digit = int.Parse(symbol.ToString());

//int to string

int num1 = 4;

string numString = num1.ToString(); //works with floats as well
