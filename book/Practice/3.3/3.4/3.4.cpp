#include <iostream>

using namespace std;
int main(){
    const int HOUR = 24;
    const int MINUTE = 60;
    const int SECOND = 60;
    int time;
    
    cout << "Enter the number of seconds: ";
    cin >> time;
    
    int days = time/(HOUR*MINUTE*SECOND);
    int hours = (time - (days*HOUR*MINUTE*SECOND)) / (MINUTE*SECOND);
    int minutes = (time - (days*HOUR*MINUTE*SECOND) - (hours*MINUTE*SECOND)) / SECOND;
    int seconds = time - (days*HOUR*MINUTE*SECOND) - (hours*MINUTE*SECOND) - (minutes*SECOND);
    
    cout << time << " seconds = " << days << " days, " << hours << " hours, "
         << minutes << " minutes, " << seconds << " seconds" << endl;
         
    return 0;
}

