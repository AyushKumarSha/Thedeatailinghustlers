#include <iostream>
#include <map>
using namespace std;

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void frequency(int arr[], int n) {
    map<int, int> freqMap; // Use a map to store frequencies

    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++; // Increment the frequency for each element
    }

    cout << "The frequency of each element is: " << endl;

    for (auto it = freqMap.begin(); it != freqMap.end(); it++) {
        cout << it->first << "-->" << it->second << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    inputArray(arr, n);
    cout << "The array is: " << endl;
    displayArray(arr, n);
    cout << "The frequency of each element is: " << endl;
    frequency(arr, n);
    return 0;
}
