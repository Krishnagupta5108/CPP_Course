#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
/*
== == == == == == == == == == = =  STUDENT MANAGEMENT SYSTEM == == == == == == == == == == == == == == == == =

         1. Add Student 
         2. Display All Students
         3. Search Student
         4. Update Student
         5. Delete Student
         6. Exit
         
         Enter choice :
*/
class student
{   public : 
    int rollNo;
    string name;
    
};

void displayStudents(vector<student> students)
{
    for (int i = 0; i < students.size(); i++)
    {
        student s = students[i];
        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "----------------" << endl;
    }
    
}
/*
2
condition in for loop is used to iterate through each student object in the students vector.

*/



        void saveStudents(  vector<student> students)
        {
            ofstream file("1Proj_studentData.txt ");

            for (int i = 0; i < students.size(); i++)
            {
                student s = students[i];
                file << s.rollNo << " " << s.name << endl;
            }

            file.close();
        }


        void saveStudents_ExcelFormat( vector<student> students)
        {
            ofstream file("students.csv");

            file << "Roll No,Name\n";

            for (int i = 0; i < students.size(); i++)
            {
                student s = students[i];
                file << s.rollNo << "," << s.name << "\n";
            }

            file.close();
        }

        void saveStudents_Excel( vector<student> students)
        {
            ofstream file("studenst.xlsx");

            file << "Roll No ";
            file << "Name\n"; 

            for (int i = 0; i < students.size(); i++)
            {
                student s = students[i];
                file << s.rollNo  << s.name << "\n";
            }

            file.close();
        }


    int main()
{
    int size ; 
    cout << "Enter the size of the class :-";
    cin >> size;

    student a ; 
    vector<student> students ; 

    
    for (int i = 0; i < size; i++)
    {
        
    cout<<"Enter the Roll NO :";
    cin>>a.rollNo;
    
    cout<<"Enter the Name :";
    cin>>a.name; 
    
    students.push_back(a) ;
        }

        displayStudents(students);

        // Accessing the each student object in the vector using index

        // cout<<"students[0].rollNo : "<<students[0].rollNo<<endl;
        // cout<<"students[0].name : "<<students[0].name<<endl;
        
        // cout<<"students[1].rollNo : "<<students[1].rollNo<<endl;
        // cout<<"students[1].name : "<<students[1].name<<endl<<endl<<endl;
        
        
        // searching for a student by roll number
        
        // int searchRollNo;
        // cout<<"Enter the Roll No to search :";
        // cin >> searchRollNo;
        
        // cout<<"Student found: "<<students[( searchRollNo - 1  )].name
        // <<"\twith Roll No: "<<students[( searchRollNo - 1  )].rollNo<<endl;
        
        // updating a student by roll number
        
        // int updateRollNo;
        // cout<<"Enter the Roll No to update :";
        // cin >> updateRollNo;
        
        
        
        // string oldname = students[( updateRollNo - 1  )].name;
        // cout<<"Enter the new Name :";
        // cin>>students[( updateRollNo - 1  )].name;
        // cout<<"Student updated at  "<<updateRollNo<<" from "<<oldname<<" to "<<students[( updateRollNo - 1  )].name<<endl;
        
        // displayStudents(students);
        
        
        
        
        // deleting a student by roll number
        
        // int deleteRollNo;
        // cout<<"Enter the Roll No to delete :";
        // cin >> deleteRollNo;
         
        // students.erase(students.begin() + (deleteRollNo - 1));
        // cout<<"Student deleted at  "<<deleteRollNo<<endl;

        displayStudents(students);

        // ofstream outFile("1Proj_studentData.txt");                      
        // outFile << "Student Management System\n";

        // saveStudents(students); // Save the updated student data


        // saveStudents_ExcelFormat(students); // Save the updated student data in Excel format

        saveStudents_Excel(students); // Save the updated student data in Excel format

        system("pause");    
        // return 0;
}