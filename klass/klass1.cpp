#include <iostream>
using namespace std;

class NewYear
{
private:
        int current_year;
        int the_next_year;
public:
       NewYear() : current_year(0), the_next_year(0)
       {
                 
       }
       NewYear(int c, int n) : current_year(c), the_next_year(n)
       {}
       NewYear(int c) : current_year(c)
       {
             the_next_year = ++c;    
       }
       void set()
       {
        cout << "������� ������� ���: ";
        cin >> current_year;
        cout << "������ ��������� ���: ";
        cin >> the_next_year;   
       }
       
       void show()
       {
           cout << "������� ���: " << current_year << endl;
           cout << "��������� ���: " << the_next_year << endl;
       }
};

int main()
{
    setlocale(0, "");
    
    NewYear n1;
    NewYear n2(1999,2000);
    NewYear n3(2014);
    cout << "���������� n1" << endl;
    n1.show();
    cout << endl;
    cout << "���������� n2" << endl;
    n2.show();
    cout << endl;
    cout << "���������� n3" << endl;
    n3.show();
    cout << endl;
    system("pause");
    return 0;
}
