#include<iostream>
using namespace std;

int main()
{
    int x =1 ;
    int E=0, O=0;

    while (x != 0)
    {
        cout << "Enter an integer: ";
        cin >>x;
        if(x%2==0)
        {
            E++;
        }else{
            O++;
        }
    }
    
    cout << "#Even numbers = "<<E-1;
    cout << "\n#Odd numbers = "<<O;
    return 0;
}
