#include <iostream>

using namespace std;

int main()
{
    string firstName = "Simeon";
    string familyName = "Godinyachki";
    string fullName = firstName + " " + familyName;
    int age = 25;
    char gender = 'm';
    long id = 9304287722;
    int uen = 14453100;

    cout << "This is " << fullName << ". He's " << age << " years old." << "\n" << "And his Unique Employee Number is "
    << uen << endl;

    return 0;
}
