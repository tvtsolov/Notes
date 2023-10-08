//get ints from inout on two rows into two vectors:


std::vector<int> getNumbersFromInput (const std::string & str) 
{
    std::vector<int> result;
    std::stringstream ss(str);
    int num;
    while (ss >> num) {
        result.push_back(num);
    }
    return result;
}


// in main() you need that:


    std::vector<int> A, B, result;

    std::string numberStr;
    
    std::getline(std::cin, numberStr);
    A = getNumbersFromInput(numberStr);

    std::getline(std::cin, numberStr);
    B = getNumbersFromInput(numberStr);
    
    //you will need cin.ignore() above that if you have just usedcin right before this operation to take another imput

===================================================================
//check if a char is a digit:

isdigit(c) //returns true or false
//or
if (c>= '0' && c <= '9') // same as: if(c>=0x30 && c<= 0x39)

convert it:
{
    number = (c-'0'); //this is basically a conversion 

}




===================================================================
    make a 2D vector: //input is separated by new line and stops when the input is "end"
    
    
    void addVectorToVector(std::vector<std::vector<std::string>> & vec) {

        std::vector<std::string> vInput;
        std::string input;
        std::getline (std::cin, input);
        std::string item;
        while (input != "end") {
            std::istringstream ss(input);
            while (ss >> item) {
                vInput.push_back(item);
            }
            vec.push_back(vInput);
            vInput.clear();
            std::getline (std::cin, input); 
        }
    }
    
    
    int main() {

    std::vector<std::vector<std::string>> complexVector;
    addVectorToVector(complexVector);
    }

===================================================================
    
===================================================================
===================================================================
    
===================================================================
    
===================================================================

===================================================================

===================================================================

===================================================================

===================================================================




// the char '\n' (it's a char!') is Enter!

//  getchar(); is a function that runs like getline. Like cin as well. Asks for input

int response;
response = getchar();
char r = static_cast<char>(response);

static_case can convert:

from        to

int         double
float       long int

static_cast can convert an enumeration type to an integer type or vice versa.

Also pointers to/from void: static_cast can also be used to convert pointers to or from void pointers. This can be useful when you need to pass a pointer to a function that takes a void pointer, or when you need to store a pointer in a container that requires a void pointer.


Pointers: static_cast can be used to convert pointers between related types, such as a pointer to a base class to a pointer to a derived class, or vice versa. This is called "upcasting" or "downcasting", respectively.






pointers can be re-pointed to different vaiables (of the same type as the pointer tpye)

regerences can't be changed. 

int x = 42;  // will print 42
int * ip = &x; // will print 42, to print ip you need to put it like so:  *ip
int & y = x;  // will print 42, when you want to print it you don't need to put anything next to it

y = 73; // will print all of the above as 73; this acctually changes x; y doens't have a value really as references are only references to a different variables

//both pointers and references can assign new values to the place they are pointing to but references change;

we can change the ip pointer like so:

int z = 46;

ip = &z; 

//we can also change the value of z through ip:

*ip = 123;

//when we dereference the pointer it's when we pass it's value to a new int variable like so:

int humus = ip;


//'reseeding' the poijnter means to make a pointer point to something else; 

//good idea is to always const modify the reference like so:

const int & y = x;

// this way you won't accidentaly change the value of x through y;



// primitive arrays can be used as if they are a referece :

int arr[15];
int *ip = arr; // returns the first integer of the array
*ip = 2; // assigns the first element of the array
++ip //this will point to the second element of the array, not to the first anymore;
*(++ip) //same as above


//before C++11:

char s[] = "string"; // null terminated array of chars; old type of string
for (char * cp - s; *cp != 0; ++cp) {  //this part *cp != 0 ca be writes as ";*cp;", means the same
    printf("char is %s\n", *cp);
}


//            true is 1 false is 0

if(0) // will never be executed, it's always false 
//anything but 0 will be evaluate to true


do {
    //check is done at the end of the loop
} while (something == true);

//====================
//print a matrix:

for (int i = 0; i < row; i++)
{
    for  (int j = 0;j < col; j++)
    {
        Console.Write($"{matrix[i, j], 4}");
    }
    Console.WriteLine();
}




































