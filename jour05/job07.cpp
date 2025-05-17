#include "job07.hpp"
#include <iostream>
#include <string>

int main() {
  Contact contact1("Sergey", "3378932112");
  Contact contact2("Jean", "33655208890"); 

  // Displaying origianl contacts
  std::cout << "Original Contacts:" << std::endl;
  contact1.display();
  contact2.display();
  std::cout << std::endl;

  // Copying contact1 to contact3
  Contact contact3(contact1);
  Contact contact4(contact2);

  // Displaying copied contacts
  std::cout << "Copied Contacts:" << std::endl;
  contact3.display();
  contact4.display();
  std::cout << std::endl;

  // Modifying copied contacts
  contact3.setNom("Alex");
  contact3.setTelephone("1234567890");
  contact4.setNom("Marie");
  contact4.setTelephone("9876543210");

  // Displaying modified copied contacts
  std::cout << "Modified Copied Contacts:" << std::endl;
  contact3.display();
  contact4.display();
  std::cout << std::endl;

  // Displaying original contacts again to show they are unchanged
  std::cout << "Original Contacts After Modification:" << std::endl;
  contact1.display();
  contact2.display();
  std::cout << std::endl;

  return 0; 
}