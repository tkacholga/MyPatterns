
// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;
 

void pypart2(int n)
{
    // Number of spaces
    int i, j, k = n;
 
    
    for (i = 1; i <= n; i++) {
 
        // Inner loop for columns
        for (j = 1; j <= n; j++) {
 
            // Condition to print star pattern
            if (j >= k)
                cout << "* ";
            else
                cout << "  ";
        }
        k--;
        cout << "\n";
    }
}
 

int main()
{
    int n = 5;
      // Function Call
    pypart2(n);
    return 0;
}
