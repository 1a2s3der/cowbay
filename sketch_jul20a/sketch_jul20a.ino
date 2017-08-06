int count;
String temp;
void setup() 
{
	Serial.begin(9600); 
	count = 0;
}
void loop()
{
	if (Serial.available()) 
	{
		temp = Serial.readString();
	
		Serial.print("-> Resive : ");
		Serial.print(temp);
		Serial.println("<-");
	}
}

