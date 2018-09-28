// キーボードからアラビア数字で正の整数を入力すると、
// 3桁ごとにコンマで区切って、漢数字にして出力する
#include <iostream>
#include <string>
#include <map>
#include <queue>

bool check_int(std::string str);

int main(void) {
    int i;
    std::string a, b;
    std::map<char, std::string> kansuji;
    std::queue<char> que;
    char num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    std::string kanji[] = {"〇", "一", "二", "三", "四", "五", "六", "七", "八", "九"};
    for(i=0; i<10; i++)
        kansuji[num[i]] = kanji[i]; // アラビア数字と漢数字を１対1の対応にする

    std::cout << "正の整数値を入力してください" << std::endl;
    while(1) {
        std::cout << "：" ;
        std::cin >> a; // キーボードで入力した文字列をaに代入
        if(check_int(a) == 1) { // 入力した文字列がアラビア数字だけかを判断している
            for(i=0; i<a.size(); i++) // 入力したアラビア数字をqueに1文字ずつ代入
                que.push(a[i]);
            i=0;
            while(!que.empty()) {
                std::cout <<  kansuji[que.front()]; // mapクラスのkansujiでアラビア数字を漢数字に変換
                que.pop(); // queの要素を1つ減らす
                if((a.size()+2-i)%3 == 0 && i != a.size()-1) // コンマを3桁ごとに挿入
                    std::cout << ",";
                i++;
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
