#pragma once

// #include "Button.hpp"
#include "GameState.hpp"

// Creates a main menu window and processes its necessities
class MainMenuState : public State {
private:
  // Member Variables
  sf::Texture m_backgroundTexture;
  sf::RectangleShape m_background;
  sf::Font m_font;
  // std::map<std::string, Button *> m_buttons;

  // Initialization Functions
  void initializeBackground();
  // void initializeFonts();
  // void initializeButtons();

public:
  // Constructor
  MainMenuState(sf::RenderWindow *window, std::stack<State *> *states);
  // Destructor
  virtual ~MainMenuState();

  // Member Functions
  // void updateButtons();
  void updateInput(const float &deltaTime);
  void update(const float &deltaTime);
  // void renderButtons(sf::RenderTarget *target = nullptr);
  void render(sf::RenderTarget *target = nullptr);
};
