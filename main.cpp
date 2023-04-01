#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int number = 0;
    int tot;


    cout <<"input number" << endl;

    for(int i = 0; tot<7; i++){
    cin >> number;

    while(number>7){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard input
            cout<<"invalid input enter a number again "<<endl;
            cin >> number;
        };

        if(tot>7){
            return 0;
        }
    tot = tot+number;
   }

    cout <<"Total is : " << tot<< endl;
    }
