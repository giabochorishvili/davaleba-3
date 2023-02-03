#include <iostream>
using namespace std;


int main(){

    int sum=0;
    int i;

    for ( i = 1; i <= 10; i++)
    {
        cout << i << " ";
        sum =sum + i;
    }
    cout << endl;
    cout << "sum is :  " << sum ;

    

    cin.get();
    return 0;
}