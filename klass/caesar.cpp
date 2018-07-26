#include <iostream>
#include <conio.h>

const int ABCSize = 26;

const char low_ch[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', };
const char high_ch[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

std::string cipher(const std::string &input_s, const int shift)
 {
 bool Ok;
 std::string output_s("");
 for(unsigned i = 0; i < input_s.length(); i++)
  {
  Ok = false;
  for(int j = 0; j < ABCSize; j++)
   {
   if (input_s[i] == low_ch[j])
    {
    j += shift;
    while (j >= ABCSize) j -= ABCSize;
    while (j < 0) j += ABCSize;
    output_s += low_ch[j];
    Ok = true;
    break;
    }
   else if (input_s[i] == high_ch[j])
    {
    j += shift;
    while (j >= ABCSize) j -= ABCSize;
    while (j < 0) j += ABCSize;
    output_s += high_ch[j];
    Ok = true;
    break;
    }
   }
  if (!Ok) output_s += input_s[i];
  }
 return output_s;
 }

int main()
{
setlocale(0, "");
std::string s;

std::cout << "���� �� ������ ������������ ���������, ������� \"1\", ���� �������������,"
 " ������� \"2\"";

bool Ok = false;
int shift = 0;
while(!Ok)
 {
 switch(getch())
  {
  case '1':
   {
   std::cout << "\n������� ����� ������: ";
   std::cin >> shift;
   std::cout << "������ ����� ������� ������ ������������: ";
   while (std::cin >> s)
    {
    std::cout << cipher(s, shift) << ' ';
    if (std::cin.get() == '\n') break;
    }
   Ok = true;
   } break;
  case '2':
   {
   bool Done = false;
   std::cout << "\n������ ������������� �����: ";
   getline(std::cin, s);
   for (int i = 0; i < ABCSize && !Done; i++)
    {
    std::cout << "\n�� ������� ������ " << i << " ������� ����� �������:\n";
    std::cout << cipher(s, i);
    std::cout << "\n���� ����������� ������ �������, ������� \"1\"";
    if (getch() == '1') Done = true;
    }
   Ok = true;
   } break;
  default: std::cout << "Press either \"1\" or \"2\"!";
  }
 }
getch();
}
