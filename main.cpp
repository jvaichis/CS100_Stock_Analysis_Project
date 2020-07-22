#include <iostream>
#include <string>
#include <vector>

using namespace std;
void printMenu();
int main(){

printMenu();











    return 0;
}





void printMenu(){
char input = ' ';

while (input != 'q'){
cout << "--------- S&P 500 Stock Data ----------" << endl
     << "        02/07/2013 to 02/07/2018       " << endl
     << "Select an option from the menu:" << endl
     << "1. Add stock to portfolio" << endl
     << "2. Remove stock from portfolio" << endl
     << "3. Show single day gain" << endl
     << "4. Show gains over a period" << endl
     << "5. Show volume sold in one day" << endl
     << "6. Show individual data" << endl
     << "7. Show current portfolio" << endl
     << "Type 'q' to quit."  << endl << endl
     << "Enter a number: ";
cin >> input;
cout << endl << endl;
if (input == '1'){
    cout << "add stock" << endl << endl;
    input = ' ';

}
     else if (input == '2'){
         cout << "remove stock" << endl << endl;
         input = ' ';
     }
     else if (input == '3'){
         cout  << "show single day gain" << endl << endl;
         input = ' ';
     }
     else if (input == '4'){
         cout << "show gains over a period" << endl << endl;
         input = ' ';
     }
     else if (input == '5'){
        cout << "show volume sold" << endl << endl;
        input = ' ';
     }
     else if (input == '6'){
         cout << "show individual data" << endl << endl;
         input = ' ';
     }
     else if (input == '7'){
         cout << "show portfolio" << endl << endl;
         input = ' ';
     }
     else if (input == 'q'){
         cout << "Bye!" << endl << endl;
         break;
     }



}




}