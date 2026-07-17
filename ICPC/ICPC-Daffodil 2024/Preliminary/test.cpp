#include <bits/stdc++.h>
#include <iostream>
#include<conio.h>
#include <windows.h>

using namespace std;
bool terminator;
void exitProgram();


void gotocr(int col, int row)
{
    COORD coord = {0, 0};
    coord.X = col;
    coord.Y = row;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    if (!SetConsoleCursorPosition(hConsole, coord))
    {
        cerr << "Error: Unable to set cursor position." << endl;
    }
}

void calculation()
{
    cout << "Enter How Many Subjects You Have in This Semester (Including Lab)" << endl;
    int n;
    cin >> n;
    system("cls");
     system("color 24");
    vector<pair<float, float>> v(n);
    cout << "Enter Your GPA and Credits \n(Example: GPA=3.00  Credits=1.50)" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". GPA= ";
        cin >> v[i].first;
        cout << i + 1 << ". Credits= ";
        cin >> v[i].second;
    }

    float gpa;
    float cre = 0;
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += v[i].first * v[i].second;
        cre += v[i].second;
    }

    gpa = sum / cre;

    cout << fixed << setprecision(2) <<"Your GPA is : "<< gpa << endl<<endl;
    exitProgram();


}

int main()
{
    system("title GPA Calculator(By M A K)");
    system("color 07");

    gotocr(50, 10);
    cout << "Welcome To the GPA Calculator\n \t\t\t\t\t\t\t  BY M.A Kabir" << endl;

    Sleep(3000);
    system("cls");

     system("color 75");
     calculation();


    return 0;
}


void exitProgram()
    {
    ExitProgram:
        cout << " Please Choose Your Option.\n If You Want To Exit Please Press (Y/y) : \n If You don't Want To Exit Please Press (N/n) : "<<endl;
        char permission;
        cin >> permission;
        if (permission == 'y' || permission == 'Y')
        {


            terminator= false;
            system("cls");
             system("color F2");
             gotocr(50, 10);
            cout << "***Thanks For Visiting***\n \t\t\t\t\t\t\t  BY M.A Kabir" << endl;
            getch();
        }
        else if (permission == 'n' || permission == 'N')
        {
            system("cls");
            calculation();
        }
        else
        {
            cout << "\n!!OOPS!!\nInvalid Keyword.\nPlease Read the Corresponding line Carefully Before Press an Keyword.\n" << endl;
            goto ExitProgram;
        }

    }

