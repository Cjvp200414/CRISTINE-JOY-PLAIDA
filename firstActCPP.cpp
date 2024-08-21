#include <iostream>
using namespace std;

void listFileDetail() {
    int choice;
    cout << "\tLIST FILE DETAIL" << endl;
    cout << "\t----------------------" << endl;
    cout << "1. List All Files"<< endl;
    cout << "2. List of Extension Files"<< endl;
    cout << "3. List of Name Wise"<< endl;
        cout << "Enter your choice: ";
        cin >> choice;
}

void listOfAllFiles() {
    cout << "\nList of All(*.*) Files" << endl;
    cout << "file1.txt" << endl;
    cout << "file2.cpp" << endl;
    cout << "report.doc" << endl;
    cout << "image.jpg" << endl;
    cout << "(continues...)" << endl;
    cout << "\nTotal Files: 4"<< endl;
    cout << "Press any key to continue...\n"<< endl;
}

void createDirecName() {
    string direcName;
    cout << "Enter the Directory name: "<< endl;
    cin >> direcName;
    cout << "Current directory: C:\\Users\\UserName\\Documents"<< endl;
    cout << direcName << " Directory Successfully Created"<< endl;
    cout << "Press any key to continue...\n"<< endl;
}



int main() {
    listFile();
    listOfAllFiles();
    createDirecName();
    return 0;
}








