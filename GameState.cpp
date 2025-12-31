#include "GameState.hpp"
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Mouse.hpp>

// Initializes background rectangle shape
void GameState::initializeBackground() {
  // Sets background shape size equal to the window
  m_background.setSize(
      sf::Vector2f(m_window->getSize().x, m_window->getSize().y));

  // Checks if background texture is successfully loaded
  if (!m_backgroundTexture.loadFromFile(
          "/home/selyna-alonso/SFML_Backgrounds/gameStateBackground.png")) {
    std::cout << "Error::GameState:backgroundTexture: Failed to load "
                 "background texture\n";
  }
  // Sets background texture
  m_background.setTexture(&m_backgroundTexture);
}

// Initializes fonts
void GameState::initializeFonts() {
  // Checks if the font has been found
  if (!m_font.openFromFile("/home/selyna-alonso/SFML_Fonts/Roboto/static/"
                           "Roboto_Condensed-Regular.ttf")) {
    throw("Error::MainMenuState: font not found\n");
  }
}

// Initialize action boxes
// void GameState::initializeActionBoxes() {
//   // Creates action boxes using constructor in Button class
//   m_actionBoxes["TOP_BUN_INTERACTIVE_BOX"] =
//       new Button(90, 842, 160, 120, &m_font, "TOP BUN", sf::Color::Magenta,
//                  sf::Color::Red, sf::Color::Blue);
//   m_actionBoxes["BOTTOM_BUN_INTERACTIVE_BOX"] =
//       new Button(290, 842, 160, 120, &m_font, "BOT BUN", sf::Color::Magenta,
//                  sf::Color::Red, sf::Color::Blue);
//   m_actionBoxes["PATTY_INTERACTIVE_BOX"] =
//       new Button(500, 842, 160, 120, &m_font, "PATTY", sf::Color::Magenta,
//                  sf::Color::Red, sf::Color::Blue);
//   m_actionBoxes["TOMATO_INTERACTIVE_BOX"] =
//       new Button(700, 842, 160, 120, &m_font, "TOMATO", sf::Color::Magenta,
//                  sf::Color::Red, sf::Color::Blue);
//   m_actionBoxes["LETTUCE_BUN_INTERACTIVE_BOX"] =
//       new Button(1050, 842, 160, 120, &m_font, "LETTUCE", sf::Color::Magenta,
//                  sf::Color::Red, sf::Color::Blue);
//   m_actionBoxes["CHEESE_BUN_INTERACTIVE_BOX"] =
//       new Button(880, 842, 160, 120, &m_font, "CHEESE", sf::Color::Magenta,
//                  sf::Color::Red, sf::Color::Blue);
// }

// Initialzes textures used (entities)
// void GameState::initializeTextures() {
//   // Creates the texture for customer
//   sf::Texture customer;
//   if (!customer.loadFromFile("/home/selyna-alonso/SFML_Sprites/customer.png")) {
//     std::cout
//         << "Error::GameState:iniitTextures: Failed to load customer texture\n";
//   }
//   m_textures["CUSTOMER"] = customer;

//   // Creates the texture for hamburger ingredients
//   sf::Texture patty;
//   if (!patty.loadFromFile("/home/selyna-alonso/SFML_Sprites/patty.png")) {
//     std::cout
//         << "Error::GameState:iniitTextures: Failed to load patty texture\n";
//   }
//   m_textures["PATTY"] = patty;

//   // Creates the texture for hamburger ingredients
//   sf::Texture bunBottom;
//   if (!bunBottom.loadFromFile(
//           "/home/selyna-alonso/SFML_Sprites/bunBottom.png")) {
//     std::cout
//         << "Error::GameState:iniitTextures: Failed to bunBottom texture\n";
//   }
//   m_textures["BOTTOMBUN"] = bunBottom;

//   // Creates the texture for hamburger ingredients
//   sf::Texture bunTop;
//   if (!bunTop.loadFromFile("/home/selyna-alonso/SFML_Sprites/bunTop.png")) {
//     std::cout
//         << "Error::GameState:iniitTextures: Failed to load bunTop texture\n";
//   }
//   m_textures["TOPBUN"] = bunTop;

//   // Creates the texture for hamburger ingredients
//   sf::Texture tomato;
//   if (!tomato.loadFromFile("/home/selyna-alonso/SFML_Sprites/tomato.png")) {
//     std::cout
//         << "Error::GameState:iniitTextures: Failed to load tomato texture\n";
//   }
//   m_textures["TOMATO"] = tomato;

//   // Creates the texture for hamburger ingredients
//   sf::Texture lettuce;
//   if (!lettuce.loadFromFile("/home/selyna-alonso/SFML_Sprites/lettuce.png")) {
//     std::cout
//         << "Error::GameState:iniitTextures: Failed to load lettuce texture\n";
//   }
//   m_textures["LETTUCE"] = lettuce;

//   // Creates the texture for hamburger ingredients
//   sf::Texture cheese;
//   if (!cheese.loadFromFile("/home/selyna-alonso/SFML_Sprites/cheese.png")) {
//     std::cout
//         << "Error::GameState:iniitTextures: Failed to load cheese texture\n";
//   }
//   m_textures["CHEESE"] = cheese;

//   sf::Texture burger;
//   if (!burger.loadFromFile("/home/selyna-alonso/SFML_Sprites/burger.png")) {
//     std::cout
//         << "Error::GameState:iniitTextures: Failed to load burger texture\n";
//   }
//   m_textures["BURGER"] = burger;
// }

// Dynamically creates a new instance of customer
// void GameState::initializeCustomer() {
//   m_customer = new Customer(1350, 73, &m_textures["CUSTOMER"]);
// }

// Dynamically creates a new instance of hamburger ingredients
// void GameState::initializeIngredient() {
//   // Creates new instance of ingredient sprites if their action box is pressed
//   if (m_actionBoxes["TOP_BUN_INTERACTIVE_BOX"]->isPressed() &&
//       !m_hamburgerTopBun) {
//     m_hamburgerTopBun = new Ingredient(80, 800, &m_textures["TOPBUN"]);
//   }
//   if (m_actionBoxes["BOTTOM_BUN_INTERACTIVE_BOX"]->isPressed() &&
//       !m_hamburgerBottomBun) {
//     m_hamburgerBottomBun = new Ingredient(280, 700, &m_textures["BOTTOMBUN"]);
//   }
//   if (m_actionBoxes["PATTY_INTERACTIVE_BOX"]->isPressed() &&
//       !m_hamburgerPatty) {
//     m_hamburgerPatty = new Ingredient(485, 730, &m_textures["PATTY"]);
//   }
//   if (m_actionBoxes["TOMATO_INTERACTIVE_BOX"]->isPressed() &&
//       !m_hamburgerTomato) {
//     m_hamburgerTomato = new Ingredient(685, 750, &m_textures["TOMATO"]);
//   }
//   if (m_actionBoxes["LETTUCE_BUN_INTERACTIVE_BOX"]->isPressed() &&
//       !m_hamburgerLettuce) {
//     m_hamburgerLettuce = new Ingredient(1080, 750, &m_textures["LETTUCE"]);
//   }
//   if (m_actionBoxes["CHEESE_BUN_INTERACTIVE_BOX"]->isPressed() &&
//       !m_hamburgerCheese) {
//     m_hamburgerCheese = new Ingredient(850, 730, &m_textures["CHEESE"]);
//   }
//   if (!m_hamburger && ingredientAssembly()) {
//     // Creates instance of fully assembled hamburger
//     m_hamburger = new Ingredient(850, 730, &m_textures["BURGER"]);

//     // Hides ingredients
//     if (m_hamburgerPatty)
//     {
//       m_hamburgerPatty->setVisible(false);
//     }
//     if (m_hamburgerBottomBun) {
//       m_hamburgerBottomBun->setVisible(false);
//     }
//     if (m_hamburgerTopBun) {
//       m_hamburgerTopBun->setVisible(false);
//     }
//     if (m_hamburgerTomato) {
//       m_hamburgerTomato->setVisible(false);
//     }
//     if (m_hamburgerLettuce) {
//       m_hamburgerLettuce->setVisible(false);
//     }
//     if (m_hamburgerCheese) {
//       m_hamburgerCheese->setVisible(false);
//     }
//   }
// }

// Allows ingredients to be dragged and dropped by the mouse
// void GameState::updateIngredientDrag() {
//   // Stores all of our ingredients in a single vector
//   std::vector<Ingredient *> ingredients = {
//       m_hamburgerPatty,  m_hamburgerBottomBun, m_hamburgerTopBun,
//       m_hamburgerTomato, m_hamburgerLettuce,   m_hamburgerCheese,
//       m_hamburger,
//   };

//   // Gets the position of the mouse within the screen
//   sf::Vector2f mousePosition =
//       m_window->mapPixelToCoords(sf::Mouse::getPosition(*m_window));

//   // Checks if player has stopped holding left click: stops dragging if so
//   if (!sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
//     m_draggingIngredient = nullptr;
//   }
//   // Checks if dragging is being performed: moves the ingredient with the mouse
//   // if so
//   if (m_draggingIngredient) {
//     m_draggingIngredient->setPosition(mousePosition + m_dragOffset);
//     return;
//   }
//   // Check if player has clicked on an ingredient: drags ingredient if so
//   if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
//     // Iterates through the vector of ingredient sprites
//     for (auto *ingredient : ingredients) {
//       // If a sprite doesn't exist, exit loop
//       if (!ingredient || !ingredient->isVisible()) {
//         continue;
//       }
//       // Drags one ingredient at a time, applying the offset
//       if (ingredient->getSprite().getGlobalBounds().contains(mousePosition)) {
//         m_draggingIngredient = ingredient;
//         m_dragOffset = ingredient->getSprite().getPosition() - mousePosition;
//         break;
//       }
//     }
//   }
// }

// Allows hamburger to be dragged and dropped by the mouse
// void GameState::updateHamburgerDrag() {
//   if (!m_hamburger)
//     return;

//   // Get mouse position in world coordinates
//   sf::Vector2f mouseWorld =
//       m_window->mapPixelToCoords(sf::Mouse::getPosition(*m_window));

//   const sf::FloatRect burgerBounds = m_hamburger->getSprite().getGlobalBounds();

//   // Checks if mouse button is pressed: start drag if so
//   if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
//     if (!m_draggingHamburger && burgerBounds.contains(mouseWorld)) {
//       m_draggingHamburger = true;
//       m_dragOffset = m_hamburger->getSprite().getPosition() - mouseWorld;
//     }
//   }
//   // Checks if mouse button has been released: stop drag if so
//   else {
//     m_draggingHamburger = false;
//   }

//   // Checks if sprite is being dragged: follow themouse if so
//   if (m_draggingHamburger) {
//     m_hamburger->setPosition(mouseWorld + m_dragOffset);
//   }
// }

// Checks if all hamburger ingredient sprites are touching
// bool GameState::ingredientAssembly() {
//   // Checks if every sprite exists
//   if (!m_hamburgerPatty || !m_hamburgerBottomBun || !m_hamburgerTopBun ||
//       !m_hamburgerTomato || !m_hamburgerLettuce || !m_hamburgerCheese) {
//     return false;
//   }
//   // Uses the bottom bun sprite as a reference to check if there is a collision
//   // with other ingredient sprites
//   const sf::FloatRect reference =
//       m_hamburgerBottomBun->getSprite().getGlobalBounds();

//   if (!reference.findIntersection(
//           m_hamburgerPatty->getSprite().getGlobalBounds())) {
//     return false;
//   }
//   if (!reference.findIntersection(
//           m_hamburgerTopBun->getSprite().getGlobalBounds())) {
//     return false;
//   }
//   if (!reference.findIntersection(
//           m_hamburgerTomato->getSprite().getGlobalBounds())) {
//     return false;
//   }
//   if (!reference.findIntersection(
//           m_hamburgerLettuce->getSprite().getGlobalBounds())) {
//     return false;
//   }
//   if (!reference.findIntersection(
//           m_hamburgerCheese->getSprite().getGlobalBounds())) {
//     return false;
//   }

//   // Returns true if checks did not fail
//   return true;
// }

// Checks if player has given customer the food
// bool GameState::customerServed()
// {
//   // Check if hamburger sprite exists
//   if (!m_hamburger || !m_customer)
//   {
//     return false;
//   }
//   // Checks if either sprites are set to non-visible
//   if (!m_hamburger->isVisible() || !m_customer->isVisible())
//   {
//     return false;
//   }

//   // Uses the hamburger sprite as a reference to check if there is a collision
//   // with the customer
//   const sf::FloatRect reference = m_hamburger->getSprite().getGlobalBounds();
//   if (!reference.findIntersection(m_customer->getSprite().getGlobalBounds()))
//   {
//     return false;
//   }
//   return true;
// }

// Updates player input
void GameState::updateInput(const float &deltaTime) {
  // Exits game state
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) {
    endState();
  }
}

// Constructor
GameState::GameState(sf::RenderWindow *window, std::stack<State *> *states)
    : State(window, states) {
  initializeFonts();
  // initializeActionBoxes();
  initializeTextures();
  // initializeCustomer();
  initializeBackground();
}

// Deallocates dynamically allocated objects
GameState::~GameState() {
  // Iterates through the map of action boxes
  // auto iterator = m_actionBoxes.begin();
  // for (iterator = m_actionBoxes.begin(); iterator != m_actionBoxes.end();
  //      ++iterator) {
  //   delete iterator->second;
  // }
  // // Deallocates game objects
  // delete m_customer;
  // delete m_hamburgerPatty;
  // delete m_hamburgerBottomBun;
  // delete m_hamburgerTopBun;
  // delete m_hamburgerTomato;
  // delete m_hamburgerLettuce;
  // delete m_hamburgerCheese;
  // delete m_hamburger;
}

// Updates action boxes at their state and handles their specific
// functionalities
// void GameState::updateActionBoxes() {
//   for (auto &iterator : m_actionBoxes) {
//     iterator.second->update(mousePositionView);
//   }
// }

// Updates information
void GameState::update(const float &deltaTime) {
  updateMousePositions();
  updateInput(deltaTime);
  // updateActionBoxes();
  // initializeIngredient();
  // updateIngredientDrag();

//   if (!m_customerServed && customerServed())
//   {
//     m_customerServed = true;
//     m_customer->setVisible(false);
//     m_hamburger->setVisible(false);
//     std::cout << "Customer served!\n";
//   }

//   // Updates game objects
//   m_customer->update(deltaTime);

//   // Makes sure each pointer is not null
//   if (m_hamburgerPatty) {
//     m_hamburgerPatty->update(deltaTime);
//   }
//   if (m_hamburgerBottomBun) {
//     m_hamburgerBottomBun->update(deltaTime);
//   }
//   if (m_hamburgerTopBun) {
//     m_hamburgerTopBun->update(deltaTime);
//   }
//   if (m_hamburgerTomato) {
//     m_hamburgerTomato->update(deltaTime);
//   }
//   if (m_hamburgerLettuce) {
//     m_hamburgerLettuce->update(deltaTime);
//   }
//   if (m_hamburgerCheese) {
//     m_hamburgerCheese->update(deltaTime);
//   }
//   if (m_hamburger) {
//     updateHamburgerDrag();
//   }
// }

// Iterates through the map of action boxes, drawing occuring events
// void GameState::renderActionBoxes(sf::RenderTarget *target) {
//   for (auto &iterator : m_actionBoxes) {
//     iterator.second->render(target);
//   }
}

// Draws things to screen
void GameState::render(sf::RenderTarget *target)
{
  if (!target) {
    target = m_window;
  }
  // Render Background
  m_window->draw(m_background);

  // Render Hidden Interactive Boxes
  // renderActionBoxes(target);

  // Render Game Objects

  // Makes sure each pointer is not null before rendering
  //   if (m_hamburgerPatty) {
  //     m_hamburgerPatty->render(target);
  //   }
  //   if (m_hamburgerBottomBun) {
  //     m_hamburgerBottomBun->render(target);
  //   }
  //   if (m_hamburgerTopBun) {
  //     m_hamburgerTopBun->render(target);
  //   }
  //   if (m_hamburgerTomato) {
  //     m_hamburgerTomato->render(target);
  //   }
  //   if (m_hamburgerLettuce) {
  //     m_hamburgerLettuce->render(target);
  //   }
  //   if (m_hamburgerCheese) {
  //     m_hamburgerCheese->render(target);
  //   }
  //   if (m_hamburger) {
  //     m_hamburger->render(target);
  //   }

  //   // Render Customer
  //   m_customer->render(target);
}