#include <iostream>
#include <string>
#include <stack>

int main(void) {
    std::string a, b;
    std::stack<std::string> stk;
    int i;

    std::cout << "文字列を入力してください：";
    std::cin >> a;
    for(i=0; i<a.size(); i++) {
        b = a[i];
        stk.push(b);
    }
    std::cout << std::endl;

    while(!stk.empty()) {
        std::cout << stk.top();
        stk.pop();
    }
    std::cout << std::endl;

    return 0;
}
