#include "mood.h"
#include "pwngrid.h"

void initUi();
void wakeUp();
void drawMood(String face, String phrase, bool broken = false);
void drawBottomCanvas(uint8_t friends_run = 0, uint8_t friends_tot = 0,
                      String last_friend_name = "", signed int rssi = -1000);
void drawNearbyMenu();
void updateUi(bool show_toolbars = false);

