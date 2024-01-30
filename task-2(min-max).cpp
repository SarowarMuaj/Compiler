#include <iostream>
using namespace std;

int main() {
    int n, Arr[555];

    cout << "Enter number of elements:";
    cin >> n;

    cout << "Enter " << n << " elements:"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> Arr[i];
    }


    for(int i = 0; i < n; i++) {
           if
            (Arr[0] < Arr[i])
             Arr[0] = Arr[i];
    }

     cout << endl << "maximum element = " << Arr[0];

    for(int i = 1; i < n; i++) {
           if
            (Arr[0] > Arr[i])
             Arr[0] = Arr[i];
    }

     cout << endl << "minimum element = " << Arr[0];
    return 0;
}

