#include <iostream>

using namespace std;


struct Student
{
   string name;
   int age;                               // <<-- FIRST PALAGI, PAG DECLARE NG STRUCT
   double mark;
};

// ---------------------------------------------------------------------------------------------------------------------

void display(Student s[],int n)
{
    cout << "\n\nStudent Info\n\n";
    for (int i = 0; i < n; i++)
    {
        cout 
        << "Student " << i + 1 << "\n"    // <<-- FOR DISPLAY LANG ULIT, PWEDE NAMAN I CODE SA LOOB NG MAIN FUNCTION
        << "Name: " << s[i].name << "\n"
        << "Age: " << s[i].age << "\n"
        << "Mark: " << s[i].mark << "\n\n";
    }
}

// ---------------------------------------------------------------------------------------------------------------------

int main()
{
    int n;
    
    cout << "Num of Students: ";
    cin >> n;
    
    Student s[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i+1 << "\n";
        
        cin.ignore();// wag pansinin
                                                // <<-- PAG ASSIGN NG VALUES SA ARRAY NA STRUCT
        cout << "Name: ";
        getline(cin, s[i].name);
        
        cout << "Age: ";
        cin >> s[i].age;
        
        cout << "Mark: ";
        cin >> s[i].mark;
    }
    
    display(s, n);
    
}