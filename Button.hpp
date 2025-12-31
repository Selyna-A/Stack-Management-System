// #pragma once

// #include "Header.hpp"

// enum buttonStates { BUTTON_IDLE = 0, BUTTON_HOVER, BUTTON_ACTIVE };

// class Button {
// private:
//   short unsigned buttonState;

//   sf::RectangleShape m_shape;
//   sf::Font *m_font;
//   sf::Text m_text;

//   sf::Color m_idleColor;
//   sf::Color m_hoverColor;
//   sf::Color m_activeColor;

// protected:
// public:
//   // Constructor
//   Button(float x, float y, float width, float height, sf::Font *font,
//          std::string text, sf::Color idleColor, sf::Color hoverColor,
//          sf::Color activeColor);
//   // Destructor
//   ~Button() {}

//   // Getters
//   const bool isPressed() const;

//   // Member Functions
//   void update(const sf::Vector2f mousePosition);
//   void render(sf::RenderTarget *target);
// };
