# Ray's Fianl Project 🥰
This PDF have everything you need: <br>
https://github.com/RayWangRui/Advanced-Visualisation-and-Computational-Environments-Fianl-Project/blob/main/Ray-Final%20Project.pdf<br>
But you can also read this README~~~
<br>Here is the Video Link 🔗: https://youtu.be/mNP35t5Jog8

![画板 1222-20](https://user-images.githubusercontent.com/91971211/174525040-1459e63a-71be-45b2-bdc5-99138cbd6ba1.jpg)

Inspired by I Ching, an ancient Chinese philosophical document, the artwork explores the conservation between everything in the world. Motion and stillness permeates objects from virtual world to physical world. Stillness can be seen as a dynamic change as well. 

In the experience, audiences can interact with the virtual character by body movement. The virtual and physical environment will react audiences’ motion by wind. The balance borns within the virtual space, the physical space, audiences and character.
<br>

# work content:
I was mainly responsible for creative design, <br>
arduino circuit production and code, <br>
the blueprint of connecting ureal to arduino, <br>
and participating in the development of visual style of unreal model.<br>
ALL CODE: https://github.com/RayWangRui/Advanced-Visualisation-and-Computational-Environments-Fianl-Project
![画板 1 副本mm-20](https://user-images.githubusercontent.com/91971211/174525086-b990f9ce-b448-4611-aff3-d78038232dfe.jpg)
<br>
# Inspirations

![画板 1 副本 2-20](https://user-images.githubusercontent.com/91971211/174525160-0d73ad7e-ef36-49bb-9b6a-e3b8ba21e223.jpg)
<br>
The starting point is to make a very "cool" device, so I hope that the work is not limited to the ureal game engine.<br>
We also need to add some physical somatosensory devices, so that the audience can experience the work immersively. <br>
Therefore, I put forward the concept of building a virtual scene and a real scene, that is, the visual content in the unreal engine is consistent with the real physical scene. <br>
Thus, the scene is constructed to restore the augmented reality experience.After the group discussion, our concept was "fog" at the beginning, so we wanted to use the smoke simulator at the beginning to make the fog circulate from the screen and the real world. <br>
<br>However, due to the limitations of venues. We changed fog into wind, but wind cannot be visualized directly, so the visual form of wind I designed is "silk". We select Organza as our main cloth, and use a blower to blow it to form the visual effect of wind.
<br>

# Interaction design:
![画板 1 副本 3-20](https://user-images.githubusercontent.com/91971211/174525697-26bda91d-4f4c-47c0-8f2c-00963aa3fc3e.jpg)
The design of the concept of "balance" is reflected in the details of interaction:<br>
The experience design process of the device: the user enters the gauze array in the real world, then, the Kinect infrared detection area; 
Kinect detects the user's bone structure and transmits the data to the unreal engine. <br>The unreal virtual world is projected on the wall, so the user can see himself in the virtual world when he walks into the detection area. 
At this time, the "self" of the virtual world and the real world will be entangled by silk. Users move forward, while people in the virtual world will move backward; Users walk backward, while people in the virtual world walk forward; They always keep a constant distance.<br> 
Mapping the balance between the virtual world and the real world. The more the user moves forward, the faster the Arduino controls the fan to rotate. The user retreats, and the fan speed slows to 0, thereby controlling the amplitude of silk flutter in the real world.

# Visual Design
![画板 1 副本 4-20](https://user-images.githubusercontent.com/91971211/174526278-3823f650-74e6-412d-bbb5-a63860ca00a7.jpg)
Based on the feeling of the whole interaction, we hope that this immersive feeling is simple and clear, so we hope that the color is simple and clear. We use the color of "Tai Chi eight trigrams array". Because "Tai Chi" also has the concept of balance in Chinese culture, we choose the color: black and white. My team members complete the establishment of unreal scene model.

# Coding part: Aduino and UE4 Blueprint
![画板 1 副本 5-20](https://user-images.githubusercontent.com/91971211/174526591-2f30ecf2-c9b7-4b21-9337-704f758d3ea2.jpg)
Arduino controls the rotation speed of the fan. The implementation of this step requires serial (). because the data is received from the movement of people. The data is detected by Kinect. The data detected by Kinect is input into the unreal game engine (other members of the team are responsible for the kinect part). Find the data receiving port in unreal blue print, and then connect it to the input port of aduino.
In the test phase, I need to combine the data from the team member who responsible for Kinect connection to test whether the code is running in advance. I use LEDs to test instead of fans to ensure the feasibility of the code.

# Final
![画板 1 副本 6-20](https://user-images.githubusercontent.com/91971211/174527015-172f98b7-f547-4627-8193-12859ed4433f.jpg)<br>
![画板 1 副本 7-20](https://user-images.githubusercontent.com/91971211/174527021-d87af707-6c84-491d-8f89-a01c4b2e2886.jpg)


