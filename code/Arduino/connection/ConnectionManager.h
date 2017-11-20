﻿#pragma once
#include <Arduino.h>
#include <FastCRC.h>

#include "../connection/IConnector.h"
#include "../utils/Timer.h"
#include "../config/Constants.h"

enum ConnectionStatus
{
	not_connected,
	try_connect,
	connected
};

class ConnectionManager
{
	static ConnectionManager* manager;
	ConnectionManager();
	ConnectionManager(ConnectionManager &);
	~ConnectionManager();

	const int connectors_num = 2;
	IConnector** connectors = nullptr;
	IConnector* current_connector = nullptr;
	FastCRC16 crc_calculator;
	const int crc_length = sizeof (uint16_t);

	Timer timer = Timer(Constants::wait_command_time_in_ms);
	ConnectionStatus connection_status = not_connected;

	String convert_pointer_to_string(const void* ptr, int size);
	bool is_message_is_command(String message);
	void wait_for_connection();
	String get_data_from_wrapper(String message);

public:
	static ConnectionManager* get_manager();

	String read_command();
	void write_answer(String answer);

	//Command handlers
	bool is_connected() const;
	void set_current_connection();
	void reset_current_connection();
	void reset_timer();
};
