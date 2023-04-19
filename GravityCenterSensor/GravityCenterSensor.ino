/*
 Name:		GravityCenterSensor.ino
 Created:	2023/4/19 上午 11:15:41
 Author:	wei_an
*/

//https://www.youtube.com/watch?v=_RUZtsQzSLY&list=PL_i0cTCK_y-j5rLACIJ1QtrNvCDZPHAZT&index=8

/// <summary>
/// 
/// </summary>
const int SerialPort = 9600;
/// <summary>
/// 按鈕腳位
/// </summary>
const int ButtonPin[] = { 0,1 };

/// <summary>
/// 按鈕腳位陣列長度
/// </summary>
int ButtonPinArrayLength;

// the setup function runs once when you press reset or power the board
void setup() {
	ButtonPinArrayLength = sizeof(ButtonPin) / sizeof(ButtonPin[0]);

	Serial.begin(SerialPort);
}

// the loop function runs over and over again until power down or reset
void loop() {
	for (int a = 0;a < ButtonPinArrayLength;a++)
	{
		//Serial.println("Read : " +String( ButtonPin[a]));
		Serial.println("BT:" + String(a) + "|" + String(analogRead(ButtonPin[a])));
	}
}
