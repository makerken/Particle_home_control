// ------------------------------------
// control multiple room light colours
// ------------------------------------

#define RGBCONTROLTIME 3000

void setup() {

    Particle.function("rgb", ledrgb);

}

void loop() {

}

int ledrgb( String value ) {

    RGB.control(true);

    RGB.color( value.toInt() );

    delay(RGBCONTROLTIME);

    RGB.control(false);

    return 1;

}
