#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string surname;
    int numberofbooklet;
    double value;

public:
    void setName(const string& n) { name = n; }
    void setSurname(const string& s) { surname = s; }
    void setNumberofbooklet(int b) { numberofbooklet = b; }
    void setValue(double v) { value = v; }

    string getName() const { return name; }
    string getSurname() const { return surname; }
    int getNumberofbooklet() const { return numberofbooklet; }
    double getValue() const { return value; }


    void info() const {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Number of booklet: " << numberofbooklet << endl;
        cout << "Value: " << value << endl;
        cout << endl;
    }

    void setNewValue(double newvalue) {
        value = newvalue;
    }
};

int main() {
    Student st1;
    st1.setName("Kevin");
    st1.setSurname("Klinton");
    st1.setNumberofbooklet(379205);
    st1.setValue(3.9);

    st1.info();

    Student st2;
    st2.setName("Max");
    st2.setSurname("Oushin");
    st2.setNumberofbooklet(721879);
    st2.setValue(4.1);

    st2.info();
    st2.setNewValue(4.8);
    st2.info();

    return 0;
}
