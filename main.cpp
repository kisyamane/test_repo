#include <iostream>
#include <fstream>


#include "game_control/game.hpp"
#include "game_states/game_state_interface.hpp"
#include "game_states/enemy_state.hpp"
#include "game_states/player_state.hpp"


int main () {
    int height = 10;
    int width = 10;
    int count = 1;
    std::vector<int> sizes = {2};

    Game* game = new Game(width, height, count, sizes);
    IGameState* state = new PlayerState(*game);

    game->placeShip(0, 1, 1, Ship::ShipOrientation::Horizontal);

    game->start(state);

    /*game->move(1, 1, false);
    game->move(1, 1, false);

    game->saveGame("save.json");

    game->move(1, 1, false);
    game->move(1, 1, false);
    game->getPlayerField().showTEMP();
    game->getEnemyField().showTEMP();

    game->loadGame("save.json");
    
    game->getPlayerField().showTEMP();
    game->getEnemyField().showTEMP();*/

    game->move(1, 1, false);
    game->move(1, 1, false);

    game->getPlayerField().showTEMP();
    game->getEnemyField().showTEMP();

    game->move(1, 1, false);
    
    game->getPlayerField().showTEMP();
    game->getEnemyField().showTEMP();

    
    game->getPlayerManager().showSegmentsTEMP();

    delete state;
    delete game;

    return 0;
}