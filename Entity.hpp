// #pragma once
// #include "Header.hpp"

// // Base class player and objects can inherit from
// class Entity {
// private:
//   void initializeVariables();

// protected:
//   // Member variables
//   sf::Texture *m_texture;
//   sf::Sprite *m_sprite;

// public:
//   // Constructor
//   Entity();
//   // Destructor
//   virtual ~Entity();

//   // Getter Functions
//   sf::Sprite &getSprite() { return *m_sprite; }
//   const sf::Sprite &getSprite() const {return *m_sprite;}

//   // Member Functions
//   void createSprite(sf::Texture *texture);

//   // Virtual Functions
//   virtual void setPosition(const float x, const float y);
//   virtual void setPosition(const sf::Vector2f& pos);
//   virtual void update(const float &deltaTime);
//   virtual void render(sf::RenderTarget *target);
// };
