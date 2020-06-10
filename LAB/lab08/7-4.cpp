// This program will read in prices and store them into a two-dimensional array.
// It will print those prices in a table form.

// Connor Seemann

//preprocessors to include for the program
#include <iostream>
#include <iomanip>

// Define global constant variables
const int MAX_SIZE = 100;
const int MAX_RANGE = 100;
typedef int AgeList[MAX_SIZE];

// prototypes for functions
void swap(int &a, int &b);
void BubbleSort(int array[], int size);
void makeFrequency(int nums [], int size, int frequency [], int range);

int main() 
{
    // declaration of variables needed

    AgeList ListOfAges;
    int temp;
    int size = 0;
    int frequency[MAX_RANGE];
    
    // start main program
    // getting input
    do
    {
        // breaks if the grade entered is -99
        std::cout << "Please enter data from the range 1 to 99 (enter -99 to end):" << std::endl;
        std::cin >> temp;   // getting the input 
        if (temp == -99)    // check for the number enterd
            break;                      // breaks if the enterd number is -99
        else if (temp > 99 || temp < 1)
            std::cout << "Thant number is out of range... \
            \nplease make sure the numbers you enter are in the range of 1 to 99\n" << std::endl;

        else if (temp <= 99 && temp >= 1) 
        {
            ListOfAges[size] = temp;
            size++;                         // incrementing size
        }
    } while (size < MAX_SIZE);

    // start function calls

    BubbleSort(ListOfAges, size);                                               // sorts the array in order least to greatest

    makeFrequency(ListOfAges, size, frequency, MAX_RANGE);                      // call for makeFrequency

return 0;
}

//********************************************************************************
// swap
//
// task:          This function will take two inputs and with those two inputs
//                it will swap them.
// data in:       two integers to be swapped.
// data returned: two integers swapped.
//
//********************************************************************************

void swap(int &a, int &b) 
{
    int temp = b;
    b = a;
    a = temp;
    
    return;
}

//********************************************************************************
// BubbleSort
//
// task:          This function will sort an input array to be sorted in numerical
//                order (least to greatest).
// data in:       array of integers and the size in an integer.
// data returned: array in numerical order.
//
//********************************************************************************

void BubbleSort(int array[], int size)
{
    for (int maxElement = size - 1; maxElement > 0; --maxElement)   // for loop to iterate through the array the size - 1 times
    {                                                            
        for (int index = 0; index < maxElement; ++index)            // for loop to iterate throught the array
        {
            if (array[index] > array[index + 1])                // checks to see if the next index is grater than the current
            {
                swap(array[index], array[index + 1]);           // calls the swap function to switch the two values
            }
        }
    }
}

//********************************************************************************
// makeFrequency
//
// task:          In this function the program will compair numbers in the nums[] 
//                array and will add the frequency in the frequency[] array after
//                it will output the frequency in a clean format.
// data in:       Array of number and the size of that array, frequency array and
//                the possible range of the arrays.
// data returned: returns the data in the nums[] array and returns the frequency
//                of the data in the nums[] array.
//
//********************************************************************************

void makeFrequency(int nums [],      int size,          // getting the input of nums and size
                   int frequency [], int range)         // getting the input of frequency and range
{
    std::cout << std::endl << "----------- FINDING THE FREQUENCY OF NUMBERS -----------" << std::endl << std::endl;

    for (int i = 0; i < range; i++)                     // creating a blank array that is in the same range
        frequency [i] = 0;                              // setting the array of frequency to zeros

    for (int i = 0; i < size; i++)                      
        std::cout << nums[i] << ' ';                    // print statement that will print the numbers in the array
    // std::cout << std::endl;                          // neatens up the output if the testing print for frequency is enabled

    for (int i = 0; i < size; i++)                      // scanning numbers and building the frequency array
    { 
        //std::cout << frequency[nums[i]] << " ";       // testing print statement for the frequency of numbers
        frequency [nums [i]]++;
    }
    std::cout << std::endl << std::endl;

    std::cout << "Frequency of ages are:" << std::endl;
    for (int i = 0; i < size; i++)                      // The following loop outputs the frequencys for the ages entered
    {
        for (int x = 1; x < MAX_SIZE; x++)              // gets the integer for the nums array to be checked and adds x   |
        {                                               // and when it breaks thats the amount of that number is how many |
            if (nums[i] != nums[i+x])
                std::cout << std::setw(5) << nums[i] << std::setw(5) << " : " << std::setw(5) << frequency[nums[i]] << std::endl;
                break; // break out of x incrementing i
        } // for x
    } // for i
    std::cout << std::endl;
return;
}
// END OF PROGRAM
