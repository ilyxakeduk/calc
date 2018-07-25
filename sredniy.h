#include <string>

class humans {
    public:
        void set_name(std::string humans_name)
        {
            name = humans_name;
        }
        std::string get_name()
        {
            return name;
        }
        void set_last_name(std::string humans_last_name)
        {
            last_name = humans_last_name;
        }
        std::string get_last_name()
        {
            return last_name;
        }
        void set_scores(int humans_scores[])
        {
            for (int i = 0; i<17; ++i) {
                scores[i] = humans_scores[i];
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
