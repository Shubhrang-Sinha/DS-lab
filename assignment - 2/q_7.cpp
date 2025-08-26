#include <iostream>
using namespace std;

int inversion(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n;i++){

        for (int j = i + 1; j < n; j++){

            if (i < j && arr[i] > arr[j]){
                count += 1;

            }
        }
    }
    return count;
}

int main(){
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;

    int arr[n];

    for (int i = 0;i < n; i++){
        cin >> arr[i];
    }

    cout << "no. of inversions: " << inversion(arr,n);

}