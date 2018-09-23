#include "car.h"
#include "ambulance.h"

int main() {
    CCar c;
    c.supply(100);
    c.move();
    c.move();
    CAmbulance a;
    a.supply(50);
    a.move();
    a.savePeople();
    return 0;
}
