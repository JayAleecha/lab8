#include <iostream>
using namespace std;

int main() {
    string name,mov,date,los,id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin, name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    getline(cin, id);
    cout << "Fahsai: I think you may be GEAR " << (((int(id[0]) - 48)*10) + (int(id[1]) - 48)) - 12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin, mov);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline(cin, date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching " << mov << " with you." << endl;
    cout << name << ": ";
    getline(cin, los);
    cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/" << endl;
    return 0;
}