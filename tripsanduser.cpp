#include <iostream>
using namespace std;
struct Trip {
    int user_id, start_location, end_location;
};

int trips[100];
int users[100];
int count(int trip_count, int user_count) {
    int unique_trips = 0,i,j;
    for ( i = 0; i < trip_count; ++i) {
        if (trips[i] != -1) {
            j = trips[i];
            if (trips[j] != -1) {
                trips[i] = -1;
                trips[j] = -1;
            } else {
                unique_trips++;
            }
        }
    }
    int unique_users = 0;
    for (int i = 0; i < user_count; ++i) {
        if (users[i] != 0) {
            int trip_count = 0;
            for (int j = 0; j < trip_count; ++j) {
                if (trips[j] == i) {
                    trip_count++;
                }
            }
            if (trip_count == 1) {
                users[i] = 0;
            } else {
                unique_users++;
            }
        }
    }
    return unique_trips + unique_users;
}
int main() {
    int n, i, user_id, start_location, end_location;
    cout << "Enter the number of trips: ";
    cin >> n;
    for ( i = 0; i < n; ++i) {
        cout << "Enter trip " << i + 1 << " data (user_id, start_location, end_location): ";
        cin >> user_id >> start_location >> end_location;
        trips[i] = user_id;
        if (users[user_id] == 0) {
            users[user_id] = 1;
        }
    }
    int trip_count = 0, user_count = 0;
    for (int i = 0; i < n; ++i) {
        if (trips[i] != -1) {
            trip_count++;
        }
        if (users[trips[i]] != 0) {
            user_count++;
        }
    }
    int result = count(trip_count, user_count);
    cout << "The number of trips and users is: " << result << endl;
    return 0;
}
