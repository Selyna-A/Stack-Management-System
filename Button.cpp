// #include "Button.hpp"
// #include <SFML/Window/Mouse.hpp>

// Button::Button(float x, float y, float width, float height, sf::Font *font,
//                std::string text, sf::Color idleColor, sf::Color hoverColor,
//                sf::Color activeColor)
//     : m_font(font), m_text(*font) {
//   // Initialzes the state of our button
//   buttonState = BUTTON_IDLE;

//   // Initializes rectangle shape (button)
//   m_shape.setPosition(sf::Vector2f(x, y));
//   m_shape.setSize(sf::Vector2f(width, height));
//   // Initializes text
//   m_text.setString(text);
//   m_text.setStyle(sf::Text::Bold);
//   m_text.setFillColor(sf::Color::White);
//   m_text.setCharacterSize(20);
//   // Positions text to in center of the button
//   m_text.setPosition(
//       {m_shape.getPosition().x + (m_shape.getGlobalBounds().size.x) / 2.f -
//            m_text.getGlobalBounds().size.x / 2.f,
//        m_shape.getPosition().y + (m_shape.getGlobalBounds().size.y) / 2.f -
//            m_text.getGlobalBounds().size.y / 2.f});

//   // Initializes each color indications
//   m_idleColor = idleColor;
//   m_hoverColor = hoverColor;
//   m_activeColor = activeColor;

//   // Gives the button a color
//   m_shape.setFillColor(idleColor);
// }

// // Update the booleans for button states
// void Button::update(const sf::Vector2f mousePosition) {
//   // Set the button to idle state by default
//   buttonState = BUTTON_IDLE;

//   // If the mouse is hovering over the button
//   if (m_shape.getGlobalBounds().contains(mousePosition)) {
//     // Set button state to button hover
//     buttonState = BUTTON_HOVER;
//     // If the mouse has pressed the button
//     if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
//       // Set button state to button pressed
//       buttonState = BUTTON_ACTIVE;
//     }
//   }

//   // Changes color of the button depending on the button state
//   switch (buttonState) {
//   case BUTTON_IDLE:
//     m_shape.setFillColor(m_idleColor);
//     break;
//   case BUTTON_HOVER:
//     m_shape.setFillColor(m_hoverColor);
//     break;
//   case BUTTON_ACTIVE:
//     m_shape.setFillColor(m_activeColor);
//     break;
//   default:
//     break;
//   }
// }

// // Returns true if the button has been pressed
// const bool Button::isPressed() const {
//   if (buttonState == BUTTON_ACTIVE) {
//     return true;
//   }
//   return false;
// }

// // Draws the button box and text
// void Button::render(sf::RenderTarget *target) {
//   target->draw(m_shape);
//   target->draw(m_text);
// }
