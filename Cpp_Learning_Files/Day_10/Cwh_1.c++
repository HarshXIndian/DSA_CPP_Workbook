// cwh : C++ Objects Memory Allocation & using Arrays in classes
// Date : 9/2/24
// Tutorial #23

#include <iostream>
using namespace std;

// memory allocation :
// common things in many objects are stored only once in memory and that memory is common for many objects which help us to save memory !
// diffrent things in each object like students marks will c++ store in diffrent diffrent locations in memory not common !
// mean objects use memory in two ways an common memory for common functions and data , and diffrent memory for particular data items !

class Students
{
    int Student_Id[10];
    int Student_Marks[10];
    int count = 0;
    void result(int marks)
    {
        cout << "Result : ";
        if (marks < 27)
        {
            cout << "Fail :(" << endl;
        }
        else if (marks > 80)
        {
            cout << "Excellent Marks :)" << endl;
        }
        else
        {
            cout << "Pass :]" << endl;
        }
    }

public:
    void counter() { count++; };
    void getData();
    void putData();
};

void Students ::getData()
{
    cout << "Enter the Student " << count + 1 << " Data :" << endl;
    cout << "Student Id : ";
    cin >> Student_Id[count];
    cout << "Student Marks is : ";
    cin >> Student_Marks[count];
    counter();
}

void Students ::putData()
{
    cout << "STUDENTS DATA ARE =>" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ".Student Id is : " << Student_Id[i] << " And Marks : " << Student_Marks[i] << endl;
        result(Student_Marks[i]);
    }
};

int main()
{
    Students data;
    int n_times;
    cout << "How many students data you have to enter : ";
    cin >> n_times;
    for (int i = 1; i <= n_times; i++)
    {
        data.getData();
    };
    data.putData();
    return 0;
}