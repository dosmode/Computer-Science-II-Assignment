#include <iostream>

using namespace std;

int simpleArraySum(int n, vector <int> ar) {
    if (n==0){
        return 0;
    }else {
        return ar[n]+simpleArraySum(n--,ar[n]);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
        cin >> ar[ar_i];
    }
    int result = simpleArraySum(n, ar);
    cout << result << endl;
    return 0;
}
