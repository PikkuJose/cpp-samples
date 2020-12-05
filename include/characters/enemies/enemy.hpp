#pragma once
#include "characters/character.hpp"

class Enemy : public Character {


    public:

        Enemy(std::string& name, sf::Vector2<float> position, int hp, int damage) // sf::Vector2<float> = sf::Vector2f
            : Character(name, position, hp, damage, 0, CharacterType::CHARACTER_TYPE_ENEMY) {}
        


        CharacterType getType() const;


    private:

};
