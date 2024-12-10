#include <iostream>
using namespace std;
int main()
{
    // printing value from 1 to 10 by using for , while & do while loop

    int i;
    for (i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    cout << "Now we are printing values by using while loop" << endl;

    int j = 1;
    while (j <= 10)
    {      cout << j << endl;
        j++;
    }
    cout<<"Now using do-while loop to print numbers from 1 to 10" <<endl;

    int k;
    
    // do{
    //     cout << k << endl;
    //     k++;
    // }while(k<=10);

    do
    {
        cout<< k <<endl;
        k++;
    } while (k<=10);
    
    
}

  
