#include <iostream>
using namespace std;

// Function to reverse the elements of an array using pointers
void reverseArray(int* arr, int size) {
   // Complete this function 
    int start = 0;
    int end = size - 1;
    while (start < end) {
        // Swap the elements at start and end
        int temp = *(arr + start);
        *(arr + start) = *(arr + end);
        *(arr + end) = temp;
        // Move the pointers towards the center
        start++;
        end--;
    }
   
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
   
    // Call the function to reverse the array
    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
