#ifndef ENGINE_H
#define ENGINE_H
using namespace std;


class Engine
{
public:
    Engine();
    Engine(int hp, double disp);

    int getHorsepower() const;
    void setHorsepower(int hp);
    double getDisplacement() const;
    void setDisplacement(double disp);

private:
    int horsepower;
    double displacement;
};

#endif // ENGINE_H
