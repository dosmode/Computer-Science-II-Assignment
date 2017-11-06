#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n%2==0){
        return true;
    }else
        return false;

}
int main() {

    cout<<isPrime(11);
}
