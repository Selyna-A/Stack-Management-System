#include "Game.hpp"
#include "State.hpp"

// Initializes Member Variables
void Game::m_initializeVariables() {
  m_window = nullptr;
  deltaTime = 0.f;
}

// Initializes an SFML window
void Game::m_initializeWindow() {
  m_window =
      new sf::RenderWindow(sf::VideoMode({1920, 1080}), "Food Truck Sim");
  m_window->setFramerateLimit(144);
  m_window->setVerticalSyncEnabled(false);
}

// Adds the state pointer to our list and initializes it
void Game::m_initializeStates() {
  m_states.push(new MainMenuState(m_window, &m_states));
}

// Constructor
Game::Game() {
  m_initializeWindow();
  m_initializeStates();
}

// Destructor
Game::~Game() {
  delete m_window;

  while (!m_states.empty()) {
    // Deallocates the data this state pointer is holding
    delete m_states.top();
    // Removes the state pointer from our stack
    m_states.pop();
  }
  std::cout << "Ending Application!\n";
}

// Calculates deltatime as seconds
void Game::updateDeltaTime() {
  // Tracks how long it takes to do one update call and one render call
  // (framerate)
  deltaTime = deltaTimeClock.restart().asSeconds();
}

// Processes events
void Game::updateSFMLEvents() {
  // Processes whatever we want to do while the window open is open
  while (const std::optional event = m_window->pollEvent()) {
    // Exits program if window has been closed
    if (event->is<sf::Event::Closed>()) {
      m_window->close();
    }
  }
}

// Helper function
void Game::update() {
  // Naviagtes to this function to proccess events
  updateSFMLEvents();

  // Updates the top of the game state stack
  if (!m_states.empty()) {
    m_states.top()->update(deltaTime);

    // Checks if user wants to quit
    if (m_states.top()->getQuit()) {
      m_states.top()->endState();
      delete m_states.top();
      m_states.pop();
    }
  } else {
    m_window->close();
  }
}

// Helper function
void Game::render() {
  // Navigates to these functions to render new objects once
  m_window->clear();

  // Renders the top of the game state stack
  if (!m_states.empty()) {
    m_states.top()->render();
  }

  m_window->display();
}

// Calls functions that help run the game
void Game::run() {
  while (m_window->isOpen()) {
    updateDeltaTime();
    update();
    render();
  }
}