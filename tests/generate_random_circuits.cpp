#include "improved_simulation_of_stabilizer_circuits/improved_stabilizer_tableau.h"
#include "stabilizer_circuit.h"

#include "gtest/gtest.h"
#include <string>

using StabilizerCircuit = CliffordTableaus::StabilizerCircuit;

TEST(StabilizerCircuitTest, GenerateRandomCircuit4) {
  StabilizerCircuit::createRandomStabilizerCircuit(
      "random_circuit_4.qasm", 25, 500, 0, 0, false, true, true);
}

TEST(StabilizerCircuitTest, GenerateRandomCircuit5) {
  StabilizerCircuit::createRandomStabilizerCircuit(
      "random_circuit_5.qasm", 50, 1000, 0, 0, false, true, true);
}

TEST(StabilizerCircuitTest, GenerateRandomCircuit6) {
  StabilizerCircuit::createRandomStabilizerCircuit(
      "random_circuit_6.qasm", 100, 2500, 0, 0, false, true, true);
}

TEST(StabilizerCircuitTest, GenerateRandomCircuit7) {
  StabilizerCircuit::createRandomStabilizerCircuit(
      "random_circuit_7.qasm", 25, 500, 10, 10, true, false, true);
}

TEST(StabilizerCircuitTest, GenerateRandomCircuit8) {
  StabilizerCircuit::createRandomStabilizerCircuit(
      "random_circuit_8.qasm", 50, 1000, 10, 10, true, false, true);
}

TEST(StabilizerCircuitTest, GenerateRandomCircuit9) {
  StabilizerCircuit::createRandomStabilizerCircuit(
      "random_circuit_9.qasm", 100, 2500, 10, 10, true, false, true);
}
