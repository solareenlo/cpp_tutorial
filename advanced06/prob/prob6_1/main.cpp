#include <iostream>
#include "fightercraft.h"
#include "passengerplane.h"

using namespace std;

int main(void) {
    CFighterCraft* fighter = new CFighterCraft();
    CPassengerPlane* passenger = new CPassengerPlane();

    cout << fighter->getType() << endl;
    fighter->fly();
    fighter->fight();
    delete fighter;

    cout << passenger->getType() << endl;
    passenger->fly();
    passenger->carry();
    delete passenger;

    return 0;
}
