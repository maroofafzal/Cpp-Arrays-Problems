#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter how many numbers you want to generate multiplication tables for: ";
    cin >> n;

    int num[n];

    cout << "\nEnter the numbers: " << endl;
    for (int k = 1; k <= n; k++){
		cin >> num[k];
    }

    cout << "Multiplication Tables:" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " * " << i << " = " << j * i << "\t";
        }
        cout << endl;
    }

    return 0;
}

