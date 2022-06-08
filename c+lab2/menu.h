#ifndef MENU_H
#define MENU_H

#include "vectorR3.h"

class Menu {
public:
    Menu();
    static void selectMenuItem(Menu settings);

private:
    int type;
};

#endif
