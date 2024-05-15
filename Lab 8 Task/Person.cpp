#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(const string& firstName, float newWeight);
    ~Person();
    float operator+(const Person& otherPerson);
    operator int();
    operator string();

private:
    float mWeight;
    string mFirstName;
    int mAge;
};

Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

Person::Person(const string& firstName, float newWeight) {
    mWeight = newWeight;
    mFirstName = firstName;
    mAge = 0;
}

Person::~Person() {
}

float Person::operator+(const Person& otherPerson) {
    return mWeight + otherPerson.mWeight;
}

Person::operator int() {
    return mAge;
}

Person::operator string() {
    return mFirstName;
}

int main() {
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);

    float totalWeight = Jane + John;
    cout << "Total weight: " << totalWeight <<endl;

    if (Jane == John) {
        cout << "This is the same person" << endl;
    } else {
        cout << "This is NOT the same person" <<endl;
    }

    if (Jane < John) {
        cout << "Jane is younger than John" <<endl;
    } else {
        cout << "John is older than Jane" <<endl;
    }

    int johnAge = John;
    cout << "John's Age: " << johnAge <<endl;

    string janeFirstName = Jane;
    cout << "Jane's FirstName: " << janeFirstName <<endl;

    float janeWeight = Jane;
    cout << "Jane's weight: " << janeWeight <<endl;

    return 0;
}
