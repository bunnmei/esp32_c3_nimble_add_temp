#include "common.h"
#include "been_temp.h"

static uint8_t temp;

uint8_t get_been_temp(void) {
  return temp;
}

void update_been_temp(void) {
  temp = (uint8_t)(esp_random() % 21);
}
