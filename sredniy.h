#include <string>

class Students {
    public:
        void set_name(std::string student_name)
        {
            name = student_name;
        }
        std::string get_name()
        {
            return name;
        }
        void set_last_name(std::string student_last_name)
        {
            last_name = student_last_name;
        }
        std::string get_last_name()
        {
            return last_name;
        }
        void set_scores(int student_scores[])
        {
            for (int i = 0; i<17; ++i) {
                scores[i] = student_scores[i];
            }
        }
        void set_average_ball(float ball)
        {
            average_ball = ball;
        }
        float get_average_ball()
        {
            return average_ball;
        }

    private:
        int scores[17];
        float average_ball; 
        std::string name;
        std::string last_name;
};
