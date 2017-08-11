#pragma once
#include "ConnectingDevice.h"

class WiFi : public ConnectingDevice
{
public:
	WiFi(int rx, int tx, int speed);
	~WiFi();
	
	/**
	* �������� ������ ��������
	* ���������� �������� ���� String
	*/
	virtual String VersionCheck();
	
	/**
	* ������� ������ ��������� ������ � ������ ������ ����� ��� �����������
	* ���������� �������� ���� String
	*/
	virtual String NetsList();
	
	/**
	* ��������� ������� IP � MAC
	* ���������� �������� ���� String
	*/
	virtual String CheckIPandMAC();

	/**
	* �������� ������� �������� ������
	* ��������� ����� �������� ������ ������
	*/
	virtual void ChangeSpeed(int speed);
	
	/**
	* ������������� ������
	* ��������� ����� �������� ������ ������
	*/
	virtual void Reset(int speed);
	
	/**
	* ������ ��������� �������� ������
	*/
	virtual void Check();
	
	/**
	* ��������� ������ � ����� �������
	*/
	virtual void Close();
	
	/**
	* ��������� ������ � ����� ����� ��� TCP
	*/
	virtual void Open();
	
	/**
	* �������� TCP
	* ��������� ����� ����� ���� int
	*/
	virtual void UseTCP(int port);
	
	/**
	* ������������� ��������� ����� ��� ������ � ���
	* ��������� ��� ����� ������� ���� String, ������ ���� String � ����� ����� ���� int ��� ������ ������� UseTCP
	*/
	virtual void CurrentLog(String name, String password, int port);
	
	/**
	* ������������� ��������� ����� � ������� � ���
	* ��������� ��� ����� ������� ���� String, ������ ���� String � ����� ����� ���� int ��� ������ ������� UseTCP
	*/
	virtual void StaticLog(String name, String password, int port);

private:
	
	/**
	* ��������� ���������� ������ � ������
	*/
	bool ready = false;

	/**
	* ��������� ��������� ������ ������/����
	*/
	bool opened = false;
};