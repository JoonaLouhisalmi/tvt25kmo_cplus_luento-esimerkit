#include <iostream>
#include <memory>
#include <vector>
#include <windows.h>

#include "animal.h"
#include "dog.h"

int main()
{
     SetConsoleOutputCP(CP_UTF8);
    std::vector<std::unique_ptr<Animal>> animals;

    animals.push_back(std::make_unique<Animal>());
    animals.push_back(std::make_unique<Dog>());

    for (const auto& animal : animals) {
        animal->callOut();
    }

    return 0;
}
