#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    vector<int> v1;
    vector<string> v2;
    v1.push_back(10);
    v1.push_back(21);
    v1.push_back(33);
    v2.push_back("abc");
    v2.push_back("XYZ");
    unsigned int i;

    for(i = 0; i < v1.size(); i++) {
        cout << "v1[" << i << "] = " << v1[i] << endl;
    }

    for(i = 0; i < v2.size(); i++) {
        cout << "v2[" << i << "] = " << v2[i] << endl;
    }

    return 0;
}
