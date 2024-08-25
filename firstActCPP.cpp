#include <iostream>
using namespace std;

void listOfFile(){
	int choice;
	cout << "\t**** LIST FILE DETAILS ****\n";
	cout << "1. List All Files \n";
	cout << "2. List of Extension Files \n";
	cout << "3. List of Name Wise\n";
	cout << "Enter your Choice: ";
		cin >> choice;
}

void listOfAllFile(){
	cout << "\nList of All(*.*) Files \n";
	cout << "file1.txt\nfile2.cpp\nreport.doc\nimage.jpg\n(continues...)\n";
	cout << "\nTotal Files: 4\n";
	cout << "Press any key  to continue...\n\n";
	
}

void createDirectory(){
	string direcName;
	cout << "Enter the Directory name: \n";
		cin >> direcName;
	cout << "Current directory: C: \\Users\\UserName\\Documents\n";
	cout << direcName << "Directory Successfully Created\n";
	cout << "Press any key to continue...\n\n";
}
 
 void changeDirectory() {
    string dirName;
    int choice;
    cout << "\nCurrent Directory: C:\\Users\\UserName\\Documents\n" << endl;
    cout << "****CHANGE DIRECTORY****"<< endl;
    cout << "1. Step by Step Backward\n";
    cout << "2. Goto Root Directory\n";
    cout << "3. Forward Directory\n";
    cout << "Enter the Number: ";
    	cin >> choice;
    cout <<""<<endl;
    cout << "Please enter the Directory Name: ";
    	cin >> dirName;
    cout << "Current Directory: C:\\Users\\UserName\\Documents\\" << dirName << endl;
    cout << "Press any key  to continue...\n\n";
}

int main (){
	int choice;
    do{
        cout << "\t**** MAIN MENU ****\n";
        cout << "1. To Display List of Files\n";
        cout << "2. To Create New Directory\n";
        cout << "3. To Change the Working Directory\n";
        cout << "4. Exit\n";
        cout << "Enter the Number: ";
        cin >> choice;
  		
     
        if (choice == 1){
        	listOfFile();
            listOfAllFile();
		}else if(choice == 2){
			createDirectory();
		}else if(choice == 3){
			changeDirectory();
		}else if(choice == 4){
			cout << "Exiting..." << endl;
		}else {
			cout << "Invalid choice! Try again." << endl;
		}

    } while (choice != 4);

	return 0;
}
























