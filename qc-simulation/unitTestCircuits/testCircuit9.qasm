OPENQASM 3;
qreg q[6];
h q[0];
h q[1];
h q[2];
h q[3];
h q[4];
h q[5];
ccx q[0], q[1], q[5];
ccy q[2], q[3], q[4];
ccz q[1], q[2], q[3];
cct q[3], q[4], q[5];
ccs q[0], q[2], q[4];
cch q[1], q[3], q[5];
