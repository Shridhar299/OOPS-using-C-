#include <iostream>
#include <string>
#include <cstdlib>				// For random number generation
#include <ctime>				// For seeding random number generator
#include <iomanip>				// For formatting output
#include <stdexcept>			// For exception handling
using namespace std;

// Class definitions

class Flight
{
protected:
  string origin;
  string destination;
  double fare;
  bool foodDrinks;

public:
    Flight (string origin, string destination,
			bool foodDrinks):origin (origin), destination (destination),
	foodDrinks (foodDrinks)
  {
  }

  virtual double calculateFare () = 0;
};

class Business:public Flight
{
public:
  Business (string origin, string destination,
			bool foodDrinks):Flight (origin, destination, foodDrinks)
  {
  }

  double calculateFare () override
  {

	if ((origin == "India" && destination == "USA")
		|| (origin == "USA" && destination == "India"))
	  fare = 2000.0;
	else if ((origin == "India" && destination == "Australia")
			 || (origin == "Australia" && destination == "India"))
	  fare = 1500.0;
	else if ((origin == "India" && destination == "UAE")
			 || (origin == "UAE" && destination == "India"))
	  fare = 1000.0;
	else if ((origin == "India" && destination == "Singapore")
			 || (origin == "Singapore" && destination == "India"))
	  fare = 900.0;
	else if ((origin == "USA" && destination == "Australia")
			 || (origin == "Australia" && destination == "USA"))
	  fare = 3000.0;
	else if ((origin == "USA" && destination == "UAE")
			 || (origin == "UAE" && destination == "USA"))
	  fare = 1100.0;
	else if ((origin == "USA" and destination == "Singapore")
			 || (origin == "Singapore" && destination == "USA"))
	  fare = 1300.0;
	else if ((origin == "Australia" && destination == "UAE")
			 || (origin == "UAE" && destination == "Australia"))
	  fare = 1800.0;
	else if ((origin == "Australia" && destination == "Singapore")
			 || (origin == "Singapore" && destination == "Australia"))
	  fare = 1400.0;
	else if ((origin == "UAE" && destination == "Singapore")
			 || (origin == "Singapore" && destination == "UAE"))
	  fare = 1200.0;
	else
	  fare = 0.0;				// Invalid route

	double totalFare = fare + 500.0;
	if (foodDrinks)
	  {
		totalFare += 50.0;
	  }
	totalFare += totalFare * 0.19;
	return totalFare;
  }
};

class Economy:public Flight
{
public:
  Economy (string origin, string destination, bool foodDrinks):Flight (origin,
																	   destination,
																	   foodDrinks)
  {
  }

  double calculateFare () override
  {
	if ((origin == "India" && destination == "USA")
		|| (origin == "USA" && destination == "India"))
	  fare = 1600.0;
	else if ((origin == "India" && destination == "Australia")
			 || (origin == "Australia" && destination == "India"))
	  fare = 1100.0;
	else if ((origin == "India" && destination == "UAE")
			 || (origin == "UAE" && destination == "India"))
	  fare = 600.0;
	else if ((origin == "India" && destination == "Singapore")
			 || (origin == "Singapore" && destination == "India"))
	  fare = 500.0;
	else if ((origin == "USA" && destination == "Australia")
			 || (origin == "Australia" && destination == "USA"))
	  fare = 2600.0;
	else if ((origin == "USA" && destination == "UAE")
			 || (origin == "UAE" && destination == "USA"))
	  fare = 700.0;
	else if ((origin == "USA" and destination == "Singapore")
			 || (origin == "Singapore" && destination == "USA"))
	  fare = 900.0;
	else if ((origin == "Australia" && destination == "UAE")
			 || (origin == "UAE" && destination == "Australia"))
	  fare = 1400.0;
	else if ((origin == "Australia" && destination == "Singapore")
			 || (origin == "Singapore" and destination == "Australia"))
	  fare = 1000.0;
	else if ((origin == "UAE" && destination == "Singapore")
			 || (origin == "Singapore" && destination == "UAE"))
	  fare = 800.0;
	else
	  fare = 0.0;				// Invalid route

	double totalFare = fare;
	if (foodDrinks)
	  {
		totalFare += 25.0;
	  }
	totalFare += totalFare * 0.19;
	return totalFare;
  }
};

// Function to generate a random confirmation number
string
generateConfirmationNumber ()
{
  srand (time (0));				// Seed the random number generator
  string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const int length = 8;
  string confirmationNumber;
  for (int i = 0; i < length; ++i)
	{
	  confirmationNumber += chars[rand () % chars.length ()];
	}
  return confirmationNumber;
}

// Function to book a flight
template < class T > void
bookFlight (string origin, string destination, bool foodDrinks,
			string & passengerName, string & passengerContact)
{
  T flight (origin, destination, foodDrinks);
  double totalFare = flight.calculateFare ();

  cout << "Enter passenger name: ";
  cin.ignore ();				// Clear the input buffer
  getline (cin, passengerName);

  cout << "Enter passenger contact number: ";
  getline (cin, passengerContact);

  cout << "\nBooking Confirmation\n";
  cout << "---------------------\n";
  cout << "Passenger Name: " << passengerName << endl;
  cout << "Contact Number: " << passengerContact << endl;
  cout << "Origin: " << origin << endl;
  cout << "Destination: " << destination << endl;
  cout << "Total fare: Rs." << fixed << setprecision (2) << totalFare << endl;
  cout << "Confirmation Number: " << generateConfirmationNumber () << endl;
}

// Main function
int
main ()
{
  cout << "************* Welcome to Qatar Airlines *************\n" << endl;
  string origin, destination, passengerName, passengerContact;
  bool foodDrinks;

  try
  {
	cout << "Enter origin: ";
	cin >> origin;
	cout << "Enter destination: ";
	cin >> destination;
	cout << "Do you want food/drinks (1 for Yes, 0 for No): ";
	cin >> foodDrinks;

	if ((origin == "India" || origin == "USA" || origin == "Australia"
		 || origin == "UAE" || origin == "Singapore") && (destination == "USA"
														  || destination ==
														  "India"
														  || destination ==
														  "Australia"
														  || destination ==
														  "UAE"
														  || destination ==
														  "Singapore"))
	  {
		cout << "Select class: (1 for Business, 2 for Economy): ";
		int classChoice;
		cin >> classChoice;

		if (classChoice == 1)
		  {
			bookFlight < Business > (origin, destination, foodDrinks,
									 passengerName, passengerContact);
		  }
		else if (classChoice == 2)
		  {
			bookFlight < Economy > (origin, destination, foodDrinks,
									passengerName, passengerContact);
		  }
		else
		  {
			throw invalid_argument ("Invalid class choice.");
		  }
	  }
	else
	  {
		throw invalid_argument ("Invalid route.");
	  }
  }
  catch (const invalid_argument & e)
  {
	cout << "An error occurred: " << e.what () << endl;
  } catch ( ...)
  {
	cout << "An unknown error occurred." << endl;
  }

  return 0;
}
