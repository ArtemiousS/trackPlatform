//#define _LOGGER_H_
//#if _LOGGER_H_

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace ConsoleApplication8
{

/**
 * @brief If defined, log is on, else off
 */
#if LOGGER_ON
    class Logger
{
    public static void log(string s);
};

#else
class Logger
{
    static Logger logger;

    const string way = "logger.log";
        FileStream file;

    Logger();
    void logOneString(string s);

    
	public static void log(string s);
};
#endif
}
//#endif //* _LOGGER_H_ */
