﻿#include "../Constants.h"
#include "DebugSerial.h"

SoftwareSerial* DebugSerial::serial = DebugSerial::generateDbgSerial();

SoftwareSerial* DebugSerial::generateDbgSerial()
{
	SoftwareSerial* serialPtr = new SoftwareSerial(Constants::dbg_uart_RX, Constants::dbg_uart_TX);
	serialPtr->begin(Constants::dbg_uart_speed);
	serialPtr->listen();
	return serialPtr;
}

DebugSerial::DebugSerial(): ConnectingDevice(serial)
{
}

Stream* DebugSerial::getSerial()
{
	return serial;
}

void DebugSerial::send(String data)
{
	device->println(data);
}