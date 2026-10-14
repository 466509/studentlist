#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>
using namespace std;

// Jinyao Zhu 10/16/2026
// This program allows the user to input and delete students from a struct. Students will have a name, GPA, and their student ID. 

// Create a struct for a student
struct Student {
  char firstname[10];
  char lastname[10];
  int id;
  float gpa;
};

// Function prototypes
void readIn(vector<Student>& classroom);
void print(vector<Student>& classroom);
void removeStudent(vector<Student>& classroom);

int main() {
  // Create a vector named classroom
  vector<Student> classroom;
  bool running = true;
  char choice[10];
  // While running, allow user to add, print, or delete a student, or quit
  while (running) {
    cout << endl;
    cout << "ADD or PRINT or DELETE or QUIT? ";
    cin >> choice;
    if (strcmp(choice, "ADD") == 0) {
      readIn(classroom);
    }
    else if (strcmp(choice, "PRINT") ==0) {
      print(classroom);
    }
    else if (strcmp(choice, "DELETE") == 0) {
      cout << "removing";
      removeStudent(classroom);
    }
    else if (strcmp(choice, "QUIT") == 0) {
      running = false;
    }
  }
  return 0;
}

// Functions

// Take in user input for student name, id, and gpa
void readIn(vector<Student>& classroom) {
  Student student;
  Student* ptr = &student;
  cout << "Enter student first name: ";
  cin >> student.firstname;
  cout << "Enter student last name: ";
  cin >> student.lastname;
  cout << "Enter student ID: ";
  cin >> student.id;
  cout << "Enter student GPA: ";
  cin >> student.gpa;
  classroom.push_back(student); // Add the student to vector classroom
}

// Print all students in vector
void print(vector<Student>& classroom) {
  // Iterate through all students
  for (vector<Student>:: iterator it = classroom.begin(); it != classroom.end(); ++it) {
    cout << "Name: " << it->firstname << " " << it->lastname << endl;
    cout << "ID: " << it->id << endl;
    cout << "GPA: " << fixed << setprecision(2) << it->gpa << endl; // Round GPA to 2 decimal places
  }
}

// Removes student based on user input of ID
void removeStudent(vector<Student>& classroom) {
  Student student;
  cout << "Enter the ID of the student you want to remove: ";
  cin >> student.id;
  for (vector<Student>:: iterator it = classroom.begin(); it != classroom.end(); ++it) { // Iterate through all students
    if (it->id == student.id) { // If the ID is chosen, erase the student
      it = classroom.erase(it);
    }
  }
}
