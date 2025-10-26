#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 numbers: " << endl;
for (int i = 0; i < 5; i++) {
    cin >> arr[i];
    }

    // Step: 2 Assume first element is largest
    int maxVal = arr[0];

    //Step 3 Campare each element with maxVal
    for (int i = 1; i < 5; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // Update maxVal if Largest number found
        }
    }
   // Step : 4 Display result
   cout << "The Largest numberis:" << maxVal << endl;

   return 0;
} 