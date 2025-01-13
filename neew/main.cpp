#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    Person(const string& name) : name(name) {}
    virtual void action() = 0;
    virtual ~Person() = default;
};

class Teacher : public Person {
public:
    Teacher(const string& name) : Person(name) {}
    void action() override {
        cout << name << " is teaching a class." << endl;
    }
};

class Student : public Person {
public:
    Student(const string& name) : Person(name) {}
    void action() override {
        cout << name << " is attending a class." << endl;
    }
};

int main() {
    Teacher teacher("Mr. Smith");
    Student student("Alice");

    Person* people[] = { &teacher, &student };
    for (Person* person : people) {
        person->action();
    }

    return 0;
}// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.