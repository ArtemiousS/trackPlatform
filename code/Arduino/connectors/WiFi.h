#pragma once
#include "ConnectingDevice.h"

class WiFi : public ConnectingDevice
{
public:
	explicit WiFi(unsigned long speed);
	~WiFi();
	
	/**
	* @brief ������� ��������� ������� � ������������ �� ������ ���������
	*/
	virtual bool ReturningCommandsOff();

	/**
	* @brief �������� ������ ��������
	* @return ��� ���������� � ������ �������� ������
	*/
	virtual String VersionCheck();
	
	/**
	* @brief ������� ������ ��������� ������ � ������ ������ ����� ��� �����������
	* @return ������ �� ������� ���� ��������� �����
	*/
	virtual String NetsList();
	
	/**
	* @brief ��������� ������� IP � MAC
	* @return ������ � �������� IP � MAC
	*/
	virtual String CheckIPandMAC();

	/**
	* @brief �������� ������� �������� ������
	* @param speed �������� ������ ������
	*/
	virtual bool ChangeSpeed(unsigned long speed);
	
	/**
	* @brief ������������� ������
	* @return ���������� ������ � ������
	*/
	virtual bool Reset();

	/**
	* @brief ������������� ������
	* @param speed �������� ������ ������
	* @return ���������� ������ � ������
	*/
	virtual bool Reset(unsigned long speed);
	
	/**
	* @brief ������ �������� �� ���������� ��������� �������
	* @return ������� ���������
	*/
	virtual bool CheckOnAnswer();

	/**
	* @brief ������ ��������� �������� ������
	* @return ���������� ������ � ������
	*/
	virtual bool CheckOnReady();
	
	/**
	* @brief ��������� ������ � ����� �������
	*/
	virtual bool Close();
	
	/**
	* @brief ��������� ������ � ����� ����� ��� TCP
	*/
	virtual bool Open();
	
	/**
	* @brief �������� TCP
	* @param ��������� ����� �����
	*/
	virtual bool UseTCP(int port);
	
	/**
	* @brief ������������� ��������� ����� ��� ������ � ���
	* @param name ��� ����� �������, password ������ � port ����� ����� ��� ������ ������� UseTCP
	*/
	virtual bool CreateCurrentHost(String name, String password, int port);
	
	/**
	* @brief ������������� ��������� ����� � ������� � ���
	* @param name ��� ����� �������, password ������ � port ����� ����� ��� ������ ������� UseTCP
	*/
	virtual bool CreateStaticHost(String name, String password, int port);

	/**
	* @brief ������� ��������, ����������� "\r\n" �� ���� �������� ��� �������� ������� ������
	*/
	virtual void StartingSend(String command);
	
	/**
	* @brief ������� ��������, ����������� "\r\n" �� ���� �������� � ����������� ������ ������
	*/
	virtual void Send(String command);

	/**
	* @brief ������� ����� ������ � ������, ����������� �������� ����� ���������� ������
	*/
	virtual String Scan();

	/**
	* @brief ����������� ������������ ������
	* @return ��������������� �����
	*/
	virtual String ReturnInfo();

	/**
	* @brief ������� ������ ��� ����������� ������
	*/
	virtual void FatalError();

	/**
	* @brief ������� �������� ������ ������������
	*/
	virtual String Write(String message);

	/**
	* @brief ������� ����� ������ �� ������������
	*/
	virtual String Read();

	/**
	* @brief ������� ������ ��� ����������� ������
	*/
	virtual String CheckStatus();

	/**
	* @brief ��������� ���������� ������������� ������
	*/
	bool isInited = false;

private:

	/**
	* @brief ��������� ���������� ������ � ������
	*/
	bool ready = false;

	/**
	* @brief ��������� ��������� ������ ������/����
	*/
	bool opened = false;
};