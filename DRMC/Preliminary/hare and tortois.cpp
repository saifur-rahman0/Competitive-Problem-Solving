#include <iostream>
#include <cmath>
using namespace std;

int time_to_beat_hare(int x, int y) {
    int hare_speed = x;
    int tortoise_speed = y;
    int time = 0;
    double hare_position = 0;
    int tortoise_position = 0;

    while (hare_position >= tortoise_position) {
        hare_position += hare_speed / pow(2, time);
        tortoise_position += tortoise_speed;
        time++;
    }

    return time;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int x, y;
        cin >> x >> y;

        int time_taken = time_to_beat_hare(x, y);
        cout << "Case #" << t << ": " << time_taken << endl;
    }

    return 0;
}
