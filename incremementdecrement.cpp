#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 100, result_a, result_b, result_c, result_d;
    // incrementing a by 1 and storing the result in result_a
    result_a = ++a;
    result_c = a+1;
    cout << "result_a = " << result_a << endl;
    cout << "result_c = " << result_c << endl;

    // decrementing b by 1 and storing the result in result_b
    result_b = --b;
    result_d = b-1;
    cout << "result_b = " << result_b << endl;
    cout << "result_d = " << result_d << endl;
    return 0;
}
