#ifndef _FOO_H_
#define _FOO_H_

class Bar;

class Foo {
    private:
        Bar *pBar;
    public:
        Foo(Bar *pBar);
        void hoge();
        void fuga(Bar *pBar);
};

#endif
