#ifndef _OBJECT_H_
#define _OBJECT_H_

class Object{
    private:
        static int m_objectNum;
    public:
        Object(); // コンストラクタ
        ~Object(); // デストラクタ
        static int getObjectNum();
};

#endif // _OBJECT_H_
