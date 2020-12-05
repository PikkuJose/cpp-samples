//Consumable is an abstract class
//This file contains definitions of it
//and all its sub-classes

#pragma once
#include <string>
#include <SFML/System/Vector2.hpp>
#include "items/item.hpp"

class Consumable : public Item {
public:
    Consumable(std::string& name, sf::Vector2<float> position) :
        Item(name, position) {}
    virtual ~Consumable() {};
    virtual ItemType getType() const = 0;
    virtual int getValue() const = 0;
	virtual void Draw() const = 0; //This will be SFML method that renders the item
private:
};

class Key : public Consumable{
public:
    Key(std::string& name, sf::Vector2<float> position);
    virtual ~Key() {};
    virtual ItemType getType() const;
	virtual void Draw() const; //This will be SFML method that renders the item
private:
};

//Potion is an abstract class
class Potion : public Consumable{
public:
    Potion(std::string& name, sf::Vector2<float> position) :
        Consumable(name, position) {}
    virtual ~Potion() {};
    virtual ItemType getType() const = 0;
    virtual int getValue() const = 0;
	virtual void Draw() const = 0; //This will be SFML method that renders the item
private:
};

class HealthPotion : public Potion{
public:
    HealthPotion(std::string& name, sf::Vector2<float> position);
    virtual ~HealthPotion() {};
    int getRestore() const;
    virtual ItemType getType() const;
    virtual int getValue() const;
	virtual void Draw() const; //This will be SFML method that renders the item
private:
    int restore_;
    const int RESTORE_START_VALUE = 50;
};

class ManaPotion : public Potion{
public:
    ManaPotion(std::string& name, sf::Vector2<float> position);
    virtual ~ManaPotion() {};
    int getRestore() const;
    virtual ItemType getType() const;
    virtual int getValue() const;
	virtual void Draw() const; //This will be SFML method that renders the item
private:
    int restore_;
    const int RESTORE_START_VALUE = 100;
};

