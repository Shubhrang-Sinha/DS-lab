#include <iostream>
#include <stack>
using namespace std;

void Smaller(int arr[], int n) {
    stack<int> st;

    for (int i = 0; i < n; i++) {

        while (!st.empty() && st.top() >= arr[i]) {

            st.pop();
        }

        if (st.empty()) {
            
            cout << -1 << " ";
        }
        else {

            cout << st.top() << " ";
        }

        st.push(arr[i]);
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        
        cin >> arr[i];
    }

    cout << "Nearest smaller elements: ";
    Smaller(arr, n);

    return 0;
}
