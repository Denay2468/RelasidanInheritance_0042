#include <iostream>
#include <string>
using namespace std;
#include "heart.h"
#include "human.h"

int main()
{
    human* varHuman = new human("Markus");
    delete varHuman;

    return 0;
}