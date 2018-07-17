#include <iostream>

using namespace std; 

int main () {


cout << "AK's money laundering services." <<  endl;

int small (200); 
cout << "\nWe charge $" << 200 << " for small loads." << endl; 

int large (500);
cout << "\nWe charge $" << 500 << " for large loads." << endl; 

int smallLoads (0); 
cout << "\nEnter your amount of small loads." << endl;
cin >> smallLoads; 
cout << "\nYour cost for small loads $" << small * smallLoads << endl;

int largeLoads (0); 
cout << "\nEnter your amount of large loads." << endl;
cin >> largeLoads; 
cout << "\nYour cost for large loads $" << large * largeLoads << endl;

cout << "\nYour costs will be $" << (small * smallLoads) +
                                    (large * largeLoads) << endl;

 double salesTax (.06); 
cout << "\nYour costs with tax $" << ((small * smallLoads) + (large * largeLoads)) + 
                                     (((small * smallLoads) + (large * largeLoads)) * salesTax) << endl;

int estimateExpiry (30);
cout << "\nYour estimate is vaild for " << estimateExpiry << " days." << endl;

return (0);
}
