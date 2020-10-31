import hypermedia.video.*;          //  Imports the OpenCV library
import java.awt.Rectangle;
import ddf.minim.analysis.*;
import ddf.minim.*;

OpenCV opencv;                      //  Creates a new OpenCV object
Minim minim;
AudioInput in;
FFT fft;
int w;
PImage fade;
PImage movementImg;                 //  Creates a new PImage to hold the movement image
ArrayList bubbles;                  //  Creates an ArrayList to hold the Bubble objects
PImage bubblePNG;                   //  Creates a PImage that will hold the image of the bubble
int randPos;
PImage fishImg; 
PImage fishImg2; 
PImage fishImg3; 
PImage fishImg4; 
PImage fishImg5; 
PImage sharkImg; 
PImage clockImg;

PImage backImg;


int sharkX=480;
int sharkY=height/2; 
int sharkMoves = 480; 
int sharkSpeed=40;
int flagForShark=0; 

int flagForNotification=0;

ArrayList psystems;

int NotificationX = 10;
int NotificationY = 10;

//clock
int cx, cy;
float secondsRadius;
float minutesRadius;
float hoursRadius;
float clockDiameter;

void setup(){
    size ( 640, 480 );                      //  Window size of 640 x 480
    opencv = new OpenCV( this );            //  Initialises the OpenCV library
    opencv.capture( 640, 480 );             //  Sets the capture size to 640 x 480
    opencv.cascade( OpenCV.CASCADE_FRONTALFACE_ALT );    //// load the FRONTALFACE description file
    movementImg = new PImage(640, 480 );   //  Initialises the PImage that holds the movement image
    bubbles = new ArrayList();              //  Initialises the ArrayList
    bubblePNG = loadImage("bubble.png");    //  Load the bubble image into memory
    smooth();
    fishImg = loadImage("purpleFish.png");
  fishImg2 = loadImage("fish2.png");
  fishImg3 = loadImage("fish3.png"); 
  fishImg4 = loadImage("fish4.png");
  fishImg5 = loadImage("fish5.png");
  sharkImg = loadImage("shark.png");
  clockImg = loadImage("clock.png");

  backImg = loadImage("bg01.png");

  fill(61,36,9);        
  int radius = min(100, 100) / 2;
  secondsRadius = radius * 0.72;
  minutesRadius = radius * 0.60;
  hoursRadius = radius * 0.50;
  clockDiameter = radius * 1.8;

  cx = 50;
  cy = 50;

//Sound stuff
        minim = new Minim(this);
        in = minim.getLineIn(Minim.STEREO, 512);
        fft = new FFT(in.bufferSize(),in.sampleRate());
        fft.logAverages(60,7);

}
void youareloud(){
        fft.forward(in.mix);
        for(int i=0; i<fft.avgSize();i++){
          if(fft.getAvg(i) > 3){
            randPos = 160*(int)random(0, 5);
            bubbles.add(new Bubble( randPos+(int)random(-10, 10), 480, (int)random(10,25), (int)random(10,25)));   //  Adds a new bubble to the array with a random x position
          }  
        }
        for ( int i = 0; i < bubbles.size(); i++ ){    //  For every bubble in the bubbles array
        Bubble _bubble = (Bubble) bubbles.get(i);    //  Copies the current bubble into a temporary object
        if(_bubble.update() == 1){                  //  If the bubble's update function returns '1'
            bubbles.remove(i);                        //  then remove the bubble from the array
            _bubble = null;                           //  and make the temporary bubble object null
            i--;                                      //  since we've removed a bubble from the array, we need to subtract 1 from i, or we'll skip the next bubble
        }else{                                        //  If the bubble's update function doesn't return '1'
            bubbles.set(i, _bubble);                  //  Copys the updated temporary bubble object back into the array
            _bubble = null;                           //  Makes the temporary bubble object null.
        }
    }

}

void draw(){   
        opencv.read();                              //  Captures a frame from the camera    
          opencv.flip(OpenCV.FLIP_HORIZONTAL);        //  Flips the image horizontally
      //  background(loadImage("data/underwater_640x480_stretched.jpg"));//drwa detected environemtn
          background(backImg);
        faces();
        youareloud();
        extras();
}
class Bubble{
    int bubbleX, bubbleY, bubbleWidth, bubbleHeight;    //Some variables to hold information about the bubble
    int randSize = (int)random(10, 20);
        Bubble ( int bX, int bY, int bW, int bH ){           //The class constructor- sets the values when a new bubble object is made
        bubbleX = bX;
        bubbleY = bY;
        bubbleWidth = bW;
        bubbleHeight = bH;
    }
    int update(){      //The Bubble update function
        int movementAmount;          //Create and set a variable to hold the amount of white pixels detected in the area where the bubble is
        movementAmount = 0;
        for( int y = bubbleY; y < (bubbleY + (bubbleHeight-1)); y++ ){
            //For loop that cycles through all of the pixels in the area the bubble occupies
            for( int x = bubbleX; x < (bubbleX + (bubbleWidth-1)); x++ ){
                        if ( x < width && x > 0 && y < height && y > 0 ){
                    //If the current pixel is within the screen bondaries
                            if (brightness(movementImg.pixels[x + (y * width)]) > 127){
                              //and if the brightness is above 127 (in this case, if it is white)
                          movementAmount++;
                          //Add 1 to the movementAmount variable.
                            }
                        }
                    }
            }


        if (movementAmount > 5){               //  If more than 5 pixels of movement are detected in the bubble area
        //poppedBubbles++;                    //  Add 1 to the variable that holds the number of popped bubbles
        return 1;                           //  Return 1 so that the bubble object is destroyed
    } else {                                 //  If less than 5 pixels of movement are detected,
            //bubbleY += 10;                      //  increase the y position of the bubble so that it falls down
            bubbleY -= 10;                      //  increase the y position of the bubble so that it falls down
            if (bubbleY < 0){               //  If the bubble has dropped off of the bottom of the screen
                return 1;                       //  Return '1' so that the bubble object is destroyed
                }

                image(bubblePNG, bubbleX, bubbleY,randSize,randSize);    //  Draws the bubble to the screen
                return 0;                              //  Returns '0' so that the bubble isn't destroyed
    }

    }
} 

void faces(){
       Rectangle[] faces = opencv.detect();
       noFill();
       stroke(255,0,0);   
     opencv.absDiff();                           //  Creates a difference image

      opencv.convert(OpenCV.GRAY);                //  Converts to greyscale
      opencv.blur(OpenCV.BLUR, 3);                //  Blur to remove camera noise
      opencv.threshold(20);                       //  Thresholds to convert to black and white
      movementImg = opencv.image();               //  Puts the OpenCV buffer into an image object
        opencv.remember(OpenCV.SOURCE, OpenCV.FLIP_HORIZONTAL);    //  Remembers the camera image so we can generate a difference image next frame. Since we've

    for( int i=0; i<faces.length; i++ ) {

            //image( opencv.image(), faces[i].x, faces[i].y, faces[i].width, faces[i].height );  // display the image in memory on the right
             // opencv.loadImage( "/Users/sang/Desktop/home.png", );   // load image from file
          //   opencv.convert( GRAY );
           // opencv.ROI( faces[i].x, faces[i].y, faces[i].width, faces[i].height );
           // opencv.brightness( 80 );
           // opencv.contrast( 90 );
           if(i==0) 
           { image( fishImg,faces[i].x, faces[i].y, faces[i].width, faces[i].height); }   
           else if(i==1)
           { image( fishImg2,faces[i].x, faces[i].y, faces[i].width, faces[i].height); }
           else if(i==2)
          { image( fishImg3,faces[i].x, faces[i].y, faces[i].width, faces[i].height); }
           else if(i==3)
          { image( fishImg4,faces[i].x, faces[i].y, faces[i].width, faces[i].height); }
           else if(i==4)
          { image( fishImg5,faces[i].x, faces[i].y, faces[i].width, faces[i].height); }


           }
}
void extras(){
     if(keyPressed){   
            if (key == 's' || key == 'S'){ 
                flagForShark=1;
            } else if(key=='n' || key =='N'){
                flagForNotification=1;
            } else if(key=='x' || key =='x'){ 
                flagForNotification=0; 
            }  
      }


      if(flagForShark==1){ 
            // fill(255, 204, 255);
            // stroke(128, 0, 128);
            image( sharkImg,sharkMoves,sharkY);     
            //ellipse(candyX,candyY+candyMoves, 55, 55);
            //image(loadImage("/Users/sang/Desktop/candy.png"),candyX,candyY+candyMoves);
            if(sharkMoves>0){
              sharkMoves-=sharkSpeed; 
            } else {
              sharkMoves=480;
              flagForShark=0; 
            }
      }


      if(flagForNotification==1){ 
            image(sharkImg,NotificationX,NotificationY); 
      }

       //Clock 

      // Draw the clock background
      // fill(80);
      noStroke();
      // ellipse(cx, cy, clockDiameter, clockDiameter);
      image(clockImg,5,5,clockDiameter,clockDiameter);
      // Angles for sin() and cos() start at 3 o'clock;
      // subtract HALF_PI to make them start at the top
      float s = map(second(), 0, 60, 0, TWO_PI) - HALF_PI;
      float m = map(minute() + norm(second(), 0, 60), 0, 60, 0, TWO_PI) - HALF_PI; 
      float h = map(hour() + norm(minute(), 0, 60), 0, 24, 0, TWO_PI * 2) - HALF_PI;

      // Draw the hands of the clock
      stroke(61,36,9);
      strokeWeight(1);
      line(cx, cy, cx + cos(s) * secondsRadius, cy + sin(s) * secondsRadius);
      strokeWeight(2);
      line(cx, cy, cx + cos(m) * minutesRadius, cy + sin(m) * minutesRadius);
      strokeWeight(4);
      line(cx, cy, cx + cos(h) * hoursRadius, cy + sin(h) * hoursRadius);

      // Draw the minute ticks
     // strokeWeight(2);
     // beginShape(POINTS);
     // for (int a = 0; a < 360; a+=6) {
     // float x = cx + cos(radians(a)) * secondsRadius;
     // float y = cy + sin(radians(a)) * secondsRadius;
     // vertex(x, y);
     // }
      endShape();

       //end of clock    


}