#include <bits/stdc++.h>
using namespace std;

void find_midpoint() {
    // Input times
    string start, end;
    cin >> start >> end;
    
    // Extract hours and minutes
    int h1 = stoi(start.substr(0, 2));
    int m1 = stoi(start.substr(3, 2));
    int h2 = stoi(end.substr(0, 2));
    int m2 = stoi(end.substr(3, 2));
    
    // Convert times to total minutes
    int start_minutes = h1 * 60 + m1;
    int end_minutes = h2 * 60 + m2;
    
    // Find the midpoint in total minutes
    int mid_minutes = (start_minutes + end_minutes) / 2;
    
    // Convert back to hours and minutes
    int h3 = mid_minutes / 60;
    int m3 = mid_minutes % 60;
    
    // Output the result in hh:mm format
    printf("%02d:%02d\n", h3, m3);
}

int main() {
    find_midpoint();
    return 0;
}
