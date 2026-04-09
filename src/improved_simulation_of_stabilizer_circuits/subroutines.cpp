#include "subroutines.h"

namespace CliffordTableaus {
int g(const int x1, const int z1, const int x2, const int z2) {
  switch ((x1 << 1 | z1) & 0b11) {
  case 0b10:
    return z2 * (2 * x2 - 1);
  case 0b11:
    return z2 - x2;
  case 0b01:
    return x2 * (1 - 2 * z2);
  default:
    return 0;
  }
}

uint8_t random_bit() { return distribution(generator); }
} // namespace CliffordTableaus
