#include "baseballplayer.h"
#include "pitcher.h"
#include "catcher.h"
#include "fielder.h"

int main(void) {
    CBaseballPlayer* players[9];
    players[0] = new CFielder("山田", 8);
    players[1] = new CFielder("佐藤", 9);
    players[2] = new CFielder("田中", 10);
    players[3] = new CPitcher("鈴木", 1);
    players[4] = new CFielder("Mike", 7);
    players[5] = new CCatcher("孫六", 23);
    players[6] = new CFielder("浜田", 34);
    players[7] = new CFielder("松本", 5);
    players[8] = new CFielder("齋藤", 11);
    int i;

    for(i=0; i<9; i++) {
        cout << "----------------------" << endl;
        cout << "名前：" << players[i]->getName() << endl;
        cout << "背番号：" << players[i]->getNumber() << endl;
        cout << "種類：" << players[i]->getKind() << endl;
        players[i]->play();
    }
    cout << "----------------------" << endl;

    for(i=0; i<9; i++){
        delete players[i];
    }

    return 0;
}
