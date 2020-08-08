#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

string Get_User_Name()
{

    string first_name;
    string last_name;
    cout << "Please enter your first name: "
         << "\n";
    cin >> first_name;

    cout << "Please enter your last name: "
         << "\n";
    cin >> last_name;

    string full_name = first_name + " " + last_name;
    return full_name;
}

string Greet_User(string user_name)
{

    return "Hello, " + user_name + "! It's a pleasure to meet you :)\n";
}

int main()
{
    cout << "=======    GOOD DAY!!!    =======!"
         << "\n";
    string user_name = Get_User_Name();
    string greeting = Greet_User(user_name);

    cout << "\n";
    cout << greeting << "\n";

    return 0;
}
