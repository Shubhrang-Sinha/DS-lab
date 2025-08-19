#include <iostream>
using namespace std;

void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                cout << arr[i] << " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int n;

    cout << "Enter no. of non-zero elements: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        cout << " ";

    }

    display(arr,n);
}