// Name: Eduardo Gaxiola
// This program calculates and displays business expenses.

#include <iostream>
#include <string>
#include <iomanip>
int main()
{
  // Welcome statement.
  std::cout << "Welcome to the Business Trip Tracker!\n";

// variables.
double days, hotel, meal;
std::string location;
// location of the trip.
std::cout << "What is the business trip \"location\"?\n";
std::cin >> location;

// amount of days on the trip.
std::cout << "How many \"days\" will the trip take? \n";
std::cin >> days;

// total hotel expense.
std::cout << "What is the total \"hotel\" expense? \n";
std::cin >> hotel;

// total meal expenses.
std::cout << "What is the total \"meal\" expense? \n";
std::cin >> meal;

// variable for total trip expenses.
double total = hotel + meal;
// display trip overview and total expenses.
std::cout << std::setw(8) << "Location"
          << std::setw(8) << "Days"
          << std::setw(8) << "Hotel"
          << std::setw(8) << "Meal"
          << std::setw(8) << "Total\n";

std::cout << std::setw(8) <<location
          << std::setw(8) <<days
          << std::setw(8) <<hotel
          << std::setw(8) <<meal
          << std::setw(8) <<total << std::endl;
  /* code */
  return 0;
}



// Location
