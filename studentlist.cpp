#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// Jinyao Zhu 10/16/2026
// This program allows the user to input and delete students from a struct. Students will have a name, GPA, and their student ID. 

struct Student {
  char firstname[10];
  char lastname[10];
  int id;
  float gpa;
};

void readIn(vector<Student>& classroom);
void print(vector<Student>& classroom);
void removeStudent(vector<Student>& classroom);

int main() {
  vector<Student> classroom;
  bool running = true;
  char choice[10];
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
  classroom.push_back(student);
}

void print(vector<Student>& classroom) {
  for (vector<Student>:: iterator it = classroom.begin(); it != classroom.end(); ++it) {
    cout << "Name: " << it->firstname << " " << it->lastname << endl;
    cout << "ID: " << it->id << endl;
    cout << "GPA: " << it->gpa << endl;
    cout << endl;
  }
}

void removeStudent(vector<Student>& classroom) {

}
