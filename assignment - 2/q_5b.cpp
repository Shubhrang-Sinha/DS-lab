#include <iostream>
using namespace std;

void display (int arr[], int n){

    for  ( int i = 0; i <= n; i++){

        for (int j = 0; j <= n; j++){

            if (i == j){
                cout << arr[i-1] << " ";
            }
            else if( i == j + 1){
                cout << arr[n + i - 2] << " ";
            }
            else if(i + 1 == j){
                cout << arr[2 * (n - 1) + i] << " ";
            }
            else{
                cout << "0 ";

            }
        
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter size of square matrix : ";
    cin >> n;

    int size = 3 * n - 2; 
    int arr[size];

    cout << "Enter non-zero elements of tridiagonal matrix:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Tridiagonal Matrix: ";
    display(arr, n);
}