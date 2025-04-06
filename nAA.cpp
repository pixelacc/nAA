#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "whats your name" << endl;
    cin >> name;

    if (name == name)
        cout << "hey " << name << " how about your age?" << endl;

    string age;

    cin >> age;

    if (age == age)
        cout << "so your name is " << name << " and your age is " << age << ", got it" << endl;








    return 0;
}
