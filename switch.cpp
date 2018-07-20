#include <iostream>
#include <cstdlib>
using namespace std;
int func(int x,int z)
{
    return(x,z);
}
int main()
{
    int x = 0;
    int z = 0;
    char y;
    char check;
    
    while (check != 'N' && check != 'n')
    {    
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
        check = 'k';
        // вот этот цикл
        while (check != 'N' && check != 'n' && check != 'Y' && check != 'y')
        { 
            cout << "Do you want to repeat operation?: ";
            cin >> check;
        }
        // Условие, почитай в книге какие бывают условия и условные операторы
        // && тоже самое, что в паскале был AND 
    }
    //system("pause");
    return 0;
}
