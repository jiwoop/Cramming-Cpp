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
};

void print(const string &name, const string &address, const int &age,
            const double &height, const double &weight )
{
    // supposedely print everything out
    cout << name << endl;
    cout << address << endl;
    cout << age << endl;
    cout << height << endl;
    cout << weight << endl;
}

int main()
{
    Friend jj;
    jj.name = "Jack Jack";
    jj.address = "Uptown";
    jj.age = 2;
    jj.height = 170;
    jj.weight = 60;

    print(jj.name, jj.address, jj.age, jj.height, jj.weight);

    // vector<string> name_vec;
    // vector<string> addr_vec;
    // vector<int> age_vec;
    // vector<double> height_vec;
    // vector<double> weight_vec;

    // print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

    return 0;
}