#include <iostream>
using namespace std;

double power(double x, int y) {
    if (y == 0) {
        return 1;
    }else {
        return x * power(x, y - 1);
    }
}

int sum(int n ){
    if(n==0){
        return 0;
    }else return n+sum(n-1);
}
int threeSum(int n){
    return 3*sum(n);
}
int main() {
    cout<<power(2,3)<<endl;
    cout<<sum(5)<<endl;
    cout<<threeSum(5)<<endl;
    return 0;
}