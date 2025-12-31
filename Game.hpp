#pragma once
#include "MainMenuState.hpp"

// Creates the window and its context
class Game {
private:
  // Member Variables
  sf::RenderWindow *m_window;

  sf::Clock deltaTimeClock;
  float deltaTime;

  std::stack<State *> m_states;

  // Initialization Member Functions
  void m_initializeVariables();
  void m_initializeWindow();
  void m_initializeStates();

public:
  // Constructor
  Game();
  // Destructor
  virtual ~Game();

  // Updates
  void updateDeltaTime();
  void updateSFMLEvents();
  void update();

  // Renders
  void render();

  // Runs Game
  void run();
};
