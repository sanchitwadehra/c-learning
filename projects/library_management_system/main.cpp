#include "data.cpp"
int main()
{
    int n;
    cout << "Welcome to LMS\n";
    cout << "Are you a student or a staff member?\n";
    cout << "1. Student\n2. Staff\n";
    cin >> n;
    switch (n)
    {
    case 1:
    {
        cout << "Hi, great to have you here\n";
        break;
    }
    case 2:
    {
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