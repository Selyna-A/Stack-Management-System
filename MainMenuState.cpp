#include "MainMenuState.hpp"

// Initializes background rectangle shape
void MainMenuState::initializeBackground() {
  // Sets background shape size equal to the window
  m_background.setSize(
      sf::Vector2f(m_window->getSize().x, m_window->getSize().y));

  // Checks if background texture is successfully loaded
  if (!m_backgroundTexture.loadFromFile(
          "/home/selyna-alonso/SFML_Backgrounds/mainMenuBackground.png")) {
    std::cout << "Error::MainMenuState: Failed to load background texture\n";
  }
  // Sets background texture
  m_background.setTexture(&m_backgroundTexture);
}

// Initializes fonts
// void MainMenuState::initializeFonts() {
//   // Checks if the font has been found
//   if (!m_font.openFromFile("/home/selyna-alonso/SFML_Fonts/Roboto/static/"
//                            "Roboto_Condensed-Regular.ttf")) {
//     throw("Error::MainMenuState: font not found\n");
//   }
// }

// Initialize buttons
// void MainMenuState::initializeButtons() {
//   // Creates buttons using constructor in Button class
//   m_buttons["GAME_STATE_BUTTON"] =
//       new Button(600, 740, 250, 80, &m_font, "New Game", sf::Color::Magenta,
//                  sf::Color::Red, sf::Color::Blue);
//   m_buttons["EXIT_STATE_BUTTON"] =
//       new Button(1100, 740, 250, 80, &m_font, "Exit Game", sf::Color::Magenta,
//                  sf::Color::Red, sf::Color::Blue);
// }

// Constructor
MainMenuState::MainMenuState(sf::RenderWindow *window,
                             std::stack<State *> *states)
    : State(window, states) {
  // Initiazes background
  initializeBackground();
  // Initializes fonts
  // initializeFonts();
  // Initializes buttons
  // initializeButtons();
}

// Deallocates dynamically allocated buttons
MainMenuState::~MainMenuState() {
  // Iterates through the map of buttons
  // auto iterator = m_buttons.begin();
  // for (iterator = m_buttons.begin(); iterator != m_buttons.end(); ++iterator) {
  //   delete iterator->second;
  // }
}

// Updates buttons at their state and handles their specific functionalities
// void MainMenuState::updateButtons() {
//   for (auto &iterator : m_buttons) {
//     iterator.second->update(mousePositionView);
//   }

//   // Transitions to GameState window if "New Game" button is pressed
//   if (m_buttons["GAME_STATE_BUTTON"]->isPressed()) {
//     m_states->push(new GameState(m_window, m_states));
//   }

//   // Quits the program if "Exit Game" button is pressed
//   if (m_buttons["EXIT_STATE_BUTTON"]->isPressed()) {
//     endState();
//   }
// }

void MainMenuState::updateInput(const float &deltaTime) {}

// Updates events we want to happen
void MainMenuState::update(const float &deltaTime) {
  updateMousePositions();
  updateInput(deltaTime);
  // updateButtons();
}

// Iterates through the map of buttons, drawing occuring events
// void MainMenuState::renderButtons(sf::RenderTarget *target) {
  // for (auto &iterator : m_buttons) {
  //   iterator.second->render(target);
  // }
// }

// Draws background and buttons
void MainMenuState::render(sf::RenderTarget *target) {
  if (!target) {
    target = m_window;
  }

  target->draw(m_background);
  // renderButtons(target);
}