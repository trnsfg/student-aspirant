#include <iostream>

class Student {
protected:
    int id;
    int mark;
    int age;

public:
    Student(int id, int age, int mark) : id(id), age(age), mark(mark) {}

    void showInfo() {
        std::cout << "Student ID: " << id << std::endl;
        std::cout << "Average Mark: " << mark << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

    int getMark() {
        return mark;
    }
};

class Aspirant : public Student {
private:
    bool hasThesis;

public:
    Aspirant(int id, int age, int mark, bool hasThesis) : Student(id, age, mark), hasThesis(hasThesis) {}

    void showInfo() {
        Student::showInfo();
        std::cout << "Preparing for thesis: " << (hasThesis ? "Yes" : "No") << std::endl;
    }
};

int main()
{
    Student student1(12345678, 19, 79);
    student1.showInfo();

    std::cout << std::endl;

    Aspirant aspirant1(12345679, 23, 91, true);
    aspirant1.showInfo();
}
