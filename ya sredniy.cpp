#include <iostream>
#include "sredniy.h"

int main()
{
    Students student;

    std::string name;
    std::string last_name;

    std::cout<<"Name: ";
    getline(std::cin, name);

    std::cout<<"Last name: ";
    getline(std::cin, last_name);

    student.set_name(name);
    student.set_last_name(last_name);

    int scores[17];
    int sum=0;

    for (int i=0; i<17; ++i){
        std::cout<< "Score "<<i+1<<": ";
        std::cin>>scores[i];
        sum += scores[i];
    }

    student.set_scores(scores);
    float average_ball=sum/17.0;
    student.set_average_ball(average_ball);
    std::cout << "Average ball for "<<student.get_name()<< " "
         <<student.get_last_name()<< " is "
         <<student.get_average_ball()<<std::endl;
    system("pause");

    return 0;
}
