#include <bits/stdc++.h>
using namespace std;

void duplicate(int arr[], int n){

    for (int i = 0, j = n - 1 ; i < j; i++, j--){

        if (arr[i] == 2){
            arr[j] = 2;
        }
    }
}