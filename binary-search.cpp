#include<iostream>

using namespace std;

int main()
{
    int n;

    // Prompt the user to enter the number of elements in the array
    cout << "Enter how many index do you need: " << endl;
    cin >> n;

    // Declare an array to hold 'n' numbers
    int number[n];

    // Input the array elements from the user
    for(int i = 0; i < n; i++)
        cin >> number[i];

    // Bubble Sort: Sort the array in ascending order
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            // Swap the elements if the current element is greater than the next
            if(number[j] > number[j + 1])
            {
                int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }


    // Input the target number to search for in the sorted array
    int target;
    cout << "Enter the target number:" <<endl;
    cin >> target;

    // Initialize variables for binary search
    int low = 0;
    int high = n - 1;
    int result = -1; // To check targeted value is found or not

    // Binary Search: Search for the target number in the sorted array
    while(low <= high)
    {
        // Find the middle index
        int mid = low + ((high - low) / 2);

        // Check if the target is found
        if (number[mid] == target)
        {
            result = mid; // Store the index of the found target
            break;        // Exit the loop once the target is found
        }
        // If the target is smaller than the middle element, search in the left half
        else if(number[mid] > target)
        {
            high = mid - 1;
        }
        // If the target is greater than the middle element, search in the right half
        else
        {
            low = mid + 1;
        }
    }

    // Output the result
    if (result != -1)
    {
        cout << "Target Number Found" <<endl;
    }
    else
    {
        cout << "Target Number not Found"<<endl;
    }
}
