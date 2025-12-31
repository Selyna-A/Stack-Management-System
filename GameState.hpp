#pragma once

#include "Entity.hpp"
// #include "Customer.hpp"
// #include "Ingredients.hpp"
#include "State.hpp"
// #include "Button.hpp"

class GameState : public State {
private:
  // Member Variables
  sf::Texture m_backgroundTexture;
  sf::RectangleShape m_background;
  sf::Font m_font;
  // sf::Vector2f m_dragOffset;

  // Hidden Interactive Box
  sf::RectangleShape m_shape;
  // std::map<std::string, Button *> m_actionBoxes;

  // Game Objects
  // Customer *m_customer;

  // Ingredient *m_hamburgerPatty = nullptr;
  // Ingredient *m_hamburgerBottomBun = nullptr;
  // Ingredient *m_hamburgerTopBun = nullptr;
  // Ingredient *m_hamburgerTomato = nullptr;
  // Ingredient *m_hamburgerLettuce = nullptr;
  // Ingredient *m_hamburgerCheese = nullptr;
  // Ingredient *m_draggingIngredient = nullptr;
  // Ingredient *m_hamburger = nullptr;

  // Initialization Functions
  void initializeBackground();
  void initializeFonts();
  // void initializeActionBoxes();
  void initializeTextures();
  // void initializeCustomer();
  // void initializeIngredient();
  // void updateIngredientDrag();
  // void updateHamburgerDrag();

  // Boolean Check Function/Variables
  // bool m_draggingHamburger = false;
  // bool m_customerServed = false;
  // bool ingredientAssembly();
  // bool customerServed();

public:
  // Constructor
  GameState(sf::RenderWindow *window, std::stack<State *> *states);

  // Destructor
  virtual ~GameState();

  // Member Functions
  // void updateActionBoxes();
  void updateInput(const float &deltaTime);
  void update(const float &deltaTime);
  // void renderActionBoxes(sf::RenderTarget *target = nullptr);
  void render(sf::RenderTarget *target = nullptr);
};
