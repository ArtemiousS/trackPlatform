//#if _BAD_ADDRESS_OR_PORT_EXCEPTION_H_
//#define _BAD_ADDRESS_OR_PORT_EXCEPTION_H_
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication8
{

    class BadAddressOrPortException : public TrackPlatformException
{
	public explicit BadAddressOrPortException(int errorCode) : TrackPlatformException(std::to_string(errorCode))
	{
	}

}

//#endif // _BAD_ADDRESS_OR_PORT_EXCEPTION_H_ */
