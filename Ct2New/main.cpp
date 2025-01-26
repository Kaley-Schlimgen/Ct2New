//
//  main.cpp
//  Ct2New
//
//  Created by Kaley Schlimgen on 1/26/25.
//


#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string lastName;
    std::string firstName;
    //FIXME change to 3
    //numPatients is 3
    int numPatients = 2;
    
    //create vector so we can get and print the user's input using a for loop
    std::vector<std::string> fullName(numPatients);
    //get two string user inputs 3 (numPatients = 3) times
    for (int i = 0; i < numPatients; ++i) {
        //take two string inputs from user
        std::cout << "Enter Patient " << i + 1 << "'s Last Name: ";
        std::getline(std::cin, lastName);
        
        
        std::cout << "Enter Patient " << i + 1 << "'s First Name: ";
        std::getline(std::cin, firstName);
//FIXME should names be smooshed together?
//FIXME would separating by comma not be concatenation?
        //concatenate the two strings
        fullName[i] = lastName + firstName;
    }

    std::cout << "\nPATIENT OUTPUT:\n";
    //print concatenated inputs of various lengths
     for (int i = 0; i < numPatients; ++i) {
         //print concatenate of two entered strings as output onto screen
         std::cout << "Patient " << i + 1 << ": " << fullName[i] << std::endl;
     }
    return 0;
}
