#include <iostream>
#include <string>

using namespace std;

template <typename T>
T maxx(T a, T b) {
    if(a > b) {
        return a;
    }
    return b;
}

int main(void) {
    cout << maxx<int>(1, 2) << endl;
    cout << maxx<double>(1.23, 4.56) << endl;
    string s1 = "abc", s2 = "xyz";
    cout << max<string>(s1, s2) << endl;
    return 0;
}
