int ldr1= A3;
int ldr2= A1;
int button =7;
int button_state= 0;
int last_button_state=0;
ldr1_reading=0;
ldr2_reading=0;
int people_number;


void setup()
{
  
  pinMode(ldr1, INPUT );
  pinMode(ldr2, INPUT );
  pinMode(button, INPUT );
  pinMode(3, OUTPUT); 
  Serial.begin(9600);
  
}

void loop()
{
button_state= digitalRead(button);
ldr1_reading= analogRead(ldr1);
ldr2_reading= analogRead(ldr2);
if (button_state==HIGH)
{
  
  if (ldr1_reading<300)
  {
   for(int i=0;i<5;i++)
   people_number++;
   if (people_number>5)
   tone (3,440*pow(2.,0(constrain(int(map(ldr1_reading,0,1023,36,84)),35,127)-57)/12.0)/1000; 
   
  } 
}



}
