#include <iostream>
#include <string> 
#include <vector> 

struct Note {
  std::string firstName;
  std::string lastName;
  double grade;
};

void addNote(std::vector<Note>& notes) {
  Note newNote;
  std::cout << "Enter first name: ";
  std::cin >> newNote.firstName;
  std::cout << "Enter last name: ";
  std::cin >> newNote.lastName;
  std::cout << "Enter grade: ";
  std::cin >> newNote.grade;
  notes.push_back(newNote);
  std::cout << "Note added successfully!" << std::endl;
};

void displayNotes(const std::vector<Note>& notes) {
  if (notes.empty()) {
    std::cout << "No notes available." << std::endl;
    return;
  }
  std::cout << "Notes:" << std::endl;
  for (size_t i = 0; i < notes.size(); i++) {
    std::cout << i + 1 << ". " << notes[i].firstName << " " << notes[i].lastName << " : Note : " << notes[i].grade << std::endl;
  }
};

void deleteNote(std::vector<Note>& notes) {
  if (notes.empty()) {
    std::cout << "No notes available to delete." << std::endl; 
  }
  displayNotes(notes);
  int index; 
  std::cout << "Enter the index of the note to delete: ";
  std::cin >> index;
  if (index < 1 || index > notes.size()) {
    std::cout << "Invalid index. Note with this index does not exist" << std::endl;
  } else {
    notes.erase(notes.begin() + index - 1);
    std::cout << "Note deleted successfully!" << std::endl;
  }
};

void displayAverage(std::vector<Note>& notes) {
  if (notes.empty()) {
    std::cout << "No notes available to calculate average." << std::endl;
    return;
  }
  double sum = 0; 
  for (const auto& note : notes) {
    sum += note.grade;
  }
  double average = sum / notes.size(); 
  std::cout << "Average grade is : " << average << std::endl;
};

int main() {
  std::vector<Note> notes;
  int choice; 
  
  do {
    std::cout << "Menu:" << std::endl;
    std::cout << "1. Add note" << std::endl;
    std::cout << "2. Display notes" << std::endl;
    std::cout << "3. Delete note" << std::endl;
    std::cout << "4. Display average grade" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
      case 1:
        addNote(notes);
        break;
      case 2:
        displayNotes(notes);
        break;
      case 3:
        deleteNote(notes);
        break;
      case 4:
        displayAverage(notes);
        break;
      case 5:
        std::cout << "Exiting..." << std::endl;
        break;
      default:
        std::cout << "Invalid choice. Please try again." << std::endl;
    }
  } while (choice != 5); 

  return 0;
}