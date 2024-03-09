#include <iostream>
#include <filesystem>
#include <fstream>

using namespace std;
namespace fs = std::filesystem;

string currentPath = "C:/Users";

void displayMenu() {
    cout << "Command-Line File Manager\n";
    cout << "0. Current path\n";
    cout << "1. Go to path\n";
    cout << "2. List files and directories\n";
    cout << "3. Open directory\n";
    cout << "4. Close directory\n";
    cout << "5. Create directory\n";
    cout << "6. View file contents\n";
    cout << "7. Copy file\n";
    cout << "8. Move file\n";
    cout << "9. Exit\n";
    cout << "Enter your choice: ";
}

void listFilesAndDirectories() {
    for (const auto& entry : fs::directory_iterator(currentPath)) {
        cout << entry.path().filename() << '\n';
    }
}

void goToPath(){
    string newPath;
    cout<<"Enter directory path: ";
    cin >> ws;
    getline(cin, newPath);

    if(fs::is_directory(newPath)){
        currentPath = newPath;
        cout<<"Successfully went to path: " << currentPath <<'\n';
    }
    else cout<<"Wrong path\n";
}

void openDirectory(){
    string dir;
    cout<<"Enter directory name: ";
    cin >> ws;
    getline(cin, dir);

    dir = currentPath + "/" + dir;
    if(fs::is_directory(dir)){
        currentPath = dir;
        cout<<"Successfully opened directory: " << dir <<'\n';
    }
    else cout<<"Wrong name\n";
}

void closeDirectory(){
    auto it = currentPath.rfind('/');

    if(it != -1){
        currentPath.erase(currentPath.begin() + it, currentPath.end());
        cout<<"Successfully went back to directory: "<< currentPath <<'\n';
    }
    else cout<<"Can't go back\n";
}

void createDirectory() {
    string dir;
    cout << "Enter directory name: ";
    cin >> ws;
    getline(cin, dir);

    fs::create_directory(currentPath + "/" + dir);
    cout << "Directory created successfully.\n";
}

void viewFileContents() {
    string fileName;
    cout << "Enter file name: ";
    cin >> ws;
    getline(cin, fileName);

    ifstream file(currentPath + "/" + fileName);
    if (file.is_open()) {
        cout << "File contents:\n";
        string line;
        while (getline(file, line)) {
            cout << line << '\n';
        }
        file.close();
    } else {
        cout << "Unable to open file.\n";
    }
}

void copyFile() {
    string fileName;
    cout << "Enter file name to copy: ";
    cin >> ws;
    getline(cin, fileName);

    string destinationPath;
    cout << "Enter the destination directory: ";
    cin >> ws;
    getline(cin, destinationPath);

    fs::copy_file(currentPath + "/" + fileName, destinationPath + "/" + fileName, fs::copy_options::overwrite_existing);
    cout << "File copied successfully to " << destinationPath << ".\n";
}

void moveFile() {
    string fileName;
    cout << "Enter file name to move: ";
    cin >> ws;
    getline(cin, fileName);

    string destinationPath;
    cout << "Enter the destination directory: ";
    cin >> ws;
    getline(cin, destinationPath);

    fs::rename(currentPath + "/" + fileName, destinationPath + "/" + fileName);
    cout << "File moved successfully to " << destinationPath << ".\n";
}


int main() {
    string input;
    int choice;

    do {
        cout<<'\n';
        displayMenu();
        cin >> ws;
        getline(cin, input);
        if(input.size() > 1 || !(input[0] >= '0' && input[0] <= '9')) choice = 10;
        else choice = input[0] - '0';
        cout<<'\n';

        switch (choice) {
        case 0:
            cout<<"Current path is: " << currentPath <<'\n';
            break;
        case 1:
            goToPath();
            break;
        case 2:
            listFilesAndDirectories();
            break;
        case 3:
            openDirectory();
            break;
        case 4:
            closeDirectory();
            break;
        case 5:
            createDirectory();
            break;
        case 6:
            viewFileContents();
            break;
        case 7:
            copyFile();
            break;
        case 8:
            moveFile();
            break;
        case 9:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 9);

    return 0;
}
