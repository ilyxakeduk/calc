#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::getline;

class Caesar
{
private:
        int code;
        string str;
public: 
        void set()
        {
             cout << "������� ����� ������� ������ ������������: ";
             getline(cin,str);
             cout << "������� ����� ������: ";
             cin >> code;
             
             for (int i = 0; i < str.length(); i++)
        str[i] = (str[i] + code);
        }
        void show()
        {
             cout << "��� ���� ������������� �����: " << str << '\n';
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
