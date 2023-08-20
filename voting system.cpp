#include<iostream>
#include<cstring>
using namespace std;
class Voter{
    public:
    string name ;
    string address ;
    int voter_id ;
    int age ;
    int phone_number ;
    int cnic ;
    int vote_casted ;
    void set_details( string Name , int Age , int phone_Number , int Cnic , string Address , int Voter_id ){
        name = Name ;
        age = Age ;
        phone_number = phone_Number ;
        cnic = Cnic ;
        address = Address ;
        voter_id = Voter_id ;

    }
    // Display function for display the details of voters
    void display_voter_details(){
        cout << "Voter Name   : " << name << endl ;
        cout << "Voter Age    : " << age << endl ;
        cout << "Phone Number : " << phone_number << endl;
        cout << "CNIC Number  : " << cnic << endl ;
        cout << "Voter Address: " << address << endl ;
        cout << "Voter Id     : " << voter_id << endl ;
    }

}; 
    class Candidate {
    public:
        string name ;
        string party_name ;
        int votes ;
        void candidate_details( string Name , string Party_name ) {
        name = Name ;
        party_name = Party_name ;
        votes = 0;
        }
        // Display the function for Candidates details 
        void display_candidates() {
        cout << "Candidate Name : " << name << endl ;
        cout << "Party Name     : " << party_name << endl ;
        cout << "Votes          : " << votes << endl ;
        }
};
int main(){
    int voterID ;
    int has_voted ;
    Voter voter_choice ;
    Voter voter[20] ;
    // Entering the 20 voters details
    voter[0].set_details  ( "Umar Maaz"       , 20 , 11111111112 , 1730122233334 , "Peshawer" , 1  ) ;
    voter[1].set_details  ( "Abubakar rizwan" , 22 , 11223300555 , 1530112312315 , "Peshawer" , 2  ) ;
    voter[2].set_details  ( "Hameed khan"     , 21 , 22097977977 , 1430113131236 , "Peshawer" , 3  ) ;
    voter[3].set_details  ( "Zuhranullah"     , 22 , 11312317899 , 1330146465757 , "Peshawer" , 4  ) ;
    voter[4].set_details  ( "Saad Hussain"    , 21 , 99967868686 , 1230124324428 , "Peshawer" , 5  ) ;
    voter[5].set_details  ( "Syed Shahzaib"   , 20 , 45513131315 , 1530114234229 , "Peshawer" , 6  ) ;
    voter[6].set_details  ( "Raheel Malik"    , 22 , 67812313312 , 1650113123121 , "Peshawer" , 7  ) ;   
    voter[7].set_details  ( "Abdullah"        , 21 , 77798971312 , 1450146464642 , "Peshawer" , 8  ) ;
    voter[8].set_details  ( "M.Luqman"        , 21 , 88839758329 , 1350119387173 , "Peshawer" , 9  ) ;
    voter[9].set_details  ( "M.Yasser"        , 20 , 13213123567 , 1750196293444 , "Peshawer" , 10 ) ;
    voter[10].set_details ( "Jawad Iqbal"     , 22 , 56631233537 , 1640571938975 , "Peshawer" , 11 ) ;
    voter[11].set_details ( "Abdul-Salam"     , 21 , 66820858280 , 1570110823036 , "Peshawer" , 12 ) ;
    voter[12].set_details ( "Shahid Aziz "    , 22 , 99997492937 , 1250234878397 , "Peshawer" , 13 ) ;
    voter[13].set_details ( "M.Mudasser"      , 20 , 88897243024 , 1370129743848 , "Peshawer" , 14 ) ;
    voter[14].set_details ( "Wajid Saleem"    , 21 , 33362834920 , 1520311830199 , "Peshawer" , 15 ) ;
    voter[15].set_details ( "Zohaib"          , 22 , 92837497243 , 1350312313123 , "Peshawer" , 16 ) ;
    voter[16].set_details ( "Faizan"          , 22 , 22234958111 , 1520198374911 , "Peshawer" , 17 ) ;
    voter[17].set_details ( "Abdul Basit"     , 20 , 11138465352 , 1750397249822 , "Peshawer" , 18 ) ;
    voter[18].set_details ( "Sudais Hassan"   , 22 , 11983658386 , 1350487326403 , "Peshawer" , 19 ) ;
    voter[19].set_details ( "Mazher Khan"     , 21 , 45671387613 , 1430787234684 , "Peshawer" , 20 ) ;
    // Entering the 3 Candidates details
    Candidate candidate_1 , candidate_2 , candidate_3 ;
    candidate_1.candidate_details ( "Imran Khan"    , "PTI"   ) ;
    candidate_2.candidate_details ( "Nawaz Sharif"  , "PML-N" ) ;
    candidate_3.candidate_details ( "Asif Zardari"  , "PPP-P" ) ;
    // Displaying the Details of Candidates
    candidate_1.display_candidates() ;
	candidate_2.display_candidates() ;
	candidate_3.display_candidates() ;
    // Now voter verification
        int continueVoting;
        int i;
        cout << "Voter verification: " << endl;
        do {
        cout << "Enter Your voter id: ";
        cin >> voterID;
        // Find the voter by ID
        for (i = 0; i < 20; i++) {
            if (voter[i].voter_id == voterID) {
                cout << "\nVoter verified." << endl;
                voter[i].display_voter_details();

                // Cast the vote
            int candidateChoice;
                cout << "Enter the vote for your candidate : " << endl ;
                cout << "Press 1 for PTI   : " << endl ;
                cout << "Press 2 for PML-N : " << endl ;
                cout << "Press 3 for PPP-P : \n" << endl ;
                cout << "Select Your Choice : " ;
                cin >> candidateChoice;

            if (candidateChoice == 1) {
                    candidate_1.votes++;
                     cout << "You voted for " << candidate_1.name << " from " << candidate_1.party_name << endl;
                } else if (candidateChoice == 2) {
                    candidate_2.votes++;
                    cout << "You voted for " << candidate_2.name << " from " << candidate_2.party_name << endl;
                } else if (candidateChoice == 3) {
                    candidate_3.votes++;
                    cout << "You voted for " << candidate_3.name << " from " << candidate_3.party_name << endl;
                } else {
                    cout << "Invalid candidate choice. Please try again." << endl;
                continue;
                }

            break;
                }
                }
            if (i == 20) {
                cout << "Wrong voter ID. Please try again." << endl;
                }
                cout << "Do you want to verify another voter? (Press 1 to continue, 0 to exit): ";
                cin >> continueVoting;
        }   while (continueVoting == 1);
                cout << "Thank you for your voting." << endl;
                cout << "--------------------------" << endl;
            cout << "--------------------------" << endl;
            cout << "Voting Results:" << endl;
            cout << "--------------------------" << endl;
            cout << "Candidate: " << candidate_1.name << endl;
            cout << "Party: " << candidate_1.party_name << endl;
            cout << "Votes: " << candidate_1.votes << endl;
            cout << "--------------------------" << endl;
            cout << "Candidate: " << candidate_2.name << endl;
            cout << "Party: " << candidate_2.party_name << endl;
            cout << "Votes: " << candidate_2.votes << endl;
            cout << "--------------------------" << endl;
            cout << "Candidate : " << candidate_3.name << endl;
            cout << "Party     : " << candidate_3.party_name << endl;
            cout << "Votes     : " << candidate_3.votes << endl ;
            cout << "--------------------------" << endl;
    return 0;
}
