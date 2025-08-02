#include "tetris/manager.h"

int main(void) {
    Manager* manager = CreateManager(720, 1280);

    RunGame(manager);

    return 0;
}
