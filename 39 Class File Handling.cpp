// Write a program in cpp to create a file and write your name into the file 
# include<iostream>
# include<fstream>
using namespace std;
int main()
{
    fstream fs;
    string name;
    fs.open("Something.txt",ios :: app);
    if(!fs) 
    {
        cout << "Error : Could not open the file!" << endl;
        return 1;
    }
    cout << "Enter your name: ";
    cin >> name ;
    fs << name;
    fs.close();
    return 0;
}