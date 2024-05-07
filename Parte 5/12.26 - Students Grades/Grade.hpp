#pragma once

class Grade {
protected:
    int grade;
    char* date;
public:
    static int numberOfGrades;

    Grade();
    void setGrade(int grade);
    void setDate(char date[9]);
    int getGrade();
    char* getDate();
};