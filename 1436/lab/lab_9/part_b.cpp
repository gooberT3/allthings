// preprocessor directives
#include <iostream>

// enumerator of type Pets
enum Pets {
      DOGS,
      CATS,
      BIRDS,
     HAMSTERS 
};

// function main
int main() {
      // display list of available animals for sale to user
      std::cout << "List of the available pets and their prices: \n";

      std::cout << "Enter " << DOGS << " to buy Dogs.\n"
                << "Enter " << CATS << " to buy Cats.\n"
                << "Enter " << BIRDS << " to buy Birds.\n"
                << "Enter " << HAMSTERS << " to buy Hamsters.\n\n";

      // define variable to store user's choice
      int selection = -1;

      // prompt user to enter which animal thye would like to buy
      std::cout << "Which pet would you like to buy?\n";

      // read in user's choice
      std::cin >> selection;

      // validate user's choice input
      while(selection > HAMSTERS || selection < DOGS) {
            std::cout << "Invalid selection, please try again!\n";
            std::cin >> selection;
      }
      
      // define variable of type Pets and store the user's choice
      Pets my_pets;
      my_pets = static_cast<Pets>(selection);

      // depending on user's choice display to the price of the animal to the user
      switch(my_pets) {
            case DOGS:
                  std::cout << "Dogs price is: $1500.00\n";
                  break;
            case CATS:
                  std::cout << "Cats price is: $1200.00\n";
                  break;
            case BIRDS:
                  std::cout << "Birds price is: $1050.00\n";
                  break;
            case HAMSTERS:
                  std::cout << "Hamsters price is: $1400.00\n";
                  break;
            default:
                  std::cout << "Error within switch statement...\n";
      }

      return 0;
}
