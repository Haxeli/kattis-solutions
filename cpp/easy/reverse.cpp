#include <iostream>

using namespace std;

void reverse(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
     for(int i = 0; i < n; i++)
         cout << arr[i] << " ";
     cout << endl;
}

int main() {
    int n;
    cin >> n;

    int m[100000];
    for(int i = 0; i < n; i++) {
        cin >> m[i];
    }

    reverse(m, n);
    printArray(m, n);
    
    return 0;
}