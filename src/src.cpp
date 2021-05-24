#include <iostream>
#include <thread>
#include <stdio.h>

class Scenestate
{
    public:
        virtual ~Scenestate(){}
        virtual void sceneChange(){}
};

class SceneChange :public Scenestate
{
    virtual void sceneChange()
    {
        
   }
};
int main()
{
    int i;
    for (i = 0; i < 16; i++)
    {
        std::cout << "credit\n";

        std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ

        std::cout << "title\n";

        std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ

        std::cout << "opening\n";

        std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ

        std::cout << "demo\n";

        std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ

        continue;
    }
}


