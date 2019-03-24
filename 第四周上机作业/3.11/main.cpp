#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
     explicit GradeBook( string name , string name2 )
        :courseName( name ),teacherName( name2 )
    {

    }

    void setCourseName( string name )
    {
        courseName = name;
    }

    string getCourseName() const
    {
        return courseName;
    }

    void setTeacherName( string name2 )
    {
        teacherName = name2;
    }

    string getTeacherName() const
    {
        return teacherName;
    }

    void displayMessage() const
    {
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
        cout << "This course is presented by\n" << getTeacherName() << "!" << endl;
    }

private:
    string courseName;
    string teacherName;

};

int main()
{
    GradeBook gradeBook1("CS101 introduction to programming in C++","shisanpi");
    GradeBook gradeBook2("CS102 C++ data structrues","shisanpi");

    cout<<"gradeBook1's initial name is:"<<gradeBook1.getCourseName()<<"\ngradeBook2's initial name is:"<<gradeBook2.getCourseName()<<endl;

    gradeBook1.setCourseName("CS101 C++ programming");

    cout<<"gradeBook1's name is:"<<gradeBook1.getCourseName()<<"\ngradeBook2's name is:"<<gradeBook2.getCourseName()<<endl;

    gradeBook1.displayMessage();
    gradeBook2.displayMessage();
    return 0;
}
