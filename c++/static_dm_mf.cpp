#include <iostream>
#include <string>
using namespace std;

class DiningHall
{
private:
    // static data member to store total seats
    static int totalSeats;
    // data members to store seat number and name of guest
    int seatNumber;
    string name;

public:
    // constructor to initialize name
    DiningHall(string n)
    {
        name = n;
        // call static function to assign seat number
        seatNumber = assignSeat();
    }
    // static function to generate seat number
    static int assignSeat()
    {
        // if seats are available, return current value of totalSeats and decrement it by one
        if (totalSeats > 0)
        {
            return totalSeats--;
        }
        // else return -1 as an error code
        else
        {
            return -1;
        }
    }
    // function to display name and seat number
    void display()
    {
        cout << "Name: " << name << "\n";
        cout << "Seat Number: ";
        // if seat number is valid, display it
        if (seatNumber > 0)
        {
            cout << seatNumber << "\n";
        }
        // else display message that no seats are available
        else
        {
            cout << "Sorry, no seats available.\n";
        }
    }
};

// initialize totalSeats as 50 outside the class definition
int DiningHall::totalSeats = 50;

int main()
{
    // create some objects of DiningHall class with names of guests
    DiningHall g1("Sanchit");

    // display their details using display function
    g1.display();

    return 0;
}