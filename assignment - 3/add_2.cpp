#include <iostream>
#include <stack>
using namespace std;

void push(stack<int> min, stack<int> stk, int x){
    stk.push(x);

    if (min.empty() || x <= min.top()){

        min.push(x);
    }
    else{

        min.push(min.top());
    }
}

int pop(stack<int> stk, stack <int> min){

    if (stk.empty()){
        return -1;
    }

    int popped = stk.top();
    stk.pop();
    min.pop();
    return popped;
}