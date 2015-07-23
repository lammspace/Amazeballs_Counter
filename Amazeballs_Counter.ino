#include <cd4511.h>

CD4511 seg_one(2,3,4,5,true);
CD4511 seg_two(6,7,8,9,true);
CD4511 seg_three(10,11,12,13,true);

void setup() {
}

void loop() {
  for (int i = 0; i < 10; i++) { 
    seg_one.write(i);
    seg_two.write(i);
    seg_three.write(i);
    delay(1000);
  }
}
