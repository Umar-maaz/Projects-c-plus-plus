#include<iostream>
#include<cstring>
#include<conio.h>
#include<cstdlib>
using namespace std;
// This section of code declares the `Client` class.
class Client {
public:
    // These are the public members of the `Client` class.
    
    string client_name, cnic, address , phone_number ;
    int pin, balance , account_number ;
    
    // This function gets the details of the client.
    void get_details(string Client_name, string Cnic, string Address, string Phone_number, int Account_number , int Pin , int Balance) {
    	
	// Assign the values of the parameters to the corresponding member variables of the `Client` class.
	    client_name = Client_name;
        cnic = Cnic;
        address = Address;
        phone_number = Phone_number;
        account_number = Account_number;
        pin = Pin;
        balance = Balance;
    }
    
    // This function prints the welcome screen.
     void welcome_screen(){ 
        int choice;
    
	    // This code prints the welcome message.
    
	    cout << "\n\t\t\t\t\t\tWELCOME  TO  MCB  BANK\n";
        for (int a = 0; a <= 119; a++) {
            cout << "_";
        }
     	cout << "\n\n\n\t\t1). Check Client Details\t\t\t\t\t2). Check Balance \n";
        cout << "\n\n\n\t\t3). Deposite\t\t\t\t\t\t\t4). Withdraw\n\n";
        cout << "\n\n\t\t5). Change Pin\t\t\t\t\t\t\t6). Client Search " << endl ;
        cout << "\n\n\n\t\t7). Fund Transfer\t\t\t\t\t\t8). Exit" ;
        // This code gets the user's choice.
        cout << "\n\n\nEnter Your Choice : " ;
        cin >> choice ;
    
	    // This switch statement executes the appropriate function based on the user's choice.
    
	    switch (choice){
        case 1:
        	system("cls");
    
	        // This code calls the `Show()` function to display the client's details.
            Show();
            break;
        case 2:
        	system("cls");
    
	        // This code calls the `check_balance()` function to display the client's balance.
            check_balance();
   	        break;
        case 3:
        	system("cls");
    
	        // This code calls the `Deposit()` function to deposit money into the client's account.
            Deposit();
            break;
        case 4:
            system("cls");
    
	        // This code calls the `Withdraw()` function to withdraw money from the client's account.
            Withdraw();
            break;
        case 5:
            system("cls");
    
	        // This code calls the `ChangePin()` function to change the client's pin.
            ChangePin();
            break;
        case 6:
            // This code calls the `search_another_client()` function to search for the another client.
    
	        search_another_client();
            exit(0);
            break;
        case 7:
        	system("cls");
        	// This code calls the `transfer_balance` function to transfer the balance of client to another.
        	transfer_balance();
        	break;
        case 8:
            // This code prints a message thanking the user for their transaction.
             cout << "\n\n\t\t\t\t\tTHANK YOU FOR YOUR TRANSACTION" << endl;
             cout << "\n\nExiting..." ;
             break;
        default:
        	// This code prints a message if the user enters an invalid choice.
            cout << "\n\nIncorrect Choice : " ;
            getch();
            system("cls");
            welcome_screen();
            break;
        }
        }
        
        // This function checks the user's security pin.
        void security_pin() {
        
		// This variable keeps track of the number of incorrect attempts.
        int tries = 0;
        int input_pin;
        
		// This loop repeats until the user enters the correct pin or has made 3 incorrect attempts.
        do {
        
		    // This code gets the user's pin.
            cout << "Enter The Security Pin: ";
            cin >> input_pin;
        
		    // This code checks if the pin is correct.
            if (input_pin == pin) {
        
		        // If the pin is correct, the welcome_screen(); function is executes.
                system("cls");
                welcome_screen();
                break; // Exit the loop on correct pin input
        
		    // If the pin is incorrect, the number of incorrect attempts is incremented.    
            } else {
                tries++;
        
		        // If the number of incorrect attempts is less than 3, the user is prompted to try again.
                if (tries < 3) {
                    cout << "\nIncorrect pin. Try again." << endl;
                    getch();
                    system("cls");
                } else {
        
		            // If the number of incorrect attempts is equal to 3, the user's card is blocked and the function exits.
                    cout << "\nToo many incorrect attempts. \n\nYour Card Has been blocked" << endl;
                    exit(0); // Exit the program after 3 incorrect attempts
                }
            }
        } while (tries < 3 );
    }
    
	// This function prints the client's details.
    void Show() {
        char ch ;
        cout << "\nThe Name of Client       : " << client_name << endl;
        cout << "\nPhone Number of client   : " << phone_number << endl;
        cout << "\nCNIC number of client    : " << cnic << endl;
        cout << "\nAccount Number of client : " << account_number << endl;
        cout << "\nAddress Of client        : " << address << endl ;
    
	    // This code asks the user if they want to perform another transaction.
        cout << "\nIF You Want Another Transaction Press Y for Yes Press N for Quit" << endl;
        cout << "\n\nEnter Your Choice : ";
        cin >> ch;
        if (ch == 'y' || ch == 'Y') {
            system("cls");
            welcome_screen();
        } else if (ch == 'n' || ch == 'N') {
            cout << "\n\n\t\t\t\t\tTHANK YOU FOR YOUR TRANSACTION" << endl;
            exit(0);
        } else {
            cout << "\nIncorrect Choice\n\nPlease Try Again Later" << endl;
            welcome_screen();
        }
    }
    
	   // This function checks the client's balance.
     void check_balance() {
        char ch;
    
	    // This code prints the client's balance.
        cout << "\nYour Current Balance is : " << balance << " Rs" << endl; // Shows the default balance defined in the constructor
        cout << "\n\nIF You Want Another Transaction Press Y for Yes Press N for Quit" << endl;
        cout << "\n\nEnter Your Choice : ";
        cin >> ch;
        if (ch == 'y' || ch == 'Y') {
            system("cls");
            welcome_screen();
        } else if (ch == 'n' || ch == 'N') {
            cout << "\n\n\t\t\t\t\tTHANK YOU FOR YOUR TRANSACTION" << endl;
            exit(0);
        } else {
            cout << "\nIncorrect Choice\n\nPlease Try Again Later" << endl;
            welcome_screen();
        }
    }    
    
	// This function deposits money into the client's account.
     void Deposit() {
    
	     // This code gets the amount of money to be deposited.
        int amount;
        char choice;
        cout << "\nEnter The Deposit Amount: ";
        cin >> amount;
    
	      // This code checks if the amount is valid.
        if (amount <= 70000) {
            if (amount % 500 == 0) {
    
	              // This code updates the client's balance.
                balance = balance + amount;
    
	            // This code prints a message confirming the deposit.
                cout << "\n-------------------------" << endl;
                cout << "       BANK RECEIPT       " << endl;
                cout << "-------------------------" << endl;
                cout << "\nDeposit Amount: " << amount << endl;
                cout << "\nDeposit Successful: " << amount << endl;
                cout << "\nThe New Balance is: " << balance << endl;
                cout << "\n-------------------------" << endl;
            }
            else {
                cout << "\n\nEnter The correct figure";
            }
        }

        // When the user deposite the amount greater than 70k the program prints the `else` code
        else {
            cout << "\n\nThe Maximum amount of deposit is 70k ";
        }
        cout << "\n\n\nIf You Want Another Transaction, Press Y for Yes, Press N for Quit" << endl;
        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            system("cls");
            welcome_screen();
        }
        else if (choice == 'n' || choice == 'N') {
            cout << "\n\n\t\t\t\t\tTHANK YOU FOR YOUR TRANSACTION" << endl;
            exit(0);
        }
        else {
            cout << "\nIncorrect Choice\n\nPlease Try Again Later" << endl;
            welcome_screen();
        }
    }
    
	// This function withdraws money from the client's account.
     void Withdraw() {
           // This code gets the amount of money to be withdrawn.
        char choice;
    
	    // Get the amount of money to be withdrawn.
        int amount;
        cout << "\nEnter Your Withdraw Amount: ";
        cin >> amount;
    
	    // Check if the amount is valid.
		  // The amount must be less than or equal to the maximum withdrawal amount, which is 70,000.
        if (amount <= 70000) {
    
	    	 // Check if the amount is greater than the user's balance.
            if (amount <= balance) {
    
	             // This code updates the client's balance.
                balance = balance - amount;
    
	             // This code prints a message confirming the withdrawal.
                cout << "\n-------------------------" << endl;
                cout << "       BANK RECEIPT       " << endl;
                cout << "-------------------------" << endl;
                cout << "\nWithdraw Amount    : " << amount << endl;
                cout << "\nWithdraw Successful: " << amount << endl;
                cout << "\nThe New Balance is : " << balance << endl;
                cout << "\n-------------------------" << endl;
            }
            else {
    
	        	 // Print a message indicating that the balance is insufficient.
                cout << "\n\nInsufficient balance" << endl ;
                getch();
                system("cls");
                welcome_screen();
            }
        }
        // Print a message indicating that the withdrawal amount is too high.
        else {
            cout << "\n\nThe Maximum amount of withdraw is 70k";
            getch();
            system("cls");
            welcome_screen();
        }
        cout << "\n\n\nIf You Want Another Transaction, Press Y for Yes, Press N for Quit" << endl;
        cout << "\n\nEnter Your Choice: ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            system("cls");
            welcome_screen();
        }
        if (choice == 'n' || choice == 'N') {
            cout << "\n\n\t\t\t\t\tTHANK YOU FOR YOUR TRANSACTION";
            exit(0);
        }
    }
      // This function changes the client's pin.
     void ChangePin() {
        int tries = 0 ;
        int input_pin;
        do {
            system("cls");
    
	          // This code gets the client's current pin.
            cout << "Enter The Previous Pin: ";
            cin >> input_pin;
            if (pin == input_pin) {
    
	        // This code checks if the current pin is correct.
                cout << "\n\nCorrect Previous Pin." << endl;
    
	            // This code gets the client's new pin.
                cout << "\n\nEnter The New Pin: ";
                cin >> pin;
    
	            // This code updates the client's pin.
                cout << "\n\nThe Pin has been successfully changed." << endl;
                getch();
                system("cls");
                search_another_client();
                break;
            }
            else {
    
	        	// When the previous PIN in invalid.
                cout << "\n\nIncorrect Previous Pin." << endl;
                getch();

                // number of tries for the user.
	            if (tries < 3) {
                    tries++;
                }
                else {
                    system("cls");

                    // When the user inputs 3 incorrect attempts the card has been blocked message has been printed.
                    cout << "\t\t\t\t\t\tToo many attempts." << endl;
                    cout << "\t\t\t\t\t  Your Card has been blocked." << endl;
                    exit(0);
                }
            }
        } while (tries < 3);
    }

// By defining the `search_another_client()` & `transfer_balance()` functions outside the class, they can be easily reused in different contexts or scenarios. 

 //Other parts of the program can call these functions without needing to instantiate an object of the Client class.
    
//Defining the functions outside the class allows for easier modification and extension in the future.   

// If there is a need to change the search or transfer fund logic, it can be done without directly modifying the Client class. 
    void search_another_client();
    void transfer_balance();
};
    // This code creates five objects of the `Client` class.
    Client client1 , client2 , client3 , client4 , client5 ;
    
	// This method allows the user to search for another client.
    void Client::search_another_client(){
    
	    // This variable stores the user's account number.
        int search;
    
	// The `do`-`while` loop will continue to run as long as the user enters an invalid account number.
    do{
    system("cls");
    
	 // This code gets the user's account number.
    cout << "Enter the account number of client : " ;
    cin >> search ;
    
	 // Check if the account number is valid.
     // If the account number is valid, the `if` statement will be executed.
    if (search == 1)
    {
    	system("cls");
    
	     // Print a message saying that the account number has been verified.
        cout << "Account number verified : " << endl ;
    
	     // Print a message prompting the user to press Enter to continue.
        cout << "\nPress enter to continue.... " << endl ;
        getch();
        system("cls");
    
	       // Call the `security_pin()` method for the first client.
        client1.security_pin();
    }
    else if(search==2){
    	system("cls");
        cout << "Account number verified : " << endl ;
        cout << "\nPress enter to continue.... " << endl ;
        getch();
        system("cls");
        client2.security_pin();
    }  
    else if(search==3){
    	system("cls");
        cout << "Account number verified : " << endl ;
        cout << "\nPress enter to continue.... " << endl ;
        getch();
        system("cls");
        client3.security_pin();
    }  
    else if(search==4){
    	system("cls");
        cout << "Account number verified : " << endl ;
        cout << "\nPress enter to continue.... " << endl ;
        getch();
        system("cls");
        client4.security_pin();
    }  
    else if(search==5){
    	system("cls");
        cout << "Account number verified : " << endl ;
        cout << "\nPress enter to continue.... " << endl ;
        getch();
        system("cls");
        client5.security_pin();
    }    
    else{
    
	    // Print a message saying that there is no client registered on this account number
       cout << "\nThere is no client registered on this account number : " << endl ; 
       cout << "\nPlease Enter the correct account number : " << endl ;
       cout << "\nPress Enter to re-enter the account number.... " << endl ;
    
	    // Get the user's input.
       getch();
    } 
    }while(search > 5);
}
 // This function transfers the balance from the current account to the target account.
void Client::transfer_balance() {
    int target_account ;
    int amount ;

    // Get the account number of the target account.
    cout << "\nEnter the account number of the client you want to send the balance: " ;
    cin >> target_account ;

    // Check if the target account is valid
 	 // Valid account numbers are between 1 and 5.
    if (target_account >= 1 && target_account <= 5) {

    	  // Get the amount to transfer.
        cout << "\n\nEnter the amount to transfer: ";
        cin >> amount;

        // Check if the amount is valid.
   		 // The amount must be greater than 0 and less than or equal to the balance of the current account.
        if (amount > 0 && amount <= balance) {

        	 // Update the balance of the target account.
            switch (target_account) {
                case 1:
                    client1.balance += amount;
                    balance -= amount;
                    cout << "\n----------------------------" << endl;
                    cout << "       BANK RECEIPT       " << endl;
                    cout << "\n----------------------------" << endl;
                    cout << "\nTransfer successful: " << amount << " Rs" << endl;
                    cout << "\nNew balance: " << balance << " Rs" << endl;
                    cout << "\n----------------------------" << endl;
                    break;
                case 2:
                    client2.balance += amount;
                    balance -= amount;
                    cout << "\n----------------------------" << endl;
                    cout << "       BANK RECEIPT       " << endl;
                    cout << "\n----------------------------" << endl;
                    cout << "\nTransfer successful: " << amount << " Rs" << endl;
                    cout << "\nNew balance : " << balance << " Rs" << endl;
                    cout << "\n----------------------------" << endl;
                    break;
                case 3:
                    client3.balance += amount;
                    balance -= amount;
                    cout << "\n----------------------------" << endl;
                    cout << "       BANK RECEIPT       " << endl;
                    cout << "\n----------------------------" << endl;
                    cout << "\nTransfer successful: " << amount << " Rs" << endl;
                    cout << "\nNew balance : " << balance << " Rs" << endl;
                    cout << "\n----------------------------" << endl;
                    break;
                case 4:
                    client4.balance += amount;
                    balance -= amount;
                    cout << "\n----------------------------" << endl;
                    cout << "       BANK RECEIPT       " << endl;
                    cout << "\n----------------------------" << endl;
                    cout << "\nTransfer successful : " << amount << " Rs" << endl;
                    cout << "\nNew balance : " << balance << " Rs" << endl;
                    cout << "\n----------------------------" << endl;
                    break;
                case 5:
                    client5.balance += amount;
                    balance -= amount;
                    cout << "\n----------------------------" << endl;
                    cout << "       BANK RECEIPT       " << endl;
                    cout << "----------------------------" << endl;
                    cout << "\nTransfer successful: " << amount << " Rs" << endl;
                    cout << "\nNew balance : " << balance << " Rs" << endl;
                    cout << "\n----------------------------" << endl;
                    break;
            }
        } else {
            cout << "\n\nInvalid amount or insufficient balance." << endl;
        }
    } else {
        cout << "\n\nInvalid account number." << endl;
    }
    cout << "\n\nIf you want another transaction, press Y for Yes, or press N to quit." << endl;
    char choice;
    cout << "\nEnter your choice: ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        system("cls");
        welcome_screen();
    } else if (choice == 'n' || choice == 'N') {
        cout << "\n\n\t\t\t\t\tTHANK YOU FOR YOUR TRANSACTION" << endl;
        exit(0);
    } else {
        cout << "\nIncorrect Choice\n\nPlease Try Again Later" << endl;
        welcome_screen();
    }
}

// This is the main method.
int main(){

    // This code creates an object of the `Client` class.
    Client client ;

     // This code creates an objects of the `Client` class.
    client1.get_details( "Maaz     " , "11301-1231330-9" , "Kohat Cantt " , "3344556677" , 1 , 123 , 5000 );
    client2.get_details( "Sudais   " , "98765-4321133-9" , "Kohat Cantt " , "9876543210" , 2 , 345 , 6000 );
    client3.get_details( "Abdullah " , "13501-2423442-8" , "Kohat Cantt " , "9249243842" , 3 , 567 , 7000 );
    client4.get_details( "Mazher   " , "17403-1313122-5" , "Kohat Cantt " , "8492387429" , 4 , 789 , 8000 );
    client5.get_details( "Mahees   " , "14503-7232242-3" , "Kohat Cantt " , "2335345346" , 5 , 910 , 9000 );

     // This code calls the `search_another_client()` method.
     // All member-functions are linked with `search_another-client()` method that's why only calls the `search_another-client()` funtion to operate the whole program
    client.search_another_client();
    return 0 ;
}
