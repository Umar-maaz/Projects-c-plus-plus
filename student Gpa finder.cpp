#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class Student{
	public:
		string name , id , prog_grade , phy_grade , eng_grade , calc_grade , ict_grade ;
        float prog_marks ;
        float calc_marks ;
        float ict_marks ;
        float eng_marks ;
        float phy_marks ;
        float prog_credit_hrs = 3 ;
        float calc_credit_hrs = 3 ;
        float ict_credit_hrs = 3 ;
        float eng_credit_hrs = 3 ;
        float phy_credit_hrs = 3 ;
        float prog_gpa ;
        float calc_gpa ;
        float ict_gpa ;
        float eng_gpa ;
        float phy_gpa ;
        float semester_gpa ;
        float total_grade_points ;
        float total_credit_hrs ;
        float cgpa ;
        public:
        // Method to take input from user
        void get_details() {
            cout << "\nEnter name of student: " ;
            getline( cin, name ) ;
            cout << "\nEnter roll number: " ;
            getline ( cin , id) ;
            cout << "\nEnter marks in Programming fundamentals: " ;
            cin >> prog_marks ;
            cout << "\nEnter marks in Calculus: " ;
            cin >> calc_marks ;
            cout << "\nEnter marks in ICT: " ;
            cin >> ict_marks ;
            cout << "\nEnter marks in English: " ;
            cin >> eng_marks ;
            cout << "\nEnter marks in Applied Physics: " ;
            cin >> phy_marks ;
        }
        void calculate_gpa_and_grade() {
    // calculate GPA and grade for Programming fundamentals
    if (prog_marks < 50) {
        prog_gpa = 0 ;
        prog_grade = "F" ;
    } else if (prog_marks < 55) {
        prog_gpa = 1 ;
        prog_grade = "D" ;
    } else if (prog_marks < 60) {
        prog_gpa = 1.3 ;
        prog_grade = "D+" ;
    } else if (prog_marks < 65) {
        prog_gpa = 1.6 ;
        prog_grade = "C-" ;
    } else if (prog_marks < 70) {
        prog_gpa = 2 ;
        prog_grade = "C" ;
    } else if (prog_marks < 75) {
        prog_gpa = 2.3 ;
        prog_grade = "C+" ;
    } else if (prog_marks < 80) {
        prog_gpa = 2.6 ;
        prog_grade = "B-" ;
    } else if (prog_marks < 85) {
        prog_gpa = 3 ;
        prog_grade = "B" ;
    } else if (prog_marks < 90) {
        prog_gpa = 3.3 ;
        prog_grade = "B+" ;
    } else if (prog_marks < 95) {
        prog_gpa = 3.6 ;
        prog_grade = "A-" ;
    } else{
        prog_gpa = 4 ;
        prog_grade = "A" ;
    }
    // calculate GPA and grade for Calculus
    if (calc_marks < 50) {
        calc_gpa = 0 ;
        calc_grade = "F" ;
    } else if (calc_marks < 55) {
        calc_gpa = 1 ;
         calc_grade = "D" ;
    } else if (calc_marks < 60) {
        calc_gpa = 1.3 ;
         calc_grade = "D+" ;
    } else if (calc_marks < 65) {
        calc_gpa = 1.6 ;
         calc_grade = "C-" ;
    } else if (calc_marks < 70) {
        calc_gpa = 2 ;
         calc_grade = "C" ;
    } else if (calc_marks < 75) {
        calc_gpa = 2.3 ;
         calc_grade = "C+" ;
    } else if (calc_marks < 80) {
        calc_gpa = 2.6 ;
         calc_grade = "B-" ;
    } else if (calc_marks < 85) {
        calc_gpa = 3 ;
         calc_grade = "B" ;
    } else if (calc_marks < 90) {
        calc_gpa = 3.3 ;
         calc_grade = "B+" ;
    } else if (calc_marks < 95) {
        calc_gpa = 3.6 ;
         calc_grade = "A-" ;
    } else{
        calc_gpa = 4 ;
         calc_grade = "A" ;
    }
    // calculate GPA and grade for English
    if(eng_marks<50){
        eng_gpa = 0 ; 
        eng_grade = "F" ;
    }
    else if(eng_marks<55){
        eng_gpa = 1 ; 
        eng_grade = "D" ; 
    }
    else if(eng_marks<60){
        eng_gpa = 1.3 ; 
        eng_grade = "D+" ;
    }
    else if(eng_marks<65){
        eng_gpa = 1.6 ; 
        eng_grade = "C-" ; 
    }
    else if(eng_marks<70){
        eng_gpa = 2 ; 
        eng_grade = "C" ;
    }
    else if(eng_marks<75){
        eng_gpa = 2.3 ;
        eng_grade = "C+" ;
    }
    else if(eng_marks<80){
        eng_gpa = 2.6 ;
        eng_grade = "B-" ;
    }
    else if(eng_marks<85){
        eng_gpa = 3 ;
        eng_grade = "B" ;
    }
    else if(eng_marks<90){
        eng_gpa = 3.3 ;
        eng_grade = "B+" ;
    }
    else if(eng_marks<95){
        eng_gpa = 3.6 ;
        eng_grade = "A-" ;    
    }
    else{
        eng_gpa = 4 ;
        eng_grade = "A" ;
    }
    // calculate GPA and grade for ICT
    if(ict_marks<50){
        ict_gpa = 0 ; 
        ict_grade = "F" ;
    }
    else if(ict_marks<55){
        ict_gpa = 1 ; 
        ict_grade = "D" ; 
    }
    else if(ict_marks<60){
        ict_gpa = 1.3 ; 
        ict_grade = "D+" ;
    }
    else if(ict_marks<65){
        ict_gpa = 1.6 ; 
        ict_grade = "C-" ;
    }
    else if(ict_marks<70){
        ict_gpa = 2 ; 
        ict_grade = "C" ;
    }
    else if(ict_marks<75){
        ict_gpa = 2.3 ;
        ict_grade = "C+" ;
    }
    else if(ict_marks<80){
        ict_gpa = 2.6 ;
        ict_grade = "B-" ;
    }
    else if(ict_marks<85){
        ict_gpa = 3 ;
        ict_grade = "B" ;
    }
    else if(ict_marks<90){
        ict_gpa = 3.3 ;
        ict_grade = "B+" ;
    }
    else if(ict_marks<95){
        ict_gpa = 3.6 ;
        ict_grade = "A-" ;    
    }
    else{
        ict_gpa = 4 ;
        ict_grade = "A" ; 
    }
    // calculate GPA and grade for Physics
    if(phy_marks<50){
        phy_gpa = 0 ; 
        phy_grade = "F" ;
    }
    else if(phy_marks<55){
        phy_gpa = 1 ; 
        phy_grade = "D" ;
    }
    else if(phy_marks<60){
        phy_gpa = 1.3 ; 
        phy_grade = "D+" ;
    }
    else if(phy_marks<65){
        phy_gpa = 1.6 ; 
        phy_grade = "C-" ;
    }
    else if(phy_marks<70){
        phy_gpa = 2 ; 
        phy_grade = "C" ;
    }
    else if(phy_marks<75){
        phy_gpa = 2.3 ;
        phy_grade = "C+" ;
    }
    else if(phy_marks<80){
        phy_gpa = 2.6 ;
        phy_grade = "B-" ;
    }
    else if(phy_marks<85){
        phy_gpa = 3 ;
        phy_grade = "B" ;
    }
    else if( phy_marks < 90 ){
        phy_gpa = 3.3 ;
        phy_grade = "B+" ;
    }
    else if( phy_marks < 95 ){
        phy_gpa = 3.6 ;
        phy_grade = "A-" ;
    }
    else{
        phy_gpa = 4 ;
        phy_grade = "A" ;
    }
    }
	    // Method to calculate semester GPA for the student
 	void calculate_semester_gpa(){
    	total_grade_points = ( prog_gpa * prog_credit_hrs ) + ( calc_gpa * calc_credit_hrs ) + ( ict_gpa * ict_credit_hrs ) + ( eng_gpa * eng_credit_hrs ) + ( phy_gpa * phy_credit_hrs ) ;
		total_credit_hrs = prog_credit_hrs + calc_credit_hrs + ict_credit_hrs + eng_credit_hrs + phy_credit_hrs ;
		 semester_gpa = total_grade_points / total_credit_hrs ;
	}
	    // Method to calculate CGPA for the student
    void calculate_cgpa() {
            cgpa = semester_gpa ;
    }
      void calculate_multiple_semester_cgpa(float prev_cgpa, float prev_total_credit_hrs) {
        cgpa = (semester_gpa * total_credit_hrs + prev_cgpa * prev_total_credit_hrs) / (total_credit_hrs + prev_total_credit_hrs);
}
        // Method to display student's details, grades, and GPA   
    void display_data(){
        cout << "Student Name  : " << name << endl ;
        cout << "\nStudent Id  : " << id << endl ;
        cout << "\nProgramming : Gpa : " << prog_gpa << "\t: Grade : " << prog_grade << endl ;
		cout << "\nCalculus    : Gpa : " << calc_gpa << "\t: Grade : " << calc_grade << endl ;
		cout << "\nEnglish     : Gpa : " << eng_gpa <<  "\t: Grade : " << eng_grade << endl ;
		cout << "\nPhysics     : Gpa : " << phy_gpa <<  "\t: Grade : " << phy_grade << endl ;
		cout << "\nI C T       : Gpa : " << ict_gpa <<  "\t: Grade : " << ict_grade << endl ;
		cout << "\nStudent's semester gpa : " << semester_gpa << endl ;
		cout << "\nStudent's cgpa         : " << cgpa << endl ;
    }    
};
int main() {
    int ch;  // Variable to store user's choice for entering data for the next semester.
    float prev_cgpa = 0.0;  // Variable to store CGPA of the previous semester. Initialized to 0.0.
    float prev_total_credit_hrs = 0.0;  // Variable to store total credit hours completed until the previous semester. Initialized to 0.0.
    Student student;  // Creating an instance of the Student class.

    for (int semester = 1; semester <= 8; semester++) {  // Loop for each semester, starting from 1 and ending at 8.
        cout << "Enter details for Semester " << semester << endl;  // Prompting the user to enter details for the current semester.
        student.get_details();  // Invoking the get_details method of the student object to get input for the current semester.
        student.calculate_gpa_and_grade();  // Calculating GPA and grade for each subject based on the input marks.
        student.calculate_semester_gpa();  // Calculating the semester GPA by averaging the GPAs of all subjects.
        student.calculate_cgpa();  // Calculating the CGPA for the current semester.
        if (semester > 1) {
            student.calculate_multiple_semester_cgpa(prev_cgpa, prev_total_credit_hrs);  // Calculating the CGPA for the current and previous semester combined.
        }
        student.display_data();  // Displaying the calculated GPA, grade, and CGPA for the current semester.
        prev_cgpa = student.cgpa;  // Updating the previous CGPA with the CGPA of the current semester.
        prev_total_credit_hrs = student.total_credit_hrs;  // Updating the previous total credit hours with the total credit hours of the current semester.

        cout << "\nDo you want to enter the data for the next semester? (1 for Yes, 0 for No): ";
        cin >> ch;  // Reading the user's choice from the standard input.
        cin.ignore();  // Ignoring any remaining characters in the input buffer, particularly the newline character.

        if (ch != 1) {  // Checking if the user entered a value other than 1, indicating they do not want to enter data for the next semester.
            break;  // Exiting the loop.
        }
    }

    return 0;  // End of the main function.
}
