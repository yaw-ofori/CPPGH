/**
    CPP Community GH
    First group project
    STUDENT RECORD KEEPER

    @file main.cpp
    @author CPP_Comm_GH
    @version 1.0.0 27/08/2020

*/

#include <iostream>
#include <string>

using namespace std;

const int MAX_NUM_OF_COURSES = 10; //Assuming the maximum number of courses will not exceed 10.

struct course {
    /**
     Structure for creating a course

     Contains:
       - Course name
       - Course Id
       - Course Credit Hours
       - Marks Obtained
    */

    string name;           // Course name
    string id;            // Course name
    int crdtHrs;         //Credit hours
    float mksObtained;  //Marks obtained for a course
};

struct student
{
    /**
        Structure for creating Students

        Contains:
          - Student firstname
          - Lastname
          - Age
          - Identification number
          - Current level
          - Current Semester
          - Courses
    */


    string first_name;                                // Student firstname
    string last_name;                                // Student lastname
    int age;                                        // Student Age
    string id;                                     // Student id
    char level[3];                                // Level of the student 100 | 200 etc.
    char semester[1];                            // Current semester
    course crs_undertaken[MAX_NUM_OF_COURSES];  // Number of courses
};


void registerStudent(student& s)
{
    /**
        Function to register new students
        Function with no return type

        @param student The new student to be created
        @return void returns nothing

    */

    cout << "First Name: " << endl;
    cout << ">> ";
    cin >> s.first_name;
    cout << "Surname: " << endl;
    cout << ">> ";
    cin >> s.last_name;
    cout << "Age: " << endl;
    cout << ">> ";
    cin >> s.age;
    cout << "Student ID: " << endl;
    cout << ">> ";
    cin >> s.id;
    cout << "Current Level: " << endl;
    cout << ">> ";
    cin >> s.level;
    cout << "Current Semester: " << endl;
    cout << ">> ";
    cin >> s.semester;


    for (int i = 0; i < MAX_NUM_OF_COURSES; i++)
    {

        cout << "Course id [" << i+1 << "]" << endl;
        cout << ">> ";
        cin >> s.crs_undertaken[i].id;
        cout << "Course Name [" << i+1 << "]" << endl;
        cout << ">> ";
        cin >> s.crs_undertaken[i].name;
        cout << "Course Credit Hours [" << i+1 << "]" << endl;
        cout << ">> ";
        cin >> s.crs_undertaken[i].crdtHrs;
        cout << "Mark obtained [" << i+1 << "]" << endl;
        cout << ">> ";
        cin >> s.crs_undertaken[i].mksObtained;

    }
}

// The main program starts here
int main(int argc, char const *argv[])
{
    cout << "********---STUDENT RECORD KEEPER---********\n"<< endl;

    int option;
    do {

        cout << "Choose an option to continue: \n"<<endl;
        cout << "1. Login\n2. Register\n99. To exit\n"<<endl;
        cout << "SYS>>> ";
        cin >> option;


        switch (option) {
            case 1:
            cout << "Login..."<<endl;
            break;

            case 2:

            break;

            default:
                cout << "Choose from the options 1 or 2 or enter 99 to exit"<<endl;

        }
    }while (option != 99);


    student stud;
    registerStudent(stud);

    return 0;
//
}
