#include <iostream>
using namespace std;

int main() {
    int n, Arr[555];
    float sum, average;

    cout << "Enter number of elements:";
    cin >> n;

    cout << "Enter " << n << " elements:";
    for(int i = 0; i < n; i++) {
        cin >> Arr[i];
    }

    sum = 0;
    for(int i = 0; i < n; i++) {
        sum += Arr[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}
