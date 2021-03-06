# openFrameworks 101

### [Slides](https://github.com/sleepy-maker/openFrameworks101/blob/master/openFrameworks101.pdf)

### Table of contents
### [Drawing basic shapes](https://github.com/sleepy-maker/openFrameworks101/tree/master/basicShapes)  
   * Rectangl  
   * Circle  
   * Triangle  
   * Line   
   * Vertex  
   [video](https://www.instagram.com/p/BVlAv8xBcxs/)
   
| Processing  | openFrameworks |
| ------------- | ------------- |
| rect()  | ofDrawRectangle()  |
| ellipse()  | ofDrawCircle()  |
| triangle()  | ofDrawTriangle()  |
| line()  | ofDrawLine()  |
| vertex()  | ofVertex()  |


### [Logging](https://github.com/sleepy-maker/openFrameworks101/tree/master/sampleSketch)  

| Processing  | openFrameworks |
| ------------- | ------------- |
| println("test")  | cout << "test" << endl |
|                  |printf("loading circle size %d", int(circleSize)); |

printf parameters(http://www.cplusplus.com/reference/cstdio/printf/)

### [Gui](https://github.com/sleepy-maker/openFrameworks101/tree/master/guisampleSketch)
For using Gui class, you need to include ofxGui.h on your ofApp.h like below.  
```cpp
#include "ofxGui.h"
```
  * Integer Slider
  * Float Slider
  * Color Slider
  * Toggle button
### [Arduino](https://github.com/sleepy-maker/openFrameworks101/tree/master/mySketch)  
   * Receive data from Arduino 
   This sample using a button and potentiometer.
   [video](https://www.instagram.com/p/BVk0V_xht9C/)
   

### [Simple Particle](https://github.com/sleepy-maker/openFrameworks101/tree/master/simpleParticle)
src structure
   * ofApp.cpp
   * ofApp.h
   * Particle.cpp
   * Particle.hpp

Here is my [other openFrameworks codes](https://github.com/sleepy-maker/30days-openframeworks)
