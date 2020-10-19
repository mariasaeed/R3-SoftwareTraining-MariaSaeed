# R3-SoftwareTraining-MariaSaeed

##Creating the Circuit

The first step in creating the circuit was placing the components. I used two DC motors, one L293d motor driver, one potentiometer, one dip switch, and one 9-V battery. These components were combined using the arduino and a breadboard. I first connected the negative terminal of the 9-V battery to the ground pins of the motor driver, which I then connected to the ground terminal in the arduino. Next I connected the positive terminal of the 9-V battery to power 2 on the motor driver. Then, I connected enable 1&2, power 1, and enable 3&4 to the 5-V terminal on the arduino. I connecteded DC motor-A to output 1 and 2; and DC motor-B to output 3 and 4. Finally I connected inputs 1,2,3, and 4 to digital pins 3,5,6,and 9 respectfully on the arduino.

The next step in creating the circuit was connecting the potentiometer. I did this by connecting terminal one to the 5-V terminal on the arduino and terminal two to Ground. Finally, I connected the wiper to Analog A0 on the arduino.

The last step in creating the circuit was connecting the dip switch to the arduino. This was done by connecting one side of the switch to ground, and connecting the switch to digital pins 2,7,8, and 12.

![image](https://user-images.githubusercontent.com/65428267/96393682-e1208d80-118d-11eb-83c5-c51a9d6eaee4.png)
Figure 1: This is a picture of the circuit before being programmed.

##Programming the Arduino

The arduino was programmed to run the circuit 'forwards', 'backwards', 'left', 'right', and 'stop'. To program the arduino I first had to understand what the switches were responsible for. For example, when switch 1 is HIGH, input 1 is LOW, and so on. 

The circuit runs forwards, when both motor A and motor B are running forwards. This is accomplished when switch 1 and switch 3 are LOW and switch 2 and switch 4 are HIGH. The circuit was then programmed to run backwardsm; this occures when both motors are running backwards, which is when switch 1 and switch 3 are HIGH and switch 2 and switch 4 are LOW. Next the circuit was programmed to go left, which is when motor A is forwards and motor B is backwards; this is represented when switch 1 and switch 4 are HIGH switch 2 and switch 3 are Low. The circuit was also programmed to go right, which is when motor A is backwards and motor B is forwards; this is represented when switch 1 and switch 4 are LOW switch 2 and switch 3 are HIGH. Finally, the circuit is stopped when the value of all 4 switches are the same.
