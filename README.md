# Carring-bms
Bms system for lithium based cells. Carring because it cares :D

The bms is based on an arduino leonardo board from Longan Labs (https://www.longan-labs.cc/1030008.html) and a battery monitor IC from Texas Instruments called BQ76PL455A.

Current revision:
  Battery cells voltage readout over serial
  OV and UV protection with contactor control
  Precharge circuit contorl
  Isolation between contol MCU and battery 
  Mcu supply is from the car, bms ic is powered by the battery 
  
Problems:
  Cell balancing is present but wasnt working in last revision
  


Future goals:
  Can bus logging implmentation
  Switch to integrated MCU, either an STM or an RP
  Fuel gauging
  Charging control
  Update the bms ic to a newer BQ79654
  Add stackable funcionality
  
  
  



