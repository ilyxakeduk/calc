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
        // ��� ���� ����
        while (check != 'N' && check != 'n' && check != 'Y' && check != 'y')
        { 
            cout << "Do you want to repeat operation?: ";
            cin >> check;
        }
        // �������, ������� � ����� ����� ������ ������� � �������� ���������
        // && ���� �����, ��� � ������� ��� AND 
    }
    //system("pause");
    return 0;
}
