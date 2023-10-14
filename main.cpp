#include <iostream>
#include <windows.h>

using namespace std;

void displayTime(int hours, int minutes, int seconds) {
    system("cls");

    cout << hours << ":"
         << minutes << ":"
         << seconds << endl;

}

int main() {

    cout << "Enter Wage" << endl;

    double userWage;
    cin >> userWage;

    int hour = 0;
    int minute = 0;
    int second = 0;

    double wageSecond = 0;

    for ( ; ; ) {
        Sleep(1000);
        // system("CLS");

        second++;

        wageSecond++;
        double calculatedWage = wageSecond * (userWage / 3600);

        if(second > 59) {
            minute++;
            second = 0;
        }

        if(minute > 59) {
            hour++;
            minute = 0;
        }

        displayTime(hour, minute, second);

        cout << calculatedWage << endl;
    }
}


