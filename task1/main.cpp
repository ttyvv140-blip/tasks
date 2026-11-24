#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream task1("student.txt");

    string name;
    int id, grade;

    getline(cin, name);
    cin >> id >> grade;

    task1 << name << "\n";
    task1 << id << "\n";
    task1 << grade;

    task1.close();

    return 0;
}
