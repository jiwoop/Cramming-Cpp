#pragma once

#include "Person.h"

class Student : public Person
{
private:
    int m_intel;

public:
    Student()
    {}

    Student(const std::string& name_in = "No Name", const int& intel_in = 0)
        : Person(name_in), m_intel(intel_in)
    {}

    friend std::ostream& operator << (std::ostream& out, const Student& student)
    {
        out << student.getName();
        return out;
    }
};