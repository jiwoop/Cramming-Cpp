#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
    Encapsulation
    Access Specifiers
        private is default.
    Access Functions
        Using this, encapsulation is possible.
        When wanted to fix the name, just need to fix within the class
*/

class Date
{
private:
    int m_month;
    int m_day;
    int m_year;

public:     // Access function
    void setDate(const int& month_in, const int& day_in, const int& year_in)
    {
        // setter
        m_month = month_in;
        m_day = day_in;
        m_year = year_in;
        // if in same class, can access private members
    }

    int getDay()
    {
        // getter
        return m_day;
    }

    void copyFrom(const Date& date_in)
    {
        m_month = date_in.m_month;
        m_day = date_in.m_day;
        m_year = date_in.m_year;
    }
};

int main()
{
    Date today;
    today.setDate(8, 4, 2022);
    // today.m_month = 8;
    // today.m_day = 4;
    // today.m_year = 2022;

    cout << today.getDay();

    Date copy;
    copy.copyFrom(today);
    // Can access elements of instances from same class.
}