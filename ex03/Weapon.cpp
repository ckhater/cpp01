#include"Weapon.hpp"

Weapon::Weapon(std::string str){
type = str;
}

Weapon::~Weapon(){
}

const std::string& Weapon::getType(void)const{
    return(type);
}

void Weapon::setType(std::string str){
    type = str;
}