#pragma once
#include "Header.hpp"

// Abstract base class other derived state classes can inherit from
// Keeps all the resources the state of the game needs
class State {
protected:
  // Member Variables
  std::stack<State *> *m_states;
  sf::RenderWindow *m_window;
  std::map<std::string, sf::Texture> m_textures;
  bool m_quit;

  // Tracks the (x,y) coordinates of the mouse
  sf::Vector2i mousePositionScreen;
  sf::Vector2i mousePostionWindow;
  sf::Vector2f mousePositionView;

public:
  // Parameterizerd Constructor
  State(sf::RenderWindow *window, std::stack<State *> *states);
  // Destructor
  virtual ~State() {};

  // Functions
  const bool &getQuit() const { return m_quit; }

  // Virtual Functions
  virtual void updateMousePositions();
  virtual void endState();

  // Pure Virtual Functions
  virtual void updateInput(const float &deltaTime) = 0;
  virtual void update(const float &deltaTime) = 0;
  virtual void render(sf::RenderTarget *target = nullptr) = 0;
};
