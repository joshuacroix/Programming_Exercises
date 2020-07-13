#include <iostream>
#include <cstdlib>
#include "Stress_ball.h"

using namespace std;

enum class Stress_ball_colors(red, blue, yellow, green);

enum class Stress_ball_sizes(small, medium, large);

class Stress_ball
{
    public:
    Stress_ball_colors color;
    Stress_ball_sizes size;

    Stress_ball()
    {
        c = Stress_ball_colors(rand() % 4);
        s = Stress_ball_sizes(rand() % 3);
        color = c;
        size = s;
    }
    Stress_ball(Stress_ball_colors c, Stress_ball_sizes s)
    {
        this->color = c;
        this->size = s;
    }
    ~Stress_ball(){}
    get_color(){return color;}
    get_size(){return size;}

    Stress_ball operator==(const Stress_ball& sb)
    {
        if (color == sb.color && size == sb.size)
            {
                return true;
            }
        else
        return false;
    }
    Stress_ball operator<<(std::ostream& o, const Stress_ball& sb)
    {
        cout << "(" << color << ", " << size << ")" << endl;
    }
};

int main(){
  srand(time(NULL));
  
  cout << "Default constructor test:\n";
  Stress_ball arr_test[5];
  for(int i = 0; i < 5; i++){
    arr_test[i] = Stress_ball();
    cout << i << ": " << arr_test[i] << endl;
  }

  cout << "\nTwo arg constructor test:\n";
  Stress_ball test2(Stress_ball_colors::red, Stress_ball_sizes::small);
  cout << test2 << endl;

  Stress_ball test3(Stress_ball_colors::green, Stress_ball_sizes::large);
  cout << test3 << endl;

  cout << "\nCompare stress balls:\n";
  for (int i = 0; i < 5; i++) {
    if (arr_test[i] == test2) {
      cout << "arr_test[" << i << "] equal test2\n";
    } else if (arr_test[i] == test3) {
      cout << "arr_test[" << i << "] equal test3\n";
    } else {
      cout << "arr_test[" << i << "] not equal test2 nor test3\n";
    }
  }
  
}