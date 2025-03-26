#include <iostream>
using namespace std;

int main() {
    // Predefined array
    int arr[] = {5, 2, 8, 1, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);  // Get the size of the array
    
    // Initialize min_value to the first element of the array
    int min_value = arr[0];
    
    // Loop through the array starting from the second element
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];  // Update min_value if a smaller element is found
        }
    }

    // Output the smallest number
    cout << "The smallest number in the array is: " << min_value << endl;
    
    return 0;
}s