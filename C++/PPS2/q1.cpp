#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


struct Student {
  int Roll_no;
  string Name;
  double GPA;
};


bool compareGPA(const Student& student1, const Student& student2) {
  return student1.GPA > student2.GPA;
}
void sort_Student(Student students[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    int min_index = i;
    for (int j = i + 1; j < n; ++j) {
      if (compareGPA(students[j], students[min_index])) {
        min_index = j;
      }
    }
    swap(students[i], students[min_index]);
  }
}

int main() {
  int n;

  
  cout << "Enter n value: ";
  cin >> n;

  
  Student students[n];
for (int i = 0; i < n; ++i) {
    cout << "\nEnter student " << i + 1 << " details:\n";
    cout << "Rollno: ";
    cin >> students[i].Roll_no;
    cout << "Name: ";
    cin.ignore(); 
    getline(cin, students[i].Name);
    cout << "GPA: ";
    cin >> students[i].GPA;
  }

 
  sort_Student(students, n);

  
  cout << "\nSorted Students:\n";
  for (int i = 0; i < n; ++i) {
    cout << students[i].Roll_no << " " << students[i].Name << " " << students[i].GPA << endl;
  }
return 0;
}