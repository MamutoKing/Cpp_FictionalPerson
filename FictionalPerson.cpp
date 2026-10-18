//Module 1 Assignment
//Display information of a fictional person

#include <iostream> //Output to console
#include <string>   //Use string data type

int main() {

    //Declare & initialize variables
    std::string firstName;
    std::string lastName;
    std::string streetAddress;
    std::string city;
    std::string zipCode;

    firstName = "Maurizio";
    lastName = "Medina";
    streetAddress = "1212 Mountain Ave";
    city = "Port St. Lucie";
    zipCode = "80525";

    //Display info

    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Street Address: " << streetAddress << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Zip Code: " << zipCode << std::endl;

    return 0; // end program
}