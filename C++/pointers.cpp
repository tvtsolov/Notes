//initialisation with pointers

char* input = new char[100];  // initialize an array

int* arrayPrt = new int[1000];  


Company* companiesArray;
companiesArray(new Company [numCompanies]); // inside the constructor


Company* companiesArray; // does not allocate any memory
companiesArray = new Company[numCompanies];  // allocates according to the default constructor in Company, if there is none it uses the C++ directive


int* pointerToArray = new int[5]; // Dynamically allocate memory for an array of size 5, must have size
// access elements:
pointerToArray[index];




//=============================================================================//


// pointer to a function, example:
// function pointers


void blah(string str, int x) {
    while (x--) {
        cout << str << endl;
    }
}

int main() {

    void (*myPointer) (string s, int i);    // initialize the pointer without an address, without a name; pointer to function; only the parametrs are specified and the return type
    myPointer = blah;                   // we assign it, we give it an address;
    myPointer("bubibo bap baduda", 7);  // we call the pointer
}

// here ^^^ we can use myPointer to switch where it points to, we can have a different functions all suitable for the pointer to point to (number, order and type of arguments must be the same as the type of the pointer);
 
// another example:
vector<string> split(string s, char sep) {
    vector<string> strings;
    ...
    return strings;
}
    // this whole line is the initialisation:
    vector<string> (*p)(string, char); // on one line: vector<string> (*p)(string, char) = split 
    p = &split; // this also works: p = split; no &
    p("hello world", ' '); // returns { "hello", "world" }



// another example:
// using pointer to a function as an argument in another function

void print(const vector<int>& v) {
    for (int item : v){
        cout << item << " ";
    }
}

vector<int> filter(vector<int> numbers, bool (*shouldFilter)(int)) {    // pointer to a function as parameter
       // works without the * as well > bool  (shouldFilter)(int)
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

                        //shouldFilter can be poiting to isEven or isOdd  !!! used below

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









// pointer arithmetic:

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr; // Points to the first element of the array (arr[0])

    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array


//=========================================

class IntArray {
private:
int* data; int size;
public:
IntArray(int size) : data(new int[size]), size(size) {}
~IntArray() { delete[] this->data; } // destructor
...
};



//shared_ptr to a class:

int main() {
    // Create a shared_ptr to a MyClass object using std::make_shared
    std::shared_ptr<MyClass> myClassSharedPtr = std::make_shared<MyClass>(42);

    // Use the shared_ptr as if it were a regular pointer
    myClassSharedPtr->doSomething();

    // The object will be automatically deleted when the last shared_ptr that owns it is destroyed

    return 0; // myClassSharedPtr is automatically deleted when it goes out of scope (end of main)
}






















