#include "State.hpp"

// Parameterizerd Constructor
State::State(sf::RenderWindow *window, std::stack<State *> *states) {
  // Initializes member variables
  m_window = window;
  m_quit = false;
  m_states = states;
}

// Sets quit boolean to true
void State::endState() { m_quit = true; }

// Keeps track of the position of the mouse
void State::updateMousePositions() {
  mousePositionScreen = sf::Mouse::getPosition();
  mousePostionWindow = sf::Mouse::getPosition(*m_window);
  // Maps a pixel on the window to coordinates
  mousePositionView =
      m_window->mapPixelToCoords(sf::Mouse::getPosition(*m_window));
  // std::cout << mousePositionView.x << " " << mousePositionView.y << "\n";
}
