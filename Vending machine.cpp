#include<bits/stdc++.h> // Including the necessary library for input/output operations.

using namespace std; // Using the standard namespace.

class Vending_machine{ // Defining the Vending_machine class.
   public:
   string items [5] = { "Coke" , "Biscuit" , "Cake" , "Bread" , "Water"} ; // Array to store the names of the items available in the vending machine.

   int price [5] = { 150 , 200 , 250 , 200 , 100 } ; // Array to store the prices of the items.

   int quantity [5] = {  4 ,  6 ,  5 ,  2 ,  3 } ; // Array to store the quantity of each item.

   int originalQuantity [5] = {  4 ,  6 ,  5 ,  2 ,  3 } ; // Array to store the original quantity of each item.

   void Display_Items(){ // Method to display the available items in the vending machine.
      for( int i = 0 ; i < 5 ; i++ ){
          cout << i + 1 << ". " << items[i] << " ($" << price[i] << ")" << endl ; // Printing the item number, name, and price.
      }
   }

   void item_selection() { // Method to handle the selection and purchase of items.
        int choice; // Variable to store the user's choice.
        char continueChoice; // Variable to store the user's choice to continue or not.

        do {
            cout << "Enter Your Selection 1-5: "; // Prompting the user to enter their choice.
            cin >> choice; // Reading the user's choice.
            int index = choice - 1; // Calculating the index of the selected item.

            if (index < 0 || index > 4) { // Checking if the choice is invalid.
                cout << "Invalid Choice! Please enter the correct choice." << endl; // Displaying an error message for an invalid choice.
            }
            else if (quantity[index] <= 0) { // Checking if the selected item is out of stock.
                cout << "Out of stock." << endl; // Displaying an out of stock message.
            }
            else {
                cout << "You selected " << items[index] << ". Please insert $" << price[index] << "." << endl; // Displaying the selected item and its price.
                int quantityToBuy; // Variable to store the quantity of the item to buy.
                cout << "Enter the quantity to buy: "; // Prompting the user to enter the quantity.
                cin >> quantityToBuy; // Reading the quantity to buy.

                if (quantityToBuy <= 0) { // Checking if the entered quantity is invalid.
                    cout << "Invalid quantity." << endl; // Displaying an error message for an invalid quantity.
                }
                else if (quantityToBuy > quantity[index]) { // Checking if there is not enough stock available.
                    cout << "Not enough stock available." << endl; // Displaying an error message for insufficient stock.
                }
                else {
                    int totalPrice = price[index] * quantityToBuy; // Calculating the total price.
                    cout << "Total Price: $" << totalPrice << endl; // Displaying the total price.

                    int enteredPrice; // Variable to store the price entered by the user.
                    cout << "Enter the price: $"; // Prompting the user to enter the price.
                    cin >> enteredPrice; // Reading the entered price.

                    if (enteredPrice < totalPrice) { // Checking if the entered price is insufficient.
                        cout << "Insufficient amount. Please enter the correct price." << endl; // Displaying an error message for insufficient amount.
                    }
                    else {
                        int change = enteredPrice - totalPrice; // Calculating the change.
                        cout << "Change: $" << change << endl; // Displaying the change.

                        quantity[index] -= quantityToBuy; // Updating the quantity of the item.
                    }
                }
            }

            cout << "Do you want to buy another item? (Y/N): "; // Prompting the user to continue or not.
            cin >> continueChoice; // Reading the choice to continue or not.

        } while (continueChoice == 'Y' || continueChoice == 'y'); // Looping until the user chooses to stop.
    }

  void GenerateReceipt() { // Method to generate the receipt of the purchased items.
    cout << "---------- RECEIPT ----------" << endl; // Displaying the receipt header.
    cout << "Purchased Items:" << endl; // Displaying the section for purchased items.

    int purchasedItemCount = 0; // Variable to count the number of purchased items.

    for (int i = 0; i < 5; i++) { // Looping through all the items.
        int purchasedQuantity = originalQuantity[i] - quantity[i]; // Calculating the purchased quantity of each item.
        if (purchasedQuantity > 0) { // Checking if the item is purchased.
            cout << items[i] << " (Quantity: " << purchasedQuantity << ")" << endl; // Displaying the purchased item and its quantity.
            purchasedItemCount++; // Incrementing the purchased item count.
        }
    }

    if (purchasedItemCount == 0) { // Checking if no items were purchased.
        cout << "No items purchased." << endl; // Displaying a message for no items purchased.
    }

    cout << "-----------------------------" << endl; // Displaying the receipt footer.
}

    void operate(){ // Method to operate the vending machine.
      Display_Items() ; // Displaying the available items.
      item_selection() ; // Handling the item selection and purchase.
      GenerateReceipt() ; // Generating the receipt.
    }
};

int main(){ // The entry point of the program.
   Vending_machine start ; // Creating an instance of the Vending_machine class.
   start.operate(); // Operating the vending machine.
}
