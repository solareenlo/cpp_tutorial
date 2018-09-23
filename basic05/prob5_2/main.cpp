#include <iostream>
#include "object.h"

using namespace std;

int main(void) {
    Object *o1, *o2, *o3;
    cout << "オブジェクトの数：" << Object::getObjectNum() << endl;
    o1 = new Object();
    o2 = new Object();
    o3 = new Object();
    cout << "オブジェクトの数：" << Object::getObjectNum() << endl;
    delete o3;
    cout << "オブジェクトの数：" << Object::getObjectNum() << endl;
    delete o1;
    delete o2;
    cout << "オブジェクトの数：" << Object::getObjectNum() << endl;
    return 0;
}
