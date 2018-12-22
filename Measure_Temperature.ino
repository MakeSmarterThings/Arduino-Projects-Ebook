
// Lesson 8 - Measuring Temperature

int analog_pin = 0; // Connect temp sensor output to analog pin 0
float counts; // Number of ADC counts
float max_count = 1024.0;  // Max ADC counts
float scale_factor = 10.0; // LM35 scale factor of 10mV per degree C
float temp_celsius;    // Temperature variable in celsius
float temp_fahrenheit; // Temperature variable in fahrenheit

void setup() 
{
  Serial.begin(9600);  // Initialize serial communication data rate to 9600 baud

void loop() 
{
  counts = analogRead(analog_pin); // Number of counts read by ADC
  temp_celsius = counts*(5.0/max_count)*(1000.0/1.0)*(1.0/scale_factor); // Equation to find temperature in degrees C
  temp_fahrenheit = (temp_celsius * 9.0 / 5.0) + 32.0; // Convert to fahrenheit
  
  Serial.print(temp_celsius); // Print temperature in celsius to screen
  Serial.println(" degrees C");
  
  Serial.print(temp_fahrenheit); 
  Serial.println(" degrees F"); // Print temperature in fahrenheit to screen
  delay(1000); // Refresh the screen with temperature value every second
}

