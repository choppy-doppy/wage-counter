#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>

using namespace std;

void displayTime(int hours, int minutes, int seconds) {
    system("cls");

    cout << hours << ":"
         << minutes << ":"
         << seconds << endl;

}

int main() {

    cout << "Enter Wage" << endl;

    float userWage;
    cin >> userWage;

    int hour = 0;
    int minute = 0;
    int second = 0;

    float wageSecond = 0.00;

    for ( ; ; ) {
        Sleep(1000);
        // system("CLS");

        second++;

        wageSecond++;
        float calculatedWage = wageSecond * (userWage / 3600);

        float roundedWage = roundf(calculatedWage * 100) / 100;

        if(second > 59) {
            minute++;
            second = 0;
        }

        if(minute > 59) {
            hour++;
            minute = 0;
        }

        displayTime(hour, minute, second);

        cout << "$" << roundedWage << endl;
    }
}


