#include<bits\stdc++.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <limits>

using namespace std;

void gotocr(int col, int row)
{
    COORD coord = {0, 0};
    coord.X = col;
    coord.Y = row;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


}

int main()
{
    gotocr(50, 10);
    cout << "Welcome To the GPA Calculator" << endl;

    Sleep(3000);
    system("cls");

    cout << "Enter How Many Subjects You Have in This Semester (Including Lab)" << endl;
    int n;
    cin >> n;
    system("cls");

    vector<pair<float, float>> v(n);
    cout << "Enter Your GPA and Credits \n(Example: GPA=3.00  Credits=1.50)" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". GPA= ";
        cin >> v[i].first;
        cout << i + 1 << ". Credits= ";
        cin >> v[i].second;
    }

    float gpa = 0;
    float cre = 0;
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += v[i].first * v[i].second;
        cre += v[i].second;
    }

    gpa = sum / cre;

    cout << fixed << setprecision(2) << gpa << endl;

    return 0;
}
