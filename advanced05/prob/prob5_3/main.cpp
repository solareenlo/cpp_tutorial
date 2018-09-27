#include <iostream>
#include <ctime>
#include <cstdlib>
#include <set>

int main(void) {
    std::srand((unsigned char)time(NULL));
    std::set<int> r;
    int i, num;

    std::cout << "乱数：";
    for(i=0; i<10; i++) {
        num = rand() % 10 + 1;
        std::cout << num << " ";
        r.insert(num);
    }
    std::cout << std::endl;

    std::cout << "出現した数：";
    std::set<int>::iterator itr;
    for(itr=r.begin(); itr!=r.end(); itr++)
        std::cout << *itr << " ";
    std::cout << std::endl;

    return 0;
}
