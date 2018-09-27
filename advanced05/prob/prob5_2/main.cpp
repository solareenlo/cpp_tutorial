// キーボードからアラビア数字で正の整数を入力すると、
// 3桁ごとにコンマで区切って、漢数字にして出力する
#include <iostream>
#include <string>
#include <map>

bool check_int(std::string str);

int main(void) {
    int i;
    std::string a, b;
    std::map<char, std::string> kansuji;
    char num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    std::string kanji[] = {"〇", "一", "二", "三", "四", "五", "六", "七", "八", "九"};
    for(i=0; i<10; i++)
        kansuji[num[i]] = kanji[i];

    std::cout << "正の整数値を入力してください" << std::endl;
    while(1) {
        std::cout << "：" ;
        std::cin >> a;
        if(check_int(a) == 1) {
            for(i=0; i<a.size(); i++) {
                std::cout <<  kansuji[a[i]];
                if((a.size()+2-i)%3 == 0 && i != a.size()-1)
                    std::cout << ",";
            }
            break;
        } else {
            std::cout << "正の整数値を入力してください" << std::endl;
        }
    }
    std::cout << std::endl;


    return 0;
}

bool check_int(std::string str) {
    if(std::all_of(str.cbegin(), str.cend(), isdigit)) {
        return true;
    } else {
        return false;
    }
}
