#include <iostream>
#include <set>
#include <string>

int main(void) {
    std::string a, c;
    std::set<std::string> s;

    std::cout << "英単語を入力：";
    std::cin >> c;

    int i;
    for(i=0; i<c.size(); i++) {
        a = c[i];
        s.insert(a);
    }

    std::cout << "使用されているアルファベット：";
    std::set<std::string>::iterator itr;
    for(itr=s.begin(); itr!=s.end(); itr++)
        std::cout << *itr << " ";
    std::cout << std::endl;

    return 0;
}
