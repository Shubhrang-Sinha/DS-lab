#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int k){

    int count = 0;

    for (int i = 0; i < n; i++){
        
        for (int j = i+1; j < n; j++){
            if (abs(arr[i] - arr[j]) == k){

                count +=1;
            }

        }
    }
    return count;
}

int main(){
    int n,k;
    
    cout << "Enter no. of elements: ";
    cin >> n;
    int arr[n];
    cout << endl << "Enter elements: ";

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter difference: ";
    cin >> k;

    cout << search(arr,n,k);

    return 0;
}