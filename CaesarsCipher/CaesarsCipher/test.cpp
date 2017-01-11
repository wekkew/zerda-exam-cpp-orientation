#define TEST

#ifdef TEST

#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.h"
#include "CaesarsCipher.h"

TEST_CASE("ciper has all \"his\" member") {
  CaesarsCipher ciper;
  ciper.handler;
  ciper.manager;
  ciper.coder;
  system("pause");
}



#endif // TEST