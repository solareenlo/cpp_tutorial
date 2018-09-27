#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void) {
    set<string> names;
    names.insert("Taro");
    names.insert("Hanako");
    names.insert("Taro");
    names.insert("Roman");

    set<string>::iterator ite;
    for(ite=names.begin(); ite!=names.end(); ite++)
        cout << *ite << " ";
    cout << endl << endl;

    string s[] = {"Taro", "Tako"};
    int i;
    for(i=0; i<2; i++) {
        ite = names.find(s[i]);
        if(ite == names.end()) {
            cout << s[i] << " is not in a set." << endl;
        } else {
            cout << s[i] << " is in a set." << endl;
        }
    }

    return 0;
}
