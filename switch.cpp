#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int x = 0;
    int z = 0;
    char y;
    cin >> x >> y >> z ;
        switch (y){
            case '-':
                 cout << x - z << endl;
                 break;
            case '+':
                 cout << x + z << endl;
                 break;
            case '*':
                 cout << x * z << endl;
                 break;
            case '/':
                 cout << x / z << endl;
                 break;
        }
        system("pause");
        return 0;
}
