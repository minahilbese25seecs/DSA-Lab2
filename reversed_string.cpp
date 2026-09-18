#include <iostream>
#include <string>
using namespace std;

int main() {
    int length;
     cout << "Enter string length: ";
    cin >> length;
    char* arr = new char[length];
    cout << "Enter " << length << " characters: ";
    // Copy string characters into dynamic array
   for (int i = length - 1; i >= 0; i--) {
        cin>>arr[i];
    }
    // Display in reverse order
    cout << "Reversed string: ";

    for (int i = 0; i < length; i++) {
        cout << arr[i];
    }
    delete[] arr;
    return 0;
}