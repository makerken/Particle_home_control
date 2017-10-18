# Particle_home_control

This is under active development, any contributions or bug reports welcome.

This is a an example of single page app changing the color of the on board RGB LED  
It uses [jQuery](https://github.com/jquery/jquery) to make a POSTing simple.

## Used in the Particle code:
7 new lines, copy-paste the .ino into a new application in the Particle IDE  
[Particle Function](https://docs.particle.io/reference/firmware/photon/#particle-function-)  

The Adafruit library can use a 24bit number to control LED color.  
`uint32_t magenta = strip.Color(255, 0, 255);`  
to set a pixel color it only needs two arguments  
`strip.setPixelColor(n, magenta);`

Trying it, the Photon on board LED can be controlled the same 24-bit way.  
[Control the on board RGB LED](https://docs.particle.io/reference/firmware/photon/#rgb)  

So we can pass an int as a string and [`toInt()`](https://docs.particle.io/reference/firmware/photon/#long) will turn it into a signed long +/-2,147,483,647 which is larger than the 24-bit 16,777,215 we need.

Color accuracy is bad on the Photons. Controlling LED strip lights is much better.

## The web app
save the .html file and right-click > edit and you only have to enter your:
- Access Token (keep private)
- Device IDs (keep private)
- Room names

[Find your Access Token and Device ID](https://docs.particle.io/guide/getting-started/build/photon/#account-information)  
[Simple post function](https://api.jquery.com/jQuery.post/)  

I think there is a decent foundation where you could specify capabilities of your particle device and it would create the "page" with them.

### Future work
- [ ] particle variables
- [ ] control groups  
- [ ] control types
