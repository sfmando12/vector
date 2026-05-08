#include <iostream>
#include <vector>
using namespace std;

vector<int> vec();

int main() {
    vector<int> hard = {10, 20, 30, 40, 50};
    vector<int> soft;
    soft = vec();


    return 0;
}

vector<int> vec() {
    vector<int> soft;
    int input;
    int num;
    int sum = 0;
    int min;
    int max;

    float avg;
    cout <<"please input 10 numbers"<<endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> input;
        soft.push_back(input);
    }

    for (int i = 0; i < soft.size(); i++) {
        cout << soft[i] << " ";
        sum += soft[i];
    }
    cout << "\nTotal: " << sum << endl;
    avg = (float) sum / 10;
    cout << "\nAverage: " << avg << endl;

    max = soft[0];
    min = soft[0];
    for (int i = 1; i < 10; i++) {
        if (soft[i] > max) {
            max = soft[i];
        }
        if (soft[i] < min) {
            min = soft[i];
        }

        cout << "\nMax: " << max << endl;
        cout << "\nMin: " << min << endl;
        return soft;
    }
}
