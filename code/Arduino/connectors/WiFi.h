#pragma once
#include "ConnectingDevice.h"

class WiFi : public ConnectingDevice
{
	/**
	 * @brief Block for double initialization
	 */
	static bool isInited;

public:
	explicit WiFi(unsigned long speed);
	~WiFi();
	
	/**
	* @brief �������� ������ ��������
	* @return ���������� �������� ���� String
	*/
	virtual String VersionCheck();
	
	/**
	* @brief ������� ������ ��������� ������ � ������ ������ ����� ��� �����������
	* @���������� �������� ���� String
	*/
	virtual String NetsList();
	
	/**
	* @brief ��������� ������� IP � MAC
	* @���������� �������� ���� String
	*/
	virtual String CheckIPandMAC();

	/**
	* @�������� ������� �������� ������
	* @param speed �������� ������ ������
	��. ������ ������ ��, ��� ��� ���������� ������, ��-����� ������������. �� ������ ���������, ��� ��� �� ������� ����� ���� ��� ��� �� ������
	*/
	virtual void ChangeSpeed(unsigned long speed);
	
	/**
	* ������������� ������
	* ���������� ������ �� �������� ���� String
	*/
	virtual bool Reset();

	/**
	* ������������� ������
	* ��������� ����� �������� ������ ������
	* ���������� ������ �� �������� ���� String
	*/
	virtual bool Reset(unsigned long speed);
	
	/**
	* ������ ��������� �������� ������
	* ���������� ���������� �� �������� ���� bool
	*/
	virtual bool Check();
	
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
	virtual void CreateCurrentHost(String name, String password, int port);
	
	/**
	* ������������� ��������� ����� � ������� � ���
	* ��������� ��� ����� ������� ���� String, ������ ���� String � ����� ����� ���� int ��� ������ ������� UseTCP
	*/
	virtual void CreateStaticHost(String name, String password, int port);

	void send(String command) override;

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