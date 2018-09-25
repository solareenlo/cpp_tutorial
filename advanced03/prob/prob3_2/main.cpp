#include <iostream>
#include "collection.h"

using namespace std;

int main(void) {
    int array[] = {1, 2, 8, 4, 5};
    Collection<int> *c = new Collection<int>(array, 5);
    c->showArray();
    cout << "最大値：" << c->getMax() << endl;
    cout << "最小値：" << c->getMin() << endl;
    delete c;

    double arrayd[] = {2.3, 1.0, 30.3, 1.1};
    Collection<double> *d = new Collection<double>(arrayd, 4);
    d->showArray();
    cout << "最大値：" << d->getMax() << endl;
    cout << "最小値：" << d->getMin() << endl;
    delete d;

    return 0;
}
