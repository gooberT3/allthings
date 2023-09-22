#include <climits>
#include <iostream>
#include <vector>

void displayMenu(std::vector<int> &);
void displayElements(std::vector<int> &);
void addElements(std::vector<int> &);
void calculateMean(std::vector<int> &);
void displaySmallest(std::vector<int> &);
void displayLargest(std::vector<int> &);
void quitProgram();

const int MENU_SIZE = 6;

int main() {
    std::vector<int> userVec;

    displayMenu(userVec);

    return 0;
}

void displayMenu(std::vector<int> &userVec) {
    static bool quit = false;
    if(quit) {
        return;
    }

    char policyChoices[MENU_SIZE] = { 'P', 'A', 'M', 'S', 'L', 'Q' };

    char userChoice;
    bool choiceValidation = true;
    while(!(quit)) {
        do {
            std::cout << "Program Menu:\n\n"
                << "\tP - Print values\n"
                << "\tA - Add a value\n"
                << "\tM - Display mean of values\n"
                << "\tS - Display the smallest number\n"
                << "\tL - Display the largest number\n"
                << "\tQ - Quit program\n\n";

            std::cout << "Enter your choice: ";
            std::cin.get(userChoice);

            for(int i = 0; i < MENU_SIZE; i++) {
                if(toupper(userChoice) == policyChoices[i]) {
                    choiceValidation = false;
                    break;
                }
            }

            system("clear");
            if(choiceValidation){
                std::cout << "Invalid menu option, choose one of the following:\n\n";
            }

        }while(choiceValidation);

        switch(toupper(userChoice)) {
            case 'P':
                displayElements(userVec);
                break;
            case 'A':
                addElements(userVec);
                break;
            case 'M':
                calculateMean(userVec);
                break;
            case 'S':
                displaySmallest(userVec);
                break;
            case 'L':
                displayLargest(userVec);
                break;
            case 'Q':
                quitProgram();
                return;
        }
    };
}

void displayElements(std::vector<int> &userVec) {
    if(userVec.size() == 0) {
        std::cout << "[] - the list is empty.\n\n";
    }else if(userVec.size() == 1) {
        std::cout << "[ " << userVec.at(0) << " ]\n\n";
    }else {
        int count = 0;
        while(count++ == 0) {
            std::cout << "[ " << userVec.at(0);
        }
        for(int i = 1; i < userVec.size(); i++) {
            std::cout << ", " << userVec.at(i);
        }
        std::cout << " ]\n";
    }
    
    fflush(stdin);
    std::cout << "Press any key to return to the menu...\n";
    std::cin.get();

    system("clear");
    displayMenu(userVec);
}

void addElements(std::vector<int> &userVec) {
    int newElement = 0;

    std::cout << "Enter an integer to add to the list: ";
    std::cin >> newElement;

    userVec.push_back(newElement);

    std::cout << "The integer '" << newElement << "' has been added to the list.\n\n"
        << "Your new list is:\n";

    displayElements(userVec);
}

void calculateMean(std::vector<int> &userVec) {
    int totalElement = 0;

    for(auto i: userVec) {
        totalElement += i;
    }

    std::cout << "The mean(average) of your list is: " << totalElement / userVec.size() << "\n\n";

    fflush(stdin);
    std::cout << "Press any key to return to the menu...\n";
    std::cin.get();

    system("clear");
    displayMenu(userVec);
}

void displaySmallest(std::vector<int> &userVec) {
    if(userVec.size() == 0) {
        std::cout << "Unable to display smallest element,\n"
                  << "Due to reason: [] - list is empty\n\n";
    }else {
        int smallest = INT_MAX;
        for(int i = 0; i < userVec.size(); i++) {
            if(userVec.at(i) < smallest) {
                smallest = userVec.at(i);
            }
        }

        std::cout << "The smallest element in your list is: ";
        std::cout << "[ " << smallest << " ]\n\n";
    }

    fflush(stdin);
    std::cout << "Press any key to return to the menu...\n";
    std::cin.get();

    system("clear");
    displayMenu(userVec);
}

void displayLargest(std::vector<int> &userVec) {
    if(userVec.size() == 0) {
        std::cout << "Unable to display smallest element,\n"
                  << "Due to reason: [] - list is empty\n\n";
    }else {
        int largest = INT_MIN;
        for(int i = 0; i < userVec.size(); i++) {
            if(userVec.at(i) > largest) {
                largest = userVec.at(i);
            }
        }

        std::cout << "The largest element in your list is: ";
        std::cout << "[ " << largest << " ]\n\n";
    }

    fflush(stdin);
    std::cout << "Press any key to return to the menu...\n";
    std::cin.get();

    system("clear");
    displayMenu(userVec);
}

void quitProgram() {
    std::cout << "Terminating program...\n";
}
