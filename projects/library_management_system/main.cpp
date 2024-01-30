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
        student();
        break;
    }
    case 2:
    {
        staff();
        break;
    }
    case 3:
    {
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