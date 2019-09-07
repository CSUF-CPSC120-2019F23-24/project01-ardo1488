// Name: Eduardo Gaxiola
// This program calculates and displays business expenses.

#include <iostream>
int main()
{
  // Welcome statement.
  std::cout << "Welcome to the Business Trip Tracker!\n";

// variables.
double location, days, hotel, meal;

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
std::cout << " Location\t Days\t Hotel\t Meal\t Total\t ";

  /* code */
  return 0;
}



// Location
