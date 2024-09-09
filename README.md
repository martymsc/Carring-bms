# Carring-bms
Bms system for lithium based cells. Carring because it cares :D

The bms is based on an arduino leonardo board from Longan Labs (https://www.longan-labs.cc/1030008.html) and a battery monitor IC from Texas Instruments called BQ76PL455A.

Current revision:
 <ul>
  <li>  Battery cells voltage readout over serial</li>
  <li>  OV and UV protection with contactor control</li>
  <li>  Precharge circuit contorl</li>
  <li>  Isolation between contol MCU and battery  </li>
  <li>  Mcu supply is from the car, bms ic is powered by the battery </li>
 </ul> 
  
Problems:
  Cell balancing is present but wasnt working in last revision
  


Future goals:
  Can bus logging implmentation
  Switch to integrated MCU, either an STM or an RP
  Fuel gauging
  Charging control
  Update the bms ic to a newer BQ79654
  Add stackable funcionality
  
  
  



