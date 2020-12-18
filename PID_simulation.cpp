/*
目標値の定数へPIDで近づける
*/

#include "iostream"

double P_control(double Kp, double target_value, double now_value)
{
    return Kp * (target_value - now_value);
}

int main()
{
    double V = 0.0;
    int count = 0;
    while (true)
    {
        std::cout << V << ": P=" << P_control(0.9, 2.4, V) <<std::endl;
        V += P_control(1.7, 2.4, V);
        count++;
        if (count == 100)
            break;
    }
    
}