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
<ul>
 <li>  Cell balancing is present but wasnt working in last revision</li>
 <li>  Same for the drain current measurment</li>
</ul>
  


Future goals:
<ul>
 <li>  Battery drain current measurment </li>
 <li>  Can bus logging implmentation</li>
 <li>  Switch to integrated MCU, either an STM or an RP </li>
 <li>  Fuel gauging</li>
 <li>  Charging control</li>
 <li>  Update the bms ic to a newer BQ79654</li>
 <li>  Add stackable funcionality</li>
</ul>
  
  
  



