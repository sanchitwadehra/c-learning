#include "issuing.cpp"
int main()
{
    system("cls");
    sample_data();
    sorting();
    int n;
    cout << "Welcome to LMS\n";
    cout << "Are you a student or a staff member?\n";
    cout << "1. Register\n2. Login\n";
    cin >> n;
    switch (n)
    {
    case 1:
    {
        system("cls");
        reg();
        break;
    }
    case 2:
    {
        system("cls");
        log();
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