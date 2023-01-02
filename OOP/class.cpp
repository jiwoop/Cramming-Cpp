#include <iostream>
#include <vector>
using namespace std;

/*
    Normally, we say we do class when "ability" is included...
    Like void in-class function.
    Another difference is access specifier in class.
*/
class Friend
{
public:     // access specifier (public private, protected are 3 modes)
    string name;
    string address;
    int age;
    double height;
    double weight;

    void print()
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
    Friend jj;  // instanciation: claiming the memory.
    // jj is an instance of the class Friend.
    // Question of if class exists -- comes from instance because it EXISTS in memory.

    jj.name = "Jack Jack";
    jj.address = "Uptown";
    jj.age = 2;
    jj.height = 170;
    jj.weight = 60;

    // print(jj.name, jj.address, jj.age, jj.height, jj.weight);
    // print(jj);
    jj.print();

    vector<Friend> my_friends;
    my_friends.resize(2);

    for(auto &ele: my_friends)
        ele.print();

    return 0;
}