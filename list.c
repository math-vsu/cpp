#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Student
{
  int id;
  int gender;
  char firstName[255];
  char lastName[255];
  struct Student *next;
};

struct Student *head = NULL;
struct Student *prev;

struct Student * buildStudent(int id) {
  struct Student *newStudent;
  newStudent = (struct Student *) malloc(sizeof(struct Student));

  newStudent->id = id;
  newStudent->gender = 1;
  strcpy(newStudent->firstName, "Victor");
  strcpy(newStudent->lastName, "Ivanov");
  newStudent->next = NULL;

  return newStudent;
}

void printList(struct Student *head) {
  struct Student *curr = head;
  while (curr != NULL) {
    printf("%d ", curr->id);
    printf("%d ", curr->gender);
    printf("%s ", curr->firstName);
    printf("%s ", curr->lastName);
    printf("%s ", "\n");
    curr = curr->next;
  }
}

void addStudentToList(struct Student *student) {
  if (head == NULL) {
    head = student;
  } else {
    prev->next = student;
  }
  prev = student;
}

void initializeList() {
  prev = head;
}

void fillListWithSampleData() {
  for (int i = 0; i < 10; i++) {
    addStudentToList(buildStudent(i));
  }
}

int main() {
  initializeList();
  fillListWithSampleData();
  printList(head);
}

