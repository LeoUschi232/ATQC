#include "improved_simulation_of_stabilizer_circuits/improved_stabilizer_tableau.h"
#include "stabilizer_circuit.h"

#include "gtest/gtest.h"
#include <exception>
#include <iostream>
#include <string>
#include <string_view>

using StabilizerCircuit = CliffordTableaus::StabilizerCircuit;
using ImprovedStabilizerTableau = CliffordTableaus::ImprovedStabilizerTableau;

TEST(StabilizerCircuitTest, Bernstein16NoError) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "bernstein_16.qasm";
  const std::string_view expected = "1111111111111111";

  try {
    const std::string actual = StabilizerCircuit::executeCircuit(
        std::string(filename), stabilizerTableau);
    if (actual != expected) {
      std::cout << "Bernstein 16 failed." << std::endl;
      std::cout << "Expected: " << expected << std::endl
                << "  Actual: " << actual << std::endl;
      FAIL();
    }
  } catch (const std::exception &e) {
    std::cout << "The following circuits failed: " << filename << std::endl;
    std::cout << "Circuit " << filename << " threw exception: " << e.what()
              << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, RandomCircuit1NoError) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "random_circuit_1.qasm";
  const std::string_view expected = "000|010|001|011";

  try {
    constexpr auto nr_shots = 500;
    for (int shot = 1; shot <= nr_shots; ++shot) {
      if (const std::string actual = StabilizerCircuit::executeCircuit(
              std::string(filename), stabilizerTableau);
          expected.find(actual) == std::string_view::npos) {
        std::cout << "Random 1 failed on shot: " << shot << std::endl;
        std::cout << "Expected: " << expected << std::endl
                  << "  Actual: " << actual << std::endl;
        FAIL();
      }
    }
  } catch (const std::exception &e) {
    std::cout << "The following circuits failed: " << filename << std::endl;
    std::cout << "Circuit " << filename << " threw exception: " << e.what()
              << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, RandomCircuit2NoError) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "random_circuit_2.qasm";
  const std::string_view expected = "00110|01100|10011|11001";

  try {
    constexpr auto nr_shots = 500;
    for (int shot = 1; shot <= nr_shots; ++shot) {
      if (const std::string actual = StabilizerCircuit::executeCircuit(
              std::string(filename), stabilizerTableau);
          expected.find(actual) == std::string_view::npos) {
        std::cout << "Random 2 failed on shot: " << shot << std::endl;
        std::cout << "Expected: " << expected << std::endl
                  << "  Actual: " << actual << std::endl;
        FAIL();
      }
    }
  } catch (const std::exception &e) {
    std::cout << "The following circuits failed: " << filename << std::endl;
    std::cout << "Circuit " << filename << " threw exception: " << e.what()
              << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, RandomCircuit3NoError) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "random_circuit_3.qasm";

  try {
    StabilizerCircuit::executeCircuit(std::string(filename), stabilizerTableau);
  } catch (const std::exception &e) {
    std::cout << "The following circuits failed: " << filename << std::endl;
    std::cout << "Circuit " << filename << " threw exception: " << e.what()
              << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, TestCircuit1Output) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "test_circuit_1.qasm";
  const std::string_view expected = "11010";

  try {
    const std::string actual = StabilizerCircuit::executeCircuit(
        std::string(filename), stabilizerTableau);
    if (actual != expected) {
      std::cout << "Test 1 failed." << std::endl;
      std::cout << "Expected: " << expected << std::endl
                << "  Actual: " << actual << std::endl;
      FAIL();
    }
  } catch (const std::exception &e) {
    std::cout << "Test 1 threw exception: " << e.what() << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, TestCircuit2Output) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "test_circuit_2.qasm";
  const std::string_view expected =
      "00000|00001|00110|00111|11000|11001|11110|11111";

  try {
    constexpr auto nr_shots = 500;
    for (int shot = 1; shot <= nr_shots; ++shot) {
      if (const std::string actual = StabilizerCircuit::executeCircuit(
              std::string(filename), stabilizerTableau);
          expected.find(actual) == std::string_view::npos) {
        std::cout << "Test 2 failed on shot: " << shot << std::endl;
        std::cout << "Expected: " << expected << std::endl
                  << "  Actual: " << actual << std::endl;
        FAIL();
      }
    }
  } catch (const std::exception &e) {
    std::cout << "Test 2 threw exception: " << e.what() << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, TestCircuit3Output) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "test_circuit_3.qasm";
  const std::string_view expected =
      "0000000000|0000011111|1111100000|1111111111";

  try {
    constexpr auto nr_shots = 500;
    for (int shot = 1; shot <= nr_shots; ++shot) {
      if (const std::string actual = StabilizerCircuit::executeCircuit(
              std::string(filename), stabilizerTableau);
          expected.find(actual) == std::string_view::npos) {
        std::cout << "Test 3 failed on shot: " << shot << std::endl;
        std::cout << "Expected: " << expected << std::endl
                  << "  Actual: " << actual << std::endl;
        FAIL();
      }
    }
  } catch (const std::exception &e) {
    std::cout << "Test 3 threw exception: " << e.what() << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, TestCircuit4Output) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "test_circuit_4.qasm";

  try {
    StabilizerCircuit::executeCircuit(std::string(filename), stabilizerTableau);
  } catch (const std::exception &e) {
    std::cout << "Test 4 threw exception: " << e.what() << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, TestCircuit5Output) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "test_circuit_5.qasm";
  const std::string_view expected = "011";

  try {
    const std::string actual = StabilizerCircuit::executeCircuit(
        std::string(filename), stabilizerTableau);
    if (actual != expected) {
      std::cout << "Test 5 failed." << std::endl;
      std::cout << "Expected: " << expected << std::endl
                << "  Actual: " << actual << std::endl;
      FAIL();
    }
  } catch (const std::exception &e) {
    std::cout << "Test 5 threw exception: " << e.what() << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, TestCircuit6Output) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "test_circuit_6.qasm";

  try {
    StabilizerCircuit::executeCircuit(std::string(filename), stabilizerTableau);
  } catch (const std::exception &e) {
    std::cout << "Test 6 threw exception: " << e.what() << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, TestCircuit7Output) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "test_circuit_7.qasm";
  const std::string_view expected = "****00**";

  try {
    constexpr auto nr_shots = 500;
    for (int shot = 1; shot <= nr_shots; ++shot) {
      if (const std::string actual = StabilizerCircuit::executeCircuit(
              std::string(filename), stabilizerTableau);
          actual[4] != expected[4] && actual[5] != expected[5]) {
        std::cout << "Test 7 failed on shot: " << shot << std::endl;
        std::cout << "Expected: " << expected << std::endl
                  << "  Actual: " << actual << std::endl;
        FAIL();
      }
    }
  } catch (const std::exception &e) {
    std::cout << "Test 7 threw exception: " << e.what() << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, TestCircuit8Output) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "test_circuit_8.qasm";

  try {
    StabilizerCircuit::executeCircuit(std::string(filename), stabilizerTableau);
  } catch (const std::exception &e) {
    std::cout << "Test 8 threw exception: " << e.what() << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, TestCircuit9Output) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "test_circuit_9.qasm";
  const std::string_view expected = "0000|1000|0100|1100|0011|1011|0111|1111";

  try {
    constexpr auto nr_shots = 500;
    for (int shot = 1; shot <= nr_shots; ++shot) {
      if (const std::string actual = StabilizerCircuit::executeCircuit(
              std::string(filename), stabilizerTableau);
          expected.find(actual) == std::string_view::npos) {
        std::cout << "Test 9 failed on shot: " << shot << std::endl;
        std::cout << "Expected: " << expected << std::endl
                  << "  Actual: " << actual << std::endl;
        FAIL();
      }
    }
  } catch (const std::exception &e) {
    std::cout << "Test 9 threw exception: " << e.what() << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, TestCircuit10Output) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "test_circuit_10.qasm";
  const std::string_view expected = "0000|1000|0100|1100|0011|1011|0111|1111";

  try {
    constexpr auto nr_shots = 500;
    for (int shot = 1; shot <= nr_shots; ++shot) {
      if (const std::string actual = StabilizerCircuit::executeCircuit(
              std::string(filename), stabilizerTableau);
          expected.find(actual) == std::string_view::npos) {
        std::cout << "Test 10 failed on shot: " << shot << std::endl;
        std::cout << "Expected: " << expected << std::endl
                  << "  Actual: " << actual << std::endl;
        FAIL();
      }
    }
  } catch (const std::exception &e) {
    std::cout << "Test 10 threw exception: " << e.what() << std::endl;
    FAIL();
  }
}

TEST(StabilizerCircuitTest, TestCircuit11Output) {
  auto stabilizerTableau = ImprovedStabilizerTableau();
  const std::string_view filename = "test_circuit_11.qasm";
  const std::string_view expected = "0000|1000|0100|1100|0010|1010|0110|1110";

  try {
    constexpr auto nr_shots = 500;
    for (int shot = 1; shot <= nr_shots; ++shot) {
      if (const std::string actual = StabilizerCircuit::executeCircuit(
              std::string(filename), stabilizerTableau);
          expected.find(actual) == std::string_view::npos) {
        std::cout << "Test 11 failed on shot: " << shot << std::endl;
        std::cout << "Expected: " << expected << std::endl
                  << "  Actual: " << actual << std::endl;
        FAIL();
      }
    }
  } catch (const std::exception &e) {
    std::cout << "Test 11 threw exception: " << e.what() << std::endl;
    FAIL();
  }
}