// 2.23.) Write a program that reads in five integers and determines and prints the largest and the smallest integers in the group. Use only the programming techniques you learned in this chapter.
// Programmer: Anna Le

#include <iostream>
using namespace std;

int main()
{
    //Declaring variables
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;

    //Assigning values to variables
    cout << "Integer 1: ";
    cin >> num1;
    cout << "Integer 2: ";
    cin >> num2;
    cout << "Integer 3: ";
    cin >> num3;
    cout << "Integer 4: ";
    cin >> num4;
    cout << "Integer 5: ";
    cin >> num5;

    //Declaring comparing variables
    int largestNum = num1;
    int smallestNum = num1;

    //Determining the largest integer
    if (largestNum < num2) 
    {
        largestNum = num2;
    }  if (largestNum < num3 )
    {
        largestNum = num3;
    }  if (largestNum < num4) 
    {
        largestNum = num4;
    }
     if (largestNum < num5){
        largestNum = num5;
    }
    cout << "\nLargest Integer: " << largestNum << endl;

    //Determining the smallest integer
    if (smallestNum > num2)
    {
        smallestNum = num2;
    }
     if (smallestNum > num3)
    {
        smallestNum = num3;
    }
     if (smallestNum > num4)
    {
        smallestNum = num4;
    }
     if (smallestNum > num5) {
        smallestNum = num5;
    }
    cout << "Smallest Integer: " << smallestNum << endl;
}