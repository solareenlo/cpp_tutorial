#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int a, b;
    string s;

    s = "つ目の数：";
    cout << "1" << s;
    cin >> a;
    cout << "2" << s;
    cin >> b;
    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << a-b << endl;

    return 0;
}
