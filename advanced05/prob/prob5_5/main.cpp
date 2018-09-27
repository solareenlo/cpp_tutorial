// キーボードから入力した文字列を、queueを用いて、
// 入力した順番で出力されるプログラム
#include <iostream>
#include <queue>
#include <string>

int main(void) {
    std::string a;
    std::queue<std::string> que;

    while(1) {
        std::cout << "文字列を入力してください：";
        getline(std::cin, a);
        if(a == "") break;
        que.push(a);
    }
    std::cout << std::endl;

    while(!que.empty()) {
        std::cout << que.front() << std::endl;
        que.pop();
    }

    return 0;
}
