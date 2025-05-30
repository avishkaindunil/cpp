#include <iostream>
#define LOG(x) std::cout << x << std::endl
using namespace std;

struct Player
{
//    private: 
    int x, y;
    int speed;

   void Move(int xa, int ya){
        x =+ xa * speed;
        y =+ ya * speed;
   }
};

struct Vec2
{
    float x, y;

    void Add(const Vec2& other){
        x += other.x;
        y += other.y;
    }
};



int main() {
    Player player;
    player.Move(1, -1); 

    LOG("Player position: ");
    LOG("x: " << player.x << ", y: " << player.y);

    return 0;
}
