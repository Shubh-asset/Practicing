#include <iostream>
using namespace std;

class getset
{
private:
    int temperature = 0;

public:
    int getTemperature()
    {
        return temperature;
    }
    void setTemperature(int temperature)
    {
        if (temperature < 0)
        {
            this->temperature = 0;
        }
        else if (temperature > 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};

int main()
{
    getset g1;
    // g1.temperature = 1000;

    g1.setTemperature(1000);

    //  cout << "The temperature is: " << g1.temperature;
    cout << "The temperature is: " << g1.getTemperature(); // its readable
    // cout << "The temperature which is changes is: " << g1.setTemperature(1000);

    return 0;
}