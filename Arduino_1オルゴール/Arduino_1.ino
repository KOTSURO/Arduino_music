const int loudspeaker_pin = 13;
const int base_time = 16 * 80; // 16の倍数が都合がいい

void setup() {
  pinMode( loudspeaker_pin, OUTPUT);
}


void loop() {
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  tone(loudspeaker_pin, 294);
  delay(base_time / 8);
  tone(loudspeaker_pin, 330);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 330);
  delay(base_time / 8);
  tone(loudspeaker_pin, 294);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 330);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 440);
  delay(base_time / 8);
  tone(loudspeaker_pin, 392);
  delay(base_time / 8);
  tone(loudspeaker_pin, 349);
  delay(base_time / 8);
  tone(loudspeaker_pin, 330);
  delay(base_time / 8);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 4);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 16);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 16);
  tone(loudspeaker_pin, 294);
  delay(base_time / 16);
  tone(loudspeaker_pin, 294);
  delay(base_time / 16);
  tone(loudspeaker_pin, 330);
  delay(base_time / 16);
  tone(loudspeaker_pin, 330);
  delay(base_time / 16);
  tone(loudspeaker_pin, 349);
  delay(base_time / 16);
  tone(loudspeaker_pin, 349);
  delay(base_time / 16);
  tone(loudspeaker_pin, 330);
  delay(base_time / 8);
  tone(loudspeaker_pin, 294);
  delay(base_time / 8);
  tone(loudspeaker_pin, 262);
  delay(base_time / 8);
  noTone(loudspeaker_pin);
  delay(base_time / 8);
  noTone(loudspeaker_pin);
  delay(base_time / 8);


}
