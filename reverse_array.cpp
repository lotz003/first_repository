/***********************************************************************************************
 *
 * AUTHOR: Natalie Lotz
 * DATE: 4/19/15
 * PURPOSE: Write a program to reverse an array
 *
 ***********************************************************************************************/
#include <iostream>
using namespace std;
void printArray(int [], int);
void reverseArray(int [], int);
int main()
{
  int arr[] = {1, 2, 3, 4, 5};                          // Initialize array called arr
  int arrSize = sizeof(arr)/sizeof(int);                // Get the size of arr and store it in arrSize
  cout << "We have the following array: \n[ ";          // Print message to user
  printArray(arr, arrSize);                             // Call function to print original array
  reverseArray(arr, arrSize);                           // Call function to reverse array
  cout << "Here is the array in reverse order: \n[ ";   // Print message to user
  printArray(arr, arrSize);                             // Call function to print the reversed array
  return 0;
};
void printArray(int arr[], int count)
{
  for(int i = 0; i < count; i++)    // Loop through array until the end is reached
    {
      cout << arr[i] << " ";        // Print out each element in arr
    }
  cout << "]" << endl;
};
void reverseArray(int arr[], int count)
{
  int temp;                            // Initialize integer variable temp to store the reversed array value
  for(int i = 0; i < count/2; i ++)    // Count takes the value of arrSize which is 5
    {
      temp = arr[i];                   // Copy the current array index to temp
      arr[i] = arr[count - i - 1];     // The frist array index of 0 become 5 - 0 - 1 = 4 which is the last index
      arr[count - i - 1] = temp;       // Copy the array index to temp
    }
};
