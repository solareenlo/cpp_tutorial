#include "fundcalc.h"

FundCalc::FundCalc() : m_num1(0), m_num2(0) {
}

void FundCalc::setNum1(double num) {
    m_num1 = num;
}

void FundCalc::setNum2(double num) {
    m_num2 = num;
}

double FundCalc::getNum1() {
    return m_num1;
}

double FundCalc::getNum2() {
    return m_num2;
}

double FundCalc::add() {
    return m_num1 + m_num2;
}

double FundCalc::sub() {
    return m_num1 - m_num2;
}
