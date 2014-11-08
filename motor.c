
/*
*
* Motor Wrappers
* functions: move_preset, move
*
*/


void move_preset(int preset)
{
 
        switch(preset)
        {
 
        case 1:
 
                // move right
                motor[leftMotor]=100;
                motor[rightMotor]=-100;
 
                break;
 
        case 2:
 
                // move left
                motor[leftMotor]=-100;
                motor[rightMotor]=100;
 
                break;
 
        case 3:
 
                // full power forwards
                motor[leftMotor]=100;
                motor[rightMotor]=100;
 
                break;
 
        case 4:
 
                // full power backwards
                motor[leftMotor]=-100;
                motor[rightMotor]=-100;
 
                break;
 
        case 5:
 
                // full stop
                motor[leftMotor]= 0;
                motor[rightMotor]= 0;
 
                break;
 
        }
 
 
}
 

void move(int left, int right) {

        motor[leftMotor]=left;
        motor[rightMotor]=right;

}
