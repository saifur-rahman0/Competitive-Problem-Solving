#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Date {
    int day, month, year;
};

bool compareDates(const Date &a, const Date &b) {
    if (a.year != b.year) {
        return a.year < b.year;
    } else if (a.month != b.month) {
        return a.month < b.month;
    } else {
        return a.day < b.day;
    }
}

void parseDate(string dateStr, Date &date) {
    sscanf(dateStr.c_str(), "%d/%d/%d", &date.day, &date.month, &date.year);
}

void beautifulDates(vector<Date> &dates) {
    sort(dates.begin(), dates.end(), compareDates);
    for (int i = 0; i < dates.size(); ++i) {
        if(dates[i].day < 10 && dates[i].month < 10){
            cout << "0"<<dates[i].day << "/0" << dates[i].month << "/" << dates[i].year << endl;
        }
        else if(dates[i].day < 10){
            cout << "0"<<dates[i].day << "/" << dates[i].month << "/" << dates[i].year << endl;
        }
        else if(dates[i].month < 10){
            cout << ""<<dates[i].day << "/0" << dates[i].month << "/" << dates[i].year << endl;
        }
        else{
            cout << dates[i].day << "/" << dates[i].month << "/" << dates[i].year << endl;
        }

    }
}

int main() {
    int t;
    cin >> t;
    for (int testCase = 1; testCase <= t; ++testCase) {
        int n;
        cin >> n;
        vector<Date> dates(n);
        for (int i = 0; i < n; ++i) {
            string dateStr;
            cin >> dateStr;
            parseDate(dateStr, dates[i]);
        }
        cout << "Case #" << testCase << ":" << endl;
        beautifulDates(dates);
    }
    return 0;
}
