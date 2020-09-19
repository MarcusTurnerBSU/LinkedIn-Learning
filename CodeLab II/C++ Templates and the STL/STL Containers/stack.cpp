#include <iostream>
#include <vector>
#include <deque>
//includes the stack type
#include <stack>
#include <string>
using namespace std;

//The STL stack container adapter which is like a wrapper uses underlying container to hold its contents.
//The stack implements a last in first out stack elements are pushed and popped from the top of the stack.
template <typename T>
void report_stack(T& stk) {
    cout << "size: " << stk.size() << " top: " << stk.top() << endl;
}

// print a simple message
void message(const char* s) { cout << s << endl; }

int main()
{
    // vector
    message("stk1");
    vector<int> v1 = { 1, 2, 3, 4, 5 };
    stack<int, vector<int>> stk1(v1);
    report_stack(stk1);
    message("stk1 push 42");
    stk1.push(42);
    report_stack(stk1);
    message("stk1 pop");
    stk1.pop();
    report_stack(stk1);

    message("stk2 default stack (deque)");
    stack<string> stk2;
    for (string s : {"one", "two", "three", "four", "five"}) {
        stk2.push(s);
    }
    report_stack(stk2);
    message("stk2 push forty-two");
    stk2.push("forty-two");
    report_stack(stk2);
    message("stk2 pop");
    stk2.pop();
    report_stack(stk2);

    return 0;
}