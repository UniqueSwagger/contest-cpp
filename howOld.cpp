#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int currentDay, currentMonth, currentYear, birthDay, birthMonth, birthYear;
        char c; // why do we need this? because we need to read the / character from the input stream and we don't need to store it anywhere so we just store it in a variable that we don't use anywhere else in the program.
        cin >> currentDay >> c >> currentMonth >> c >> currentYear;
        cin >> birthDay >> c >> birthMonth >> c >> birthYear;
        // calculate the age by subtracting the current year from the birth year
        int age = currentYear - birthYear;
        // if the current month is less than the birth month, then the person has not had their birthday yet
        if (currentMonth < birthMonth)
            age--;
        // if the current month is the same as the birth month, then we need to check the day
        else if (currentMonth == birthMonth)
        {
            // if the current day is less than the birth day, then the person has not had their birthday yet
            if (currentDay < birthDay)
                age--;
        }
        if (age < 0)
            cout << "Case #" << i + 1 << ": Invalid birth date" << endl;
        else if (age > 130)
            cout << "Case #" << i + 1 << ": Check birth date" << endl;
        else
            cout << "Case #" << i + 1 << ": " << age << endl;
    }

    return 0;
}