#inclde "Calc.h"

Calc(int init_value)
        :m_value(init_value)
    {}

Calc& add(int value) { m_value += value; return *this; }
Calc& sub(int value) { m_value -= value; return *this; }
Calc& mul(int value) { m_value *= value; return *this; }

void print()
    {
        std::cout << m_value << std::endl;
    }