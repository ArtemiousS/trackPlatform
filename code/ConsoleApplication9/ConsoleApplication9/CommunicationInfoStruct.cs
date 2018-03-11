//#if _COMMUNICATION_INFO_STRUCT_H_
//#define _COMMUNICATION_INFO_STRUCT_H_

using System;
/**
 * @brief Information to communicator. 
 * @attention You must fill info about required communication before send it to class constructor
 */
 namespace Application8
{ 

struct CommunicationInfoStruct
{
    struct SerialInfo
        {
        string rxPort;
        string txPort;
        UInt32 baudrate;
        }

	struct TCPIPInfo

    {
        string ip;
    Int16 port;
	} 
}
}
//#endif //* _COMMUNICATION_INFO_STRUCT_H_ */
