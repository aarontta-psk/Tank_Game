#include "Bullet.h"
#include <iostream>

Bullet::Bullet() : GameObject() {
}

Bullet::~Bullet() {
        std::cout << "Bala Borrada\n";
}