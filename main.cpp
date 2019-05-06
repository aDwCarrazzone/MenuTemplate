//!
//! @file       main.cpp
//! @author     Hasenfresser
//! @version    1.04
//! @date       2017-12-28
//!
//! @brief      Main file of the project. Just for testing purposes.
//!

#include "MenuTemplate/MenuTemplate.hpp"
#include <iostream>

using std::cout;
using std::endl;

//!
//! @brief  Main function of MenuTemplate.
//!
//! @return int
//!
int main() {
    // Example menu for a game:
    MenuTemplate::MenuTemplate MenuA;

    MenuA.Title = "\t\tNeverwinter Nights Simple Menu";
    MenuA.Description = "Choose with UP and DOWN, select with RETURN!";
    MenuA.setCursor("\xe2\x99\xa2", 1);
    MenuA.setCursorLength( MenuA.getCursor().length() );

	MenuA.addEntry("MENU_CURSOR", MenuA.getCursor());
    MenuA.addEntry("GAME_NEW", " New game");
    MenuA.addEntry("GAME_LOAD", " Load save state");
    MenuA.addEntry("GAME_EXIT", " Exit game");
    MenuA.addEntry("GAME_OPTIONS", " Game options");
    MenuA.addEntry("GAME_VIDEO_OPTIONS", " Game video options");
    MenuA.addEntry("GAME_SOUND_OPTIONS", " Game sound options");

    MenuA.swapEntries(2, "GAME_OPTIONS");

    MenuA.setCursorStartPosition(2);
    
    cout << "Chosen Option: " << MenuA.displayGetName() << " | Current Cursor Length: " << MenuA.getCursorLength() << endl;
}

