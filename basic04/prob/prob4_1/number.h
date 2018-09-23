#ifndef _NUMBER_H_
#define _NUMBER_H_

class Number{
    private:
        int a;
        int b;
    public:
        Number(); // コンストラクタ
        ~Number(); // デストラクタ
        void setNumbers(int n1, int n2);
        int getNum1();
        int getNum2();
        int getAdd();
};

#endif // _NUMBER_H_
