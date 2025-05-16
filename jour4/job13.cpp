#include <iostream>
#include <string> 
#include <vector>

struct Flight {
  std::string destination;
  double flightTime;

  Flight(const std::string dest, double time): destination(dest), flightTime(time) {}
};

int main() {
  std::vector<Flight> flights;
  int numberofFlights;

  std::cout << "How many flights do you want to enter? ";
  std::cin >> numberofFlights;
  std::cin.ignore();

  for (int i = 0; i < numberofFlights; i++) {
    std::string destination;
    double flightTime;

    std::cout << "Enter destination for flight " << i + 1 << ": ";
    std::cin >> destination;
    std::cout << "Enter flight time for flight " << i + 1 << ": ";
    std::cin >> flightTime;

    flights.push_back(Flight(destination, flightTime)); 
  }
  std::cout << "\nList of flights:\n";
  for (size_t i = 0; i < flights.size(); i++) {
    std::cout << "Flight " << i+1 << ": " 
              << flights[i].destination << ", "
              << flights[i].flightTime << " hours\n";
            }

  int flightToModify;
  std::cout << "Enter the flight number to modify :";
  std::cin >> flightToModify;

    if (flightToModify > 1 && flightToModify <= flights.size()) {
      std::string newDestinations;
      double newFlightTime;
      std::cout << "Enter new destination for flight " << flightToModify << ": ";
      std::cin >> newDestinations;
      std::cout << "Enter new flight time for flight " << flightToModify << ": ";
      std::cin >> newFlightTime;
      flights[flightToModify - 1].destination = newDestinations;
      flights[flightToModify - 1].flightTime = newFlightTime;
      std::cout << "Flight " << flightToModify << " updated to: "
                << flights[flightToModify - 1].destination << ", "
                << flights[flightToModify - 1].flightTime << " hours\n";
    } else {
      std::cout << "Invalid flight number. Please try again.\n";
    }
    std::cout << "Updated list of flights:\n";
    for (size_t j = 0; j < flights.size(); j++) {
      std::cout << "Flight " << j+1 << ": " 
                << flights[j].destination << ", "
                << flights[j].flightTime << " hours\n";
    }
    return 0;
}

