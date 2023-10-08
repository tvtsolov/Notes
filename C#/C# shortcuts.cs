//--------------------------------------------------------------------------------------------
// Find the most frequent item in an Array of ints:
//--------------------------------------------------------------------------------------------

 static int ReturnTheMostFrequentElementInArr(int[] array)
    {
        int[] newArray = new int[array.Length];

        var max = (array.GroupBy(x => x)
        .Select(x => new { num = x, cnt = x.Count() })
        .OrderByDescending(g => g.cnt)
        .Select(g => g.num).First());


        return max.Key;
        // max.Count can se used to return the count as well
    }

// return the sum of all digits in a number (int) ReturnSumOfDigitsI or a number that is a string ReturnSumOfDigits


int newNumber = 667;
string message = "666";


int result = ReturnSumOfDigitsI(newNumber); 
int result2 = ReturnSumOfDigits(message);  


Console.WriteLine(result);
Console.WriteLine(result2);


// for int input:


static int ReturnSumOfDigitsI(int inputInt) // from an integer number
{
    int sum = 0;
    string numberIntoString = "";
    numberIntoString = inputInt.ToString();
    for (int i = 0; i < numberIntoString.Length; i++)
    {
        sum += int.Parse(numberIntoString[i].ToString());
    }
    return sum;
}




// for string input:


static int ReturnSumOfDigits(string str) //from a string
{
    int sum = 0;

    for (int i = 0; i < str.Length; i++)
    {
        sum += int.Parse(str[i].ToString());
    }
    return sum;
}


// not int array without using LINQ:

https://stackoverflow.com/questions/15862191/counting-the-number-of-times-a-value-appears-in-an-array/75428567#75428567


and the math way to do that for four digit numbers:

using System;

namespace SumOfDigits
{
    class Program
    {
        static void Main(string[] args)
        {
            int number = int.Parse(Console.ReadLine());

          int one = number / 1000;
          int two = number % 1000 / 100;
          int three = number % 100 / 10;
          int four = number % 10 / 1;

            int sum = one + two + three + four;
            Console.WriteLine(sum);
        }
    }
}
//--------------------------------------------------------------------------------------------
// take input
//--------------------------------------------------------------------------------------------
// take string and put each character into a char[]:
    
        string input = Console.ReadLine();
        char[] hah = input.ToCharArray();

//or directly:

char[] hah = Console.ReadLine()
             .Select(Convert.ToChar)
             .ToArray();


// take into string[] separated by a comma:

string[] itemsString = Console.ReadLine().Split(", ");
//also:
string[] input = Console.ReadLine().Split(',');

// convert string[] to int[] with a loop

int[] itemsInts = new int[itemsString.Length]; // create with length an 'empty' array

for (int i = 0; i < itemsString.Length; i++) // create the itemsInts array with a loop to take the values
        {
            itemsInts[i] = int.Parse(itemsString[i]);
        }

// take in an int[] from separate lines, one by one 

int n = int.Parse(Console.ReadLine()); // take the length of the array

        int[] numbers = new int[n];

for (int i = 0; i < n; i++) // take the values of the array 
        {
            numbers[i] = int.Parse(Console.ReadLine());
        }

//---------------------------------------------------------------------------
 //  take string and make it into int[]
//---------------------------------------------------------------------------
    
string input = Console.ReadLine();
int[] intArray = Array.ConvertAll(input.Split(' '), int.Parse);



// take input directly into int[] 

    int[] arr = Console.ReadLine()
            .Split(" ")
            .Select(int.Parse)
            .ToArray();

//makes them into an array called 'arr' separated by " "
// you can do it to double as well:

 double[] arr = Console.ReadLine()
            .Split(" ")
            .Select(Convert.ToDouble)
            .ToArray();



//--------------------------------------------------------------------------------------------
// return the longest sequence count in an array of integers
//--------------------------------------------------------------------------------------------
static int TheLongestSequence(int[] arr)
        {
            int seq = 1;
            int tempSeq = 1;

            for (int i = 1; i < arr.Length; i++)

            {
                if (arr[i] == arr[i - 1])
                {
                    tempSeq++;
                    if (tempSeq > seq)
                    {
                        seq = tempSeq;
                    }
                }
                else
                {
                    tempSeq = 1;
                }
            }
            return seq;
        }
//-----------------------------------------------------------------------------------
      //  check if a number is even (четно) in an array called input[]:
  //
  if (input[i] % 2 == 0) 
  
    // even > true
    
    // else > false
    
    
//--------------------------------------------------------------------------------------------
      //check if a char is vowel:
//--------------------------------------------------------------------------------------------
char cup = 'x';
if (isVowel = "aeiouAEIOU".IndexOf(cup) >= 0)  
    // or 
if ("aeiouAEIOU".Contains(cup)) //also works!
    
// and then do your thing
                {
                    sums[j] += (cup * hah[j].Length);
                }    else // is consonant or a symbol
                {
                    sums[j] += (cup / hah[j].Length);
                }


//print a matrix
// print a 2d array::

for (int i = 0; i < matrix.GetLength(0); i++)
{
    for (int j = 0; j < matrix.GetLength(1); j++)
    {
        Console.Write($"{matrix[i, j], 4}");
    }
    Console.WriteLine();
}


//---------------------------------------------------------------------------------------
// find unique prime factors:
public static List<long> FindUniquePrimeFactors(long number)
    {
        List<long> primeFactors = new List<long>();
        long divisor = 2; // Start with the smallest prime number

        while (number > 1 && divisor <= Math.Sqrt(number))
        {
            if (number % divisor == 0)
            {
                primeFactors.Add(divisor);
                while (number % divisor == 0)
                {
                    number /= divisor;
                }
            }
            divisor++;
        }
        
        // If the remaining number is greater than 1, it's also a prime factor
        if (number > 1)
        {
            primeFactors.Add(number);
        }

        return primeFactors;
    }
    
/*  ^^^^^^^^^^^^^^
Example with 300   
The unique prime factors of 300 are 2, 3, and 5. Here's the breakdown:

Divide 300 by 2: 300 / 2 = 150
Divide 150 by 2: 150 / 2 = 75
Divide 75 by 3: 75 / 3 = 25
Divide 25 by 5: 25 / 5 = 5
Divide 5 by 5: 5 / 5 = 1
So, the unique prime factors are 2, 3, and 5.

*/

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------










