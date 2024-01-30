#include "issuing.cpp"
int main()
{
    system("cls");
    sample_data();
    sorting();
    int n;
    cout << "Welcome to LMS\n";
    cout << "Are you a student or a staff member?\n";
    cout << "1. Student\n2. Staff\n3. Register\n";
    cin >> n;
    switch (n)
    {
    case 1:
    {
        system("cls");
        student();
        break;
    }
    case 2:
    {
        system("cls");
        staff();
        break;
    }
    case 3:
    {
        system("cls");
        reg();
        break;
    }
    default:
    {
        // Handle invalid input
        cout << "Invalid choice\n";
    }
    }
    return 0;
}