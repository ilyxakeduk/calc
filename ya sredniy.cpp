#include <iostream>
#include "sredniy.h"

int main()
{
    humans human;

    std::string name;
    std::string last_name;

    std::cout<<"Name: ";
    getline(std::cin, name);

    std::cout<<"Last name: ";
    getline(std::cin, last_name);

    human.set_name(name);
    human.set_last_name(last_name);

    int scores[17];
    int sum=0;

    for (int i=0; i<17; ++i){
        std::cout<< "Score "<<i+1<<": ";
        std::cin>>scores[i];
        sum += scores[i];
    }

    human.set_scores(scores);
    float average_ball=sum/17.0;
    human.set_average_ball(average_ball);
    std::cout << "Average ball for "<<human.get_name()<< " "
         <<human.get_last_name()<< " is "
         <<human.get_average_ball()<<std::endl;
    system("pause");

    return 0;
}
