#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
    string name;
    int grade;

    bool operator < (const Student& s1) const { //the 2nd const here is important
        return grade < s1.grade;
    }
};

ostream& operator << (ostream& os, const Student& s1) {
    return os << s1.name << ", " << s1.grade;
}

template<typename T>
ostream& operator << (ostream& os, const vector<T> v) {
    os << '[';
    for(T element : v) {
        os << element << ' ';
    }
    os << ']';
    return os;
}

int main()
{
    // Input numStudents
    int numStudents;
    cout << "Enter the number of students" << '\n';
    cin >> numStudents;

    // Input student data
    vector<Student> students(numStudents);
    for(int i = 0; i < numStudents; i++) {
        cout << "Enter name and grade #" << i << '\n';
        cin >> students[i].name;
        cin >> students[i].grade;
    }

    cout << students;

    // Sort students
    sort(students.begin(), students.end());

    // print students
    cout << students;

}