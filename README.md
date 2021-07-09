
## Design for a simple elevator control system  

 - The building consists of four floors plus the ground floor,   Each
   floor has two buttons to call the elevator, one for going up and  
   another for going down except in the ground and last floor that
   requires   one button only.  
   
 - The elevator door waits for 5 seconds before closing the door, while 
   the   door is open, the elevator is taking request and don’t ignore  
   any of them   but it doesn’t move until the door is closed.

 - If the number of persons inside the elevator exceeds (chosen number),
   the   door won’t close and the elevator won’t move, but again, it’s  
   still taking   requests, saving them and don’t ignore any. It’s just 
   waiting to move and   will go pick those requests.

 - To count the number of people in the elevator, we used two LDRs or   
   two IR   sensors (same logic for both) and the two sensors are   
   counting the people   going in or out. The two sensors are connected 
   to the two external   interrupt pins (INT0 and INT1). There’s third  
   LDR to Detect if something is blocking the door

 - The elevator stops only for going-up requests while it’s going up   
   (doesn’t   stop for the going-down request) and if it’s going down,  
   it only stops for the   going-down requests. However, it doesn’t   
   ignore the other requests, the   elevator returns back to take them  
   after completing its going-up or going-down requests.

 - Stepper motor is used to move the elevator. Each floor is at a   
   specific angle   and according to the move or the request, the motor 
   moves to this angle   and Floor Number is displayed on 7-segment.
   
 - The logic of the design is illustrated in the next figure. We can see
   the   building structure, the elevator components of, how these   
   components are   related, and how the elevator moves and handles   
   requests.
