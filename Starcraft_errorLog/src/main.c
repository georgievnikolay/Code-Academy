#include <stdio.h>
#include <stdlib.h>

#include "BattleField.h"
#include "statusLog.h"

int main() {
  logFileOpen();//<---
  
  const int buffSize = 50;
  char terranFleet[buffSize];
  char protossFleet[buffSize];
  scanf("%s %s", terranFleet, protossFleet);

  BattleField battleField;
  generateTerranFleet(&battleField, terranFleet);
  LOG_ERROR(statusLogFile); //<<----

  generateProtossFleet(&battleField, protossFleet);
  LOG_ERROR(statusLogFile); //<<----

  startBattle(&battleField);
  
  deinit(&battleField);
  LOG_ERROR(statusLogFile); //<<----

  logFileClose();//<<---
  return EXIT_SUCCESS;
}