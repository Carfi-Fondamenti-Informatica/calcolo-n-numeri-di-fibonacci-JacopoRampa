#include <iostream>
using namespace std;

int main() {
    int a=1,b=1,c=0,n=0;
    cin >> n;
    if(n>=2){
        cout <<a << endl;
        cout << b << endl;
        for (int i=2;i<n;i++){
            c=a+b;
            a=b;
            b=c;
            cout << c <<endl;
        }
    }else{
        cout << "errore" << endl;
    }
    return 0;
}
