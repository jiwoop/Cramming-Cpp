#include <iostream>
#include <vector>
using namespace std;


struct Friend
{
    string name;
    string address;
    int age;
    double height;
    double weight;

    void print(const string &name, const string &address, const int &age,
            const double &height, const double &weight)
    {
        cout << name << endl;
        cout << address << endl;
        cout << age << endl;
        cout << height << endl;
        cout << weight << endl;
    }
};

void print(const Friend &fr)
{
    cout << fr.name << endl;
    cout << fr.address << endl;
    cout << fr.age << endl;
    cout << fr.height << endl;
    cout << fr.weight << endl;
}


int main()
{
    Friend jj;
    jj.name = "Jack Jack";
    jj.address = "Uptown";
    jj.age = 2;
    jj.height = 170;
    jj.weight = 60;

    // print(jj.name, jj.address, jj.age, jj.height, jj.weight);
    print(jj);
    // or, jj.print;

    return 0;
}