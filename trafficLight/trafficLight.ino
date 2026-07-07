/*
4-Way Traffic Light Controller
Bit-Based + Bluetooth HC-05
Arduino Mega
*/

// ---------------- Timing (ms) ----------------
const unsigned long T_NS_GREEN  = 10000;
const unsigned long T_NS_YELLOW = 2000;
const unsigned long T_ALL_RED_1 = 1000;
const unsigned long T_EW_GREEN  = 10000;
const unsigned long T_EW_YELLOW = 2000;
const unsigned long T_ALL_RED_2 = 1000;

// ---------------- Pin Mapping ----------------
const int pins[12] = {
  22, 23, 24,   // North R Y G
  3, 4, 5,   // South R Y G
  28, 29, 30,   // East  R Y G
  31, 32, 33    // West  R Y G
};

bool manualMode = false;

// ---------------- Write AX Port ----------------
void writePort(unsigned int axValue) {
  for (int i = 0; i < 12; i++) {
    digitalWrite(pins[i], (axValue >> i) & 1 ? HIGH : LOW);
  }
}

// ---------------- Bluetooth Command Handler ----------------
void handleCommand(String cmd) {
  cmd.toLowerCase();
  manualMode = true;

  // ---------- ALL ----------
  if (cmd.indexOf("close") >= 0) {
    writePort(0x249);   // All Red
  }
  else if (cmd.indexOf("automatic") >= 0) {
    //writePort(0x924);   // All Green
    while(true){
      writePort(0x264); delay(T_NS_GREEN);   // NS Green
  writePort(0x252); delay(T_NS_YELLOW);  // NS Yellow
  writePort(0x249); delay(T_ALL_RED_1);  // All Red
  writePort(0x909); delay(T_EW_GREEN);   // EW Green
  writePort(0x489); delay(T_EW_YELLOW);  // EW Yellow
  writePort(0x249); delay(T_ALL_RED_2);  // All Red
  }
  }
  


}

// ---------------- Arduino Setup ----------------
void setup() {
  for (int i = 0; i < 12; i++) {
    pinMode(pins[i], OUTPUT);
  }

  Serial.begin(9600);

}

// ---------------- Main Loop ----------------
void loop() {

  // ---------- Bluetooth ----------
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    Serial.println(command);
    handleCommand(command);
  }

  if (manualMode) return;

  // ---------- Automatic Traffic Cycle ----------

}