// #include "Entity.hpp"

// // Initialzes member variables
// void Entity::initializeVariables() {
//   m_texture = nullptr;
//   m_sprite = nullptr;
// }

// // Constructor
// Entity::Entity() { initializeVariables(); }

// // Destructor
// Entity::~Entity() { delete m_sprite; }

// // Initializes sprite with parameter texture
// void Entity::createSprite(sf::Texture *texture) {
//   m_texture = texture;
//   m_sprite = new sf::Sprite(*m_texture);
// }

// // Places sprite somewhere on the screen
// void Entity::setPosition(const float x, const float y) {
//   // If a sprite exists, set the position to screen
//   if (m_sprite) {
//     m_sprite->setPosition({x, y});
//   }
// }

// // Places sprite where the mouse is at when dragging
// void Entity::setPosition(const sf::Vector2f &pos)
// {
//   // If a sprite exists, set the position to screen
//   if (m_sprite)
//   {
//     m_sprite->setPosition(pos);
//   }
// }

// void Entity::update(const float &deltaTime) {}

// // Draws sprites to screen
// void Entity::render(sf::RenderTarget *target) {
//   // If a sprite exists, draw the sprite to screen
//   if (m_sprite) {
//     target->draw(*m_sprite);
//   }
// }