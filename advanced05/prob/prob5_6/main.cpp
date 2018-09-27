// キーボードから入力した文字列を、stackを用いて、
// 入力した順序とは逆順に表示するプログラム
#include <iostream>
#include <string>
#include <stack>

int main(void) {
    std::string a;
    std::stack<std::string> stk;

    while(1) {
        std::cout << "文字列を入力してください：";
        getline(std::cin, a);
        if(a == "") break;
        stk.push(a);
    }
    std::cout << std::endl;

    while(!stk.empty()) {
        std::cout << stk.top() << std::endl;
        stk.pop();
    }

    return 0;
}
