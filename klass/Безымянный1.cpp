#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Caesar
{
private:
        int code;
        string str;
public: 
        void set()
        {
             cout << "Введите фразу которую хотите закодировать: ";
             getline(cin,str);
             cout << "Введите цифру сдвига: ";
             cin >> code;
             
             for (int i = 0; i < str.length(); i++)
        str[i] = (str[i] + code);
        }
        void show()
        {
             cout << "Вот ваша зашифрованная фраза: " << str << '\n';
        }   
};

int main()
{
    setlocale(0, "");
    
    Caesar c1;
    c1.set();
    c1.show();
    system("pause");
    return 0;
}
