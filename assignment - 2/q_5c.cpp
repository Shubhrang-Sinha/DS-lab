#include <iostream>
using namespace std;



     


void display(int arr[], int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            if(i >= j) {

                cout << arr[i*(i+1)/2 + j] << " ";
            } 
            
            else {

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

    int size = n*(n+1)/2;  
    int arr[size];

    cout << "Enter non-zero elements of lower triangular matrix row-wise:\n";

    for(int i = 0; i < size; i++) {

        cin >> arr[i];
    }

    cout << "Lower Triangular Matrix:\n";
    
    display(arr, n);

    return 0;
}
