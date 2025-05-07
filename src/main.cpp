#include <iostream>
#include <cstdlib>

void print_main_menu() {
    std::system("clear");

    std::cout << "What would you like to do?" << "\n";
    std::cout << "  1: View Car \n";
    std::cout << "  2: View Maintenance Records \n";
    std::cout << "  3: View To-Do List \n";
    std::cout << "  4: View Wishlist \n";
}

int get_user_selection() {\
    int choice; 
    std::cout << "Enter choice: ";
    
    while (!(std::cin >> choice) || choice < 0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid. Make a valid selection: ";
    }
    return choice;
}

void print_car_stats() {
    std::cout << "Viewing Car \n";
    std::cout << "\n";
    std::cout << "Make: Jeep \n";
    std::cout << "Model: Cherokee XJ \n";
    std::cout << "Year: 1994 \n";
    std::cout << "Color: Red \n";

}

void handle_user_selection(int choice) {
    std::system("clear");

    switch (choice) {
        case 1:
            print_car_stats();
            break;
        case 2:
            std::cout << "Viewing Car \n";
            break;
        case 3:
            std::cout << "Viewing Car \n";
            break;
        default:
        std::cout << "Option not implemented \n";
    }
}





int main() { 
    print_main_menu();
    int selection = get_user_selection();
    handle_user_selection(selection);
    return 0;
}