#include <iostream>
#include <string>

using namespace std;

const int MAX_NUM_OF_COURSES = 10; //Assuming the maximum number of courses will not exceed 10.

struct course {
    string id;
    string name;
    int crdtHrs; //credit hours
    float mksObtained; //marks obtained for a course
};

struct student
{
    string first_name;
    string last_name;
    int age;
    string id; //student id 
    char level; //Level of the student 100 | 200 etc.
    char semeseter; //Current semester
    course crs_undertaken[MAX_NUM_OF_COURSES]; //courses 
};

void registerStudent(student& s)
{
    

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
    cin >> s.semeseter;
    
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

int main(int argc, char const *argv[])
{
    cout << "Hello world" << endl;
    //Test 
    student s1;
    s1.first_name = "Awesome";
    s1.last_name = "Ken";
    s1.age = 3;
    s1.id = "STD00001";

    cout << s1.first_name << endl;
    cout << s1.last_name << endl;
    cout << s1.age << endl;
    cout << s1.id << endl;

//Add course
s1.crs_undertaken[0].id = "C001";
s1.crs_undertaken[0].crdtHrs = 3;
s1.crs_undertaken[0].name = "Computer Programming";
s1.crs_undertaken[0].mksObtained = 88.6;

registerStudent(s1);
    return 0;
}
