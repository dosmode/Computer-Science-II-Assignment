
#include <iostream>
    using namespace std;

    int main()
    {
        int a;
        cin>>a;
        int b[a];
        for(int i = 0 ; i <=a ; i++){
            cin>>b[i];
        }
        for(int j = a-1 ; a >=0 ; j--){
            cout<<b[j];
        }
        return 0;
    }

