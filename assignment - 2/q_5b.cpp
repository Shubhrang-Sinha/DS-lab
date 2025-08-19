#include <iostream>
#include <cmath>
using namespace std;

void display( int arr[], int n){
    for (int i = 0;i < n; i++){
        for (int j= 0; j < n; j++ ){

            if (i == j || (i-j >1) || (j-i > 1) ){
                cout << arr[i];
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
    
    cout << "Enter size of matrix:  ";
    cin >> n;
    
    int arr[n];

    for (int i = 0; i < ((3*n)-2); i++){
        cin >> arr[i];
        cout << " ";
    }
    display(arr,n);

}