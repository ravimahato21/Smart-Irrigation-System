**Smart Irrigation System**

**Overview**

This project is an automatic irrigation system built using Arduino and C++.

I built this project when I was in high school. I wanted to learn how sensors and microcontrollers can automate simple real world tasks.

The system monitors soil moisture and waters plants only when the soil becomes dry. Instead of watering on a fixed schedule, the system uses sensor data to decide when watering is needed.

**My Role**

I designed and built the system myself.
My work included:

- wiring the soil moisture sensor and relay module
- connecting the water pump to the system
- writing the Arduino control code
- testing moisture thresholds so the plant receives the right amount of water

This project helped me understand how hardware and software work together in embedded systems.

**Hardware Used**

- Arduino Uno
- Soil moisture sensor
- Water pump
- Single channel relay module
- Jumper wires
- External power supply

**Software**

**Programming language**

Arduino C++

**Development environment**

Arduino IDE

**How the System Works**

The soil moisture sensor measures how wet or dry the soil is.
The Arduino reads the sensor value continuously.
If the soil becomes too dry, the Arduino activates the relay.
The relay turns on the water pump and waters the plant.
When the soil becomes moist again, the Arduino turns the pump off.

This allows the plant to receive water only when it actually needs it.

**Key Features**

- automatic plant watering
- real time soil moisture monitoring
- relay controlled pump activation
- simple embedded automation system

**What I Learned**

Through this project I learned:

- how sensors collect real world data
- how Arduino can control physical systems
- how relays allow microcontrollers to operate external devices
- how simple logic can automate everyday tasks

**Future Improvements**

If I expand this project in the future, I would like to add:

- wireless monitoring for soil moisture
- data logging for plant growth analysis
- support for multiple plants and sensors
