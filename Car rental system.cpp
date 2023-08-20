#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class Car{
    public:
    // Declare class variables
    string car_company , car_model , car_colour , fuel_type ; 
    int price ;
    bool is_rented = false ;
    void get_details( string Car_company , string Car_model , int Price ){ // Define a member function to get car details
        car_company = Car_company ; // Assign Car_company parameter to car_company variable
        car_model = Car_model ;  // Assign Car_model parameter to car_model variable
        price = Price ;         // Assign Price parameter to price variable
    }
        void display_cars(){ // Define a member function to display car details
        for (int i = 0; i < 1; i++) {
        cout << "Car name   : " << car_company << endl;
        cout << "Car Model  : " << car_model << endl;
        cout << "Car Price  : " << price << endl;
        cout << endl ;
        }
    }
    void rent_car();    // Declare a member function to rent a car
};
Car cars[5];    // Create an array of Car objects
 void Car::rent_car() { // Define the member function to rent a car
        int choice , input_price ;
        string car_confirmed ;
        do{
        cout << "\nEnter the car number you want to rent: " ;   // Prompt for car selection
        cin >> choice;  // Read the choice from the user
        switch (choice) {   
         case 1:
    if (cars[0].is_rented) {    // Check if the car is already rented
        cout << "\nCar is already rented." << endl;
    } else {
        // Print selected car details
        cout << "\nYou selected: " << cars[0].car_company << " : " << cars[0].car_model << " : " << "Price: " << cars[0].price << endl;
        cout << "\nDo you want to confirm this car? (yes/no): ";    // Prompt for confirmation
        cin >> car_confirmed;   // Read the confirmation from the user
    if (car_confirmed == "yes" || car_confirmed == "y") {   // Check if the user confirmed
            if (cars[0].is_rented) {
                cout << "\nCar is already rented." << endl;
                break;
            }
        cout << "\nCar confirmed." << endl;  
            cout << "\nPlease enter the money: ";   // Prompt for payment
            cin >> input_price;     // Read the payment amount
            if (input_price == cars[0].price) {  // Check if the payment amount is correct
                cout << "\nPayment successful. Here's your key." << endl;
                cars[0].is_rented = true;   // Set is_rented to true
            } else if (input_price > cars[0].price) {   // Check if the payment amount exceeds the car price
                int change = input_price - cars[0].price;    // Calculate the change
                cout << "\nPayment successful. Here's your key and change: " << change << endl;
                cars[0].is_rented = true;   // Set is_rented to true
            } else {
                cout << "\nInsufficient amount. Rental canceled." << endl;   // Payment amount is insufficient
            }
        } else {
            cout << "\nCar not confirmed." << endl;     // Car is not confirmed
        }
    }
    break;
        case 2:
    if (cars[1].is_rented) {
        cout << "\nCar is already rented." << endl;
    } else {
        cout << "\nYou selected: " << cars[1].car_company << " : " << cars[1].car_model << " : " << "Price: " << cars[1].price << endl;
        cout << "\nDo you want to confirm this car? (yes/no): ";
        cin >> car_confirmed;
        if (car_confirmed == "yes" || car_confirmed == "y") {
            if (cars[1].is_rented) {
                cout << "\nCar is already rented." << endl;
                break;
            }
            cout << "\nCar confirmed." << endl;
            cout << "\nPlease enter the money: ";
            cin >> input_price;

            if (input_price == cars[1].price) {
                cout << "\nPayment successful. Here's your key." << endl;
                cars[1].is_rented = true;
            } else if (input_price > cars[1].price) {
                int change = input_price - cars[1].price;
                cout << "\nPayment successful. Here's your key and change: " << change << endl;
                cars[1].is_rented = true;
            } else {
                cout << "\nInsufficient amount. Rental canceled." << endl;
            }
        } else {
            cout << "\nCar not confirmed." << endl;
        }
    }
    break;
        case 3:
    if (cars[2].is_rented) {
        cout << "\nCar is already rented." << endl;
    } else {
        cout << "\nYou selected: " << cars[2].car_company << " : " << cars[2].car_model << " : " << "Price: " << cars[2].price << endl;
        cout << "\nDo you want to confirm this car? (yes/no): ";
        cin >> car_confirmed;

        if (car_confirmed == "yes" || car_confirmed == "y") {
            if (cars[2].is_rented) {
                cout << "\nCar is already rented." << endl;
                break;
            }
            cout << "\nCar confirmed." << endl;
            cout << "\nPlease enter the money: ";
            cin >> input_price;

            if (input_price == cars[2].price) {
                cout << "\nPayment successful. Here's your key." << endl;
                cars[2].is_rented = true;
            } else if (input_price > cars[2].price) {
                int change = input_price - cars[2].price;
                cout << "\nPayment successful. Here's your key and change: " << change << endl;
                cars[2].is_rented = true;
            } else {
                cout << "\nInsufficient amount. Rental canceled." << endl;
            }
        } else {
            cout << "\nCar not confirmed." << endl;
        }
    }
    break;
        case 4:
    if (cars[3].is_rented) {
        cout << "\nCar is already rented." << endl;
    } else {
        cout << "\nYou selected: " << cars[3].car_company << " : " << cars[3].car_model << " : " << "Price: " << cars[3].price << endl;
        cout << "\nDo you want to confirm this car? (yes/no): ";
        cin >> car_confirmed;
        if (car_confirmed == "yes" || car_confirmed == "y") {
            if (cars[3].is_rented) {
                cout << "\nCar is already rented." << endl;
                break;
            }
            cout << "\nCar confirmed." << endl;
            cout << "\nPlease enter the money: ";
            cin >> input_price;

            if (input_price == cars[3].price) {
                cout << "\nPayment successful. Here's your key." << endl;
                cars[3].is_rented = true;
            } else if (input_price > cars[3].price) {
                int change = input_price - cars[3].price;
                cout << "\nPayment successful. Here's your key and change: " << change << endl;
                cars[3].is_rented = true;
            } else {
                cout << "\nInsufficient amount. Rental canceled." << endl;
            }
        } else {
            cout << "\nCar not confirmed." << endl;
        }
    }
    break;
        case 5:
    if (cars[4].is_rented) {
        cout << "\nCar is already rented." << endl;
    } else {
        cout << "\nYou selected: " << cars[4].car_company << " : " << cars[4].car_model << " : " << "Price: " << cars[4].price << endl;
        cout << "\nDo you want to confirm this car? (yes/no): ";
        cin >> car_confirmed;
        if (car_confirmed == "yes" || car_confirmed == "y") {
            if (cars[4].is_rented) {
                cout << "\nCar is already rented." << endl;
                break;
            }
            cout << "\nCar confirmed." << endl;
            cout << "\nPlease enter the money: ";
            cin >> input_price;
            if (input_price == cars[4].price) {
                cout << "\nPayment successful. Here's your key." << endl;
                cars[4].is_rented = true;
            } else if (input_price > cars[4].price) {
                int change = input_price - cars[4].price;
                cout << "\nPayment successful. Here's your key and change: " << change << endl;
                cars[4].is_rented = true;
            } else {
                cout << "\nInsufficient amount. Rental canceled." << endl;
            }
        } else {
            cout << "\nCar not confirmed." << endl;
        }
    }
    break;
            default:
                cout << "\nIncorrect Choice : Please enter the correct choice \n" << endl ; // Invalid car number
                break;
        }
    }while (choice > 5 ) ;   // Loop until a valid car number is chosen
}
int main(){
    Car start ;
    // Car 1 details
    cars[0].get_details("Toyota ", "Grande  " , 5000  );
    // Car 2 details
    cars[1].get_details("Ford   ", "Mustang " , 15000 );
    // Car 3 details
    cars[2].get_details("Nissan ", "Skyline " , 13000 );
    // Car 4 details
    cars[3].get_details("Kia    ", "Picanto " , 10000 );
    // Car 5 details
    cars[4].get_details("Toyota ", "Vigo    " , 20000 );
    // Display available cars
    cout << "Available Cars : " << endl ;
    for (int i = 0; i < 5; i++)
    {
        cout << "Car " << i + 1 << endl ;
        cars[i].display_cars();
    }
    int close_option ;
    do{
    start.rent_car();   // Call the rent_car() function to initiate the car rental process
    cout << "\nIf you want to close the program press 1 press 0 to exit " << endl ;
    cout << "\nEnter your choice : " ;
    cin >> close_option ;
    }while(close_option == 1);
    return 0;
}
