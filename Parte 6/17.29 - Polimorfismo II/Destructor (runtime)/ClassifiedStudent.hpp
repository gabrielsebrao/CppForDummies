#include "Student.hpp"
#include "Test.hpp"

class ClassifiedStudent : public Student
{ 
protected: 
    Test* testes = new Test[4];
public:
    bool isClassified() override;

    ClassifiedStudent();
    ~ClassifiedStudent() override;
};