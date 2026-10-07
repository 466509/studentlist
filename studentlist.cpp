#include <iostream>
#include <cstring>
using namespace std;

// Jinyao Zhu 10/16/2026
// This program allows the user to input and delete students from a struct. Students will have a name, GPA, and their student ID. 

void readIn();
void print();
void remove();

struct Student {
  char firstname[10];
  char lastname[10];
  int id;
  float gpa;
};

int main() {
  char play = 'y';
  while (play == 'y') {
    char choice[10];
    cout << "ADD or REMOVE or QUIT? ";
    cin >> choice;
    if (strcmp(choice,"ADD") == 0) {
      readIn();
    }
    else if (strcmp(choice, "REMOVE") == 0) {
      remove();
    }
    else if (strcmp(choice, "QUIT") == 0) {
      play = 'n';
    }
  }
  return 0;
}

// Functions

void readIn() {
  
}

void print() {

}

void remove() {

}
